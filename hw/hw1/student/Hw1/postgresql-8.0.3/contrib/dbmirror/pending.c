/****************************************************************************
 * pending.c
 * $Id: pending.c,v 1.20 2004/09/10 04:31:06 neilc Exp $
 * $PostgreSQL: pgsql/contrib/dbmirror/pending.c,v 1.20 2004/09/10 04:31:06 neilc Exp $
 *
 * This file contains a trigger for Postgresql-7.x to record changes to tables
 * to a pending table for mirroring.
 * All tables that should be mirrored should have this trigger hooked up to it.
 *
 *	 Written by Steven Singer (ssinger@navtechinc.com)
 *	 (c) 2001-2002 Navtech Systems Support Inc.
 *		 ALL RIGHTS RESERVED
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without a written agreement
 * is hereby granted, provided that the above copyright notice and this
 * paragraph and the following two paragraphs appear in all copies.
 *
 * IN NO EVENT SHALL THE AUTHOR OR DISTRIBUTORS BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING
 * LOST PROFITS, ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS
 * DOCUMENTATION, EVEN IF THE AUTHOR OR DISTRIBUTORS HAVE BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * THE AUTHOR AND DISTRIBUTORS SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE AUTHOR AND DISTRIBUTORS HAS NO OBLIGATIONS TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 *
 ***************************************************************************/
#include <postgres.h>

#include <executor/spi.h>
#include <commands/trigger.h>
#include <utils/lsyscache.h>
#include <utils/array.h>

enum FieldUsage
{
	PRIMARY = 0, NONPRIMARY, ALL, NUM_FIELDUSAGE
};

int storePending(char *cpTableName, HeapTuple tBeforeTuple,
			 HeapTuple tAfterTuple,
			 TupleDesc tTupdesc,
			 Oid tableOid,
			 char cOp);



int storeKeyInfo(char *cpTableName, HeapTuple tTupleData, TupleDesc tTuplDesc,
			 Oid tableOid);
int storeData(char *cpTableName, HeapTuple tTupleData,
		  TupleDesc tTupleDesc, Oid tableOid, int iIncludeKeyData);

int2vector *getPrimaryKey(Oid tblOid);

char *packageData(HeapTuple tTupleData, TupleDesc tTupleDecs, Oid tableOid,
			enum FieldUsage eKeyUsage);


#define BUFFER_SIZE 256
#define MAX_OID_LEN 10
/*#define DEBUG_OUTPUT 1 */
extern Datum recordchange(PG_FUNCTION_ARGS);

PG_FUNCTION_INFO_V1(recordchange);


#if defined DEBUG_OUTPUT
#define debug_msg2(x,y) elog(NOTICE,x,y)
#define debug_msg(x) elog(NOTICE,x)
#define debug_msg3(x,y,z) elog(NOTICE,x,y,z)
#else
#define debug_msg2(x,y)
#define debug_msg(x)
#define debug_msg3(x,y,z)
#endif



extern Datum nextval(PG_FUNCTION_ARGS);
extern Datum setval(PG_FUNCTION_ARGS);

int saveSequenceUpdate(const text *sequenceName,
				   int nextSequenceValue);


/*****************************************************************************
 * The entry point for the trigger function.
 * The Trigger takes a single SQL 'text' argument indicating the name of the
 * table the trigger was applied to.  If this name is incorrect so will the
 * mirroring.
 ****************************************************************************/
