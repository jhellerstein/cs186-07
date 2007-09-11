/*-------------------------------------------------------------------------
 *
 * freelist.c
 *	  routines for manipulating the buffer pool's replacement strategy.
 *
 * The name "freelist.c" is now a bit of a misnomer, since this module
 * controls not only the list of free buffers per se, but the entire
 * mechanism for looking up existing shared buffers and the strategy
 * for choosing replacement victims when needed.
 *
 * Note: all routines in this file assume that the BufMgrLock is held
 * by the caller, so no synchronization is needed.
 *
 *
 * Portions Copyright (c) 1996-2005, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL: pgsql/src/backend/storage/buffer/freelist.c,v 1.49.4.2 2005/03/03 16:47:43 tgl Exp $
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include <time.h>

#include "access/xact.h"
#include "storage/buf_internals.h"
#include "storage/bufmgr.h"


/*
 * Definitions for the buffer replacement strategy
 */
#define STRAT_LIST_UNUSED	(-1)
#define STRAT_LIST_T1		0	/* TA Comment: Two lists, in case you
								   want to use them. */
#define STRAT_LIST_B1		1	
#define STRAT_NUM_LISTS		2

/*
 * We have a cache directory block (CDB) for every file page currently being
 * tracked by the strategy module.  There can be more CDBs than there are
 * actual shared buffers, allowing pages no longer in cache to still be
 * tracked.
 */
typedef struct
{
	int		prev;		/* list links */
	int		next;
	short		list;		/* ID of list it is currently in */
	bool		t1_vacuum;	/* t => present only because of VACUUM */
	TransactionId   t1_xid;		/* the xid this entry went onto T1 */
	BufferTag	buf_tag;	/* page identifier */
	int		buf_id;		/* currently assigned data buffer, or -1 */
} BufferStrategyCDB;

/*
 * The shared strategy control information.
 */
typedef struct
{
	int	listUnusedCDB;			/* All unused StrategyCDB */
	int	listHead[STRAT_NUM_LISTS];	/* CDB lists */
	int	listTail[STRAT_NUM_LISTS];
	int	listSize[STRAT_NUM_LISTS];
	Buffer	listFreeBuffers;		/* List of unused buffers */

	long	num_lookup;			/* Some hit statistics */
	long	num_hit[STRAT_NUM_LISTS];
	time_t	stat_report;

	/* Array of CDB's starts here */
	BufferStrategyCDB cdb[1];	/* VARIABLE SIZE ARRAY */
} BufferStrategyControl;

/* GUC variable: time in seconds between statistics reports */
int DebugSharedBuffers = 0;

/* Pointers to shared state */
static BufferStrategyControl *StrategyControl = NULL;
static BufferStrategyCDB     *StrategyCDB     = NULL;

/* Backend-local state about whether currently vacuuming */
static bool          strategy_hint_vacuum = false;
static TransactionId strategy_vacuum_xid;


#define B1_LENGTH (StrategyControl->listSize[STRAT_LIST_B1])
#define T1_LENGTH (StrategyControl->listSize[STRAT_LIST_T1])


/*
 * Macro to remove a CDB from whichever list it currently is on
 */
#define STRAT_LIST_REMOVE(cdb) \
do { \
	Assert((cdb)->list >= 0 && (cdb)->list < STRAT_NUM_LISTS);	\
	if ((cdb)->prev < 0)						\
		StrategyControl->listHead[(cdb)->list] = (cdb)->next;	\
	else								\
		StrategyCDB[(cdb)->prev].next = (cdb)->next;		\
	if ((cdb)->next < 0)						\
		StrategyControl->listTail[(cdb)->list] = (cdb)->prev;	\
	else								\
		StrategyCDB[(cdb)->next].prev = (cdb)->prev;		\
	StrategyControl->listSize[(cdb)->list]--;			\
	(cdb)->list = STRAT_LIST_UNUSED;				\
} while(0)

/*
 * Macro to add a CDB to the tail of a list (MRU position)
 */
#define STRAT_MRU_INSERT(cdb,l) \
do { \
	Assert((cdb)->list == STRAT_LIST_UNUSED);			\
	if (StrategyControl->listTail[(l)] < 0)				\
	{								\
		(cdb)->prev = (cdb)->next = -1;				\
		StrategyControl->listHead[(l)] =			\
			StrategyControl->listTail[(l)] =		\
			((cdb) - StrategyCDB);				\
	}								\
	else								\
	{								\
		(cdb)->next = -1;					\
		(cdb)->prev = StrategyControl->listTail[(l)];		\
		StrategyCDB[StrategyControl->listTail[(l)]].next =	\
			((cdb) - StrategyCDB);				\
		StrategyControl->listTail[(l)] =			\
			((cdb) - StrategyCDB);				\
	}								\
	StrategyControl->listSize[(l)]++;				\
	(cdb)->list = (l);						\
} while(0)