Datum
recordchange(PG_FUNCTION_ARGS)
{
	TriggerData *trigdata;
	TupleDesc	tupdesc;
	HeapTuple	beforeTuple = NULL;
	HeapTuple	afterTuple = NULL;
	HeapTuple	retTuple = NULL;
	char	   *tblname;
	char		op = 0;
	char	   *schemaname;
	char	   *fullyqualtblname;
	char	   *pkxpress = NULL;

	if (fcinfo->context != NULL)
	{

		if (SPI_connect() < 0)
		{
			ereport(ERROR, (errcode(ERRCODE_CONNECTION_FAILURE),
			  errmsg("dbmirror:recordchange could not connect to SPI")));
			return -1;
		}
		trigdata = (TriggerData *) fcinfo->context;
		/* Extract the table name */
		tblname = SPI_getrelname(trigdata->tg_relation);
#ifndef NOSCHEMAS
		schemaname = get_namespace_name(RelationGetNamespace(trigdata->tg_relation));
		fullyqualtblname = SPI_palloc(strlen(tblname) +
									  strlen(schemaname) + 6);
		sprintf(fullyqualtblname, "\"%s\".\"%s\"",
				schemaname, tblname);
#else
		fullyqualtblname = SPI_palloc(strlen(tblname) + 3);
		sprintf(fullyqualtblname, "\"%s\"", tblname);
#endif
		tupdesc = trigdata->tg_relation->rd_att;
		if (TRIGGER_FIRED_BY_UPDATE(trigdata->tg_event))
		{
			retTuple = trigdata->tg_newtuple;
			beforeTuple = trigdata->tg_trigtuple;
			afterTuple = trigdata->tg_newtuple;
			op = 'u';

		}
		else if (TRIGGER_FIRED_BY_INSERT(trigdata->tg_event))
		{
			retTuple = trigdata->tg_trigtuple;
			afterTuple = trigdata->tg_trigtuple;
			op = 'i';
		}
		else if (TRIGGER_FIRED_BY_DELETE(trigdata->tg_event))
		{
			retTuple = trigdata->tg_trigtuple;
			beforeTuple = trigdata->tg_trigtuple;
			op = 'd';
		}
		else
		{
			ereport(ERROR, (errcode(ERRCODE_TRIGGERED_ACTION_EXCEPTION),
					 errmsg("dbmirror:recordchange Unknown operation")));

		}

		if (storePending(fullyqualtblname, beforeTuple, afterTuple,
						 tupdesc, retTuple->t_tableOid, op))
		{
			/* An error occoured. Skip the operation. */
			ereport(ERROR,
					(errcode(ERRCODE_TRIGGERED_ACTION_EXCEPTION),
					 errmsg("operation could not be mirrored")));

			return PointerGetDatum(NULL);

		}
		debug_msg("dbmirror:recordchange returning on success");

		SPI_pfree(fullyqualtblname);
		if (pkxpress != NULL)
			SPI_pfree(pkxpress);
		SPI_finish();
		return PointerGetDatum(retTuple);
	}
	else
	{
		/*
		 * Not being called as a trigger.
		 */
		return PointerGetDatum(NULL);
	}
}


/*****************************************************************************
 * Constructs and executes an SQL query to write a record of this tuple change
 * to the pending table.
 *****************************************************************************/
int
storePending(char *cpTableName, HeapTuple tBeforeTuple,
			 HeapTuple tAfterTuple,
			 TupleDesc tTupDesc,
			 Oid tableOid,
			 char cOp)
{
	char	   *cpQueryBase = "INSERT INTO dbmirror_pending (TableName,Op,XID) VALUES ($1,$2,$3)";

	int			iResult = 0;
	HeapTuple	tCurTuple;
	char		nulls[3] = "   ";

	/* Points the current tuple(before or after) */
	Datum		saPlanData[3];
	Oid			taPlanArgTypes[4] = {NAMEOID,
		CHAROID,
	INT4OID};
	void	   *vpPlan;

	tCurTuple = tBeforeTuple ? tBeforeTuple : tAfterTuple;



	vpPlan = SPI_prepare(cpQueryBase, 3, taPlanArgTypes);
	if (vpPlan == NULL)
		ereport(ERROR, (errcode(ERRCODE_TRIGGERED_ACTION_EXCEPTION),
				   errmsg("dbmirror:storePending error creating plan")));


	saPlanData[0] = PointerGetDatum(cpTableName);
	saPlanData[1] = CharGetDatum(cOp);
	saPlanData[2] = Int32GetDatum(GetCurrentTransactionId());

	iResult = SPI_execp(vpPlan, saPlanData, nulls, 1);
	if (iResult < 0)
		elog(NOTICE, "storedPending fired (%s) returned %d",
			 cpQueryBase, iResult);



	debug_msg("dbmirror:storePending row successfully stored in pending table");


	if (cOp == 'd')
	{
		/**
		 * This is a record of a delete operation.
		 * Just store the key data.
		 */
		iResult = storeKeyInfo(cpTableName,
							   tBeforeTuple, tTupDesc, tableOid);
	}
	else if (cOp == 'i')
	{
		/**
		 * An Insert operation.
		 * Store all data
		 */
		iResult = storeData(cpTableName, tAfterTuple,
							tTupDesc, tableOid, TRUE);

	}
	else
	{
		/* op must be an update. */
		iResult = storeKeyInfo(cpTableName, tBeforeTuple,
							   tTupDesc, tableOid);
		iResult = iResult ? iResult :
			storeData(cpTableName, tAfterTuple, tTupDesc,
					  tableOid, TRUE);
	}


	debug_msg("dbmirror:storePending done storing keyinfo");

	return iResult;

}

int
storeKeyInfo(char *cpTableName, HeapTuple tTupleData,
			 TupleDesc tTupleDesc, Oid tableOid)
{

	Oid			saPlanArgTypes[1] = {NAMEOID};
	char	   *insQuery = "INSERT INTO dbmirror_pendingdata (SeqId,IsKey,Data) VALUES(currval('dbmirror_pending_seqid_seq'),'t',$1)";
	void	   *pplan;
	Datum		saPlanData[1];
	char	   *cpKeyData;
	int			iRetCode;

	pplan = SPI_prepare(insQuery, 1, saPlanArgTypes);
	if (pplan == NULL)
	{
		elog(NOTICE, "could not prepare INSERT plan");
		return -1;
	}

	/* pplan = SPI_saveplan(pplan); */
	cpKeyData = packageData(tTupleData, tTupleDesc, tableOid, PRIMARY);
	if (cpKeyData == NULL)
		ereport(ERROR,
				(errcode(ERRCODE_UNDEFINED_OBJECT),
		/* cpTableName already contains quotes... */
				 errmsg("there is no PRIMARY KEY for table %s",
						cpTableName)));


	debug_msg2("dbmirror:storeKeyInfo key data: %s", cpKeyData);

	saPlanData[0] = PointerGetDatum(cpKeyData);

	iRetCode = SPI_execp(pplan, saPlanData, NULL, 1);

	if (cpKeyData != NULL)
		SPI_pfree(cpKeyData);

	if (iRetCode != SPI_OK_INSERT)
	{
		ereport(ERROR, (errcode(ERRCODE_TRIGGERED_ACTION_EXCEPTION)
						,errmsg("error inserting row in pendingDelete")));
		return -1;
	}

	debug_msg("insert successful");

	return 0;

}




int2vector *
getPrimaryKey(Oid tblOid)
{
	char	   *queryBase;
	char	   *query;
	bool		isNull;
	int2vector *resultKey;
	int2vector *tpResultKey;
	HeapTuple	resTuple;
	Datum		resDatum;
	int			ret;

	queryBase = "SELECT indkey FROM pg_index WHERE indisprimary='t' AND indrelid=";
	query = SPI_palloc(strlen(queryBase) + MAX_OID_LEN + 1);
	sprintf(query, "%s%d", queryBase, tblOid);
	ret = SPI_exec(query, 1);
	SPI_pfree(query);
	if (ret != SPI_OK_SELECT || SPI_processed != 1)
		return NULL;

	resTuple = SPI_tuptable->vals[0];
	resDatum = SPI_getbinval(resTuple, SPI_tuptable->tupdesc, 1, &isNull);

	tpResultKey = (int2vector *) DatumGetPointer(resDatum);
	resultKey = SPI_palloc(sizeof(int2vector));
	memcpy(resultKey, tpResultKey, sizeof(int2vector));

	return resultKey;
}

/******************************************************************************
 * Stores a copy of the non-key data for the row.
 *****************************************************************************/
int
storeData(char *cpTableName, HeapTuple tTupleData,
		  TupleDesc tTupleDesc, Oid tableOid, int iIncludeKeyData)
{

	Oid			planArgTypes[1] = {NAMEOID};
	char	   *insQuery = "INSERT INTO dbmirror_pendingdata (SeqId,IsKey,Data) VALUES(currval('dbmirror_pending_seqid_seq'),'f',$1)";
	void	   *pplan;
	Datum		planData[1];
	char	   *cpKeyData;
	int			iRetValue;

	pplan = SPI_prepare(insQuery, 1, planArgTypes);
	if (pplan == NULL)
	{
		elog(NOTICE, "could not prepare INSERT plan");
		return -1;
	}

	/* pplan = SPI_saveplan(pplan); */
	if (iIncludeKeyData == 0)
		cpKeyData = packageData(tTupleData, tTupleDesc,
								tableOid, NONPRIMARY);
	else
		cpKeyData = packageData(tTupleData, tTupleDesc, tableOid, ALL);

	planData[0] = PointerGetDatum(cpKeyData);
	iRetValue = SPI_execp(pplan, planData, NULL, 1);

	if (cpKeyData != 0)
		SPI_pfree(cpKeyData);

	if (iRetValue != SPI_OK_INSERT)
	{
		elog(NOTICE, "error inserting row in pendingDelete");
		return -1;
	}

	debug_msg("dbmirror:storeKeyData insert successful");


	return 0;

}