/*
 * Macro to add a CDB to the head of a list (LRU position)
 */
#define STRAT_LRU_INSERT(cdb,l) \
do { \
	Assert((cdb)->list == STRAT_LIST_UNUSED);			\
	if (StrategyControl->listHead[(l)] < 0)				\
	{								\
		(cdb)->prev = (cdb)->next = -1;				\
		StrategyControl->listHead[(l)] =			\
			StrategyControl->listTail[(l)] =		\
			((cdb) - StrategyCDB);				\
	}								\
	else								\
	{								\
		(cdb)->prev = -1;					\
		(cdb)->next = StrategyControl->listHead[(l)];		\
		StrategyCDB[StrategyControl->listHead[(l)]].prev =	\
			((cdb) - StrategyCDB);				\
		StrategyControl->listHead[(l)] =			\
			((cdb) - StrategyCDB);				\
	}								\
	StrategyControl->listSize[(l)]++;				\
	(cdb)->list = (l);						\
} while(0)


/*
 * Printout for use when DebugSharedBuffers is enabled
 */
static void
StrategyStatsDump(void)
{
	time_t	now = time(NULL);

	if (StrategyControl->stat_report + DebugSharedBuffers < now)
	  {
	  long all_hit, t1_hit, b1_hit;
	  int  id, t1_clean;
	  ErrorContextCallback *errcxtold;
	  
	  id = StrategyControl->listHead[STRAT_LIST_T1];
	  t1_clean = 0;
	  while (id >= 0)
		{
		  if (!(BufferDescriptors[StrategyCDB[id].buf_id].flags & BM_DIRTY))
			t1_clean++;
			id = StrategyCDB[id].next;
		}
	  
	  if (StrategyControl->num_lookup == 0)
		all_hit = t1_hit = b1_hit = 0;
	  else
		{
		  b1_hit = (StrategyControl->num_hit[STRAT_LIST_B1] * 100 /
					StrategyControl->num_lookup);
		  t1_hit = (StrategyControl->num_hit[STRAT_LIST_T1] * 100 /
					StrategyControl->num_lookup);
                        all_hit = b1_hit + t1_hit;
		}
	  
		errcxtold = error_context_stack;
		error_context_stack = NULL;
		elog(DEBUG1, "Q STAT: B1len=%5d T1len=%5d ", B1_LENGTH, T1_LENGTH);
		elog(DEBUG1, "Q total   =%4ld%% B1hit=%4ld%% T1hit=%4ld%% ",
			 all_hit, b1_hit, t1_hit);
		elog(DEBUG1, "Q clean buffers: T1= %5d", t1_clean);
		error_context_stack = errcxtold;
		
		StrategyControl->num_lookup = 0;
		StrategyControl->num_hit[STRAT_LIST_T1] = 0;
		StrategyControl->num_hit[STRAT_LIST_B1] = 0;
		StrategyControl->stat_report = now;
	  }
}

/*
 * StrategyBufferLookup
 *
 *	Lookup a page request in the cache directory. A buffer is only
 *	returned for cache hit. 
 *
 *	recheck indicates we are rechecking after I/O wait; do not change
 *	internal status in this case.
 *
 *	*cdb_found_index is set to the index of the found CDB, or -1 if none.
 *	This is not intended to be used by the caller, except to pass to
 *	StrategyReplaceBuffer().
 */
BufferDesc *
StrategyBufferLookup(BufferTag *tagPtr, bool recheck, int *cdb_found_index)
{
  /* Optional stats printout */
  if (DebugSharedBuffers > 0) {
    StrategyStatsDump();
  }
  elog(ERROR, "StrategyLookup: Implement me");
  return NULL; /* not reached */
}


/*
 * StrategyGetBuffer
 *
 *	Called by the bufmgr to get the next candidate buffer to use in
 *	BufferAlloc(). The only hard requirement BufferAlloc() has is that
 *	this buffer must not currently be pinned.
 *
 *	*cdb_replace_index is set to the index of the candidate CDB, or -1 if
 *	none (meaning we are using a previously free buffer).  This is not
 *	intended to be used by the caller, except to pass to
 *	StrategyReplaceBuffer().
 */
BufferDesc *
StrategyGetBuffer(int *cdb_replace_index)
{
  /* No unpinned buffers at all!!!  */
  elog(ERROR, "StrategyGetBuffer: Implement me");
  return NULL; 	/* not reached */
}


/*
 * StrategyReplaceBuffer
 *
 *	Called by the buffer manager to inform us that he flushed a buffer
 *	and is now about to replace the content. Prior to this call,
 *	the cache algorithm still reports the buffer as in the cache. After
 *	this call we report the new block, even if IO might still need to
 *	be done to bring in the new content.
 *
 *	cdb_found_index and cdb_replace_index must be the auxiliary values
 *	returned by previous calls to StrategyBufferLookup and StrategyGetBuffer.
 *
 *  TA Comment: As you can see, you may ignore found_index for this project.
 *              Also notice, that replace_index is what YOUR code returned in 
 *              StrategyGetBuffer.
 */