/**
 * Packages the data in tTupleData into a string of the format
 * FieldName='value text'  where any quotes inside of value text
 * are escaped with a backslash and any backslashes in value text
 * are esacped by a second back slash.
 *
 * tTupleDesc should be a description of the tuple stored in
 * tTupleData.
 *
 * eFieldUsage specifies which fields to use.
 *	PRIMARY implies include only primary key fields.
 *	NONPRIMARY implies include only non-primary key fields.
 *	ALL implies include all fields.
 */
char *
packageData(HeapTuple tTupleData, TupleDesc tTupleDesc, Oid tableOid,
			enum FieldUsage eKeyUsage)
{
	int			iNumCols;
	int2vector *tpPKeys = NULL;
	int			iColumnCounter;
	char	   *cpDataBlock;
	int			iDataBlockSize;
	int			iUsedDataBlock;

	iNumCols = tTupleDesc->natts;

	if (eKeyUsage != ALL)
	{
		tpPKeys = getPrimaryKey(tableOid);
		if (tpPKeys == NULL)
			return NULL;
	}

	if (tpPKeys != NULL)
	{
		debug_msg("dbmirror:packageData have primary keys");

	}

	cpDataBlock = SPI_palloc(BUFFER_SIZE);
	iDataBlockSize = BUFFER_SIZE;
	iUsedDataBlock = 0;			/* To account for the null */

	for (iColumnCounter = 1; iColumnCounter <= iNumCols; iColumnCounter++)
	{
		int			iIsPrimaryKey;
		int			iPrimaryKeyIndex;
		char	   *cpUnFormatedPtr;
		char	   *cpFormatedPtr;

		char	   *cpFieldName;
		char	   *cpFieldData;

		if (eKeyUsage != ALL)
		{
			/* Determine if this is a primary key or not. */
			iIsPrimaryKey = 0;
			for (iPrimaryKeyIndex = 0;
				 (*tpPKeys)[iPrimaryKeyIndex] != 0;
				 iPrimaryKeyIndex++)
			{
				if ((*tpPKeys)[iPrimaryKeyIndex]
					== iColumnCounter)
				{
					iIsPrimaryKey = 1;
					break;
				}
			}
			if (iIsPrimaryKey ? (eKeyUsage != PRIMARY) :
				(eKeyUsage != NONPRIMARY))
			{
				/**
				 * Don't use.
				 */

				debug_msg("dbmirror:packageData skipping column");

				continue;
			}
		}						/* KeyUsage!=ALL */

		if (tTupleDesc->attrs[iColumnCounter - 1]->attisdropped)
		{
			/**
			 * This column has been dropped.
			 * Do not mirror it.
			 */
			continue;
		}

		cpFieldName = DatumGetPointer(NameGetDatum

									  (&tTupleDesc->attrs
									   [iColumnCounter - 1]->attname));

		debug_msg2("dbmirror:packageData field name: %s", cpFieldName);

		while (iDataBlockSize - iUsedDataBlock <
			   strlen(cpFieldName) + 6)
		{
			cpDataBlock = SPI_repalloc(cpDataBlock,
									   iDataBlockSize +
									   BUFFER_SIZE);
			iDataBlockSize = iDataBlockSize + BUFFER_SIZE;
		}
		sprintf(cpDataBlock + iUsedDataBlock, "\"%s\"=", cpFieldName);
		iUsedDataBlock = iUsedDataBlock + strlen(cpFieldName) + 3;
		cpFieldData = SPI_getvalue(tTupleData, tTupleDesc,
								   iColumnCounter);

		cpUnFormatedPtr = cpFieldData;
		cpFormatedPtr = cpDataBlock + iUsedDataBlock;
		if (cpFieldData != NULL)
		{
			*cpFormatedPtr = '\'';
			iUsedDataBlock++;
			cpFormatedPtr++;
		}
		else
		{
			sprintf(cpFormatedPtr, " ");
			iUsedDataBlock++;
			cpFormatedPtr++;
			continue;

		}
		debug_msg2("dbmirror:packageData field data: \"%s\"",
				   cpFieldData);
		debug_msg("dbmirror:packageData starting format loop");

		while (*cpUnFormatedPtr != 0)
		{
			while (iDataBlockSize - iUsedDataBlock < 2)
			{
				cpDataBlock = SPI_repalloc(cpDataBlock,
										   iDataBlockSize
										   + BUFFER_SIZE);
				iDataBlockSize = iDataBlockSize + BUFFER_SIZE;
				cpFormatedPtr = cpDataBlock + iUsedDataBlock;
			}
			if (*cpUnFormatedPtr == '\\' || *cpUnFormatedPtr == '\'')
			{
				*cpFormatedPtr = '\\';
				cpFormatedPtr++;
				iUsedDataBlock++;
			}
			*cpFormatedPtr = *cpUnFormatedPtr;
			cpFormatedPtr++;
			cpUnFormatedPtr++;
			iUsedDataBlock++;
		}

		SPI_pfree(cpFieldData);

		while (iDataBlockSize - iUsedDataBlock < 3)
		{
			cpDataBlock = SPI_repalloc(cpDataBlock,
									   iDataBlockSize +
									   BUFFER_SIZE);
			iDataBlockSize = iDataBlockSize + BUFFER_SIZE;
			cpFormatedPtr = cpDataBlock + iUsedDataBlock;
		}
		sprintf(cpFormatedPtr, "' ");
		iUsedDataBlock = iUsedDataBlock + 2;

		debug_msg2("dbmirror:packageData data block: \"%s\"",
				   cpDataBlock);

	}							/* for iColumnCounter  */
	if (tpPKeys != NULL)
		SPI_pfree(tpPKeys);

	debug_msg3("dbmirror:packageData returning DataBlockSize:%d iUsedDataBlock:%d",
			   iDataBlockSize,
			   iUsedDataBlock);

	memset(cpDataBlock + iUsedDataBlock, 0, iDataBlockSize - iUsedDataBlock);

	return cpDataBlock;

}


PG_FUNCTION_INFO_V1(setval);

Datum
setval(PG_FUNCTION_ARGS)
{


	text	   *sequenceName;

	Oid			setvalArgTypes[3] = {TEXTOID, INT4OID,BOOLOID};
	int			nextValue;
	void	   *setvalPlan = NULL;
	Datum		setvalData[3];
	const char *setvalQuery = "SELECT setval_pg($1,$2,$3)";
	int			ret;
        char                    is_called;

	sequenceName = PG_GETARG_TEXT_P(0);
	nextValue = PG_GETARG_INT32(1);
	is_called = PG_GETARG_BOOL(2);

	setvalData[0] = PointerGetDatum(sequenceName);
	setvalData[1] = Int32GetDatum(nextValue);
	if(PG_NARGS() > 2)
	  {
	    setvalData[2] = BoolGetDatum(is_called);
	  }
	else
	  {
	    setvalData[2]=1;
	  }

	if (SPI_connect() < 0)
	{
		ereport(ERROR, (errcode(ERRCODE_EXTERNAL_ROUTINE_EXCEPTION),
					errmsg("dbmirror:setval could not connect to SPI")));
		return -1;
	}

	setvalPlan = SPI_prepare(setvalQuery, 3, setvalArgTypes);
	if (setvalPlan == NULL)
	{
		ereport(ERROR, (errcode(ERRCODE_EXTERNAL_ROUTINE_EXCEPTION),
					  errmsg("dbmirror:setval could not prepare plan")));
		return -1;
	}

	ret = SPI_execp(setvalPlan, setvalData, NULL, 1);

	if (ret != SPI_OK_SELECT || SPI_processed != 1)
		return -1;

	debug_msg2("dbmirror:setval: setval_pg returned ok:%d", nextValue);

	ret = saveSequenceUpdate(sequenceName, nextValue);

	SPI_pfree(setvalPlan);

	SPI_finish();
	debug_msg("dbmirror:setval about to return");
	return Int64GetDatum(nextValue);

}