void
StrategyReplaceBuffer(BufferDesc *buf, BufferTag *newTag, 
                      int cdb_found_index, int cdb_replace_index)
{
  Assert(cdb_found_index < 0);
  elog(ERROR, "StrategyReplaceBuffer: Implement me");
}


/*
 * StrategyInvalidateBuffer
 *
 *	Called by the buffer manager to inform us that a buffer content
 *	is no longer valid. We simply throw away any eventual existing
 *	buffer hash entry and move the CDB and buffer to the free lists.
 *
 */
void
StrategyInvalidateBuffer(BufferDesc *buf)
{
  elog(ERROR, "StrategyInvalidateBuffer: Implement me");
}

/*
 * StrategyHintVacuum -- tell us whether VACUUM is active
 */
void
StrategyHintVacuum(bool vacuum_active)
{
/*   TA Comment: Ignore this routine. */
	strategy_hint_vacuum = vacuum_active;
	strategy_vacuum_xid = GetTopTransactionId();
}

/*
 * StrategyDirtyBufferList
 *
 * Returns a list of dirty buffers, in priority order for writing.
 * Note that the caller may choose not to write them all.
 *
 * The caller must beware of the possibility that a buffer is no longer dirty,
 * or even contains a different page, by the time he reaches it.  If it no
 * longer contains the same page it need not be written, even if it is (again)
 * dirty.
 *
 * Buffer pointers are stored into buffers[], and corresponding tags into
 * buftags[], both of size max_buffers.  The function returns the number of
 * buffer IDs stored.
 */
int
StrategyDirtyBufferList(BufferDesc **buffers, BufferTag *buftags, int max_buffers)
{
  elog(ERROR, "StrategyDirtyBufferList: Implement me");
  return 0; /* not reached */
}


/*
 * StrategyShmemSize
 *
 * estimate the size of shared memory used by the freelist-related structures.
 *
 * TA Comment: This is done for you.
 */
int
StrategyShmemSize(void)
{
	/* A1out list can hold 50% of NBuffers, per Johnson and Shasha */
	int			nCDBs = NBuffers + NBuffers / 2;
	int			size = 0;

	/* size of CDB lookup hash table */
	size += BufTableShmemSize(nCDBs);

	/* size of the shared replacement strategy control block */
	size += MAXALIGN(sizeof(BufferStrategyControl));

	/* size of the CDB directory */
	size += MAXALIGN(nCDBs * sizeof(BufferStrategyCDB));

	return size;
}

/*
 * StrategyInitialize -- initialize the buffer cache replacement
 *		strategy.
 *
 * Assume: All of the buffers are already building a linked list.
 *		Only called by postmaster and only during initialization.
 *
 * TA Comment: This is done for you.
 */
void
StrategyInitialize(bool init)
{
	/* CDB list can hold 50% of NBuffers, per Johnson and Shasha */
	int	nCDBs = NBuffers + NBuffers / 2;
	bool	found;
	int	i;

	/*
	 * Initialize the shared CDB lookup hashtable
	 */
	InitBufTable(nCDBs);

	/*
	 * Get or create the shared strategy control block and the CDB's
	 */
	StrategyControl = (BufferStrategyControl *)
		ShmemInitStruct("Buffer Strategy Status",
						sizeof(BufferStrategyControl) +
						sizeof(BufferStrategyCDB) * (nCDBs - 1),
						&found);
	StrategyCDB = &(StrategyControl->cdb[0]);

	if (!found)
	{
		/*
		 * Only done once, usually in postmaster
		 */
		Assert(init);

		/*
		 * Grab the whole linked list of free buffers for our strategy. We
		 * assume it was previously set up by InitBufferPool().
		 */
		StrategyControl->listFreeBuffers = 0;

		/*
		 * Initialize all lists to be empty
		 */
		for (i = 0; i < STRAT_NUM_LISTS; i++)
		{
			StrategyControl->listHead[i] = -1;
			StrategyControl->listTail[i] = -1;
			StrategyControl->listSize[i] = 0;
			StrategyControl->num_hit[i] = 0;
		}
		StrategyControl->num_lookup = 0;
		StrategyControl->stat_report = 0;

		/*
		 * All CDB's are linked as the listUnusedCDB
		 */
		for (i = 0; i < nCDBs; i++)
		{
			StrategyCDB[i].next = i + 1;
			StrategyCDB[i].list = STRAT_LIST_UNUSED;
			CLEAR_BUFFERTAG(StrategyCDB[i].buf_tag);
			StrategyCDB[i].buf_id = -1;
		}
		StrategyCDB[nCDBs - 1].next = -1;
		StrategyControl->listUnusedCDB = 0;
	}
	else
		Assert(!init);
}