PG_FUNCTION_INFO_V1(nextval);

Datum
nextval(PG_FUNCTION_ARGS)
{
	text	   *sequenceName;

	const char *nextvalQuery = "SELECT nextval_pg($1)";
	Oid			nextvalArgTypes[1] = {TEXTOID};
	void	   *nextvalPlan = NULL;
	Datum		nextvalData[1];


	int			ret;
	HeapTuple	resTuple;
	char		isNull;
	int			nextSequenceValue;



	debug_msg("dbmirror:nextval Starting pending.so:nextval");


	sequenceName = PG_GETARG_TEXT_P(0);

	if (SPI_connect() < 0)
	{
		ereport(ERROR, (errcode(ERRCODE_EXTERNAL_ROUTINE_EXCEPTION),
				   errmsg("dbmirror:nextval could not connect to SPI")));
		return -1;
	}

	nextvalPlan = SPI_prepare(nextvalQuery, 1, nextvalArgTypes);


	debug_msg("prepared plan to call nextval_pg");


	if (nextvalPlan == NULL)
	{
		ereport(ERROR, (errcode(ERRCODE_EXTERNAL_ROUTINE_EXCEPTION),
						errmsg("dbmirror:nextval error creating plan")));
		return -1;
	}
	nextvalData[0] = PointerGetDatum(sequenceName);

	ret = SPI_execp(nextvalPlan, nextvalData, NULL, 1);

	debug_msg("dbmirror:Executed call to nextval_pg");


	if (ret != SPI_OK_SELECT || SPI_processed != 1)
		return -1;

	resTuple = SPI_tuptable->vals[0];

	debug_msg("dbmirror:nextval Set resTuple");

	nextSequenceValue = *(unsigned int *) (DatumGetPointer(SPI_getbinval(resTuple,
												   SPI_tuptable->tupdesc,
														   1, &isNull)));



	debug_msg2("dbmirror:nextval Set SPI_getbinval:%d", nextSequenceValue);


	saveSequenceUpdate(sequenceName, nextSequenceValue);
	SPI_pfree(resTuple);
	SPI_pfree(nextvalPlan);

	SPI_finish();

	return Int64GetDatum(nextSequenceValue);
}


int
saveSequenceUpdate(const text *sequenceName,
				   int nextSequenceVal)
{

	Oid			insertArgTypes[2] = {TEXTOID, INT4OID};
	Oid			insertDataArgTypes[1] = {NAMEOID};
	void	   *insertPlan = NULL;
	void	   *insertDataPlan = NULL;
	Datum		insertDatum[2];
	Datum		insertDataDatum[1];
	char		nextSequenceText[32];

	const char *insertQuery =
	"INSERT INTO dbmirror_Pending (TableName,Op,XID) VALUES" \
	"($1,'s',$2)";
	const char *insertDataQuery =
	"INSERT INTO dbmirror_PendingData(SeqId,IsKey,Data) VALUES " \
	"(currval('dbmirror_pending_seqid_seq'),'t',$1)";

	int			ret;


	insertPlan = SPI_prepare(insertQuery, 2, insertArgTypes);
	insertDataPlan = SPI_prepare(insertDataQuery, 1, insertDataArgTypes);

	debug_msg("Prepared insert query");


	if (insertPlan == NULL || insertDataPlan == NULL)
		ereport(ERROR, (errcode(ERRCODE_EXTERNAL_ROUTINE_EXCEPTION), errmsg("dbmirror:nextval error creating plan")));

	insertDatum[1] = Int32GetDatum(GetCurrentTransactionId());
	insertDatum[0] = PointerGetDatum(sequenceName);

	sprintf(nextSequenceText, "%d", nextSequenceVal);
	insertDataDatum[0] = PointerGetDatum(nextSequenceText);
	debug_msg2("dbmirror:savesequenceupdate: Setting value %s",
			   nextSequenceText);

	debug_msg("dbmirror:About to execute insert query");

	ret = SPI_execp(insertPlan, insertDatum, NULL, 1);

	ret = SPI_execp(insertDataPlan, insertDataDatum, NULL, 1);

	debug_msg("dbmirror:Insert query finished");
	SPI_pfree(insertPlan);
	SPI_pfree(insertDataPlan);

	return ret;

}
