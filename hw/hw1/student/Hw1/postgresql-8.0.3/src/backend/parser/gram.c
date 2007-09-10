/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_P = 258,
     ABSOLUTE_P = 259,
     ACCESS = 260,
     ACTION = 261,
     ADD = 262,
     AFTER = 263,
     AGGREGATE = 264,
     ALL = 265,
     ALSO = 266,
     ALTER = 267,
     ANALYSE = 268,
     ANALYZE = 269,
     AND = 270,
     ANY = 271,
     ARRAY = 272,
     AS = 273,
     ASC = 274,
     ASSERTION = 275,
     ASSIGNMENT = 276,
     AT = 277,
     AUTHORIZATION = 278,
     BACKWARD = 279,
     BEFORE = 280,
     BEGIN_P = 281,
     BETWEEN = 282,
     BIGINT = 283,
     BINARY = 284,
     BIT = 285,
     BOOLEAN_P = 286,
     BOTH = 287,
     BY = 288,
     CACHE = 289,
     CALLED = 290,
     CASCADE = 291,
     CASE = 292,
     CAST = 293,
     CHAIN = 294,
     CHAR_P = 295,
     CHARACTER = 296,
     CHARACTERISTICS = 297,
     CHECK = 298,
     CHECKPOINT = 299,
     CLASS = 300,
     CLOSE = 301,
     CLUSTER = 302,
     COALESCE = 303,
     COLLATE = 304,
     COLUMN = 305,
     COMMENT = 306,
     COMMIT = 307,
     COMMITTED = 308,
     CONSTRAINT = 309,
     CONSTRAINTS = 310,
     CONVERSION_P = 311,
     CONVERT = 312,
     COPY = 313,
     CREATE = 314,
     CREATEDB = 315,
     CREATEUSER = 316,
     CROSS = 317,
     CSV = 318,
     CURRENT_DATE = 319,
     CURRENT_TIME = 320,
     CURRENT_TIMESTAMP = 321,
     CURRENT_USER = 322,
     CURSOR = 323,
     CYCLE = 324,
     DATABASE = 325,
     DAY_P = 326,
     DEALLOCATE = 327,
     DEC = 328,
     DECIMAL_P = 329,
     DECLARE = 330,
     DEFAULT = 331,
     DEFAULTS = 332,
     DEFERRABLE = 333,
     DEFERRED = 334,
     DEFINER = 335,
     DELETE_P = 336,
     DELIMITER = 337,
     DELIMITERS = 338,
     DESC = 339,
     DISTINCT = 340,
     DO = 341,
     DOMAIN_P = 342,
     DOUBLE_P = 343,
     DROP = 344,
     EACH = 345,
     ELSE = 346,
     ENCODING = 347,
     ENCRYPTED = 348,
     END_P = 349,
     ESCAPE = 350,
     EXCEPT = 351,
     EXCLUDING = 352,
     EXCLUSIVE = 353,
     EXECUTE = 354,
     EXISTS = 355,
     EXPLAIN = 356,
     EXTERNAL = 357,
     EXTRACT = 358,
     FALSE_P = 359,
     FETCH = 360,
     FIRST_P = 361,
     FLOAT_P = 362,
     FOR = 363,
     FORCE = 364,
     FOREIGN = 365,
     FORWARD = 366,
     FREEZE = 367,
     FROM = 368,
     FULL = 369,
     FUNCTION = 370,
     GLOBAL = 371,
     GRANT = 372,
     GROUP_P = 373,
     HANDLER = 374,
     HAVING = 375,
     HOLD = 376,
     HOUR_P = 377,
     ILIKE = 378,
     IMMEDIATE = 379,
     IMMUTABLE = 380,
     IMPLICIT_P = 381,
     IN_P = 382,
     INCLUDING = 383,
     INCREMENT = 384,
     INDEX = 385,
     INHERITS = 386,
     INITIALLY = 387,
     INNER_P = 388,
     INOUT = 389,
     INPUT_P = 390,
     INSENSITIVE = 391,
     INSERT = 392,
     INSTEAD = 393,
     INT_P = 394,
     INTEGER = 395,
     INTERSECT = 396,
     INTERVAL = 397,
     INTO = 398,
     INVOKER = 399,
     IS = 400,
     ISNULL = 401,
     ISOLATION = 402,
     JOIN = 403,
     KEY = 404,
     LANCOMPILER = 405,
     LANGUAGE = 406,
     LARGE_P = 407,
     LAST_P = 408,
     LEADING = 409,
     LEFT = 410,
     LEVEL = 411,
     LIKE = 412,
     LIMIT = 413,
     LISTEN = 414,
     LOAD = 415,
     LOCAL = 416,
     LOCALTIME = 417,
     LOCALTIMESTAMP = 418,
     LOCATION = 419,
     LOCK_P = 420,
     MATCH = 421,
     MAXVALUE = 422,
     MINUTE_P = 423,
     MINVALUE = 424,
     MODE = 425,
     MONTH_P = 426,
     MOVE = 427,
     NAMES = 428,
     NATIONAL = 429,
     NATURAL = 430,
     NCHAR = 431,
     NEW = 432,
     NEXT = 433,
     NO = 434,
     NOCREATEDB = 435,
     NOCREATEUSER = 436,
     NONE = 437,
     NOT = 438,
     NOTHING = 439,
     NOTIFY = 440,
     NOTNULL = 441,
     NOWAIT = 442,
     NULL_P = 443,
     NULLIF = 444,
     NUMERIC = 445,
     OBJECT_P = 446,
     OF = 447,
     OFF = 448,
     OFFSET = 449,
     OIDS = 450,
     OLD = 451,
     ON = 452,
     ONLY = 453,
     OPERATOR = 454,
     OPTION = 455,
     OR = 456,
     ORDER = 457,
     OUT_P = 458,
     OUTER_P = 459,
     OVERLAPS = 460,
     OVERLAY = 461,
     OWNER = 462,
     PARTIAL = 463,
     PASSWORD = 464,
     PLACING = 465,
     POSITION = 466,
     PRECISION = 467,
     PRESERVE = 468,
     PREPARE = 469,
     PRIMARY = 470,
     PRIOR = 471,
     PRIVILEGES = 472,
     PROCEDURAL = 473,
     PROCEDURE = 474,
     QUOTE = 475,
     READ = 476,
     REAL = 477,
     RECHECK = 478,
     REFERENCES = 479,
     REINDEX = 480,
     RELATIVE_P = 481,
     RELEASE = 482,
     RENAME = 483,
     REPEATABLE = 484,
     REPLACE = 485,
     RESET = 486,
     RESTART = 487,
     RESTRICT = 488,
     RETURNS = 489,
     REVOKE = 490,
     RIGHT = 491,
     ROLLBACK = 492,
     ROW = 493,
     ROWS = 494,
     RULE = 495,
     SAVEPOINT = 496,
     SCHEMA = 497,
     SCROLL = 498,
     SECOND_P = 499,
     SECURITY = 500,
     SELECT = 501,
     SEQUENCE = 502,
     SERIALIZABLE = 503,
     SESSION = 504,
     SESSION_USER = 505,
     SET = 506,
     SETOF = 507,
     SHARE = 508,
     SHOW = 509,
     SIMILAR = 510,
     SIMPLE = 511,
     SMALLINT = 512,
     SOME = 513,
     STABLE = 514,
     START = 515,
     STATEMENT = 516,
     STATISTICS = 517,
     STDIN = 518,
     STDOUT = 519,
     STORAGE = 520,
     STRICT_P = 521,
     SUBSTRING = 522,
     SYSID = 523,
     TABLE = 524,
     TABLESPACE = 525,
     TEMP = 526,
     TEMPLATE = 527,
     TEMPORARY = 528,
     THEN = 529,
     TIME = 530,
     TIMESTAMP = 531,
     TO = 532,
     TOAST = 533,
     TRAILING = 534,
     TRANSACTION = 535,
     TREAT = 536,
     TRIGGER = 537,
     TRIM = 538,
     TRUE_P = 539,
     TRUNCATE = 540,
     TRUSTED = 541,
     TYPE_P = 542,
     UNCOMMITTED = 543,
     UNENCRYPTED = 544,
     UNION = 545,
     UNIQUE = 546,
     UNKNOWN = 547,
     UNLISTEN = 548,
     UNTIL = 549,
     UPDATE = 550,
     USAGE = 551,
     USER = 552,
     USING = 553,
     VACUUM = 554,
     VALID = 555,
     VALIDATOR = 556,
     VALUES = 557,
     VARCHAR = 558,
     VARYING = 559,
     VERBOSE = 560,
     VIEW = 561,
     VOLATILE = 562,
     WHEN = 563,
     WHERE = 564,
     WITH = 565,
     WITHOUT = 566,
     WORK = 567,
     WRITE = 568,
     YEAR_P = 569,
     ZONE = 570,
     UNIONJOIN = 571,
     IDENT = 572,
     FCONST = 573,
     SCONST = 574,
     BCONST = 575,
     XCONST = 576,
     Op = 577,
     ICONST = 578,
     PARAM = 579,
     POSTFIXOP = 580,
     UMINUS = 581,
     TYPECAST = 582
   };
#endif
#define ABORT_P 258
#define ABSOLUTE_P 259
#define ACCESS 260
#define ACTION 261
#define ADD 262
#define AFTER 263
#define AGGREGATE 264
#define ALL 265
#define ALSO 266
#define ALTER 267
#define ANALYSE 268
#define ANALYZE 269
#define AND 270
#define ANY 271
#define ARRAY 272
#define AS 273
#define ASC 274
#define ASSERTION 275
#define ASSIGNMENT 276
#define AT 277
#define AUTHORIZATION 278
#define BACKWARD 279
#define BEFORE 280
#define BEGIN_P 281
#define BETWEEN 282
#define BIGINT 283
#define BINARY 284
#define BIT 285
#define BOOLEAN_P 286
#define BOTH 287
#define BY 288
#define CACHE 289
#define CALLED 290
#define CASCADE 291
#define CASE 292
#define CAST 293
#define CHAIN 294
#define CHAR_P 295
#define CHARACTER 296
#define CHARACTERISTICS 297
#define CHECK 298
#define CHECKPOINT 299
#define CLASS 300
#define CLOSE 301
#define CLUSTER 302
#define COALESCE 303
#define COLLATE 304
#define COLUMN 305
#define COMMENT 306
#define COMMIT 307
#define COMMITTED 308
#define CONSTRAINT 309
#define CONSTRAINTS 310
#define CONVERSION_P 311
#define CONVERT 312
#define COPY 313
#define CREATE 314
#define CREATEDB 315
#define CREATEUSER 316
#define CROSS 317
#define CSV 318
#define CURRENT_DATE 319
#define CURRENT_TIME 320
#define CURRENT_TIMESTAMP 321
#define CURRENT_USER 322
#define CURSOR 323
#define CYCLE 324
#define DATABASE 325
#define DAY_P 326
#define DEALLOCATE 327
#define DEC 328
#define DECIMAL_P 329
#define DECLARE 330
#define DEFAULT 331
#define DEFAULTS 332
#define DEFERRABLE 333
#define DEFERRED 334
#define DEFINER 335
#define DELETE_P 336
#define DELIMITER 337
#define DELIMITERS 338
#define DESC 339
#define DISTINCT 340
#define DO 341
#define DOMAIN_P 342
#define DOUBLE_P 343
#define DROP 344
#define EACH 345
#define ELSE 346
#define ENCODING 347
#define ENCRYPTED 348
#define END_P 349
#define ESCAPE 350
#define EXCEPT 351
#define EXCLUDING 352
#define EXCLUSIVE 353
#define EXECUTE 354
#define EXISTS 355
#define EXPLAIN 356
#define EXTERNAL 357
#define EXTRACT 358
#define FALSE_P 359
#define FETCH 360
#define FIRST_P 361
#define FLOAT_P 362
#define FOR 363
#define FORCE 364
#define FOREIGN 365
#define FORWARD 366
#define FREEZE 367
#define FROM 368
#define FULL 369
#define FUNCTION 370
#define GLOBAL 371
#define GRANT 372
#define GROUP_P 373
#define HANDLER 374
#define HAVING 375
#define HOLD 376
#define HOUR_P 377
#define ILIKE 378
#define IMMEDIATE 379
#define IMMUTABLE 380
#define IMPLICIT_P 381
#define IN_P 382
#define INCLUDING 383
#define INCREMENT 384
#define INDEX 385
#define INHERITS 386
#define INITIALLY 387
#define INNER_P 388
#define INOUT 389
#define INPUT_P 390
#define INSENSITIVE 391
#define INSERT 392
#define INSTEAD 393
#define INT_P 394
#define INTEGER 395
#define INTERSECT 396
#define INTERVAL 397
#define INTO 398
#define INVOKER 399
#define IS 400
#define ISNULL 401
#define ISOLATION 402
#define JOIN 403
#define KEY 404
#define LANCOMPILER 405
#define LANGUAGE 406
#define LARGE_P 407
#define LAST_P 408
#define LEADING 409
#define LEFT 410
#define LEVEL 411
#define LIKE 412
#define LIMIT 413
#define LISTEN 414
#define LOAD 415
#define LOCAL 416
#define LOCALTIME 417
#define LOCALTIMESTAMP 418
#define LOCATION 419
#define LOCK_P 420
#define MATCH 421
#define MAXVALUE 422
#define MINUTE_P 423
#define MINVALUE 424
#define MODE 425
#define MONTH_P 426
#define MOVE 427
#define NAMES 428
#define NATIONAL 429
#define NATURAL 430
#define NCHAR 431
#define NEW 432
#define NEXT 433
#define NO 434
#define NOCREATEDB 435
#define NOCREATEUSER 436
#define NONE 437
#define NOT 438
#define NOTHING 439
#define NOTIFY 440
#define NOTNULL 441
#define NOWAIT 442
#define NULL_P 443
#define NULLIF 444
#define NUMERIC 445
#define OBJECT_P 446
#define OF 447
#define OFF 448
#define OFFSET 449
#define OIDS 450
#define OLD 451
#define ON 452
#define ONLY 453
#define OPERATOR 454
#define OPTION 455
#define OR 456
#define ORDER 457
#define OUT_P 458
#define OUTER_P 459
#define OVERLAPS 460
#define OVERLAY 461
#define OWNER 462
#define PARTIAL 463
#define PASSWORD 464
#define PLACING 465
#define POSITION 466
#define PRECISION 467
#define PRESERVE 468
#define PREPARE 469
#define PRIMARY 470
#define PRIOR 471
#define PRIVILEGES 472
#define PROCEDURAL 473
#define PROCEDURE 474
#define QUOTE 475
#define READ 476
#define REAL 477
#define RECHECK 478
#define REFERENCES 479
#define REINDEX 480
#define RELATIVE_P 481
#define RELEASE 482
#define RENAME 483
#define REPEATABLE 484
#define REPLACE 485
#define RESET 486
#define RESTART 487
#define RESTRICT 488
#define RETURNS 489
#define REVOKE 490
#define RIGHT 491
#define ROLLBACK 492
#define ROW 493
#define ROWS 494
#define RULE 495
#define SAVEPOINT 496
#define SCHEMA 497
#define SCROLL 498
#define SECOND_P 499
#define SECURITY 500
#define SELECT 501
#define SEQUENCE 502
#define SERIALIZABLE 503
#define SESSION 504
#define SESSION_USER 505
#define SET 506
#define SETOF 507
#define SHARE 508
#define SHOW 509
#define SIMILAR 510
#define SIMPLE 511
#define SMALLINT 512
#define SOME 513
#define STABLE 514
#define START 515
#define STATEMENT 516
#define STATISTICS 517
#define STDIN 518
#define STDOUT 519
#define STORAGE 520
#define STRICT_P 521
#define SUBSTRING 522
#define SYSID 523
#define TABLE 524
#define TABLESPACE 525
#define TEMP 526
#define TEMPLATE 527
#define TEMPORARY 528
#define THEN 529
#define TIME 530
#define TIMESTAMP 531
#define TO 532
#define TOAST 533
#define TRAILING 534
#define TRANSACTION 535
#define TREAT 536
#define TRIGGER 537
#define TRIM 538
#define TRUE_P 539
#define TRUNCATE 540
#define TRUSTED 541
#define TYPE_P 542
#define UNCOMMITTED 543
#define UNENCRYPTED 544
#define UNION 545
#define UNIQUE 546
#define UNKNOWN 547
#define UNLISTEN 548
#define UNTIL 549
#define UPDATE 550
#define USAGE 551
#define USER 552
#define USING 553
#define VACUUM 554
#define VALID 555
#define VALIDATOR 556
#define VALUES 557
#define VARCHAR 558
#define VARYING 559
#define VERBOSE 560
#define VIEW 561
#define VOLATILE 562
#define WHEN 563
#define WHERE 564
#define WITH 565
#define WITHOUT 566
#define WORK 567
#define WRITE 568
#define YEAR_P 569
#define ZONE 570
#define UNIONJOIN 571
#define IDENT 572
#define FCONST 573
#define SCONST 574
#define BCONST 575
#define XCONST 576
#define Op 577
#define ICONST 578
#define PARAM 579
#define POSTFIXOP 580
#define UMINUS 581
#define TYPECAST 582




/* Copy the first part of user declarations.  */
#line 1 "gram.y"


/*#define YYDEBUG 1*/
/*-------------------------------------------------------------------------
 *
 * gram.y
 *	  POSTGRES SQL YACC rules/actions
 *
 * Portions Copyright (c) 1996-2005, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL: pgsql/src/backend/parser/gram.y,v 2.481 2004/12/31 22:00:27 pgsql Exp $
 *
 * HISTORY
 *	  AUTHOR			DATE			MAJOR EVENT
 *	  Andrew Yu			Sept, 1994		POSTQUEL to SQL conversion
 *	  Andrew Yu			Oct, 1994		lispy code conversion
 *
 * NOTES
 *	  CAPITALS are used to represent terminal symbols.
 *	  non-capitals are used to represent non-terminals.
 *	  SQL92-specific syntax is separated from plain SQL/Postgres syntax
 *	  to help isolate the non-extensible portions of the parser.
 *
 *	  In general, nothing in this file should initiate database accesses
 *	  nor depend on changeable state (such as SET variables).  If you do
 *	  database accesses, your code will fail when we have aborted the
 *	  current transaction and are just parsing commands to find the next
 *	  ROLLBACK or COMMIT.  If you make use of SET variables, then you
 *	  will do the wrong thing in multi-query strings like this:
 *			SET SQL_inheritance TO off; SELECT * FROM foo;
 *	  because the entire string is parsed by gram.y before the SET gets
 *	  executed.  Anything that depends on the database or changeable state
 *	  should be handled inside parse_analyze() so that it happens at the
 *	  right time not the wrong time.  The handling of SQL_inheritance is
 *	  a good example.
 *
 * WARNINGS
 *	  If you use a list, make sure the datum is a node so that the printing
 *	  routines work.
 *
 *	  Sometimes we assign constants to makeStrings. Make sure we don't free
 *	  those.
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include <ctype.h>
#include <limits.h>

#include "catalog/index.h"
#include "catalog/namespace.h"
#include "nodes/makefuncs.h"
#include "parser/gramparse.h"
#include "storage/lmgr.h"
#include "utils/date.h"
#include "utils/datetime.h"
#include "utils/numeric.h"


extern List *parsetree;			/* final parse result is delivered here */

static bool QueryIsRule = FALSE;

/*
 * If you need access to certain yacc-generated variables and find that
 * they're static by default, uncomment the next line.  (this is not a
 * problem, yet.)
 */
/*#define __YYSCLASS*/

static Node *makeColumnRef(char *relname, List *indirection);
static Node *makeTypeCast(Node *arg, TypeName *typename);
static Node *makeStringConst(char *str, TypeName *typename);
static Node *makeIntConst(int val);
static Node *makeFloatConst(char *str);
static Node *makeAConst(Value *v);
static Node *makeRowNullTest(NullTestType test, RowExpr *row);
static DefElem *makeDefElem(char *name, Node *arg);
static A_Const *makeBoolAConst(bool state);
static FuncCall *makeOverlaps(List *largs, List *rargs);
static void check_qualified_name(List *names);
static List *check_func_name(List *names);
static List *extractArgTypes(List *parameters);
static SelectStmt *findLeftmostSelect(SelectStmt *node);
static void insertSelectOptions(SelectStmt *stmt,
								List *sortClause, List *forUpdate,
								Node *limitOffset, Node *limitCount);
static Node *makeSetOp(SetOperation op, bool all, Node *larg, Node *rarg);
static Node *doNegate(Node *n);
static void doNegateFloat(Value *v);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 100 "gram.y"
typedef union YYSTYPE {
	int					ival;
	char				chr;
	char				*str;
	const char			*keyword;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	ContainsOids		withoids;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;

	TypeName			*typnam;
	FunctionParameter   *fun_param;
	DefElem				*defelt;
	SortBy				*sortby;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	A_Indices			*aind;
	ResTarget			*target;
	PrivTarget			*privtarget;

	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 857 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 869 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  527
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   30890

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  345
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  377
/* YYNRULES -- Number of rules. */
#define YYNRULES  1535
/* YYNRULES -- Number of states. */
#define YYNSTATES  2633

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   582

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   333,     2,     2,
     338,   339,   331,   329,   343,   330,   341,   332,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   344,   342,
     326,   325,   327,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   336,     2,   337,   334,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     328,   335,   340
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    71,    73,    75,    77,    79,
      81,    83,    85,    87,    89,    91,    93,    95,    97,    99,
     101,   103,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   131,   133,   135,   137,   139,
     141,   143,   145,   147,   149,   151,   153,   155,   157,   159,
     160,   166,   168,   169,   175,   181,   186,   190,   193,   194,
     197,   201,   205,   208,   210,   212,   214,   216,   220,   224,
     228,   230,   236,   239,   240,   243,   246,   253,   255,   257,
     261,   268,   273,   275,   276,   279,   280,   282,   284,   286,
     288,   290,   292,   295,   299,   303,   307,   311,   315,   318,
     324,   327,   331,   335,   337,   341,   343,   345,   347,   351,
     353,   355,   357,   360,   363,   366,   368,   370,   372,   374,
     376,   378,   380,   384,   391,   393,   395,   397,   399,   401,
     402,   404,   406,   409,   413,   418,   422,   425,   428,   432,
     437,   441,   444,   449,   451,   453,   455,   457,   459,   464,
     469,   471,   475,   479,   484,   491,   498,   505,   512,   517,
     524,   527,   532,   536,   540,   544,   548,   550,   552,   556,
     560,   564,   568,   571,   573,   575,   576,   579,   580,   583,
     594,   596,   598,   600,   602,   604,   607,   608,   610,   612,
     616,   620,   622,   626,   630,   634,   639,   641,   642,   645,
     646,   650,   651,   653,   654,   666,   679,   681,   683,   686,
     689,   692,   695,   696,   698,   699,   701,   705,   707,   709,
     711,   715,   718,   719,   723,   725,   727,   730,   732,   735,
     739,   744,   747,   753,   755,   758,   761,   764,   768,   771,
     774,   775,   779,   781,   786,   792,   799,   811,   815,   816,
     818,   822,   824,   827,   830,   833,   834,   836,   838,   841,
     844,   845,   849,   853,   856,   858,   860,   863,   866,   871,
     872,   875,   878,   879,   883,   888,   893,   894,   897,   898,
     903,   904,   912,   916,   920,   922,   926,   927,   929,   933,
     935,   941,   946,   949,   950,   953,   955,   958,   962,   965,
     968,   971,   974,   978,   982,   984,   985,   987,   989,   991,
     994,   996,   999,  1009,  1011,  1012,  1014,  1017,  1020,  1021,
    1024,  1025,  1031,  1033,  1034,  1041,  1044,  1045,  1049,  1064,
    1084,  1086,  1088,  1090,  1094,  1100,  1102,  1104,  1106,  1110,
    1111,  1113,  1114,  1116,  1118,  1120,  1124,  1125,  1127,  1129,
    1131,  1133,  1135,  1137,  1140,  1141,  1143,  1146,  1148,  1151,
    1152,  1155,  1157,  1160,  1163,  1170,  1179,  1184,  1189,  1194,
    1199,  1207,  1211,  1213,  1217,  1221,  1223,  1225,  1227,  1229,
    1231,  1244,  1246,  1250,  1255,  1263,  1268,  1271,  1273,  1274,
    1276,  1277,  1285,  1290,  1292,  1294,  1296,  1298,  1300,  1302,
    1304,  1306,  1308,  1312,  1314,  1317,  1320,  1324,  1328,  1335,
    1345,  1353,  1363,  1372,  1381,  1388,  1397,  1407,  1415,  1426,
    1434,  1436,  1438,  1440,  1442,  1444,  1446,  1448,  1450,  1452,
    1454,  1456,  1458,  1463,  1466,  1471,  1474,  1475,  1477,  1479,
    1481,  1483,  1486,  1489,  1491,  1493,  1495,  1498,  1501,  1503,
    1506,  1509,  1511,  1514,  1516,  1518,  1526,  1535,  1537,  1539,
    1542,  1544,  1548,  1550,  1552,  1554,  1556,  1558,  1560,  1562,
    1564,  1566,  1568,  1570,  1572,  1574,  1577,  1580,  1583,  1586,
    1589,  1592,  1594,  1598,  1600,  1603,  1607,  1608,  1612,  1613,
    1615,  1619,  1622,  1635,  1637,  1638,  1641,  1642,  1644,  1648,
    1651,  1654,  1659,  1661,  1664,  1665,  1675,  1678,  1679,  1683,
    1686,  1688,  1692,  1696,  1699,  1701,  1703,  1705,  1706,  1708,
    1710,  1712,  1717,  1719,  1722,  1725,  1728,  1730,  1732,  1734,
    1739,  1745,  1747,  1751,  1755,  1758,  1761,  1763,  1767,  1770,
    1771,  1777,  1785,  1787,  1789,  1797,  1799,  1803,  1807,  1811,
    1813,  1817,  1829,  1840,  1843,  1846,  1847,  1856,  1861,  1866,
    1868,  1870,  1872,  1873,  1883,  1890,  1897,  1905,  1912,  1919,
    1929,  1936,  1943,  1950,  1959,  1968,  1975,  1982,  1984,  1985,
    1995,  2002,  2009,  2016,  2024,  2034,  2044,  2051,  2058,  2065,
    2066,  2081,  2083,  2085,  2089,  2093,  2095,  2097,  2099,  2101,
    2103,  2105,  2107,  2108,  2110,  2112,  2114,  2116,  2118,  2120,
    2121,  2128,  2131,  2134,  2137,  2140,  2143,  2147,  2151,  2154,
    2157,  2160,  2163,  2167,  2170,  2176,  2181,  2183,  2185,  2186,
    2190,  2193,  2196,  2198,  2202,  2205,  2207,  2208,  2216,  2219,
    2225,  2228,  2229,  2233,  2237,  2241,  2245,  2249,  2253,  2257,
    2261,  2265,  2269,  2273,  2275,  2276,  2282,  2287,  2291,  2298,
    2303,  2310,  2317,  2323,  2331,  2333,  2334,  2345,  2350,  2353,
    2355,  2360,  2366,  2372,  2375,  2380,  2382,  2384,  2386,  2387,
    2389,  2390,  2392,  2393,  2397,  2398,  2403,  2405,  2407,  2409,
    2411,  2413,  2415,  2417,  2418,  2424,  2428,  2429,  2431,  2435,
    2437,  2439,  2441,  2443,  2447,  2457,  2461,  2462,  2465,  2469,
    2474,  2479,  2482,  2484,  2492,  2497,  2499,  2503,  2506,  2511,
    2517,  2521,  2522,  2525,  2528,  2531,  2535,  2537,  2541,  2543,
    2546,  2548,  2549,  2556,  2564,  2565,  2569,  2572,  2575,  2578,
    2579,  2582,  2585,  2587,  2589,  2593,  2597,  2599,  2602,  2607,
    2612,  2614,  2616,  2625,  2630,  2635,  2640,  2643,  2644,  2648,
    2652,  2657,  2662,  2667,  2672,  2675,  2677,  2679,  2680,  2682,
    2684,  2685,  2687,  2693,  2695,  2696,  2698,  2699,  2703,  2705,
    2709,  2713,  2716,  2719,  2721,  2726,  2731,  2734,  2737,  2742,
    2744,  2745,  2747,  2749,  2751,  2755,  2756,  2759,  2760,  2764,
    2768,  2770,  2771,  2774,  2775,  2778,  2779,  2781,  2785,  2787,
    2790,  2792,  2795,  2801,  2808,  2814,  2816,  2819,  2821,  2826,
    2830,  2835,  2839,  2845,  2850,  2856,  2861,  2867,  2870,  2875,
    2877,  2880,  2883,  2886,  2888,  2890,  2891,  2896,  2899,  2901,
    2904,  2907,  2912,  2914,  2917,  2918,  2920,  2924,  2927,  2930,
    2934,  2940,  2947,  2951,  2956,  2957,  2959,  2961,  2963,  2965,
    2967,  2970,  2976,  2979,  2981,  2983,  2985,  2987,  2989,  2991,
    2993,  2995,  2997,  2999,  3001,  3004,  3007,  3010,  3013,  3016,
    3018,  3022,  3023,  3029,  3033,  3034,  3040,  3044,  3045,  3047,
    3049,  3051,  3053,  3059,  3062,  3064,  3066,  3068,  3070,  3076,
    3079,  3082,  3085,  3087,  3091,  3095,  3098,  3100,  3101,  3105,
    3106,  3112,  3115,  3121,  3124,  3126,  3130,  3134,  3135,  3137,
    3139,  3141,  3143,  3145,  3147,  3151,  3155,  3159,  3163,  3167,
    3171,  3175,  3176,  3178,  3182,  3188,  3191,  3194,  3197,  3200,
    3203,  3206,  3210,  3214,  3218,  3222,  3226,  3230,  3234,  3238,
    3242,  3246,  3249,  3252,  3256,  3260,  3263,  3267,  3273,  3278,
    3285,  3289,  3295,  3300,  3307,  3312,  3319,  3325,  3333,  3336,
    3340,  3343,  3348,  3352,  3356,  3361,  3365,  3370,  3374,  3379,
    3385,  3392,  3400,  3406,  3413,  3417,  3422,  3427,  3434,  3437,
    3439,  3443,  3446,  3449,  3452,  3455,  3458,  3461,  3465,  3469,
    3473,  3477,  3481,  3485,  3489,  3493,  3497,  3501,  3504,  3507,
    3513,  3520,  3528,  3530,  3532,  3535,  3540,  3542,  3544,  3546,
    3549,  3552,  3555,  3557,  3561,  3566,  3572,  3578,  3583,  3585,
    3587,  3592,  3594,  3599,  3601,  3606,  3608,  3613,  3615,  3617,
    3619,  3626,  3631,  3636,  3641,  3646,  3653,  3659,  3665,  3671,
    3676,  3683,  3688,  3695,  3700,  3705,  3709,  3715,  3717,  3719,
    3721,  3723,  3725,  3727,  3729,  3731,  3733,  3735,  3737,  3739,
    3741,  3743,  3745,  3750,  3752,  3757,  3759,  3764,  3766,  3769,
    3771,  3774,  3776,  3780,  3784,  3785,  3789,  3791,  3793,  3797,
    3801,  3805,  3807,  3809,  3811,  3813,  3815,  3817,  3819,  3821,
    3826,  3830,  3833,  3837,  3838,  3842,  3846,  3849,  3852,  3854,
    3855,  3858,  3861,  3865,  3868,  3870,  3872,  3876,  3882,  3884,
    3887,  3892,  3895,  3896,  3898,  3899,  3901,  3904,  3907,  3910,
    3914,  3920,  3922,  3925,  3926,  3929,  3931,  3935,  3939,  3941,
    3943,  3945,  3949,  3954,  3959,  3961,  3965,  3967,  3969,  3971,
    3973,  3975,  3979,  3981,  3984,  3986,  3990,  3992,  3994,  3996,
    3998,  4000,  4002,  4004,  4007,  4009,  4011,  4013,  4015,  4017,
    4020,  4024,  4031,  4033,  4035,  4037,  4039,  4041,  4043,  4045,
    4047,  4049,  4051,  4053,  4055,  4057,  4059,  4061,  4063,  4065,
    4067,  4069,  4071,  4073,  4075,  4077,  4079,  4081,  4083,  4085,
    4087,  4089,  4091,  4093,  4095,  4097,  4099,  4101,  4103,  4105,
    4107,  4109,  4111,  4113,  4115,  4117,  4119,  4121,  4123,  4125,
    4127,  4129,  4131,  4133,  4135,  4137,  4139,  4141,  4143,  4145,
    4147,  4149,  4151,  4153,  4155,  4157,  4159,  4161,  4163,  4165,
    4167,  4169,  4171,  4173,  4175,  4177,  4179,  4181,  4183,  4185,
    4187,  4189,  4191,  4193,  4195,  4197,  4199,  4201,  4203,  4205,
    4207,  4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4225,
    4227,  4229,  4231,  4233,  4235,  4237,  4239,  4241,  4243,  4245,
    4247,  4249,  4251,  4253,  4255,  4257,  4259,  4261,  4263,  4265,
    4267,  4269,  4271,  4273,  4275,  4277,  4279,  4281,  4283,  4285,
    4287,  4289,  4291,  4293,  4295,  4297,  4299,  4301,  4303,  4305,
    4307,  4309,  4311,  4313,  4315,  4317,  4319,  4321,  4323,  4325,
    4327,  4329,  4331,  4333,  4335,  4337,  4339,  4341,  4343,  4345,
    4347,  4349,  4351,  4353,  4355,  4357,  4359,  4361,  4363,  4365,
    4367,  4369,  4371,  4373,  4375,  4377,  4379,  4381,  4383,  4385,
    4387,  4389,  4391,  4393,  4395,  4397,  4399,  4401,  4403,  4405,
    4407,  4409,  4411,  4413,  4415,  4417,  4419,  4421,  4423,  4425,
    4427,  4429,  4431,  4433,  4435,  4437,  4439,  4441,  4443,  4445,
    4447,  4449,  4451,  4453,  4455,  4457,  4459,  4461,  4463,  4465,
    4467,  4469,  4471,  4473,  4475,  4477,  4479,  4481,  4483,  4485,
    4487,  4489,  4491,  4493,  4495,  4497,  4499,  4501,  4503,  4505,
    4507,  4509,  4511,  4513,  4515,  4517,  4519,  4521,  4523,  4525,
    4527,  4529,  4531,  4533,  4535,  4537,  4539,  4541,  4543,  4545,
    4547,  4549,  4551,  4553,  4555,  4557,  4559,  4561,  4563,  4565,
    4567,  4569,  4571,  4573,  4575,  4577,  4579,  4581,  4583,  4585,
    4587,  4589,  4591,  4593,  4595,  4597,  4599,  4601,  4603,  4605,
    4607,  4609,  4611,  4613,  4615,  4617,  4619,  4621,  4623,  4625,
    4627,  4629,  4631,  4633,  4635,  4637,  4639,  4641,  4643,  4645,
    4647,  4649,  4651,  4653,  4655,  4657,  4659,  4661,  4663,  4665,
    4667,  4669,  4671,  4673,  4675,  4677,  4679,  4681,  4683,  4685,
    4687,  4689,  4691,  4693,  4695,  4697
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     346,     0,    -1,   347,    -1,   347,   342,   348,    -1,   348,
      -1,   561,    -1,   564,    -1,   360,    -1,   537,    -1,   435,
      -1,   384,    -1,   352,    -1,   351,    -1,   569,    -1,   383,
      -1,   392,    -1,   567,    -1,   485,    -1,   380,    -1,   393,
      -1,   429,    -1,   466,    -1,   529,    -1,   566,    -1,   563,
      -1,   510,    -1,   357,    -1,   473,    -1,   442,    -1,   363,
      -1,   434,    -1,   402,    -1,   449,    -1,   452,    -1,   349,
      -1,   557,    -1,   584,    -1,   595,    -1,   468,    -1,   589,
      -1,   467,    -1,   531,    -1,   362,    -1,   478,    -1,   447,
      -1,   546,    -1,   479,    -1,   451,    -1,   465,    -1,   353,
      -1,   562,    -1,   582,    -1,   575,    -1,   488,    -1,   492,
      -1,   504,    -1,   585,    -1,   548,    -1,   556,    -1,   590,
      -1,   547,    -1,   578,    -1,   532,    -1,   524,    -1,   523,
      -1,   526,    -1,   535,    -1,   493,    -1,   538,    -1,   598,
      -1,   550,    -1,   484,    -1,   549,    -1,   594,    -1,   568,
      -1,   379,    -1,   367,    -1,   378,    -1,   555,    -1,    -1,
      59,   297,   712,   350,   354,    -1,   310,    -1,    -1,    12,
     297,   712,   350,   354,    -1,    12,   297,   712,   251,   368,
      -1,    12,   297,   712,   379,    -1,    89,   297,   356,    -1,
     354,   355,    -1,    -1,   209,   711,    -1,    93,   209,   711,
      -1,   289,   209,   711,    -1,   268,   710,    -1,    60,    -1,
     180,    -1,    61,    -1,   181,    -1,   127,   118,   356,    -1,
     300,   294,   711,    -1,   356,   343,   712,    -1,   712,    -1,
      59,   118,   712,   350,   358,    -1,   358,   359,    -1,    -1,
     297,   356,    -1,   268,   710,    -1,    12,   118,   712,   361,
     297,   356,    -1,     7,    -1,    89,    -1,    89,   118,   712,
      -1,    59,   242,   364,    23,   712,   365,    -1,    59,   242,
     713,   365,    -1,   713,    -1,    -1,   365,   366,    -1,    -1,
     402,    -1,   504,    -1,   434,    -1,   452,    -1,   492,    -1,
     555,    -1,   251,   368,    -1,   251,   161,   368,    -1,   251,
     249,   368,    -1,   369,   277,   370,    -1,   369,   325,   370,
      -1,   275,   315,   375,    -1,   280,   553,    -1,   249,    42,
      18,   280,   553,    -1,   173,   376,    -1,   249,    23,   377,
      -1,   249,    23,    76,    -1,   713,    -1,   369,   341,   713,
      -1,   371,    -1,    76,    -1,   372,    -1,   371,   343,   372,
      -1,   374,    -1,   377,    -1,   439,    -1,   221,   288,    -1,
     221,    53,    -1,   229,   221,    -1,   248,    -1,   284,    -1,
     104,    -1,   197,    -1,   193,    -1,   711,    -1,   317,    -1,
     655,   711,   657,    -1,   655,   338,   710,   339,   711,   657,
      -1,   439,    -1,    76,    -1,   161,    -1,   711,    -1,    76,
      -1,    -1,   713,    -1,   319,    -1,   254,   713,    -1,   254,
     275,   315,    -1,   254,   280,   147,   156,    -1,   254,   249,
      23,    -1,   254,    10,    -1,   231,   713,    -1,   231,   275,
     315,    -1,   231,   280,   147,   156,    -1,   231,   249,    23,
      -1,   231,    10,    -1,   251,    55,   381,   382,    -1,    10,
      -1,   701,    -1,    79,    -1,   124,    -1,    44,    -1,    12,
     269,   629,   385,    -1,    12,   130,   629,   387,    -1,   386,
      -1,   385,   343,   386,    -1,     7,   536,   407,    -1,    12,
     536,   713,   389,    -1,    12,   536,   713,    89,   183,   188,
      -1,    12,   536,   713,   251,   183,   188,    -1,    12,   536,
     713,   251,   262,   441,    -1,    12,   536,   713,   251,   265,
     713,    -1,    89,   536,   713,   390,    -1,    12,   536,   713,
     287,   634,   391,    -1,     7,   414,    -1,    89,    54,   702,
     390,    -1,   251,   311,   195,    -1,    59,   278,   269,    -1,
      47,   197,   702,    -1,   251,   311,    47,    -1,   388,    -1,
     388,    -1,   387,   343,   388,    -1,   207,   277,   712,    -1,
     251,   270,   702,    -1,   251,    76,   658,    -1,    89,    76,
      -1,    36,    -1,   233,    -1,    -1,   298,   658,    -1,    -1,
      46,   702,    -1,    58,   398,   700,   416,   399,   394,   395,
     400,   350,   396,    -1,   113,    -1,   277,    -1,   711,    -1,
     263,    -1,   264,    -1,   396,   397,    -1,    -1,    29,    -1,
     195,    -1,    82,   565,   711,    -1,   188,   565,   711,    -1,
      63,    -1,   220,   565,   711,    -1,    95,   565,   711,    -1,
     109,   220,   417,    -1,   109,   183,   188,   417,    -1,    29,
      -1,    -1,   310,   195,    -1,    -1,   401,    83,   711,    -1,
      -1,   298,    -1,    -1,    59,   403,   269,   700,   338,   404,
     339,   424,   425,   426,   427,    -1,    59,   403,   269,   700,
     192,   700,   338,   404,   339,   425,   426,   427,    -1,   273,
      -1,   271,    -1,   161,   273,    -1,   161,   271,    -1,   116,
     273,    -1,   116,   271,    -1,    -1,   405,    -1,    -1,   406,
      -1,   405,   343,   406,    -1,   407,    -1,   412,    -1,   414,
      -1,   713,   634,   408,    -1,   408,   409,    -1,    -1,    54,
     702,   410,    -1,   410,    -1,   411,    -1,   183,   188,    -1,
     188,    -1,   291,   428,    -1,   215,   149,   428,    -1,    43,
     338,   658,   339,    -1,    76,   659,    -1,   224,   700,   416,
     419,   420,    -1,    78,    -1,   183,    78,    -1,   132,    79,
      -1,   132,   124,    -1,   157,   700,   413,    -1,   128,    77,
      -1,    97,    77,    -1,    -1,    54,   702,   415,    -1,   415,
      -1,    43,   338,   658,   339,    -1,   291,   338,   417,   339,
     428,    -1,   215,   149,   338,   417,   339,   428,    -1,   110,
     149,   338,   417,   339,   224,   700,   416,   419,   420,   462,
      -1,   338,   417,   339,    -1,    -1,   418,    -1,   417,   343,
     418,    -1,   713,    -1,   166,   114,    -1,   166,   208,    -1,
     166,   256,    -1,    -1,   421,    -1,   422,    -1,   421,   422,
      -1,   422,   421,    -1,    -1,   197,   295,   423,    -1,   197,
      81,   423,    -1,   179,     6,    -1,   233,    -1,    36,    -1,
     251,   188,    -1,   251,    76,    -1,   131,   338,   699,   339,
      -1,    -1,   310,   195,    -1,   311,   195,    -1,    -1,   197,
      52,    89,    -1,   197,    52,    81,   239,    -1,   197,    52,
     213,   239,    -1,    -1,   270,   702,    -1,    -1,   298,   130,
     270,   702,    -1,    -1,    59,   403,   269,   700,   431,   430,
     598,    -1,   310,   195,    18,    -1,   311,   195,    18,    -1,
      18,    -1,   338,   432,   339,    -1,    -1,   433,    -1,   432,
     343,   433,    -1,   713,    -1,    59,   403,   247,   700,   436,
      -1,    12,   247,   700,   436,    -1,   436,   437,    -1,    -1,
      34,   439,    -1,    69,    -1,   179,    69,    -1,   129,   438,
     439,    -1,   167,   439,    -1,   169,   439,    -1,   179,   167,
      -1,   179,   169,    -1,   260,   350,   439,    -1,   232,   350,
     439,    -1,    33,    -1,    -1,   440,    -1,   441,    -1,   318,
      -1,   330,   318,    -1,   710,    -1,   330,   710,    -1,    59,
     443,   448,   151,   377,   119,   444,   446,   445,    -1,   286,
      -1,    -1,   702,    -1,   702,   483,    -1,   150,   711,    -1,
      -1,   301,   444,    -1,    -1,    89,   448,   151,   377,   390,
      -1,   218,    -1,    -1,    59,   270,   702,   450,   164,   711,
      -1,   207,   702,    -1,    -1,    89,   270,   702,    -1,    59,
     282,   702,   453,   454,   197,   700,   456,    99,   219,   708,
     338,   459,   339,    -1,    59,    54,   282,   702,     8,   454,
     197,   700,   461,   462,   108,    90,   238,    99,   219,   708,
     338,   459,   339,    -1,    25,    -1,     8,    -1,   455,    -1,
     455,   201,   455,    -1,   455,   201,   455,   201,   455,    -1,
     137,    -1,    81,    -1,   295,    -1,   108,   457,   458,    -1,
      -1,    90,    -1,    -1,   238,    -1,   261,    -1,   460,    -1,
     459,   343,   460,    -1,    -1,   323,    -1,   318,    -1,   711,
      -1,   320,    -1,   321,    -1,   713,    -1,   113,   700,    -1,
      -1,   463,    -1,   463,   464,    -1,   464,    -1,   464,   463,
      -1,    -1,   183,    78,    -1,    78,    -1,   132,   124,    -1,
     132,    79,    -1,    89,   282,   702,   197,   700,   390,    -1,
      59,    20,   702,    43,   338,   658,   339,   462,    -1,    89,
      20,   702,   390,    -1,    59,     9,   708,   469,    -1,    59,
     199,   528,   469,    -1,    59,   287,   482,   469,    -1,    59,
     287,   482,    18,   338,   632,   339,    -1,   338,   470,   339,
      -1,   471,    -1,   470,   343,   471,    -1,   716,   325,   472,
      -1,   716,    -1,   517,    -1,   667,    -1,   439,    -1,   711,
      -1,    59,   199,    45,   482,   476,   108,   287,   634,   298,
     704,    18,   474,    -1,   475,    -1,   474,   343,   475,    -1,
     199,   710,   528,   477,    -1,   199,   710,   528,   338,   527,
     339,   477,    -1,   115,   710,   708,   512,    -1,   265,   634,
      -1,    76,    -1,    -1,   223,    -1,    -1,    89,   199,    45,
     482,   298,   704,   390,    -1,    89,   480,   481,   390,    -1,
     269,    -1,   247,    -1,   306,    -1,   130,    -1,   287,    -1,
      87,    -1,    56,    -1,   242,    -1,   482,    -1,   481,   343,
     482,    -1,   713,    -1,   713,   483,    -1,   341,   705,    -1,
     483,   341,   705,    -1,   285,   605,   700,    -1,    51,   197,
     486,   482,   145,   487,    -1,    51,   197,     9,   708,   338,
     525,   339,   145,   487,    -1,    51,   197,   115,   708,   512,
     145,   487,    -1,    51,   197,   199,   528,   338,   527,   339,
     145,   487,    -1,    51,   197,    54,   702,   197,   482,   145,
     487,    -1,    51,   197,   240,   702,   197,   482,   145,   487,
      -1,    51,   197,   240,   702,   145,   487,    -1,    51,   197,
     282,   702,   197,   482,   145,   487,    -1,    51,   197,   199,
      45,   482,   298,   704,   145,   487,    -1,    51,   197,   152,
     191,   439,   145,   487,    -1,    51,   197,    38,   338,   634,
      18,   634,   339,   145,   487,    -1,    51,   197,   448,   151,
     482,   145,   487,    -1,    50,    -1,    70,    -1,   242,    -1,
     130,    -1,   247,    -1,   269,    -1,    87,    -1,   287,    -1,
     306,    -1,    56,    -1,   711,    -1,   188,    -1,   105,   489,
     491,   702,    -1,   105,   702,    -1,   172,   489,   491,   702,
      -1,   172,   702,    -1,    -1,   178,    -1,   216,    -1,   106,
      -1,   153,    -1,     4,   490,    -1,   226,   490,    -1,   490,
      -1,    10,    -1,   111,    -1,   111,   490,    -1,   111,    10,
      -1,    24,    -1,    24,   490,    -1,    24,    10,    -1,   710,
      -1,   330,   710,    -1,   113,    -1,   127,    -1,   117,   494,
     197,   497,   277,   498,   500,    -1,   235,   501,   494,   197,
     497,   113,   498,   390,    -1,   495,    -1,    10,    -1,    10,
     217,    -1,   496,    -1,   495,   343,   496,    -1,   246,    -1,
     137,    -1,   295,    -1,    81,    -1,   240,    -1,   224,    -1,
     282,    -1,    99,    -1,   296,    -1,    59,    -1,   273,    -1,
     271,    -1,   699,    -1,   269,   699,    -1,   115,   502,    -1,
      70,   701,    -1,   151,   701,    -1,   242,   701,    -1,   270,
     701,    -1,   499,    -1,   498,   343,   499,    -1,   713,    -1,
     118,   713,    -1,   310,   117,   200,    -1,    -1,   117,   200,
     108,    -1,    -1,   503,    -1,   502,   343,   503,    -1,   708,
     512,    -1,    59,   505,   130,   706,   197,   700,   506,   338,
     507,   339,   427,   631,    -1,   291,    -1,    -1,   298,   704,
      -1,    -1,   508,    -1,   507,   343,   508,    -1,   713,   509,
      -1,   661,   509,    -1,   338,   658,   339,   509,    -1,   482,
      -1,   298,   482,    -1,    -1,    59,   511,   115,   708,   512,
     234,   517,   519,   522,    -1,   201,   230,    -1,    -1,   338,
     513,   339,    -1,   338,   339,    -1,   514,    -1,   513,   343,
     514,    -1,   515,   516,   518,    -1,   515,   518,    -1,   127,
      -1,   203,    -1,   134,    -1,    -1,   715,    -1,   518,    -1,
     634,    -1,   714,   483,   333,   287,    -1,   520,    -1,   519,
     520,    -1,    18,   521,    -1,   151,   377,    -1,   125,    -1,
     259,    -1,   307,    -1,    35,   197,   188,   135,    -1,   234,
     188,   197,   188,   135,    -1,   266,    -1,   102,   245,    80,
      -1,   102,   245,   144,    -1,   245,    80,    -1,   245,   144,
      -1,   711,    -1,   711,   343,   711,    -1,   310,   469,    -1,
      -1,    89,   115,   708,   512,   390,    -1,    89,     9,   708,
     338,   525,   339,   390,    -1,   634,    -1,   331,    -1,    89,
     199,   528,   338,   527,   339,   390,    -1,   634,    -1,   634,
     343,   634,    -1,   182,   343,   634,    -1,   634,   343,   182,
      -1,   664,    -1,   713,   341,   528,    -1,    59,    38,   338,
     634,    18,   634,   339,   310,   115,   503,   530,    -1,    59,
      38,   338,   634,    18,   634,   339,   311,   115,   530,    -1,
      18,   126,    -1,    18,    21,    -1,    -1,    89,    38,   338,
     634,    18,   634,   339,   390,    -1,   225,   533,   700,   534,
      -1,   225,    70,   702,   534,    -1,   130,    -1,   269,    -1,
     109,    -1,    -1,    12,     9,   708,   338,   525,   339,   228,
     277,   702,    -1,    12,    56,   482,   228,   277,   702,    -1,
      12,    70,   703,   228,   277,   703,    -1,    12,   115,   708,
     512,   228,   277,   702,    -1,    12,   118,   712,   228,   277,
     712,    -1,    12,   151,   702,   228,   277,   702,    -1,    12,
     199,    45,   482,   298,   704,   228,   277,   702,    -1,    12,
     242,   702,   228,   277,   702,    -1,    12,   269,   629,   228,
     277,   702,    -1,    12,   130,   629,   228,   277,   702,    -1,
      12,   269,   629,   228,   536,   702,   277,   702,    -1,    12,
     282,   702,   197,   629,   228,   277,   702,    -1,    12,   297,
     712,   228,   277,   712,    -1,    12,   270,   702,   228,   277,
     702,    -1,    50,    -1,    -1,    12,     9,   708,   338,   525,
     339,   207,   277,   712,    -1,    12,    56,   482,   207,   277,
     712,    -1,    12,    70,   703,   207,   277,   712,    -1,    12,
      87,   482,   207,   277,   712,    -1,    12,   115,   708,   512,
     207,   277,   712,    -1,    12,   199,   528,   338,   527,   339,
     207,   277,   712,    -1,    12,   199,    45,   482,   298,   704,
     207,   277,   712,    -1,    12,   242,   702,   207,   277,   712,
      -1,    12,   287,   482,   207,   277,   712,    -1,    12,   270,
     702,   207,   277,   712,    -1,    -1,    59,   511,   240,   702,
      18,   539,   197,   544,   277,   700,   631,    86,   545,   540,
      -1,   184,    -1,   542,    -1,   338,   541,   339,    -1,   541,
     342,   543,    -1,   543,    -1,   598,    -1,   585,    -1,   594,
      -1,   589,    -1,   547,    -1,   542,    -1,    -1,   246,    -1,
     295,    -1,    81,    -1,   137,    -1,   138,    -1,    11,    -1,
      -1,    89,   240,   702,   197,   700,   390,    -1,   185,   700,
      -1,   159,   700,    -1,   293,   700,    -1,   293,   331,    -1,
       3,   551,    -1,    26,   551,   554,    -1,   260,   280,   554,
      -1,    52,   551,    -1,    94,   551,    -1,   237,   551,    -1,
     241,   713,    -1,   227,   241,   713,    -1,   227,   713,    -1,
     237,   551,   277,   241,   713,    -1,   237,   551,   277,   713,
      -1,   312,    -1,   280,    -1,    -1,   147,   156,   373,    -1,
     221,   198,    -1,   221,   313,    -1,   552,    -1,   553,   343,
     552,    -1,   553,   552,    -1,   553,    -1,    -1,    59,   511,
     306,   700,   416,    18,   598,    -1,   160,   707,    -1,    59,
      70,   703,   350,   558,    -1,   558,   559,    -1,    -1,   270,
     560,   702,    -1,   270,   560,    76,    -1,   164,   560,   711,
      -1,   164,   560,    76,    -1,   272,   560,   702,    -1,   272,
     560,    76,    -1,    92,   560,   711,    -1,    92,   560,   710,
      -1,    92,   560,    76,    -1,   207,   560,   702,    -1,   207,
     560,    76,    -1,   325,    -1,    -1,    12,    70,   703,   251,
     368,    -1,    12,    70,   703,   379,    -1,    89,    70,   703,
      -1,    59,    87,   482,   565,   634,   408,    -1,    12,    87,
     482,   389,    -1,    12,    87,   482,    89,   183,   188,    -1,
      12,    87,   482,   251,   183,   188,    -1,    12,    87,   482,
       7,   414,    -1,    12,    87,   482,    89,    54,   702,   390,
      -1,    18,    -1,    -1,    59,   476,    56,   482,   108,   711,
     277,   711,   113,   482,    -1,    47,   706,   197,   700,    -1,
      47,   700,    -1,    47,    -1,   299,   572,   573,   571,    -1,
     299,   572,   573,   571,   700,    -1,   299,   572,   573,   571,
     569,    -1,   570,   571,    -1,   570,   571,   700,   574,    -1,
      14,    -1,    13,    -1,   305,    -1,    -1,   114,    -1,    -1,
     112,    -1,    -1,   338,   701,   339,    -1,    -1,   101,   577,
     571,   576,    -1,   598,    -1,   585,    -1,   594,    -1,   589,
      -1,   595,    -1,   582,    -1,   570,    -1,    -1,   214,   702,
     579,    18,   581,    -1,   338,   580,   339,    -1,    -1,   634,
      -1,   580,   343,   634,    -1,   598,    -1,   585,    -1,   594,
      -1,   589,    -1,    99,   702,   583,    -1,    59,   403,   269,
     700,   431,    18,    99,   702,   583,    -1,   338,   669,   339,
      -1,    -1,    72,   702,    -1,    72,   214,   702,    -1,   137,
     143,   700,   586,    -1,   302,   338,   696,   339,    -1,    76,
     302,    -1,   598,    -1,   338,   587,   339,   302,   338,   696,
     339,    -1,   338,   587,   339,   598,    -1,   588,    -1,   587,
     343,   588,    -1,   713,   691,    -1,    81,   113,   629,   631,
      -1,   165,   605,   699,   591,   593,    -1,   127,   592,   170,
      -1,    -1,     5,   253,    -1,   238,   253,    -1,   238,    98,
      -1,   253,   295,    98,    -1,   253,    -1,   253,   238,    98,
      -1,    98,    -1,     5,    98,    -1,   187,    -1,    -1,   295,
     629,   251,   694,   621,   631,    -1,    75,   702,   596,    68,
     597,   108,   598,    -1,    -1,   596,   179,   243,    -1,   596,
     243,    -1,   596,    29,    -1,   596,   136,    -1,    -1,   310,
     121,    -1,   311,   121,    -1,   600,    -1,   599,    -1,   338,
     600,   339,    -1,   338,   599,   339,    -1,   602,    -1,   601,
     609,    -1,   601,   608,   618,   613,    -1,   601,   608,   612,
     619,    -1,   602,    -1,   599,    -1,   246,   607,   692,   603,
     621,   631,   616,   617,    -1,   601,   290,   606,   601,    -1,
     601,   141,   606,   601,    -1,   601,    96,   606,   601,    -1,
     143,   604,    -1,    -1,   273,   605,   700,    -1,   271,   605,
     700,    -1,   161,   273,   605,   700,    -1,   161,   271,   605,
     700,    -1,   116,   273,   605,   700,    -1,   116,   271,   605,
     700,    -1,   269,   700,    -1,   700,    -1,   269,    -1,    -1,
      10,    -1,    85,    -1,    -1,    85,    -1,    85,   197,   338,
     669,   339,    -1,    10,    -1,    -1,   609,    -1,    -1,   202,
      33,   610,    -1,   611,    -1,   610,   343,   611,    -1,   658,
     298,   667,    -1,   658,    19,    -1,   658,    84,    -1,   658,
      -1,   158,   614,   194,   615,    -1,   194,   615,   158,   614,
      -1,   158,   614,    -1,   194,   615,    -1,   158,   614,   343,
     615,    -1,   612,    -1,    -1,   658,    -1,    10,    -1,   658,
      -1,   118,    33,   669,    -1,    -1,   120,   658,    -1,    -1,
     108,   295,   620,    -1,   108,   221,   198,    -1,   618,    -1,
      -1,   192,   701,    -1,    -1,   113,   622,    -1,    -1,   623,
      -1,   622,   343,   623,    -1,   629,    -1,   629,   625,    -1,
     630,    -1,   630,   625,    -1,   630,    18,   338,   632,   339,
      -1,   630,    18,   713,   338,   632,   339,    -1,   630,   713,
     338,   632,   339,    -1,   599,    -1,   599,   625,    -1,   624,
      -1,   338,   624,   339,   625,    -1,   338,   624,   339,    -1,
     623,    62,   148,   623,    -1,   623,   316,   623,    -1,   623,
     626,   148,   623,   628,    -1,   623,   148,   623,   628,    -1,
     623,   175,   626,   148,   623,    -1,   623,   175,   148,   623,
      -1,    18,   713,   338,   701,   339,    -1,    18,   713,    -1,
     713,   338,   701,   339,    -1,   713,    -1,   114,   627,    -1,
     155,   627,    -1,   236,   627,    -1,   133,    -1,   204,    -1,
      -1,   298,   338,   701,   339,    -1,   197,   658,    -1,   700,
      -1,   700,   331,    -1,   198,   700,    -1,   198,   338,   700,
     339,    -1,   661,    -1,   309,   658,    -1,    -1,   633,    -1,
     632,   343,   633,    -1,   713,   634,    -1,   636,   635,    -1,
     252,   636,   635,    -1,   636,    17,   336,   710,   337,    -1,
     252,   636,    17,   336,   710,   337,    -1,   635,   336,   337,
      -1,   635,   336,   710,   337,    -1,    -1,   638,    -1,   639,
      -1,   643,    -1,   647,    -1,   654,    -1,   655,   657,    -1,
     655,   338,   710,   339,   657,    -1,   714,   483,    -1,   638,
      -1,   639,    -1,   644,    -1,   648,    -1,   654,    -1,   714,
      -1,   139,    -1,   140,    -1,   257,    -1,    28,    -1,   222,
      -1,   107,   640,    -1,    88,   212,    -1,    74,   642,    -1,
      73,   642,    -1,   190,   641,    -1,    31,    -1,   338,   710,
     339,    -1,    -1,   338,   710,   343,   710,   339,    -1,   338,
     710,   339,    -1,    -1,   338,   710,   343,   710,   339,    -1,
     338,   710,   339,    -1,    -1,   645,    -1,   646,    -1,   645,
      -1,   646,    -1,    30,   652,   338,   710,   339,    -1,    30,
     652,    -1,   649,    -1,   650,    -1,   649,    -1,   650,    -1,
     651,   338,   710,   339,   653,    -1,   651,   653,    -1,    41,
     652,    -1,    40,   652,    -1,   303,    -1,   174,    41,   652,
      -1,   174,    40,   652,    -1,   176,   652,    -1,   304,    -1,
      -1,    41,   251,   713,    -1,    -1,   276,   338,   710,   339,
     656,    -1,   276,   656,    -1,   275,   338,   710,   339,   656,
      -1,   275,   656,    -1,   142,    -1,   310,   275,   315,    -1,
     311,   275,   315,    -1,    -1,   314,    -1,   171,    -1,    71,
      -1,   122,    -1,   168,    -1,   244,    -1,   314,   277,   171,
      -1,    71,   277,   122,    -1,    71,   277,   168,    -1,    71,
     277,   244,    -1,   122,   277,   168,    -1,   122,   277,   244,
      -1,   168,   277,   244,    -1,    -1,   660,    -1,   658,   340,
     634,    -1,   658,    22,   275,   315,   660,    -1,   329,   658,
      -1,   330,   658,    -1,   333,   658,    -1,   334,   658,    -1,
     658,   333,    -1,   658,   334,    -1,   658,   329,   658,    -1,
     658,   330,   658,    -1,   658,   331,   658,    -1,   658,   332,
     658,    -1,   658,   333,   658,    -1,   658,   334,   658,    -1,
     658,   326,   658,    -1,   658,   327,   658,    -1,   658,   325,
     658,    -1,   658,   666,   658,    -1,   666,   658,    -1,   658,
     666,    -1,   658,    15,   658,    -1,   658,   201,   658,    -1,
     183,   658,    -1,   658,   157,   658,    -1,   658,   157,   658,
      95,   658,    -1,   658,   183,   157,   658,    -1,   658,   183,
     157,   658,    95,   658,    -1,   658,   123,   658,    -1,   658,
     123,   658,    95,   658,    -1,   658,   183,   123,   658,    -1,
     658,   183,   123,   658,    95,   658,    -1,   658,   255,   277,
     658,    -1,   658,   255,   277,   658,    95,   658,    -1,   658,
     183,   255,   277,   658,    -1,   658,   183,   255,   277,   658,
      95,   658,    -1,   658,   146,    -1,   658,   145,   188,    -1,
     658,   186,    -1,   658,   145,   183,   188,    -1,   662,   205,
     662,    -1,   658,   145,   284,    -1,   658,   145,   183,   284,
      -1,   658,   145,   104,    -1,   658,   145,   183,   104,    -1,
     658,   145,   292,    -1,   658,   145,   183,   292,    -1,   658,
     145,    85,   113,   658,    -1,   658,   145,   192,   338,   671,
     339,    -1,   658,   145,   183,   192,   338,   671,   339,    -1,
     658,    27,   659,    15,   659,    -1,   658,   183,    27,   659,
      15,   659,    -1,   658,   127,   682,    -1,   658,   183,   127,
     682,    -1,   658,   668,   663,   599,    -1,   658,   668,   663,
     338,   658,   339,    -1,   291,   599,    -1,   660,    -1,   659,
     340,   634,    -1,   329,   659,    -1,   330,   659,    -1,   333,
     659,    -1,   334,   659,    -1,   659,   333,    -1,   659,   334,
      -1,   659,   329,   659,    -1,   659,   330,   659,    -1,   659,
     331,   659,    -1,   659,   332,   659,    -1,   659,   333,   659,
      -1,   659,   334,   659,    -1,   659,   326,   659,    -1,   659,
     327,   659,    -1,   659,   325,   659,    -1,   659,   666,   659,
      -1,   666,   659,    -1,   659,   666,    -1,   659,   145,    85,
     113,   659,    -1,   659,   145,   192,   338,   671,   339,    -1,
     659,   145,   183,   192,   338,   671,   339,    -1,   688,    -1,
     709,    -1,   324,   691,    -1,   338,   658,   339,   691,    -1,
     683,    -1,   661,    -1,   599,    -1,   100,   599,    -1,    17,
     599,    -1,    17,   673,    -1,   662,    -1,   708,   338,   339,
      -1,   708,   338,   669,   339,    -1,   708,   338,    10,   669,
     339,    -1,   708,   338,    85,   669,   339,    -1,   708,   338,
     331,   339,    -1,    64,    -1,    65,    -1,    65,   338,   710,
     339,    -1,    66,    -1,    66,   338,   710,   339,    -1,   162,
      -1,   162,   338,   710,   339,    -1,   163,    -1,   163,   338,
     710,   339,    -1,    67,    -1,   250,    -1,   297,    -1,    38,
     338,   658,    18,   634,   339,    -1,   103,   338,   670,   339,
      -1,   206,   338,   675,   339,    -1,   211,   338,   677,   339,
      -1,   267,   338,   678,   339,    -1,   281,   338,   658,    18,
     634,   339,    -1,   283,   338,    32,   681,   339,    -1,   283,
     338,   154,   681,   339,    -1,   283,   338,   279,   681,   339,
      -1,   283,   338,   681,   339,    -1,    57,   338,   658,   298,
     482,   339,    -1,    57,   338,   669,   339,    -1,   189,   338,
     658,   343,   658,   339,    -1,    48,   338,   669,   339,    -1,
     238,   338,   669,   339,    -1,   238,   338,   339,    -1,   338,
     669,   343,   658,   339,    -1,    16,    -1,   258,    -1,    10,
      -1,   322,    -1,   665,    -1,   329,    -1,   330,    -1,   331,
      -1,   332,    -1,   333,    -1,   334,    -1,   326,    -1,   327,
      -1,   325,    -1,   322,    -1,   199,   338,   528,   339,    -1,
     664,    -1,   199,   338,   528,   339,    -1,   664,    -1,   199,
     338,   528,   339,    -1,   157,    -1,   183,   157,    -1,   123,
      -1,   183,   123,    -1,   658,    -1,   669,   343,   658,    -1,
     674,   113,   658,    -1,    -1,   671,   343,   634,    -1,   634,
      -1,   673,    -1,   672,   343,   673,    -1,   336,   669,   337,
      -1,   336,   672,   337,    -1,   317,    -1,   314,    -1,   171,
      -1,    71,    -1,   122,    -1,   168,    -1,   244,    -1,   319,
      -1,   658,   676,   679,   680,    -1,   658,   676,   679,    -1,
     210,   658,    -1,   659,   127,   659,    -1,    -1,   658,   679,
     680,    -1,   658,   680,   679,    -1,   658,   679,    -1,   658,
     680,    -1,   669,    -1,    -1,   113,   658,    -1,   108,   658,
      -1,   658,   113,   669,    -1,   113,   669,    -1,   669,    -1,
     599,    -1,   338,   669,   339,    -1,    37,   687,   684,   686,
      94,    -1,   685,    -1,   684,   685,    -1,   308,   658,   274,
     658,    -1,    91,   658,    -1,    -1,   658,    -1,    -1,   698,
      -1,   698,   690,    -1,   341,   705,    -1,   341,   331,    -1,
     336,   658,   337,    -1,   336,   658,   344,   658,   337,    -1,
     689,    -1,   690,   689,    -1,    -1,   691,   689,    -1,   693,
      -1,   692,   343,   693,    -1,   658,    18,   716,    -1,   658,
      -1,   331,    -1,   695,    -1,   694,   343,   695,    -1,   713,
     691,   325,   658,    -1,   713,   691,   325,    76,    -1,   697,
      -1,   696,   343,   697,    -1,   658,    -1,    76,    -1,   721,
      -1,   713,    -1,   700,    -1,   699,   343,   700,    -1,   698,
      -1,   698,   690,    -1,   702,    -1,   701,   343,   702,    -1,
     713,    -1,   713,    -1,   713,    -1,   716,    -1,   713,    -1,
     711,    -1,   715,    -1,   698,   690,    -1,   710,    -1,   318,
      -1,   711,    -1,   320,    -1,   321,    -1,   637,   711,    -1,
     655,   711,   657,    -1,   655,   338,   710,   339,   711,   657,
      -1,   284,    -1,   104,    -1,   188,    -1,   323,    -1,   319,
      -1,   713,    -1,   317,    -1,   717,    -1,   718,    -1,   317,
      -1,   717,    -1,   317,    -1,   717,    -1,   719,    -1,   317,
      -1,   717,    -1,   718,    -1,   719,    -1,   720,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    11,    -1,    12,    -1,    20,    -1,    21,
      -1,    22,    -1,    24,    -1,    25,    -1,    26,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    39,    -1,    42,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    51,
      -1,    52,    -1,    53,    -1,    55,    -1,    56,    -1,    58,
      -1,    60,    -1,    61,    -1,    63,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    75,    -1,    77,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,    92,
      -1,    93,    -1,    95,    -1,    97,    -1,    98,    -1,    99,
      -1,   101,    -1,   102,    -1,   105,    -1,   106,    -1,   109,
      -1,   111,    -1,   115,    -1,   116,    -1,   119,    -1,   121,
      -1,   122,    -1,   124,    -1,   125,    -1,   126,    -1,   128,
      -1,   129,    -1,   130,    -1,   131,    -1,   135,    -1,   136,
      -1,   137,    -1,   138,    -1,   144,    -1,   147,    -1,   149,
      -1,   150,    -1,   151,    -1,   152,    -1,   153,    -1,   156,
      -1,   159,    -1,   160,    -1,   161,    -1,   164,    -1,   165,
      -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,
      -1,   171,    -1,   172,    -1,   173,    -1,   178,    -1,   179,
      -1,   180,    -1,   181,    -1,   184,    -1,   185,    -1,   187,
      -1,   191,    -1,   192,    -1,   195,    -1,   199,    -1,   200,
      -1,   207,    -1,   208,    -1,   209,    -1,   214,    -1,   213,
      -1,   216,    -1,   217,    -1,   218,    -1,   219,    -1,   220,
      -1,   221,    -1,   223,    -1,   225,    -1,   226,    -1,   227,
      -1,   228,    -1,   229,    -1,   230,    -1,   231,    -1,   232,
      -1,   233,    -1,   234,    -1,   235,    -1,   237,    -1,   239,
      -1,   240,    -1,   241,    -1,   242,    -1,   243,    -1,   244,
      -1,   245,    -1,   247,    -1,   248,    -1,   249,    -1,   251,
      -1,   253,    -1,   254,    -1,   256,    -1,   259,    -1,   260,
      -1,   261,    -1,   262,    -1,   263,    -1,   264,    -1,   265,
      -1,   268,    -1,   266,    -1,   270,    -1,   271,    -1,   272,
      -1,   273,    -1,   278,    -1,   280,    -1,   282,    -1,   285,
      -1,   286,    -1,   287,    -1,   288,    -1,   289,    -1,   292,
      -1,   293,    -1,   294,    -1,   295,    -1,   296,    -1,   299,
      -1,   300,    -1,   301,    -1,   302,    -1,   304,    -1,   306,
      -1,   307,    -1,   310,    -1,   311,    -1,   312,    -1,   313,
      -1,   314,    -1,   315,    -1,    28,    -1,    30,    -1,    31,
      -1,    40,    -1,    41,    -1,    48,    -1,    57,    -1,    73,
      -1,    74,    -1,   100,    -1,   103,    -1,   107,    -1,   134,
      -1,   139,    -1,   140,    -1,   142,    -1,   174,    -1,   176,
      -1,   182,    -1,   189,    -1,   190,    -1,   203,    -1,   206,
      -1,   211,    -1,   212,    -1,   222,    -1,   238,    -1,   252,
      -1,   257,    -1,   267,    -1,   275,    -1,   276,    -1,   281,
      -1,   283,    -1,   303,    -1,    23,    -1,    27,    -1,    29,
      -1,    62,    -1,   112,    -1,   114,    -1,   123,    -1,   133,
      -1,   145,    -1,   146,    -1,   148,    -1,   155,    -1,   157,
      -1,   175,    -1,   186,    -1,   204,    -1,   205,    -1,   236,
      -1,   255,    -1,   305,    -1,    10,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    32,    -1,    37,    -1,    38,    -1,    43,    -1,    49,
      -1,    50,    -1,    54,    -1,    59,    -1,    64,    -1,    65,
      -1,    66,    -1,    67,    -1,    76,    -1,    78,    -1,    84,
      -1,    85,    -1,    86,    -1,    91,    -1,    94,    -1,    96,
      -1,   104,    -1,   108,    -1,   110,    -1,   113,    -1,   117,
      -1,   118,    -1,   120,    -1,   127,    -1,   132,    -1,   141,
      -1,   143,    -1,   154,    -1,   158,    -1,   162,    -1,   163,
      -1,   177,    -1,   183,    -1,   188,    -1,   193,    -1,   194,
      -1,   196,    -1,   197,    -1,   198,    -1,   201,    -1,   202,
      -1,   210,    -1,   215,    -1,   224,    -1,   246,    -1,   250,
      -1,   258,    -1,   269,    -1,   274,    -1,   277,    -1,   279,
      -1,   284,    -1,   290,    -1,   291,    -1,   297,    -1,   298,
      -1,   308,    -1,   309,    -1,   196,    -1,   177,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   468,   468,   472,   478,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   562,
     573,   583,   584,   595,   606,   614,   635,   647,   648,   652,
     656,   660,   664,   668,   672,   676,   680,   684,   688,   694,
     695,   708,   721,   722,   726,   730,   745,   755,   756,   768,
     784,   796,   808,   809,   813,   814,   822,   823,   824,   825,
     826,   827,   841,   847,   853,   861,   868,   875,   883,   890,
     897,   905,   912,   922,   923,   935,   936,   939,   940,   943,
     945,   947,   951,   952,   953,   954,   958,   959,   960,   961,
     973,   977,   981,   994,  1021,  1022,  1023,  1027,  1028,  1029,
    1033,  1034,  1039,  1045,  1051,  1057,  1063,  1072,  1078,  1084,
    1090,  1096,  1106,  1116,  1117,  1121,  1122,  1130,  1145,  1153,
    1164,  1165,  1171,  1179,  1188,  1196,  1204,  1213,  1222,  1234,
    1244,  1252,  1261,  1268,  1275,  1283,  1290,  1297,  1298,  1304,
    1312,  1322,  1330,  1334,  1335,  1336,  1340,  1341,  1354,  1373,
    1397,  1398,  1407,  1408,  1409,  1415,  1416,  1421,  1425,  1429,
    1433,  1437,  1441,  1445,  1449,  1453,  1462,  1466,  1470,  1474,
    1479,  1483,  1487,  1488,  1499,  1513,  1539,  1540,  1541,  1542,
    1543,  1544,  1545,  1549,  1550,  1554,  1558,  1565,  1566,  1567,
    1570,  1582,  1583,  1587,  1608,  1609,  1628,  1639,  1650,  1661,
    1672,  1683,  1702,  1730,  1736,  1742,  1748,  1766,  1777,  1778,
    1779,  1788,  1809,  1813,  1823,  1834,  1845,  1863,  1864,  1868,
    1869,  1872,  1878,  1882,  1889,  1894,  1906,  1908,  1910,  1912,
    1915,  1918,  1921,  1925,  1926,  1927,  1928,  1929,  1932,  1933,
    1937,  1938,  1939,  1942,  1943,  1944,  1945,  1948,  1949,  1952,
    1953,  1963,  1992,  1993,  1994,  1998,  1999,  2003,  2004,  2008,
    2034,  2045,  2054,  2055,  2058,  2062,  2066,  2070,  2074,  2078,
    2082,  2086,  2090,  2094,  2100,  2101,  2105,  2106,  2109,  2110,
    2118,  2122,  2138,  2151,  2152,  2160,  2161,  2165,  2166,  2170,
    2171,  2175,  2185,  2186,  2196,  2206,  2207,  2220,  2237,  2255,
    2279,  2280,  2284,  2290,  2296,  2305,  2306,  2307,  2311,  2316,
    2326,  2327,  2331,  2332,  2336,  2337,  2338,  2342,  2348,  2349,
    2350,  2351,  2352,  2356,  2357,  2361,  2363,  2371,  2378,  2387,
    2391,  2392,  2396,  2397,  2402,  2423,  2442,  2465,  2473,  2481,
    2489,  2525,  2528,  2529,  2532,  2536,  2543,  2544,  2545,  2546,
    2559,  2573,  2574,  2578,  2588,  2598,  2607,  2616,  2617,  2620,
    2621,  2626,  2645,  2655,  2656,  2657,  2658,  2659,  2660,  2661,
    2662,  2666,  2667,  2670,  2671,  2674,  2676,  2689,  2715,  2724,
    2734,  2743,  2753,  2762,  2771,  2781,  2790,  2799,  2808,  2817,
    2829,  2830,  2831,  2832,  2833,  2834,  2835,  2836,  2837,  2838,
    2842,  2843,  2853,  2860,  2869,  2876,  2889,  2895,  2902,  2909,
    2916,  2923,  2930,  2937,  2944,  2951,  2958,  2965,  2972,  2979,
    2986,  2996,  2997,  3000,  3001,  3011,  3025,  3043,  3044,  3045,
    3049,  3050,  3056,  3057,  3058,  3059,  3060,  3061,  3062,  3063,
    3064,  3065,  3066,  3067,  3074,  3081,  3088,  3095,  3102,  3109,
    3116,  3127,  3128,  3131,  3142,  3157,  3158,  3162,  3163,  3168,
    3169,  3174,  3195,  3211,  3212,  3216,  3217,  3220,  3221,  3229,
    3236,  3243,  3252,  3253,  3254,  3269,  3284,  3285,  3288,  3289,
    3293,  3294,  3302,  3309,  3318,  3319,  3326,  3333,  3339,  3343,
    3357,  3358,  3370,  3371,  3375,  3379,  3383,  3387,  3391,  3395,
    3399,  3403,  3407,  3411,  3415,  3419,  3425,  3426,  3433,  3434,
    3449,  3460,  3471,  3472,  3476,  3487,  3494,  3496,  3498,  3503,
    3505,  3516,  3526,  3538,  3539,  3540,  3544,  3565,  3574,  3586,
    3587,  3590,  3591,  3601,  3610,  3618,  3626,  3635,  3643,  3651,
    3660,  3668,  3677,  3686,  3695,  3704,  3712,  3722,  3723,  3733,
    3742,  3750,  3758,  3766,  3775,  3784,  3793,  3801,  3809,  3827,
    3826,  3845,  3846,  3847,  3852,  3858,  3867,  3868,  3869,  3870,
    3871,  3875,  3876,  3880,  3881,  3882,  3883,  3887,  3888,  3889,
    3894,  3914,  3922,  3931,  3937,  3958,  3965,  3972,  3979,  3986,
    3993,  4000,  4008,  4016,  4024,  4032,  4042,  4043,  4044,  4048,
    4051,  4054,  4061,  4063,  4065,  4070,  4072,  4083,  4103,  4119,
    4129,  4130,  4134,  4138,  4142,  4146,  4150,  4154,  4158,  4162,
    4166,  4170,  4174,  4185,  4186,  4197,  4205,  4223,  4239,  4251,
    4260,  4268,  4276,  4285,  4296,  4297,  4311,  4334,  4341,  4348,
    4365,  4377,  4389,  4401,  4413,  4428,  4429,  4433,  4434,  4437,
    4438,  4441,  4442,  4446,  4447,  4458,  4469,  4470,  4471,  4472,
    4473,  4474,  4478,  4479,  4489,  4499,  4500,  4503,  4504,  4509,
    4510,  4511,  4512,  4522,  4530,  4546,  4547,  4557,  4563,  4579,
    4587,  4594,  4601,  4608,  4615,  4625,  4627,  4632,  4649,  4658,
    4669,  4670,  4673,  4674,  4675,  4676,  4677,  4678,  4679,  4680,
    4683,  4684,  4695,  4716,  4728,  4729,  4730,  4731,  4732,  4735,
    4736,  4737,  4785,  4786,  4790,  4791,  4801,  4802,  4808,  4814,
    4823,  4824,  4851,  4867,  4871,  4875,  4882,  4883,  4891,  4896,
    4901,  4906,  4911,  4916,  4921,  4926,  4933,  4934,  4937,  4938,
    4939,  4946,  4947,  4948,  4949,  4953,  4954,  4958,  4962,  4963,
    4966,  4973,  4980,  4987,  4998,  5000,  5002,  5004,  5006,  5017,
    5019,  5023,  5024,  5034,  5046,  5047,  5051,  5052,  5056,  5057,
    5061,  5062,  5066,  5067,  5079,  5080,  5084,  5085,  5095,  5099,
    5104,  5111,  5119,  5126,  5136,  5146,  5165,  5172,  5176,  5202,
    5206,  5218,  5232,  5245,  5259,  5270,  5285,  5291,  5296,  5302,
    5309,  5310,  5311,  5312,  5316,  5317,  5329,  5330,  5335,  5342,
    5349,  5356,  5366,  5371,  5372,  5377,  5381,  5387,  5408,  5413,
    5419,  5425,  5435,  5437,  5440,  5452,  5453,  5454,  5455,  5456,
    5457,  5463,  5481,  5499,  5500,  5501,  5502,  5503,  5507,  5518,
    5522,  5526,  5530,  5534,  5538,  5542,  5546,  5551,  5556,  5561,
    5567,  5583,  5589,  5604,  5615,  5622,  5637,  5648,  5659,  5663,
    5671,  5675,  5683,  5704,  5725,  5729,  5735,  5739,  5752,  5787,
    5810,  5812,  5814,  5816,  5818,  5820,  5825,  5826,  5830,  5831,
    5835,  5861,  5880,  5902,  5917,  5921,  5922,  5923,  5927,  5928,
    5929,  5930,  5931,  5932,  5933,  5935,  5937,  5940,  5943,  5945,
    5948,  5950,  5976,  5977,  5979,  5997,  5999,  6001,  6003,  6005,
    6007,  6009,  6011,  6013,  6015,  6017,  6019,  6021,  6023,  6025,
    6028,  6030,  6032,  6035,  6037,  6039,  6042,  6044,  6053,  6055,
    6064,  6066,  6075,  6077,  6087,  6098,  6107,  6118,  6137,  6149,
    6161,  6173,  6185,  6189,  6196,  6203,  6210,  6217,  6224,  6231,
    6235,  6239,  6243,  6249,  6255,  6285,  6317,  6329,  6336,  6362,
    6364,  6366,  6368,  6370,  6372,  6374,  6376,  6378,  6380,  6382,
    6384,  6386,  6388,  6390,  6392,  6394,  6396,  6398,  6400,  6402,
    6406,  6410,  6424,  6425,  6426,  6440,  6452,  6454,  6456,  6465,
    6474,  6483,  6485,  6502,  6511,  6520,  6533,  6542,  6567,  6593,
    6616,  6646,  6669,  6700,  6723,  6753,  6776,  6807,  6816,  6825,
    6834,  6836,  6845,  6859,  6869,  6881,  6897,  6909,  6918,  6927,
    6936,  6950,  6959,  6963,  6981,  6982,  6983,  6986,  6987,  6988,
    6991,  6992,  6995,  6996,  6997,  6998,  6999,  7000,  7001,  7002,
    7003,  7006,  7008,  7013,  7015,  7020,  7022,  7024,  7026,  7028,
    7030,  7042,  7046,  7053,  7060,  7063,  7067,  7073,  7075,  7079,
    7085,  7098,  7099,  7100,  7101,  7102,  7103,  7104,  7105,  7114,
    7118,  7125,  7132,  7133,  7148,  7152,  7156,  7160,  7167,  7172,
    7176,  7179,  7182,  7183,  7184,  7187,  7194,  7204,  7217,  7218,
    7222,  7232,  7233,  7236,  7237,  7245,  7249,  7256,  7260,  7264,
    7271,  7281,  7282,  7286,  7287,  7298,  7299,  7303,  7310,  7317,
    7330,  7331,  7335,  7342,  7353,  7354,  7358,  7365,  7382,  7383,
    7387,  7388,  7399,  7406,  7432,  7434,  7439,  7442,  7445,  7447,
    7449,  7451,  7461,  7463,  7471,  7478,  7485,  7492,  7499,  7511,
    7519,  7530,  7553,  7557,  7561,  7569,  7570,  7571,  7586,  7587,
    7588,  7593,  7594,  7600,  7601,  7602,  7608,  7609,  7610,  7611,
    7612,  7628,  7629,  7630,  7631,  7632,  7633,  7634,  7635,  7636,
    7637,  7638,  7639,  7640,  7641,  7642,  7643,  7644,  7645,  7646,
    7647,  7648,  7649,  7650,  7651,  7652,  7653,  7654,  7655,  7656,
    7657,  7658,  7659,  7660,  7661,  7662,  7663,  7664,  7665,  7666,
    7667,  7668,  7669,  7670,  7671,  7672,  7673,  7674,  7675,  7676,
    7677,  7678,  7679,  7680,  7681,  7682,  7683,  7684,  7685,  7686,
    7687,  7688,  7689,  7690,  7691,  7692,  7693,  7694,  7695,  7696,
    7697,  7698,  7699,  7700,  7701,  7702,  7703,  7704,  7705,  7706,
    7707,  7708,  7709,  7710,  7711,  7712,  7713,  7714,  7715,  7716,
    7717,  7718,  7719,  7720,  7721,  7722,  7723,  7724,  7725,  7726,
    7727,  7728,  7729,  7730,  7731,  7732,  7733,  7734,  7735,  7736,
    7737,  7738,  7739,  7740,  7741,  7742,  7743,  7744,  7745,  7746,
    7747,  7748,  7749,  7750,  7751,  7752,  7753,  7754,  7755,  7756,
    7757,  7758,  7759,  7760,  7761,  7762,  7763,  7764,  7765,  7766,
    7767,  7768,  7769,  7770,  7771,  7772,  7773,  7774,  7775,  7776,
    7777,  7778,  7779,  7780,  7781,  7782,  7783,  7784,  7785,  7786,
    7787,  7788,  7789,  7790,  7791,  7792,  7793,  7794,  7795,  7796,
    7797,  7798,  7799,  7800,  7801,  7802,  7803,  7804,  7805,  7806,
    7807,  7808,  7809,  7810,  7811,  7812,  7813,  7814,  7815,  7829,
    7830,  7831,  7832,  7833,  7834,  7835,  7836,  7837,  7838,  7839,
    7840,  7841,  7842,  7843,  7844,  7845,  7846,  7847,  7848,  7849,
    7850,  7851,  7852,  7853,  7854,  7855,  7856,  7857,  7858,  7859,
    7860,  7861,  7862,  7863,  7877,  7878,  7879,  7880,  7881,  7882,
    7883,  7884,  7885,  7886,  7887,  7888,  7889,  7890,  7891,  7892,
    7893,  7894,  7895,  7896,  7906,  7907,  7908,  7909,  7910,  7911,
    7912,  7913,  7914,  7915,  7916,  7917,  7918,  7919,  7920,  7921,
    7922,  7923,  7924,  7925,  7926,  7927,  7928,  7929,  7930,  7931,
    7932,  7933,  7934,  7935,  7936,  7937,  7938,  7939,  7940,  7941,
    7942,  7943,  7944,  7945,  7946,  7947,  7948,  7949,  7950,  7951,
    7952,  7953,  7954,  7955,  7956,  7957,  7958,  7959,  7960,  7961,
    7962,  7963,  7964,  7965,  7966,  7967,  7968,  7969,  7970,  7971,
    7972,  7973,  7974,  7975,  7980,  7989
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABORT_P", "ABSOLUTE_P", "ACCESS", 
  "ACTION", "ADD", "AFTER", "AGGREGATE", "ALL", "ALSO", "ALTER", 
  "ANALYSE", "ANALYZE", "AND", "ANY", "ARRAY", "AS", "ASC", "ASSERTION", 
  "ASSIGNMENT", "AT", "AUTHORIZATION", "BACKWARD", "BEFORE", "BEGIN_P", 
  "BETWEEN", "BIGINT", "BINARY", "BIT", "BOOLEAN_P", "BOTH", "BY", 
  "CACHE", "CALLED", "CASCADE", "CASE", "CAST", "CHAIN", "CHAR_P", 
  "CHARACTER", "CHARACTERISTICS", "CHECK", "CHECKPOINT", "CLASS", "CLOSE", 
  "CLUSTER", "COALESCE", "COLLATE", "COLUMN", "COMMENT", "COMMIT", 
  "COMMITTED", "CONSTRAINT", "CONSTRAINTS", "CONVERSION_P", "CONVERT", 
  "COPY", "CREATE", "CREATEDB", "CREATEUSER", "CROSS", "CSV", 
  "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP", "CURRENT_USER", 
  "CURSOR", "CYCLE", "DATABASE", "DAY_P", "DEALLOCATE", "DEC", 
  "DECIMAL_P", "DECLARE", "DEFAULT", "DEFAULTS", "DEFERRABLE", "DEFERRED", 
  "DEFINER", "DELETE_P", "DELIMITER", "DELIMITERS", "DESC", "DISTINCT", 
  "DO", "DOMAIN_P", "DOUBLE_P", "DROP", "EACH", "ELSE", "ENCODING", 
  "ENCRYPTED", "END_P", "ESCAPE", "EXCEPT", "EXCLUDING", "EXCLUSIVE", 
  "EXECUTE", "EXISTS", "EXPLAIN", "EXTERNAL", "EXTRACT", "FALSE_P", 
  "FETCH", "FIRST_P", "FLOAT_P", "FOR", "FORCE", "FOREIGN", "FORWARD", 
  "FREEZE", "FROM", "FULL", "FUNCTION", "GLOBAL", "GRANT", "GROUP_P", 
  "HANDLER", "HAVING", "HOLD", "HOUR_P", "ILIKE", "IMMEDIATE", 
  "IMMUTABLE", "IMPLICIT_P", "IN_P", "INCLUDING", "INCREMENT", "INDEX", 
  "INHERITS", "INITIALLY", "INNER_P", "INOUT", "INPUT_P", "INSENSITIVE", 
  "INSERT", "INSTEAD", "INT_P", "INTEGER", "INTERSECT", "INTERVAL", 
  "INTO", "INVOKER", "IS", "ISNULL", "ISOLATION", "JOIN", "KEY", 
  "LANCOMPILER", "LANGUAGE", "LARGE_P", "LAST_P", "LEADING", "LEFT", 
  "LEVEL", "LIKE", "LIMIT", "LISTEN", "LOAD", "LOCAL", "LOCALTIME", 
  "LOCALTIMESTAMP", "LOCATION", "LOCK_P", "MATCH", "MAXVALUE", "MINUTE_P", 
  "MINVALUE", "MODE", "MONTH_P", "MOVE", "NAMES", "NATIONAL", "NATURAL", 
  "NCHAR", "NEW", "NEXT", "NO", "NOCREATEDB", "NOCREATEUSER", "NONE", 
  "NOT", "NOTHING", "NOTIFY", "NOTNULL", "NOWAIT", "NULL_P", "NULLIF", 
  "NUMERIC", "OBJECT_P", "OF", "OFF", "OFFSET", "OIDS", "OLD", "ON", 
  "ONLY", "OPERATOR", "OPTION", "OR", "ORDER", "OUT_P", "OUTER_P", 
  "OVERLAPS", "OVERLAY", "OWNER", "PARTIAL", "PASSWORD", "PLACING", 
  "POSITION", "PRECISION", "PRESERVE", "PREPARE", "PRIMARY", "PRIOR", 
  "PRIVILEGES", "PROCEDURAL", "PROCEDURE", "QUOTE", "READ", "REAL", 
  "RECHECK", "REFERENCES", "REINDEX", "RELATIVE_P", "RELEASE", "RENAME", 
  "REPEATABLE", "REPLACE", "RESET", "RESTART", "RESTRICT", "RETURNS", 
  "REVOKE", "RIGHT", "ROLLBACK", "ROW", "ROWS", "RULE", "SAVEPOINT", 
  "SCHEMA", "SCROLL", "SECOND_P", "SECURITY", "SELECT", "SEQUENCE", 
  "SERIALIZABLE", "SESSION", "SESSION_USER", "SET", "SETOF", "SHARE", 
  "SHOW", "SIMILAR", "SIMPLE", "SMALLINT", "SOME", "STABLE", "START", 
  "STATEMENT", "STATISTICS", "STDIN", "STDOUT", "STORAGE", "STRICT_P", 
  "SUBSTRING", "SYSID", "TABLE", "TABLESPACE", "TEMP", "TEMPLATE", 
  "TEMPORARY", "THEN", "TIME", "TIMESTAMP", "TO", "TOAST", "TRAILING", 
  "TRANSACTION", "TREAT", "TRIGGER", "TRIM", "TRUE_P", "TRUNCATE", 
  "TRUSTED", "TYPE_P", "UNCOMMITTED", "UNENCRYPTED", "UNION", "UNIQUE", 
  "UNKNOWN", "UNLISTEN", "UNTIL", "UPDATE", "USAGE", "USER", "USING", 
  "VACUUM", "VALID", "VALIDATOR", "VALUES", "VARCHAR", "VARYING", 
  "VERBOSE", "VIEW", "VOLATILE", "WHEN", "WHERE", "WITH", "WITHOUT", 
  "WORK", "WRITE", "YEAR_P", "ZONE", "UNIONJOIN", "IDENT", "FCONST", 
  "SCONST", "BCONST", "XCONST", "Op", "ICONST", "PARAM", "'='", "'<'", 
  "'>'", "POSTFIXOP", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", 
  "'['", "']'", "'('", "')'", "TYPECAST", "'.'", "';'", "','", "':'", 
  "$accept", "stmtblock", "stmtmulti", "stmt", "CreateUserStmt", 
  "opt_with", "AlterUserStmt", "AlterUserSetStmt", "DropUserStmt", 
  "OptUserList", "OptUserElem", "user_list", "CreateGroupStmt", 
  "OptGroupList", "OptGroupElem", "AlterGroupStmt", "add_drop", 
  "DropGroupStmt", "CreateSchemaStmt", "OptSchemaName", 
  "OptSchemaEltList", "schema_stmt", "VariableSetStmt", "set_rest", 
  "var_name", "var_list_or_default", "var_list", "var_value", "iso_level", 
  "opt_boolean", "zone_value", "opt_encoding", "ColId_or_Sconst", 
  "VariableShowStmt", "VariableResetStmt", "ConstraintsSetStmt", 
  "constraints_set_list", "constraints_set_mode", "CheckPointStmt", 
  "AlterTableStmt", "alter_table_cmds", "alter_table_cmd", 
  "alter_rel_cmds", "alter_rel_cmd", "alter_column_default", 
  "opt_drop_behavior", "alter_using", "ClosePortalStmt", "CopyStmt", 
  "copy_from", "copy_file_name", "copy_opt_list", "copy_opt_item", 
  "opt_binary", "opt_oids", "copy_delimiter", "opt_using", "CreateStmt", 
  "OptTemp", "OptTableElementList", "TableElementList", "TableElement", 
  "columnDef", "ColQualList", "ColConstraint", "ColConstraintElem", 
  "ConstraintAttr", "TableLikeClause", "like_including_defaults", 
  "TableConstraint", "ConstraintElem", "opt_column_list", "columnList", 
  "columnElem", "key_match", "key_actions", "key_update", "key_delete", 
  "key_action", "OptInherit", "OptWithOids", "OnCommitOption", 
  "OptTableSpace", "OptConsTableSpace", "CreateAsStmt", "WithOidsAs", 
  "OptCreateAs", "CreateAsList", "CreateAsElement", "CreateSeqStmt", 
  "AlterSeqStmt", "OptSeqList", "OptSeqElem", "opt_by", "NumericOnly", 
  "FloatOnly", "IntegerOnly", "CreatePLangStmt", "opt_trusted", 
  "handler_name", "opt_lancompiler", "opt_validator", "DropPLangStmt", 
  "opt_procedural", "CreateTableSpaceStmt", "OptTableSpaceOwner", 
  "DropTableSpaceStmt", "CreateTrigStmt", "TriggerActionTime", 
  "TriggerEvents", "TriggerOneEvent", "TriggerForSpec", "TriggerForOpt", 
  "TriggerForType", "TriggerFuncArgs", "TriggerFuncArg", 
  "OptConstrFromTable", "ConstraintAttributeSpec", 
  "ConstraintDeferrabilitySpec", "ConstraintTimeSpec", "DropTrigStmt", 
  "CreateAssertStmt", "DropAssertStmt", "DefineStmt", "definition", 
  "def_list", "def_elem", "def_arg", "CreateOpClassStmt", 
  "opclass_item_list", "opclass_item", "opt_default", "opt_recheck", 
  "DropOpClassStmt", "DropStmt", "drop_type", "any_name_list", "any_name", 
  "attrs", "TruncateStmt", "CommentStmt", "comment_type", "comment_text", 
  "FetchStmt", "fetch_direction", "fetch_count", "from_in", "GrantStmt", 
  "RevokeStmt", "privileges", "privilege_list", "privilege", 
  "privilege_target", "grantee_list", "grantee", "opt_grant_grant_option", 
  "opt_revoke_grant_option", "function_with_argtypes_list", 
  "function_with_argtypes", "IndexStmt", "index_opt_unique", 
  "access_method_clause", "index_params", "index_elem", "opt_class", 
  "CreateFunctionStmt", "opt_or_replace", "func_args", "func_args_list", 
  "func_arg", "arg_class", "param_name", "func_return", "func_type", 
  "createfunc_opt_list", "createfunc_opt_item", "func_as", 
  "opt_definition", "RemoveFuncStmt", "RemoveAggrStmt", "aggr_argtype", 
  "RemoveOperStmt", "oper_argtypes", "any_operator", "CreateCastStmt", 
  "cast_context", "DropCastStmt", "ReindexStmt", "reindex_type", 
  "opt_force", "RenameStmt", "opt_column", "AlterOwnerStmt", "RuleStmt", 
  "@1", "RuleActionList", "RuleActionMulti", "RuleActionStmt", 
  "RuleActionStmtOrEmpty", "event", "opt_instead", "DropRuleStmt", 
  "NotifyStmt", "ListenStmt", "UnlistenStmt", "TransactionStmt", 
  "opt_transaction", "transaction_mode_item", "transaction_mode_list", 
  "transaction_mode_list_or_empty", "ViewStmt", "LoadStmt", 
  "CreatedbStmt", "createdb_opt_list", "createdb_opt_item", "opt_equal", 
  "AlterDatabaseSetStmt", "DropdbStmt", "CreateDomainStmt", 
  "AlterDomainStmt", "opt_as", "CreateConversionStmt", "ClusterStmt", 
  "VacuumStmt", "AnalyzeStmt", "analyze_keyword", "opt_verbose", 
  "opt_full", "opt_freeze", "opt_name_list", "ExplainStmt", 
  "ExplainableStmt", "opt_analyze", "PrepareStmt", "prep_type_clause", 
  "prep_type_list", "PreparableStmt", "ExecuteStmt", 
  "execute_param_clause", "DeallocateStmt", "InsertStmt", "insert_rest", 
  "insert_column_list", "insert_column_item", "DeleteStmt", "LockStmt", 
  "opt_lock", "lock_type", "opt_nowait", "UpdateStmt", 
  "DeclareCursorStmt", "cursor_options", "opt_hold", "SelectStmt", 
  "select_with_parens", "select_no_parens", "select_clause", 
  "simple_select", "into_clause", "OptTempTableName", "opt_table", 
  "opt_all", "opt_distinct", "opt_sort_clause", "sort_clause", 
  "sortby_list", "sortby", "select_limit", "opt_select_limit", 
  "select_limit_value", "select_offset_value", "group_clause", 
  "having_clause", "for_update_clause", "opt_for_update_clause", 
  "update_list", "from_clause", "from_list", "table_ref", "joined_table", 
  "alias_clause", "join_type", "join_outer", "join_qual", "relation_expr", 
  "func_table", "where_clause", "TableFuncElementList", 
  "TableFuncElement", "Typename", "opt_array_bounds", "SimpleTypename", 
  "ConstTypename", "GenericType", "Numeric", "opt_float", "opt_numeric", 
  "opt_decimal", "Bit", "ConstBit", "BitWithLength", "BitWithoutLength", 
  "Character", "ConstCharacter", "CharacterWithLength", 
  "CharacterWithoutLength", "character", "opt_varying", "opt_charset", 
  "ConstDatetime", "ConstInterval", "opt_timezone", "opt_interval", 
  "a_expr", "b_expr", "c_expr", "func_expr", "row", "sub_type", "all_Op", 
  "MathOp", "qual_Op", "qual_all_Op", "subquery_Op", "expr_list", 
  "extract_list", "type_list", "array_expr_list", "array_expr", 
  "extract_arg", "overlay_list", "overlay_placing", "position_list", 
  "substr_list", "substr_from", "substr_for", "trim_list", "in_expr", 
  "case_expr", "when_clause_list", "when_clause", "case_default", 
  "case_arg", "columnref", "indirection_el", "indirection", 
  "opt_indirection", "target_list", "target_el", "update_target_list", 
  "update_target_el", "insert_target_list", "insert_target_el", 
  "relation_name", "qualified_name_list", "qualified_name", "name_list", 
  "name", "database_name", "access_method", "attr_name", "index_name", 
  "file_name", "func_name", "AexprConst", "Iconst", "Sconst", "UserId", 
  "ColId", "type_name", "function_name", "ColLabel", "unreserved_keyword", 
  "col_name_keyword", "func_name_keyword", "reserved_keyword", 
  "SpecialRuleRelation", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,    61,    60,    62,   580,    43,
      45,    42,    47,    37,    94,   581,    91,    93,    40,    41,
     582,    46,    59,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   345,   346,   347,   347,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     349,   350,   350,   351,   352,   352,   353,   354,   354,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   356,
     356,   357,   358,   358,   359,   359,   360,   361,   361,   362,
     363,   363,   364,   364,   365,   365,   366,   366,   366,   366,
     366,   366,   367,   367,   367,   368,   368,   368,   368,   368,
     368,   368,   368,   369,   369,   370,   370,   371,   371,   372,
     372,   372,   373,   373,   373,   373,   374,   374,   374,   374,
     375,   375,   375,   375,   375,   375,   375,   376,   376,   376,
     377,   377,   378,   378,   378,   378,   378,   379,   379,   379,
     379,   379,   380,   381,   381,   382,   382,   383,   384,   384,
     385,   385,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   387,   387,   388,
     388,   389,   389,   390,   390,   390,   391,   391,   392,   393,
     394,   394,   395,   395,   395,   396,   396,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   398,   398,   399,   399,
     400,   400,   401,   401,   402,   402,   403,   403,   403,   403,
     403,   403,   403,   404,   404,   405,   405,   406,   406,   406,
     407,   408,   408,   409,   409,   409,   410,   410,   410,   410,
     410,   410,   410,   411,   411,   411,   411,   412,   413,   413,
     413,   414,   414,   415,   415,   415,   415,   416,   416,   417,
     417,   418,   419,   419,   419,   419,   420,   420,   420,   420,
     420,   421,   422,   423,   423,   423,   423,   423,   424,   424,
     425,   425,   425,   426,   426,   426,   426,   427,   427,   428,
     428,   429,   430,   430,   430,   431,   431,   432,   432,   433,
     434,   435,   436,   436,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   438,   438,   439,   439,   440,   440,
     441,   441,   442,   443,   443,   444,   444,   445,   445,   446,
     446,   447,   448,   448,   449,   450,   450,   451,   452,   452,
     453,   453,   454,   454,   454,   455,   455,   455,   456,   456,
     457,   457,   458,   458,   459,   459,   459,   460,   460,   460,
     460,   460,   460,   461,   461,   462,   462,   462,   462,   462,
     463,   463,   464,   464,   465,   466,   467,   468,   468,   468,
     468,   469,   470,   470,   471,   471,   472,   472,   472,   472,
     473,   474,   474,   475,   475,   475,   475,   476,   476,   477,
     477,   478,   479,   480,   480,   480,   480,   480,   480,   480,
     480,   481,   481,   482,   482,   483,   483,   484,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     487,   487,   488,   488,   488,   488,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   490,   490,   491,   491,   492,   493,   494,   494,   494,
     495,   495,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   497,   497,   497,   497,   497,   497,
     497,   498,   498,   499,   499,   500,   500,   501,   501,   502,
     502,   503,   504,   505,   505,   506,   506,   507,   507,   508,
     508,   508,   509,   509,   509,   510,   511,   511,   512,   512,
     513,   513,   514,   514,   515,   515,   515,   515,   516,   517,
     518,   518,   519,   519,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   521,   521,   522,   522,
     523,   524,   525,   525,   526,   527,   527,   527,   527,   528,
     528,   529,   529,   530,   530,   530,   531,   532,   532,   533,
     533,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   536,   536,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   539,
     538,   540,   540,   540,   541,   541,   542,   542,   542,   542,
     542,   543,   543,   544,   544,   544,   544,   545,   545,   545,
     546,   547,   548,   549,   549,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   551,   551,   551,   552,
     552,   552,   553,   553,   553,   554,   554,   555,   556,   557,
     558,   558,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   560,   560,   561,   561,   562,   563,   564,
     564,   564,   564,   564,   565,   565,   566,   567,   567,   567,
     568,   568,   568,   569,   569,   570,   570,   571,   571,   572,
     572,   573,   573,   574,   574,   575,   576,   576,   576,   576,
     576,   576,   577,   577,   578,   579,   579,   580,   580,   581,
     581,   581,   581,   582,   582,   583,   583,   584,   584,   585,
     586,   586,   586,   586,   586,   587,   587,   588,   589,   590,
     591,   591,   592,   592,   592,   592,   592,   592,   592,   592,
     593,   593,   594,   595,   596,   596,   596,   596,   596,   597,
     597,   597,   598,   598,   599,   599,   600,   600,   600,   600,
     601,   601,   602,   602,   602,   602,   603,   603,   604,   604,
     604,   604,   604,   604,   604,   604,   605,   605,   606,   606,
     606,   607,   607,   607,   607,   608,   608,   609,   610,   610,
     611,   611,   611,   611,   612,   612,   612,   612,   612,   613,
     613,   614,   614,   615,   616,   616,   617,   617,   618,   618,
     619,   619,   620,   620,   621,   621,   622,   622,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   624,
     624,   624,   624,   624,   624,   624,   625,   625,   625,   625,
     626,   626,   626,   626,   627,   627,   628,   628,   629,   629,
     629,   629,   630,   631,   631,   632,   632,   633,   634,   634,
     634,   634,   635,   635,   635,   636,   636,   636,   636,   636,
     636,   636,   636,   637,   637,   637,   637,   637,   638,   639,
     639,   639,   639,   639,   639,   639,   639,   639,   639,   639,
     640,   640,   641,   641,   641,   642,   642,   642,   643,   643,
     644,   644,   645,   646,   647,   647,   648,   648,   649,   650,
     651,   651,   651,   651,   651,   651,   652,   652,   653,   653,
     654,   654,   654,   654,   655,   656,   656,   656,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   662,   662,   662,   663,   663,   663,
     664,   664,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   666,   666,   667,   667,   668,   668,   668,   668,   668,
     668,   669,   669,   670,   670,   671,   671,   672,   672,   673,
     673,   674,   674,   674,   674,   674,   674,   674,   674,   675,
     675,   676,   677,   677,   678,   678,   678,   678,   678,   678,
     679,   680,   681,   681,   681,   682,   682,   683,   684,   684,
     685,   686,   686,   687,   687,   688,   688,   689,   689,   689,
     689,   690,   690,   691,   691,   692,   692,   693,   693,   693,
     694,   694,   695,   695,   696,   696,   697,   697,   698,   698,
     699,   699,   700,   700,   701,   701,   702,   703,   704,   705,
     706,   707,   708,   708,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   710,   711,   712,   713,   713,
     713,   714,   714,   715,   715,   715,   716,   716,   716,   716,
     716,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   721,   721
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     1,     0,     5,     5,     4,     3,     2,     0,     2,
       3,     3,     2,     1,     1,     1,     1,     3,     3,     3,
       1,     5,     2,     0,     2,     2,     6,     1,     1,     3,
       6,     4,     1,     0,     2,     0,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     2,     5,
       2,     3,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     3,     4,     3,     2,     2,     3,     4,
       3,     2,     4,     1,     1,     1,     1,     1,     4,     4,
       1,     3,     3,     4,     6,     6,     6,     6,     4,     6,
       2,     4,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     2,     1,     1,     0,     2,     0,     2,    10,
       1,     1,     1,     1,     1,     2,     0,     1,     1,     3,
       3,     1,     3,     3,     3,     4,     1,     0,     2,     0,
       3,     0,     1,     0,    11,    12,     1,     1,     2,     2,
       2,     2,     0,     1,     0,     1,     3,     1,     1,     1,
       3,     2,     0,     3,     1,     1,     2,     1,     2,     3,
       4,     2,     5,     1,     2,     2,     2,     3,     2,     2,
       0,     3,     1,     4,     5,     6,    11,     3,     0,     1,
       3,     1,     2,     2,     2,     0,     1,     1,     2,     2,
       0,     3,     3,     2,     1,     1,     2,     2,     4,     0,
       2,     2,     0,     3,     4,     4,     0,     2,     0,     4,
       0,     7,     3,     3,     1,     3,     0,     1,     3,     1,
       5,     4,     2,     0,     2,     1,     2,     3,     2,     2,
       2,     2,     3,     3,     1,     0,     1,     1,     1,     2,
       1,     2,     9,     1,     0,     1,     2,     2,     0,     2,
       0,     5,     1,     0,     6,     2,     0,     3,    14,    19,
       1,     1,     1,     3,     5,     1,     1,     1,     3,     0,
       1,     0,     1,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     2,     1,     2,     0,
       2,     1,     2,     2,     6,     8,     4,     4,     4,     4,
       7,     3,     1,     3,     3,     1,     1,     1,     1,     1,
      12,     1,     3,     4,     7,     4,     2,     1,     0,     1,
       0,     7,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     2,     3,     3,     6,     9,
       7,     9,     8,     8,     6,     8,     9,     7,    10,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     4,     2,     0,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     2,     2,     1,     2,
       2,     1,     2,     1,     1,     7,     8,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     2,     3,     0,     3,     0,     1,
       3,     2,    12,     1,     0,     2,     0,     1,     3,     2,
       2,     4,     1,     2,     0,     9,     2,     0,     3,     2,
       1,     3,     3,     2,     1,     1,     1,     0,     1,     1,
       1,     4,     1,     2,     2,     2,     1,     1,     1,     4,
       5,     1,     3,     3,     2,     2,     1,     3,     2,     0,
       5,     7,     1,     1,     7,     1,     3,     3,     3,     1,
       3,    11,    10,     2,     2,     0,     8,     4,     4,     1,
       1,     1,     0,     9,     6,     6,     7,     6,     6,     9,
       6,     6,     6,     8,     8,     6,     6,     1,     0,     9,
       6,     6,     6,     7,     9,     9,     6,     6,     6,     0,
      14,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     0,
       6,     2,     2,     2,     2,     2,     3,     3,     2,     2,
       2,     2,     3,     2,     5,     4,     1,     1,     0,     3,
       2,     2,     1,     3,     2,     1,     0,     7,     2,     5,
       2,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     0,     5,     4,     3,     6,     4,
       6,     6,     5,     7,     1,     0,    10,     4,     2,     1,
       4,     5,     5,     2,     4,     1,     1,     1,     0,     1,
       0,     1,     0,     3,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     3,     0,     1,     3,     1,
       1,     1,     1,     3,     9,     3,     0,     2,     3,     4,
       4,     2,     1,     7,     4,     1,     3,     2,     4,     5,
       3,     0,     2,     2,     2,     3,     1,     3,     1,     2,
       1,     0,     6,     7,     0,     3,     2,     2,     2,     0,
       2,     2,     1,     1,     3,     3,     1,     2,     4,     4,
       1,     1,     8,     4,     4,     4,     2,     0,     3,     3,
       4,     4,     4,     4,     2,     1,     1,     0,     1,     1,
       0,     1,     5,     1,     0,     1,     0,     3,     1,     3,
       3,     2,     2,     1,     4,     4,     2,     2,     4,     1,
       0,     1,     1,     1,     3,     0,     2,     0,     3,     3,
       1,     0,     2,     0,     2,     0,     1,     3,     1,     2,
       1,     2,     5,     6,     5,     1,     2,     1,     4,     3,
       4,     3,     5,     4,     5,     4,     5,     2,     4,     1,
       2,     2,     2,     1,     1,     0,     4,     2,     1,     2,
       2,     4,     1,     2,     0,     1,     3,     2,     2,     3,
       5,     6,     3,     4,     0,     1,     1,     1,     1,     1,
       2,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     1,
       3,     0,     5,     3,     0,     5,     3,     0,     1,     1,
       1,     1,     5,     2,     1,     1,     1,     1,     5,     2,
       2,     2,     1,     3,     3,     2,     1,     0,     3,     0,
       5,     2,     5,     2,     1,     3,     3,     0,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     0,     1,     3,     5,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     2,     3,     5,     4,     6,
       3,     5,     4,     6,     4,     6,     5,     7,     2,     3,
       2,     4,     3,     3,     4,     3,     4,     3,     4,     5,
       6,     7,     5,     6,     3,     4,     4,     6,     2,     1,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     5,
       6,     7,     1,     1,     2,     4,     1,     1,     1,     2,
       2,     2,     1,     3,     4,     5,     5,     4,     1,     1,
       4,     1,     4,     1,     4,     1,     4,     1,     1,     1,
       6,     4,     4,     4,     4,     6,     5,     5,     5,     4,
       6,     4,     6,     4,     4,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     4,     1,     4,     1,     2,     1,
       2,     1,     3,     3,     0,     3,     1,     1,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     2,     3,     0,     3,     3,     2,     2,     1,     0,
       2,     2,     3,     2,     1,     1,     3,     5,     1,     2,
       4,     2,     0,     1,     0,     1,     2,     2,     2,     3,
       5,     1,     2,     0,     2,     1,     3,     3,     1,     1,
       1,     3,     4,     4,     1,     3,     1,     1,     1,     1,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       3,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
      79,   658,     0,   706,   705,   658,   177,     0,   699,     0,
     658,   227,   537,     0,     0,     0,   353,   658,     0,   723,
     466,     0,     0,     0,     0,   797,   466,     0,     0,     0,
       0,     0,   518,   658,     0,   804,     0,     0,     0,   797,
       0,     0,   710,     0,     0,     2,     4,    34,    12,    11,
      49,    26,     7,    42,    29,    76,    77,    75,    18,    14,
      10,    15,    19,    31,    20,    30,     9,    28,    44,    32,
      47,    33,    48,    21,    40,    38,    27,    43,    46,    71,
      17,    53,    54,    67,    55,    25,    64,    63,    65,    22,
      41,    62,    66,     8,    68,    45,    60,    57,    72,    70,
      78,    58,    35,     5,    50,    24,     6,    23,    16,    74,
      13,   708,    52,    61,    51,    36,    56,    39,    59,    73,
      37,    69,   781,   772,   806,   780,   657,   656,   645,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   666,  1221,  1222,  1223,  1224,
    1225,  1226,  1227,  1228,  1229,  1230,  1231,  1232,  1233,  1234,
    1235,  1409,  1410,  1411,  1236,  1237,  1238,  1239,  1240,  1412,
    1413,  1241,  1242,  1243,  1244,  1245,  1414,  1246,  1247,  1248,
    1249,  1250,  1415,  1251,  1252,  1253,  1254,  1255,  1256,  1257,
    1258,  1259,  1416,  1417,  1260,  1261,  1262,  1263,  1264,  1265,
    1266,  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
    1276,  1418,  1277,  1278,  1419,  1279,  1280,  1420,  1281,  1282,
    1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,  1291,  1292,
    1293,  1294,  1421,  1295,  1296,  1297,  1298,  1422,  1423,  1424,
    1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,
    1319,  1425,  1426,  1320,  1321,  1322,  1323,  1427,  1324,  1325,
    1326,  1428,  1429,  1327,  1328,  1329,  1330,  1331,  1430,  1431,
    1332,  1333,  1334,  1432,  1433,  1336,  1335,  1337,  1338,  1339,
    1340,  1341,  1342,  1434,  1343,  1344,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1435,  1356,  1357,
    1358,  1359,  1360,  1361,  1362,  1363,  1364,  1365,  1366,  1436,
    1367,  1368,  1369,  1437,  1370,  1371,  1372,  1373,  1374,  1375,
    1376,  1378,  1438,  1377,  1379,  1380,  1381,  1382,  1439,  1440,
    1383,  1384,  1441,  1385,  1442,  1386,  1387,  1388,  1389,  1390,
    1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,  1443,
    1400,  1401,  1402,  1403,  1404,  1405,  1406,  1407,  1408,  1208,
     208,  1186,  1209,  1210,  1535,  1534,  1182,   698,     0,  1179,
    1178,   353,   648,   226,     0,     0,     0,     0,     0,     0,
     417,     0,     0,     0,     0,     0,     0,   113,     0,   237,
     236,     0,   343,     0,   523,     0,     0,   353,     0,     0,
       0,  1335,   737,   764,     0,     0,     0,     0,   429,     0,
     428,     0,     0,   426,     0,   352,     0,   430,   424,   423,
       0,     0,   427,     0,   425,     0,     0,   649,   736,   722,
     708,  1222,   474,   478,   469,   475,   470,   467,   468,  1345,
    1205,     0,     0,   473,   463,   481,   488,   501,   495,   499,
     493,   497,   496,   492,   503,   502,   498,   494,   500,     0,
     487,   490,     0,   642,  1179,  1206,   668,  1191,   796,     0,
       0,   465,   641,   726,     0,   589,   590,     0,  1358,   653,
     171,  1365,  1439,  1384,   167,     0,     0,   650,   651,   803,
     801,     0,  1249,  1309,  1319,  1365,  1439,  1384,   122,     0,
     133,   166,  1365,  1439,  1384,   162,   666,     0,   644,   643,
       0,     0,   868,   709,   712,   781,     0,     1,    79,   707,
     703,   800,   800,     0,   800,     0,   777,  1444,  1445,  1446,
    1447,  1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,
    1457,  1458,  1459,  1460,  1461,  1462,  1463,  1208,     0,     0,
    1192,  1209,  1215,     0,   433,     0,  1187,     0,     0,     0,
    1207,     0,     0,  1243,  1090,  1100,  1098,  1099,  1092,  1093,
    1094,  1095,  1096,  1097,     0,   579,  1091,     0,     0,   323,
       0,     0,     0,     0,    82,     0,     0,   662,   665,   646,
       0,     0,  1161,  1183,     0,     0,     0,   450,     0,   459,
     451,   456,     0,   453,     0,     0,     0,   452,   454,   455,
       0,   457,   458,     0,     0,   278,     0,     0,     0,     0,
      82,   695,   241,   240,    82,   239,   238,  1243,     0,   536,
       0,   115,   356,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,   738,     0,   874,     0,   205,     0,
     687,     0,   109,  1243,     0,     0,   357,     0,    86,   100,
       0,   205,   431,     0,   733,     0,   471,   480,   479,   477,
     476,   472,   482,   483,   484,     0,   489,     0,     0,     0,
     751,  1180,     0,     0,     0,   592,   592,   652,   170,   168,
       0,     0,     0,     0,     0,     0,  1409,  1410,  1411,  1154,
       0,  1412,  1413,  1414,  1415,  1058,  1059,  1061,  1067,  1416,
    1417,  1268,  1418,  1419,  1203,  1420,  1422,  1423,  1424,  1063,
    1065,  1425,  1426,     0,  1204,  1428,  1429,  1330,  1431,  1432,
    1434,  1435,  1068,  1437,  1438,  1439,  1440,  1441,  1442,  1202,
       0,  1069,  1443,  1208,  1195,  1197,  1198,  1101,  1163,     0,
       0,  1169,     0,     0,     0,  1048,     0,   893,   894,   895,
     920,   921,   896,   926,   927,   939,   897,     0,  1168,   962,
    1047,  1052,     0,  1046,  1042,   787,  1165,  1155,     0,  1043,
    1194,  1196,   898,  1209,   173,     0,   174,  1184,  1365,   123,
     158,   130,   157,     0,  1241,   124,     0,   128,     0,     0,
       0,   165,   163,     0,   647,   437,     0,   870,     0,   869,
     711,   708,   775,   774,     3,   714,   798,   799,     0,     0,
       0,     0,     0,     0,     0,   831,   820,  1193,     0,     0,
       0,     0,   434,     0,     0,     0,   686,     0,     0,     0,
       0,   689,   547,     0,   107,   108,     0,     0,     0,     0,
       0,   179,   197,     0,     0,     0,     0,     0,     0,   321,
     608,   608,     0,     0,   608,   608,     0,   178,   180,   196,
       0,     0,     0,     0,     0,     0,    81,    88,    85,     0,
     660,   661,     0,   664,     0,  1464,  1465,  1466,  1467,  1468,
    1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,
    1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,  1498,
    1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,  1508,
    1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,
    1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,
    1529,  1530,  1531,  1532,  1533,  1216,  1158,  1157,  1189,  1217,
    1218,  1219,  1220,  1162,   697,     0,     0,     0,     0,     0,
    1243,     0,     0,     0,     0,     0,     0,   229,     0,   397,
       0,   902,   937,   909,   937,   937,   917,   917,   911,   899,
     900,   944,     0,   937,   914,   903,     0,   901,   947,   947,
     932,  1211,     0,   884,   885,   886,   887,   918,   919,   888,
     924,   925,   889,   961,   898,  1212,     0,   671,   694,     0,
     103,   418,   398,     0,   111,     0,     0,   361,   360,     0,
       0,   399,    88,   323,   316,     0,     0,     0,  1190,     0,
       0,   278,   767,   769,   768,     0,   766,     0,   748,     0,
     203,   204,   396,     0,   205,     0,     0,     0,     0,     0,
     161,   205,   160,     0,   422,  1111,     0,   242,   715,   721,
     717,   719,   718,   720,   716,   462,  1257,  1283,  1303,  1359,
       0,  1379,     0,   504,   491,     0,     0,     0,   739,   742,
       0,     0,   761,   464,     0,   727,     0,   591,   588,   587,
     169,   517,     0,  1358,   655,     0,     0,  1050,  1051,   936,
     923,  1153,     0,     0,   931,   930,     0,     0,     0,     0,
       0,   907,   906,   905,  1049,  1114,     0,   904,     0,     0,
     937,   937,   935,   985,     0,     0,   908,     0,     0,  1133,
       0,  1139,     0,     0,     0,   943,     0,   941,     0,     0,
    1018,  1044,   965,   966,   967,   968,  1048,  1111,     0,  1199,
       0,     0,   929,     0,   961,     0,     0,     0,     0,  1109,
       0,     0,   998,  1107,     0,  1000,     0,     0,     0,  1101,
    1100,  1098,  1099,  1092,  1093,  1094,  1095,   969,   970,     0,
    1105,   982,     0,     0,   981,     0,     0,   835,  1156,     0,
     175,   176,   172,     0,     0,   132,   131,     0,   155,   156,
     151,   338,     0,   127,   154,   336,   337,     0,   340,   150,
     136,   147,   149,   148,   146,   125,   135,   137,   139,   140,
     141,   126,   134,   164,     0,   835,  1170,  1163,   700,     0,
     704,   781,   785,   780,   784,   807,   808,   813,   783,     0,
     833,   822,   816,   821,   817,   823,   830,   779,   819,   778,
     573,     0,   572,     0,     0,   435,     0,     0,     0,   685,
       0,     0,     0,     0,     0,   692,   272,     0,   202,     0,
       0,     0,     0,   544,   546,   545,   539,     0,   540,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   575,   580,     0,     0,     0,   325,   335,     0,
       0,     0,    82,    82,   322,   607,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    83,     0,     0,   145,   659,   663,  1159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   279,   281,     0,     0,     0,   402,
     405,     0,   884,     0,     0,   878,   950,   951,   952,   949,
     953,   948,     0,   890,   892,     0,   669,   252,   101,     0,
     115,   242,   114,   116,   118,   119,   120,   117,   121,   355,
       0,   366,   365,   367,     0,   362,     0,    80,   320,     0,
     244,     0,     0,     0,     0,     0,   619,     0,     0,     0,
       0,   765,   873,     0,     0,   570,     0,     0,   205,   205,
      99,   351,   432,   735,     0,     0,   507,   506,   519,     0,
     508,   509,   505,   510,     0,   741,     0,     0,   745,  1163,
       0,   758,     0,   756,     0,  1181,   760,   749,   725,     0,
     724,   730,   732,   731,   729,     0,   654,     0,     0,     0,
    1117,     0,     0,  1152,  1148,     0,     0,  1111,     0,     0,
       0,     0,  1124,  1125,  1126,  1123,  1127,  1122,  1121,  1128,
       0,     0,     0,     0,     0,   934,   933,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1019,  1052,     0,
       0,  1085,     0,  1111,  1138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1111,  1144,     0,  1164,  1163,
       0,     0,     0,     0,  1200,   983,  1167,     0,     0,   990,
       0,  1145,  1014,     0,  1005,     0,   999,     0,  1003,  1007,
     986,     0,  1110,     0,  1108,     0,     0,   984,     0,   979,
     977,   978,   971,   972,   973,   974,   975,   976,   963,   980,
    1089,  1087,  1088,     0,     0,     0,  1002,  1284,  1309,     0,
     797,   797,   786,   795,  1166,     0,   874,     0,     0,     0,
    1053,     0,  1185,     0,   339,   341,     0,   961,     0,   871,
       0,   874,     0,   702,   701,     0,     0,   811,   812,     0,
     829,     0,   828,     0,     0,     0,     0,   610,   594,   436,
     611,   595,     0,     0,     0,     0,     0,   205,   690,   612,
     201,   691,   538,   547,  1213,     0,   543,   550,   898,   548,
    1214,     0,     0,   597,   106,   199,   602,   200,   198,   598,
       0,  1188,     0,     0,     0,   616,   600,   324,   334,     0,
     328,   329,   326,   330,   331,     0,     0,   182,     0,     0,
     194,   193,   205,   205,   601,     0,   195,   192,   181,   618,
     606,     0,   617,   605,    93,    95,     0,     0,    94,    96,
       0,     0,     0,     0,    87,   143,   142,   144,     0,     0,
       0,     0,     0,     0,     0,     0,   461,   444,   460,     0,
       0,     0,   438,   277,     0,   228,   210,   211,     0,   401,
       0,     0,     0,     0,   879,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   684,   684,   684,   684,   684,   670,
     688,     0,     0,   102,     0,   110,     0,     0,   354,     0,
       0,     0,   875,     0,     0,     0,     0,   243,   245,   247,
     248,   249,     0,   317,   319,   314,     0,     0,     0,     0,
       0,   526,     0,     0,     0,   770,   771,     0,   205,     0,
     205,   205,   640,   394,  1112,     0,     0,   521,     0,   516,
     511,   513,  1177,  1176,     0,  1174,     0,     0,   747,   759,
     752,   754,   753,     0,     0,   750,   728,     0,   802,  1119,
    1120,     0,     0,     0,     0,  1149,     0,     0,  1083,     0,
    1081,  1060,  1062,   916,     0,  1071,     0,   910,  1064,  1066,
       0,   913,     0,  1102,     0,     0,  1072,  1021,  1022,  1023,
    1024,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1025,  1026,     0,  1038,  1037,  1073,  1084,     0,     0,
    1136,  1137,  1074,   945,   946,   947,   947,     0,     0,  1143,
       0,     0,     0,  1079,  1045,  1112,   938,   939,     0,     0,
       0,     0,     0,     0,  1006,  1001,     0,  1004,  1008,     0,
       0,     0,   992,  1015,   988,     0,     0,   994,     0,  1016,
     797,   797,   797,   797,   794,     0,     0,     0,   845,   834,
     836,   847,   838,   840,   872,  1182,   825,     0,     0,  1057,
    1054,   129,     0,   152,   138,  1171,   762,     0,   713,   809,
       0,  1103,   810,   832,   814,   818,   815,     0,     0,     0,
     271,     0,     0,     0,   693,   541,   542,   892,   613,   596,
       0,     0,   577,     0,   578,   576,   327,   333,   332,   252,
       0,     0,     0,   183,   191,   188,     0,     0,     0,     0,
      89,    92,     0,     0,  1160,     0,     0,     0,   440,   447,
       0,     0,     0,     0,   449,   280,   213,   214,   231,   212,
     403,  1330,  1093,   408,   404,   406,   549,   407,   409,   389,
       0,     0,     0,   882,     0,   955,   956,   957,   958,   959,
     960,   954,   961,     0,   683,     0,     0,     0,     0,     0,
       0,     0,     0,   263,     0,     0,   257,     0,     0,   310,
     251,   254,   255,   105,   104,     0,     0,   369,   363,   400,
       0,   877,   244,   270,   299,     0,   315,     0,     0,     0,
       0,   311,   350,   345,     0,     0,     0,     0,     0,   667,
     763,   571,   205,   421,   574,   316,   520,   514,     0,     0,
     485,   740,     0,     0,   744,   746,   757,   755,   205,  1118,
     922,     0,  1151,  1147,     0,     0,     0,  1113,     0,     0,
    1131,  1130,  1132,     0,     0,     0,  1035,  1033,  1034,  1027,
    1028,  1029,  1030,  1031,  1032,  1020,  1036,  1141,  1140,  1134,
    1135,   942,   940,     0,  1076,  1077,  1078,  1142,  1086,   928,
     961,   964,  1012,   991,  1146,  1009,     0,  1116,     0,   987,
       0,     0,     0,   996,  1102,     0,     0,     0,     0,     0,
       0,   789,   788,   845,     0,   847,     0,   846,   859,     0,
       0,   865,   863,     0,   865,     0,   865,     0,     0,   839,
       0,   841,   859,  1183,     0,   827,  1055,  1056,     0,  1173,
    1172,     0,     0,     0,   273,     0,     0,   310,     0,     0,
       0,     0,   250,     0,     0,     0,     0,   207,   603,   604,
      90,    97,    91,    98,     0,     0,   442,     0,     0,   443,
     445,   232,    82,     0,   391,     0,     0,   395,   385,   387,
       0,     0,     0,   880,   883,   891,   384,   680,   679,   678,
     675,   674,   682,   681,   673,   672,   677,   676,     0,     0,
     261,   265,   266,   264,   256,   310,   278,     0,   258,     0,
       0,   371,     0,     0,   876,     0,     0,     0,   267,     0,
     302,   246,   318,   319,   736,   312,   313,     0,   348,   346,
       0,   525,     0,     0,     0,     0,   556,     0,     0,     0,
     557,   561,   558,   569,   552,   635,   636,   633,   634,     0,
     586,     0,     0,     0,   512,  1175,     0,   486,  1150,  1070,
    1080,   915,  1082,   912,  1129,     0,     0,     0,  1075,  1201,
       0,  1010,     0,  1013,   993,   989,     0,   995,  1017,   793,
     792,   791,   790,   849,   857,     0,   837,     0,   864,   860,
       0,   861,     0,     0,   862,   851,     0,     0,   857,     0,
       0,     0,   782,   961,     0,   609,   593,     0,   310,   274,
     551,   615,   599,   614,   184,   185,     0,   186,   187,     0,
     189,   439,     0,   446,   441,   216,     0,   393,   392,   390,
     386,   388,   881,     0,   585,     0,   389,     0,     0,   253,
     259,   285,     0,     0,   244,   370,     0,     0,   364,   302,
     269,   268,     0,     0,     0,   306,   734,   349,     0,   342,
       0,     0,     0,   527,   534,   534,   554,   566,     0,     0,
     555,     0,   564,   565,     0,   553,   535,     0,     0,   515,
       0,  1039,     0,     0,  1011,  1115,   997,   848,     0,     0,
     850,     0,     0,   853,   855,     0,     0,     0,     0,     0,
    1186,   824,   826,   153,  1104,     0,   275,   206,   448,   209,
     230,   585,     0,   582,   383,     0,   260,     0,   290,     0,
       0,   372,   373,   368,     0,   306,     0,   300,   301,     0,
     308,   347,   696,     0,   308,     0,     0,   532,   530,   529,
       0,     0,   562,   563,     0,   568,   874,   743,     0,  1040,
       0,   858,   867,     0,   854,   852,   842,     0,   844,   278,
     217,   221,   695,   695,     0,   695,   218,   695,   215,   581,
     584,   583,     0,   282,   283,   284,     0,   262,   286,   287,
     309,     0,     0,   308,   298,     0,     0,   234,   534,   874,
     528,   533,   567,   559,     0,     0,  1041,   856,     0,   843,
     285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,     0,   289,     0,     0,     0,   410,   411,   376,
     235,     0,   303,     0,   307,   531,   522,   560,   639,   866,
     290,   219,   223,     0,   224,   220,   222,     0,   295,     0,
     294,     0,   292,   291,     0,     0,   416,     0,   378,   380,
     381,   377,     0,   374,   379,   382,   304,   305,   638,   637,
       0,   389,   225,     0,   293,   297,   296,     0,   420,   412,
     358,     0,   621,   632,   620,   622,   630,   627,   629,   628,
     626,   276,     0,   415,   419,     0,   413,   375,     0,   631,
     625,   781,   772,     0,     0,   623,   632,   376,   420,   624,
       0,   414,   359
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    44,    45,    46,    47,   887,    48,    49,    50,  1343,
    1694,   668,    51,  1388,  1743,    52,   857,    53,    54,   640,
    1034,  1392,    55,   508,   509,  1235,  1236,  1237,  1347,  1238,
    1223,   801,  1239,    56,    57,    58,   795,  1212,    59,    60,
     877,   878,   861,   879,   851,  1062,  2350,    61,    62,  1718,
    1988,  2439,  2498,   384,  1367,  2202,  2203,    63,   406,  1756,
    1757,  1758,  1759,  1740,  2030,  2031,  2032,  1760,  2248,  1761,
    1286,   987,  1363,  1364,  2448,  2507,  2508,  2509,  2572,  2250,
    2385,  2460,  2517,  2238,    64,  1768,  1411,  1762,  1763,    65,
      66,   869,  1324,  1659,  1240,  1225,  1226,    67,   407,  2052,
    2389,  2258,    68,   435,    69,  1036,    70,    71,  1039,  1404,
    1405,  2242,  2376,  2453,  2582,  2583,  2366,  2207,  2208,  2209,
      72,    73,    74,    75,   989,  1368,  1369,  1994,    76,  2547,
    2548,   408,  2616,    77,    78,   436,   671,  2467,   842,    79,
      80,   624,  1707,    81,   452,   453,   685,    82,    83,   469,
     470,   471,  1092,  1789,  1790,  2070,   496,  1437,  1438,    84,
     409,  2056,  2392,  2393,  2468,    85,   410,   853,  1297,  1298,
    1299,  1635,  1995,  1996,  2273,  2274,  2396,  2406,    86,    87,
    1271,    88,  1311,   584,    89,  2443,    90,    91,   487,  1108,
      92,  1327,    93,    94,  1773,  2604,  2618,  2619,  2620,  2279,
    2590,    95,  2606,    97,    98,    99,   128,   597,   598,   599,
     100,   101,   102,  1386,  1739,  2015,   103,   104,   105,   106,
    1029,   107,   108,   109,   110,   111,   530,   524,   821,  1250,
     112,  1078,   440,   113,   694,  1104,  1460,   114,   674,   115,
    2607,  1098,  1447,  1448,  2608,   118,  1102,  1454,  1457,  2609,
     120,   655,  1420,  2610,   765,   123,   124,   125,  1207,  1582,
     479,   828,   501,   535,   536,  1255,  1256,   835,  1269,  1262,
    1264,  2165,  2332,   836,  1267,  1612,  1586,  1909,  1910,  1911,
    2147,  2158,  2319,  2423,  1912,  1913,  1058,  1751,  1752,  1312,
    1375,  1013,   766,   767,   768,  1137,  1146,  1131,  1016,   769,
     770,   771,  1019,   772,   773,   774,   775,  1120,  1172,   776,
     777,  1155,  1383,  1075,  1506,   779,   780,   781,  1573,  1200,
     586,   782,  1932,  1202,  1526,  1490,  2128,  1469,  1118,  1491,
    1501,  1835,  1510,  1515,  1860,  1861,  1527,  1542,   783,  1473,
    1474,  1816,  1122,   784,   602,   603,  1161,   785,   786,  1245,
    1246,  1794,  1795,   787,  1093,   522,  2419,   797,   565,  1650,
     967,   378,   476,   788,   789,   790,   791,   669,   474,   792,
     560,   968,   372,   373,   562,   972,   380
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2258
static const short yypact[] =
{
    5866,   -56,  1972, -2258, -2258,   -56, -2258, 27488, 23708,    50,
     -56,   338, 30593, 27803, 27488,   397,  1849,   -56, 27488,   804,
   19202,  1123,   326, 23708,   201,   278, 19202, 23708, 27488,   198,
   28118, 24023,   511,   -56, 27488,   187, 28433, 24338,   321,   278,
   17916, 22763,   554,   -72,   641,   342, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258,   426, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258,    82, -2258,   481,    96, -2258, -2258, -2258, 21503,
   27488, 27488, 27488, 21503, 27488, 22763, 27488, 15609, 27488, 23708,
   22763, 27488, 27488, 27488, 27488,    57, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258,   452, -2258,   558,   629,
   -2258,  5959, -2258, -2258, 23708, 21503, 27488,   619,   526, 27488,
   -2258, 27488,   699, 27488,   726, 15941,   667, 27488, 27488, -2258,
   -2258, 27488, -2258, 27488, -2258, 27488,   279,   772,   851,   868,
      49, 27488, -2258, -2258, 22763, 21503, 27488,   672, -2258, 27488,
   -2258, 21503, 27488, -2258, 16273, -2258, 27488, -2258, -2258, -2258,
   27488, 27488, -2258, 27488, -2258,   901, 27488, -2258,   733, -2258,
     426,   -91, -2258,   100,    92,   167,    95,    98,   103,   -91,
   -2258,   714,   892, -2258, -2258, -2258,   862, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,   913,
     815, -2258, 23708, -2258, -2258, -2258, -2258, -2258, -2258, 23708,
     892, -2258, -2258,   785, 27488, -2258, -2258, 23708, 27488, -2258,
   -2258,  1113,   855,  1037, -2258,  1038,  1123,   934, -2258, -2258,
    1046,  8388, 24653, 28748,    97, 24968,   941,    57, -2258,   -79,
   -2258, -2258,  1197,   964,  1138, -2258,    57, 23708, -2258, -2258,
   14664,  1055,   976, -2258,  1201,  1006,  1031, -2258,  5866, -2258,
   23708,   191,   191,  1326,   191,    76,   506, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258,  1043,   452,  1057,
   -2258,  1065, -2258,    20,  1034,   688, -2258,   243,  1071,   156,
   -2258,     7,  1186, 27488, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258,  1079, -2258, -2258,  1101,   470, -2258,
     753,   531,  1251,  1258,   464,  1302,   -20, -2258,   361, -2258,
   10740, 17601, -2258,   452, 23708, 21503,  1136, -2258, 27488, -2258,
   -2258, -2258, 21503, -2258,  1291, 16605, 27488, -2258, -2258, -2258,
   27488, -2258, -2258,  1332, 27488,  1147,  1148,  1446, 30008, 27488,
    1180,  1475, -2258, -2258,  1180, -2258, -2258, 27488,  1148, -2258,
    1477,  1479,  1297,   694,    70,  1180, 23708, 23708,  1347, 27488,
   27488, 21503, 27488, 23708, -2258,   570,  1198,  1171,   121, 30008,
   -2258,  1071, -2258, 27488,  1174,  1316, -2258,  1322,  1177, -2258,
   20871,    93, -2258, 10740, -2258,  1063, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, 27488, -2258, 23078,  2193,    25,
      18, -2258, 27488, 30008,  1504,  1412,  1412, -2258, -2258, -2258,
    1367,  1418,  1334, 29063,  1194,   874,  1214,   432,  1215, 10740,
    1199,    58,    58,  1200,  1203, -2258,  1206,  1207, -2258,   484,
     484,  1323,  1209,  1210, -2258,   612,  1217,  1220,   614,  1211,
    1212,  1134,    58, 10740, -2258,  1216,   654,  1218,  1221,  1229,
    1236,  1230, -2258,  1252,  1232,   560,   658,  1234,  1239, -2258,
    1209, -2258,    40,   674, -2258, -2258, -2258, -2258, -2258, 10740,
   10740, -2258, 10740, 10740,  8724, -2258,   201, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258,    71, -2258,   675,  4335, -2258,
   -2258,  1369, 10740, -2258, -2258,    10, -2258,   452,  1241, -2258,
   -2258, -2258, -2258,   684, -2258,   137,  1237, -2258,   965, -2258,
   -2258, -2258, -2258, 20554,  1563, -2258,    28,   361, 18546, 18546,
   27488, -2258, -2258,  1427, -2258, -2258, 23708, -2258, 27488, -2258,
   -2258,   426, -2258, -2258, -2258,  1246, -2258, -2258,   -72,   -72,
   10740,   -72,   272,  9060, 10740,  1478,    73,   452, 18231,  1310,
    1311, 21188,  1250,  1315,  1318, 28748, -2258,   264,   561,  1320,
     115, -2258,   330,   595, -2258, -2258,  1321,  1303,  1327,  1328,
    1329,  1266, -2258,  1333,  1317, 29378, 16937,  1340,  1341,  1434,
     259,  1569,  1423,  1346,  1020,    65,   356,  1282, -2258, -2258,
    1351,  1354, 22763,  1356,  1357, 28748, -2258, -2258, -2258,   717,
   -2258, -2258,    57, -2258,  1503, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258,  1289, 30008,  1438,  1071,   731,
   27488,  1298,   421,  1442, 27488,  1497, 27488,  1335, 21188, -2258,
    1305, -2258,  1343, -2258,  1343,  1343,  1306,  1306,  1312, -2258,
   -2258, -2258,  1134,  1343,  1313, -2258, 30323, -2258,   740,   793,
   -2258, -2258,  1635,  1637, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258,   572,  1034, -2258,  1647, -2258, -2258, 30008,
   -2258,  1582, -2258, 27488,   534, 27488,  1495, -2258, -2258,    81,
    1325, -2258, -2258, -2258,   -24, 20871,  1556,  1468, -2258,  1071,
    1649,  1147, -2258,   853, -2258,  1425, -2258, 10740, -2258, 18231,
   -2258, -2258, -2258,  1659,   121,  1381, 29378, 23708, 23708, 27488,
   -2258,   121, -2258, 27488, -2258, 19561,   787,   407, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, 27488, 21503, 27488, 27488,
   23708, 27488,  1404,  1348, -2258,  1383,  1345, 14979, -2258, -2258,
     119, 23708,  1505, -2258,   806, -2258,   502, -2258, -2258, -2258,
   -2258, -2258, 23078, 27488, -2258, 10740,  9396, -2258, -2258, -2258,
    1352, 19561,  1385, 10740, -2258, -2258, 10740, 10740,   714,   714,
     714, -2258, -2258, -2258, -2258,  1024,   714, -2258,   714,   714,
    1343,  1343, -2258,  3788, 10740,   714, -2258, 16937, 10740, 11076,
    7395, 10740,  1421,  1426,   714, -2258,   714, -2258, 10740,  8052,
   -2258,   452,  1358,  1358,    64,   113,   918,  3861,  1360, -2258,
    1456,   714, -2258,   714,  1017, 10740, 21188,  1433, 11076, 10740,
    1371,   833, -2258, 10740,   630, -2258,  1373, 10740,  1436,   142,
   10740, 10740, 10740, 10740, 10740, 10740, 10740, 12407, 12743, 30008,
   -2258, 11412,   205,   -43,  1342, 23393,  8388,  1601,   527,  7058,
   -2258, -2258, -2258, 27488,  1563, -2258, -2258,  1435, -2258, -2258,
   -2258, -2258,   611, -2258, -2258, -2258, -2258,   689, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258,  1376, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258,  1377,    -8, -2258, -2258, 22448, 27488,
   -2258, -2258,  1580, -2258, -2258,  1379, -2258,  3449,  1580,  1525,
    1533, -2258,   -33, 19561,  1570, 19561, -2258, -2258, -2258, -2258,
   -2258,  1393, -2258, 27488, 27488, -2258, 21188, 27488, 27488, -2258,
    1396, 27488,  1590,  1594,  1413, -2258, -2258, 27488, -2258,  1565,
   27488, 10740,  1566, -2258, -2258, -2258, -2258,   822, -2258, 22133,
    1480,  1489, 27488, 27488, 27488, 27488, 27488,   538, 27488, 27488,
    1424,  1417,  1428, -2258, 27488, 27488,   731, -2258,  1736,   731,
     731,   541,  1180,  1180, -2258, -2258, -2258, 27488, 27488, 27488,
    1507, 27488, 27488, 27488, 27488,   128,   623, 27488, 27488,  1544,
   27488, 27488, -2258,  1431,    61,  1552, -2258, -2258, -2258, -2258,
   10740, 18231,  1760, 27488,  1634,  1640,  1485, 29378,    -3, 27488,
   27488,  1642,    -3,   838, -2258, -2258,  1593,    23,   844, -2258,
    1466, 10740,  1775, 30008,  1458,  1459,  1520,  1521,  1523, -2258,
   -2258,  1524,   714, -2258,  1250,    81,   539, -2258,   181,  1694,
   -2258,  1350, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
     201, -2258, -2258, -2258,  1607,  1604, 27488,  1431,  1434, 23708,
   21818,    69,  1687,   201, 23708,  1573, -2258,  1791,  1689,  1690,
    1704, -2258, 19561,  1474, 30008, -2258, 27488,  1481,   121,   121,
   -2258, -2258, -2258, -2258, 10740,  1548,  1237,  1476, -2258,  1071,
    1237,  1237,  1348,  1237, 25283, -2258,  9732,   847, -2258, -2258,
      33, -2258,    53,   -30,  1648, -2258, -2258, -2258, -2258, 30008,
   -2258, -2258, -2258, -2258, -2258,  1708, -2258,   850,   529,   693,
   -2258,   714, 10740,    29, -2258,  4419,   905,  4678,   911,  1484,
    1487,   912, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
    1488,  1711,  1492,  1499,  1500, -2258, -2258,  2526,   920,  1502,
    5142,  1506, 11076, 11076, 11076, 11076,  1752, -2258, -2258, 11076,
    1509, -2258,   923,  2569,  1501,  1510,  1531,  1535,  1512,  1515,
    5051, 10068, 10740, 10068, 10068,  5405,  1501,  1516, -2258, -2258,
   10740, 27488,  1517,  1522, -2258,  3788, -2258,  1545,   713,  3190,
    8724, -2258, -2258,  1746, -2258,   669, -2258,  1529, -2258, -2258,
    4695, 11076, 10740,  1371, 10740,  1603, 16937,  5425, 10740,  6385,
    2811,  2811,   258,   258,    64,    64,    64,   113, -2258,  1342,
   -2258, -2258, -2258,  1530,  1230, 10740, -2258,  1022,  1094, 23708,
     223,  1388, -2258, -2258, -2258, 13708,  1198, 10740, 10740,  1532,
   -2258,   928, -2258,    57, -2258, -2258,   714,  1017, 18874, -2258,
   27488,  1198,   780, -2258, -2258,   937, 10740, -2258, -2258,  1591,
   -2258, 27488, -2258, 10740, 10740,  9060,   673, -2258, -2258, -2258,
   -2258, -2258, 10740,   448,  1540,  1550, 27488,   121, -2258, -2258,
   19561, -2258, -2258,   559,   129, 30008, -2258, -2258,  1034, -2258,
     202, 27488, 27488, -2258,  1177, -2258, -2258, -2258, -2258, -2258,
     704, -2258, 30008,  1663, 29693, -2258, -2258, -2258, -2258,   731,
   -2258, -2258, -2258, -2258, -2258,   731,   731, -2258, 30008,   249,
   -2258, -2258,   121,   121, -2258,  1605, -2258, -2258, -2258, -2258,
   -2258,  1612, -2258, -2258, -2258, -2258,  1672,  1772, -2258, -2258,
     201,   714,  1682,  1602, -2258, -2258, -2258, -2258,  6025,  1560,
   30008,  1755,    -3,    -3, 27488,  1564, -2258, -2258, -2258,  1757,
    1761,    -3, -2258, -2258, 27488, -2258, -2258, -2258,   596, -2258,
   21188, 17269,  5489,  1578,  1459,  1576,   714,   749,    68,    11,
    1684,  1759,  1587,  1734,  1608,  1608,  1608,  1608,  1608, -2258,
    1378,   714, 27488, -2258,  1645,   534,   586,  1628, -2258, 23708,
      81,   939, -2258, 30008,  1606, 23708,  1600,  1599, -2258, -2258,
   -2258, -2258,   945, -2258, 30008,  1842,  1751,  1753,   -72, 27488,
    1670,  1651, 30008,  1756,   -72, -2258, -2258,   -72,   121,  1611,
     121,   121, -2258, -2258, 19561, 23708, 21503, -2258, 27488,   366,
   -2258, -2258, -2258, 19561,   948, -2258,   -53, 27488,   452, -2258,
   -2258, -2258, -2258,  1854,  1856, -2258, -2258, 25283, -2258, -2258,
   -2258,  1619,  1617,  5977, 10740, -2258,  1863, 30008, -2258, 27488,
   -2258, -2258, -2258, -2258,   714, -2258, 10740, -2258, -2258, -2258,
   10740, -2258,   714, -2258, 10740,  1845, -2258,  1620,  1620,   773,
    1620, 11076,    91,  1218, 11076, 11076, 11076, 11076, 11076, 11076,
   11076, 13065, 14027, 30008, 11748,  1130, -2258, -2258, 10740, 10740,
    1851,  1845, -2258, -2258, -2258,  1011,  1011, 30008,  1622,  1501,
    1627,  1629, 10740, -2258,   452,  6278, -2258,  1928,   201, 12084,
   11076, 10740,   951, 10740, -2258, -2258,  1632, -2258, -2258, 30008,
   10740,  1104, 19459, -2258, 20146, 10740,  1641, 20201,  8724, -2258,
     278,   278,   278,   278, -2258, 23708, 23708, 13389, 25598,  1633,
      55, -2258, 25598, 25913, -2258,   452,  1853,   953,   969, -2258,
   -2258,   361,  1643, -2258, -2258, -2258, -2258, 10404, -2258, -2258,
    1639, -2258, -2258,  1237, -2258, -2258, -2258,  1707,  1709,  6303,
   -2258, 27488, 27488,   975, -2258, -2258, -2258,  -104, -2258, -2258,
    1712,  1713, -2258,  1714, -2258, -2258, -2258, -2258, -2258, -2258,
     118,   533, 30008, -2258, -2258, -2258, 27488, 27488,   201, 27488,
   -2258, -2258,   201,   201, -2258,  1840,  1654,    -3, -2258, -2258,
    1850,  1857,    -3,    -3, -2258, -2258, -2258, -2258,    77, -2258,
   -2258,  1639,   611, -2258, -2258, -2258, -2258, -2258, -2258,   417,
     714,  1162,  1662, -2258,  1664, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258,  1017, 23708, -2258,   199,    83, 26228, 26543, 26858,
    1658, 27488, 11076, -2258,   628,   459, -2258,  1855, 23708,  1718,
   -2258, -2258, -2258, -2258,  1177, 30008, 23708,  1897,  1805, -2258,
   27488, -2258, 21818,   687,  1876, 21818, -2258, 27488, 27488,  1991,
    1992, -2258,  1717,  1034,   201, 27488,  1681,   849,    75, -2258,
   -2258, -2258,   121, -2258, -2258,  1683, -2258, -2258,  1903, 25283,
   -2258, -2258,  9732,  1685, -2258, -2258, -2258, -2258,   111, -2258,
   -2258, 10740, 19561, -2258,  1686,  1688,  1693, 19561,  6346,  1695,
   19561,  1851,  1415,  1909,  1832,  1697,  1415,  1795,  1795,   884,
     884,   773,   773,   773,  1620, -2258,  1130, 19561, 19561, -2258,
   -2258, -2258, -2258,  1698, -2258, -2258, -2258,  1501, -2258, -2258,
    1017, -2258,  1830,  1430, -2258,   505, 30008, -2258,   977,  1430,
   11076, 10740, 10740, 20216,   228, 10740, 19496, 23708, 23708, 23708,
   23708, -2258, -2258,  7732,    55,  1701, 27488, -2258,  1715, 13708,
    1878,  1829, -2258, 13708,  1829,   677,  1829, 13708,  1898, -2258,
   15294, -2258,  1716,   527,  2012,  1927, -2258, -2258,   201, -2258,
   19561, 16937, 27488, 27488, -2258,   996,  1001,  1718,  1762, 27488,
   27488, 27488,  1378,  1862,  1864,   438, 27488,  1758, -2258, -2258,
   -2258,  1177, -2258, -2258,    -3,  1910, -2258,    -3,    -3, -2258,
   -2258, -2258,  1180,  1974, -2258,   632,  1980, -2258,  1929,   104,
    1723,  1953,  1955, -2258, -2258, -2258,  1958, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258, 10740,   720,
    1415, -2258, -2258, -2258, -2258,  1718,  1147,  1943, -2258,  1790,
     -21,  2004,  1998,    81, -2258,  1765,  2021,  2022, -2258,  1763,
    1168, -2258, -2258, -2258,   733, -2258, -2258, 27488,  1950,  1250,
    1994, -2258, 14349,   201,  1908,  1866, -2258, 20871,  1920,   514,
   -2258, -2258, -2258,   789, -2258, -2258, -2258, -2258, -2258,  1835,
   -2258, 27488,  2091,  1913, -2258, -2258,  9732, -2258, 19561, -2258,
   -2258, -2258, -2258, -2258, -2258, 11076,  1776, 30008, -2258, -2258,
    1003, -2258, 30008,  1830,  1430,  1430, 10740,  1430, -2258, -2258,
   -2258, -2258, -2258, 25598,  1777, 27488,    55, 13708, -2258, -2258,
     831, -2258, 13708,  1968, -2258, -2258, 13708, 27488,  1782, 27488,
   10740, 10740, -2258,  1017,  1793, -2258, -2258,  1906,  1718, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258,   714, -2258, -2258, 10740,
   -2258, -2258,    -3, -2258, -2258, -2258,   201, -2258, -2258, -2258,
   -2258, -2258, -2258, 21503,  2115, 23708,   417, 19516,  1946, -2258,
   -2258,  1971,  1870, 27488, 21818, -2258,     3,  1922, -2258,  1168,
   -2258, -2258, 23708,  1948,  1949,  1951, -2258, -2258,   201, -2258,
   27488, 10740,  1009, -2258, 27173,  6736, -2258,  1802,  1959,   580,
   -2258,  1954, -2258, -2258,  1148, -2258, -2258, 23708,  1842, -2258,
    1018,  1543, 30008,  1023, -2258, -2258,  1430, -2258, 27488,  1029,
   -2258, 10740,  1812, -2258, -2258, 13708,   831,  1041, 27488,  1048,
   30008,  1501, 19561, -2258, -2258, 23708, -2258, 19561, -2258,   880,
   -2258,  2115,   207, -2258, -2258,  2046, -2258,    34,  1961, 27488,
    2147, -2258, -2258, -2258, 21503,  1951,  1050, -2258, -2258,  2114,
    1902, -2258, -2258, 19541,  1902, 14349, 27488, -2258, -2258, -2258,
     201,  2039, -2258, -2258,  1990, -2258,  1198, -2258,  1069, -2258,
    1077, -2258, 19561, 27488, -2258, -2258, -2258,  1100, -2258,  1147,
   -2258, -2258,  1475,  1475,   304,  1475, -2258,  1475, -2258, -2258,
   -2258, -2258,  2089, -2258, -2258, -2258,    44, -2258,  1983,  1984,
   -2258,   193,  1846,  1902, -2258,   170, 27488, -2258, 27173,  1198,
   -2258, -2258, -2258, -2258,  2050,  2101, -2258, -2258,  1102, -2258,
    1971,   201,   201,  2000, 27488,   201,   201,  1952,   324,   324,
    2108, -2258,  1896, -2258,   714,   714, 30008,  1852, -2258, 19899,
   -2258,  1957, -2258,  1960, -2258, -2258, -2258, -2258,   139, -2258,
    1961, -2258, -2258, 27488,  1858, -2258, -2258,  2093, -2258,  2187,
   -2258,   116, -2258, -2258, 21503, 16937, -2258,   193, -2258, -2258,
   -2258, -2258,  1112, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
     763,   417,  1858,  1975, -2258, -2258, -2258,  1071,   -18, -2258,
   -2258, 19899, -2258,    35, -2258, -2258, -2258, -2258, -2258, -2258,
   -2258, -2258, 21503, -2258, -2258, 29378, -2258, -2258,   852, -2258,
   -2258,   886,  1031,  1859,  1861, -2258,    35, 19899,  1979, -2258,
    1132, -2258, -2258
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -2258, -2258, -2258,  1675, -2258,  -596, -2258, -2258, -2258,  1156,
   -2258, -1227, -2258, -2258, -2258, -2258, -2258, -2258, -2258, -2258,
     818, -2258, -2258,  -412, -2258,  1401, -2258,   613, -2258, -2258,
   -2258, -2258,  -659, -2258,   131, -2258, -2258, -2258, -2258, -2258,
   -2258,   879, -2258,  -524,   552,  -609, -2258, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258,  -978,  -988,   180,
   -2258,   178,   902,   269, -2258,     1, -2258, -2258, -2258,  -234,
     608, -1022, -1576,   518,  -297,  -326,  -274,  -272,  -302, -2258,
    -141,  -216, -2253, -1591, -2258, -2258,   175, -2258,   196,  -973,
   -2258,  1202, -2258, -2258,  -664, -2258,    59, -2258, -2258,   -11,
   -2258, -2258, -2258,   420, -2258, -2258, -2258,  -970, -2258,   864,
   -1670, -2258, -2258, -2258,  -377,  -350, -2258, -2257,    47,    52,
   -2258, -2258, -2258, -2258,  -623, -2258,   535, -2258, -2258, -2258,
    -316,  1231,  -364, -2258, -2258, -2258, -2258,  -107,  -976, -2258,
   -2258, -2258, -1292, -2258,  2239,   778,  1787,  -967, -2258,  1774,
   -2258,  1583,  1160,   461,   204, -2258, -2258, -2258, -1714,  -966,
   -2258, -2258, -2258,  -190, -2230, -2258,   885,  -654, -2258,   646,
   -2258, -2258,   508, -1188, -2258,    13, -2258, -2258, -2258, -2258,
    -938, -2258, -1046,  -389, -2258,  -157, -2258, -2258, -2258,  1597,
   -2258,   266, -2258, -2258, -2258, -2258, -2258,  -305,  -339, -2258,
   -2258, -2258,    79, -2258, -2258, -2258,   859,  -567,  -466,  1773,
    -965, -2258, -2258, -2258, -2258,  -646, -2258, -2258, -2258, -2258,
   -1342, -2258, -2258, -2258,  1047,  2275,  -362, -2258, -2258, -2258,
   -2258, -2258, -2258, -2258, -2258, -2258, -2258,  1621,    51, -2258,
      42, -2258, -2258,   501,    46, -2258, -2258, -2258, -2258,    60,
    1624, -2258, -2258,    12,     0,   -41,   569,   666, -2258, -2258,
     -38,   858, -2258, -2258, -2258, -2258,   695,  1464, -2258,   691,
    -411, -2258, -2258,  1469, -2258, -2258,  1058, -2258, -1801,   400,
   -1828,   153,  -729,  -114,    14, -2258, -1535, -1687,   270,  3396,
     942,  1307, -2258,  1598,  1638, -2258, -2258,  -607, -2258, -2258,
    2185,  2610, -2258, -2258,  2680,  2949, -2258,  -589,   439,  3072,
    1589,  -706, -1137,  3796,  -998,  -615, -1363,  -924, -2258,  -132,
   -2258,  4292,   597, -2258,  -555, -2258, -2024, -2258, -1042, -2258,
   -2258, -2258, -2258, -2258,  -957, -1741,    -7,   762, -2258, -2258,
     846, -2258, -2258, -2258,  -585,  -530, -1081, -2258,  1114, -2258,
     721,    38,   255,    67,  -471,   594,  -483,    45,  -336, -1382,
    -764,  1678, -2258,  -116, -2258,   756,    15,   109,    -4,  3299,
    1033,  -943,  1977,  -547,  -544, -2258, -2258
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1383
static const short yytable[] =
{
     122,   517,   526,   371,   379,   585,   638,  1064,   690,   371,
     371,  1071,   121,   559,   371,  1032,   371,   568,   973,   796,
    1427,  1041,   371,   563,   371,   567,   489,   494,   837,  1417,
     498,   893,   510,   515,  1027,   664,   593,  1534,  1030,   477,
    1157,   807,   116,   525,  1780,  1370,   117,   862,  1384,  1042,
    1943,  1916,   370,   630,   970,   521,  1393,   971,   412,   413,
     119,  1394,  1074,   438,  1395,   454,  1926,  1396,  1397,  1398,
    1712,   481,  2066,   483,  1470,   376,  1644,  1275,   675,    96,
    2038,  -932,  -773,   660,  2159,  2161,  1177,  1765,  1040,  1435,
     376,   799, -1280,   805,   376, -1305,  -776,  -159, -1320,  -937,
   -1233,  1095,  2300, -1337,  1218,  1585,  2144,   376,   376,  2445,
     677,  1636,  1170,  1132,  1695,  1325,    15,  2150,  1076,  2109,
    1814,  1423,  1124,  1125,  1450,  2538,   564,   566,   564,  1060,
     570,  1799,   371,   587,   371,  1177,  1716,   371,   371,   564,
     570,  -773,  1224,  1142,  1216,  1100, -1211,  1060,  2503,   571,
    2588,  1801, -1090,  1205,   590,  -776,  2275,  1060, -1090,  2220,
    -233,  1613,  1401,   854,   651,  2469,  1602, -1282,  1409,  2151,
    1001,  1409,    22,   800,    35,  1676,  2093,   679,   890,  2008,
    1538,   572,  2204,   588,   832,  1706,   591,   592,  2152,  1219,
    2005,  1291,  2595,    35,  1288,  1574,   558,   499,   808,  -773,
     558,   826,   376,  2153,   595,  2614,   376,   376,  1803,  1168,
    2154,  2519,  2276,  -776,   858,  1570,  1210,  1451,  1402, -1212,
      27,  1571,  1914, -1380,   126,  1508,   981,   839,  2500,  2178,
    2155,   833,   450,  1536,   833,   859,  2006,  1276, -1106,   451,
     893,  2451,  2504,   569, -1106,   855,   809,   381,   840,  2073,
     847,  2551,   973,   594,  1508,  2009,   127,  1208,   860,  2552,
    2550,  1211,   810,   585,  2452,  1804,    43,   834,   484,   626,
     834,    35,   500,  2413,  2094,  2217,   827,  2589,   596,  1576,
    1177,    35, -1380,  2095,   631,    43,  1800,  2206,  2555,   652,
    2505,  2156,   585,   891,   970,  1575,   644,   971,  1292,   657,
    1717,  2183,  1280,  1157,  2596,   661,  1802,  1280,  2544,  1325,
    1614,  1705,  2007,  1281,  1410,  1355,   475,  2374,  1281, -1380,
    2615,  2277,  1980,  1677,  1354,  1348,  1061,  1096,   485,   672,
      41, -1380,   848,  2501,  2611,  1600, -1380,  1472,  1960,  2539,
   -1380, -1380,  1333, -1380,  1061,  1220,  1221,   475,  2316,  1696,
    2294,   450,  2320,  1206,  1061,   653,  2325,  1452,  1222,  -932,
    2568,  1101,  1119,  1097, -1380,  2175,  2176,   383,  1798,  1282,
    2278,  2157,  1453,    43,  1282,  2201,  1403,  -937,  -932,  1766,
    1767, -1380,   371,  2553,   856,   566,  1412,   564,  2478,   570,
    1132,   587,  2545,   641,   371,  1415,  -937,   371,  1198,   564,
   -1090,   570,   475,  1746,  1199,  1124,  1125,   371,   988,  1171,
    1978,  1979,   371,  1699,  1142,   566,   475, -1380,   570,  1984,
     587,  -773,   371,   450,  -773, -1380,   371,   371,   656,   570,
     451,   627,   564,  1279, -1280,  -776,  1073, -1305,  -776,  -159,
   -1320,   970, -1233,   642,   971, -1337,   643,  1946,  1874,  1741,
     849,   376,   558,  1199,  2069,  1425,   654,  1293,  2546,  1248,
    1923,   658,  1431,  1572,  1294, -1211,   864,   486, -1211,   472,
   -1211,   665, -1211,  1342,  1283,   666,   667,  1313,  1742,  1283,
     371,   376,   558,   585,   697,  2417, -1106,  2533,   558,   975,
     450,  1280,   478,  1259,   850,  2204,   978,   451,   371,   510,
    1961,   510,   634,  2569,  1837,  1838,  1839,  1840,   595, -1282,
     414,  1855,  1619, -1380,   645,  2034,  2420,   985,   475,   802,
     475,  2424,   450,   392,  2534,  2426,   646,  1177,   122,   695,
    1031,   662, -1380,  1295,  1507,  1049,  1962,  2233, -1212,   376,
     121, -1212,  1046, -1212,  1914, -1212,   376,   478,   647,  2205,
    1284,  1495,  1496,  1891,   376,  1284,  1065,  2570,  1282, -1380,
    1467,  1468, -1380,  1507, -1380, -1380,  1358,  1260,   394,   564,
     116,  1476,  1478,  2378,   117,  2571,  1528,   531,  1508,  1508,
    1508,  1508,   596,    15,   376,  1508,  2339,   376,   119,  1195,
    1196,  1197,  1198,  1391,  2402,  1512,  1514,   376,  1199,  1052,
    2206,   516,   377,  1436,   371,  1440,  1441,    96,  1443,  1291,
    1662,   587,   371,  1285,  -805,  1287,   371,   473,  1359,  1442,
     564,   482,   532,   973,  2484,   371,  1306,  1508,   495,   970,
     870,  1734,   971,   564,   519,   871,  1326,  1288,  1053,    22,
    2427,   527,  2429,  1376,  2370,   564,  1048,  2234,   371,  2441,
   -1383,    21,  1657,   977,  1591,  1660,  1661,  1551,  2403,   564,
    2472,   982,  1947,  1283,  -805,   983,  1072,  1335,   523,  1296,
     872,   376,   558,  2261,  1026,   122,  2068,   867,   399,   558,
     400,   371,   873,   533,   528,  2196,  1293,  1084,   371,   122,
    2199,  2200,   884,  1294,  1377,    31,   846,  1050,   868,  1114,
    -805,  1099,  1037,  1735,   892,  1117,  1054,  2231,  1663,  2069,
    1664,  2357,   874,   376,   376,   885,  2184,  1080,   558,  1038,
     376,  1081,  1134,   526,  2473,   888,  1665,  1666,  1880,   970,
    1085,   529,   971,   589,   585,  1082,  1119,  1103,   880,  1284,
    1378,  2487,  2191,  1379,  1289,   858,  1736,  2436,    35,  1055,
    1160,  -937,  2232,  1552,   376,   604,  2358,  1553,  1499,   881,
     870,   450,  1295,  2020,  1166,   871,  1605,  1393,  2346,  2079,
    -937,   534,  1394,  1884,   886,  1395,   455,  1370,  1396,  1397,
    1398,  1169,   455,  1648,  2246,  1787,  1914,  1554,   600,   860,
    1914,  2151,  1174,   601,  1914,  2185,  2022,    41,  2186,  1072,
     872,   623,  1300,  -917,  1072,  1072,  1242,  2263,   629,  1737,
    2152,  1738,   873,  1056,  1247,  2247,  1380,     3,     4,  1782,
    1783,  1229,  1130,  1301,  2264,  2322, -1190,   648,  1251,  1251,
     858,  1251,  2154,   646,  1193,  1194,  1195,  1196,  1197,  1198,
      43,   510,   874,  2092,    15,  1199,  2096,  2097,  2098,  2099,
    2100,  2101,  2102,  2103,  2104,  2036,  2106,  1885,  1842,  1986,
    1987,  1886,   587,   600,   145, -1193,  1809,  2263,   601,   382,
    1152,  1153,  1434,  1356,   876,  2215,   437,  1361,  2091,  -947,
    1937,   510,  2122,   376,  2264,  1555,  1381,  1507,  1507,  1507,
    1507,  2265,   497,  2150,  1507,   843,  1339,   639,  1154,  2394,
      22,  1938,  2351,  2368,  2110,  2353,  2354,   649,  2026,  2490,
    1382,  1950,  1843,  2156,  2266,   475,   844,  1508,  1543,    31,
    1508,  1508,  1508,  1508,  1508,  1508,  1508,  1508,  1508,  1594,
    1508,  -911,  1951,  -944,   450,  2027,  1507,  1544,  1344,   845,
    2267,  2525,  1621,  2491,  2028,  2151,  1345,  2602,    27,   376,
    1136,  2265,  -944,  1887,  1914,  1508,  1508,   628,  2564,  1914,
     858,  1888,  2492,  1914,  2152,  1346,  1432,  1869,  1152,  1153,
     632,  1439,   633,  -914,  2266,  2493,   564,  -947,   625,  2153,
     564,   875,  1365,  2299,  2556,  1882,  2154,  2592,   803,  2494,
     425,  2450,  1145, -1211,   475,  1956,  1156,   635,   650,   636,
    2267,  1957,  1958, -1212,   876,   683,  2155,  1214,   475,    35,
     659,  2029, -1213,  1173,  -781,   585,  1545,  1528,  1944,   684,
    1168,  1546, -1214,  2268,  2230,  1547,  -781,  1596,  2421,   570,
    1810,   371,  1917,  1918,  2269,   757,  1811,   450,  1844,  1845,
    1846,  1072,  1847,  1848,  1849,  1850,  1851,  1852,  2270,  1221,
    1152,  1153,   670,  1853,   450,  2271,   526,  1993,    41,  -781,
    2438,  1222,  1914,  1964,  1965,   570,   689,  2156,  2495,   564,
    1325,   673,   450,   691,  1331,  2496,  -781,  2259,  1154,   686,
    1399,   696,   371,  2268,   371,   371,  2003,   371,  1376,  2016,
    2017,  2018,  2019,  1449,  2269,  1482,  2272,   525,  1508,  2404,
    2497,  2603,  2394,  1152,  1153,  1927,   122,  1852,  2270,  1466,
     687,   815,  -781,  1853,   817,  2271,   600,  1548,  1464,  2130,
    -781,   601,  1077,   693,   825,  1549,  1433,  1921,  1933,  2422,
    1434,  1156,  2303,   456,   376,   376,   698,  1328,    14,  1377,
    1332,  1334,  1390,   587,    15,  1458,  1483,  2157,  1461,  1459,
    2531,  2532,  1462,  2535,   558,  2536,  2272,   376,   688,  2111,
    2112,  1632,    18,  1418,  1419,  1633,  1463,  1896,   376,  2061,
     699,  2063,  2064,   970,  1140,  1141,   971,  1713,  1430,   376,
    1541,  1714,   457,  1719,   700,  1378,  1796,  1720,  1379,  1808,
    1797,  2625,  1484,  1434,  2626,  1485,  2433,   455,   974,   455,
      22,   455,  1934,  1935,   458,   455,  1508,   682,  -781,   371,
    1116,   703,    43,  1528,  2371,  1849,  1850,  1851,  1852,   676,
     811,   678,   459,   680,  1853,   822,  1507,   681,  -773,  1507,
    1507,  1507,  1507,  1507,  1507,  1507,  1507,  1507,   701,  1507,
    1043,  1044,  1597,   704,  1818,   371,  1701,  1051,  1434,  1842,
    1820,  1823,  1709,  1710,  1434,  1824,   806,   822,  1592,  1831,
     460,  1380,  1857,  1832,  2121,  1507,  1434,  1920,  1486,   570,
     371,  1434,   376,   570,   566,  1842,  1928,   371,  2039,   812,
    1213,   691,  2040,   371,  2046,   813,   570,  2071,  2047,  1528,
    2124,  2072,  2166,  1900,  1434,  1901,  1434,  2411,   570,   570,
     570,   371,   371,  1843,   371,  1651,   818,   819,  2167,    35,
     570,   371,  1434,   820,  2177,   376,  2301,  2117,  1714,  1618,
    2302,  1152,  1153,  1668,  1669,   371,  1623,   371,  1673,   371,
     371,  1381,  1627,   570,   371,  2337,   570,   570,  1487,  1714,
    2338,  1488,  2414,  1489,  1714,   822,  2302,   461,  2464,   564,
    1646,  1647,  2465,  1649,   893,   564,   564,  2477,    41,   830,
    1656,  2072,  2479,   462,  1177,  1902,  2302,  1903,  2481,   463,
     823,  1508,  1213,  1708,  1670,   841,  1672,  1708,  1674,  1675,
    2486, -1213,  1617,  1680,  2040,  2163,  1620,  2488, -1382,  2514,
     829,  2040,   831,  1101,   464,   838,   465,  1252,  1254,  1629,
    1258,    43,  1753, -1214,   388,   466,  1764,  1507,  2526,   852,
    1244,  1643,  2302,  1645,   863,  1748,  2527,   865,   467,   468,
    1213,  2020,  1651,  1655,   585,  2321,   757,  2324,  1770,  1844,
    1845,  1846,  2021,  1847,  1848,  1849,  1850,  1851,  1852,  2529,
    1791,  2559,   866,  2040,  1853,  1213,  1679, -1382,   882,  1682,
    1683,  2600,  1177,  2280,  2022,  2601,  2023,  1178,   889,  1847,
    1848,  1849,  1850,  1851,  1852,   883,   392,  2530,  1316,  2287,
    1853,  2632,  2211,  2212,   976,  2601,   376,  1931,  2383,  2384,
    -524,   376,   979,   984, -1382,   986,   988,  1181,  1182,   990,
     886,  1684,  1685,  1028,  1253,  1253, -1382,  1253,  1045,   526,
    1033, -1382,  -112,  1317,  1035, -1382, -1382,  1057, -1382,  1059,
    2024,   394,  1066,  1067,  1868,  1507,  1870,  1871,  1175,  1068,
    1069,  1107,  1106,  1110,  1686,  1177,  1111,  1876,  1185, -1382,
    1178,  1112,  1115,  -902,  -909,  1133,  -899,  1123,  1126,  -900,
    1166,  1127,  1905,  1906,  1128,  1129, -1382,    43,  1135,  1138,
    1139,   396,   587,  1541,  1144,  -903,  1147,  1180,  1687,  1148,
    1842,  2025,  1228,  1318,  1228,  1228,  2026,  1149,  1150,  2624,
    1151,  -901,  1158,  1899,  1203,  1181,  1182,  1159,   973,  1209,
    1213,  1217, -1382,  1243,  1249,  1908,   832,  1273,  1274,  1931,
   -1382,  1276,  1277,  2027,  1072,  1278,  1247,  1290,  1302,  1306,
    1303,  1319,  2028,  1320,  1304,  1305,  2355,   371,  2400,  1307,
    1308,  1688,  1689,  1321,  1843,  1309,  1185,  1314,  1315,  1325,
    1329,   399,  1365,   400,  1330,  1336,  1179,  1351,  1337,  1186,
    1180,  1338,   401,  1340,  1341,  1353,  1357,   570,   371,  1360,
    1690,   404,  1362,  1371,  1130,  1366,   376,  1119,  1181,  1182,
    1136,  1145,  1915,  1373,  1374,  1385,  -537,   478,   390,  1400,
    1183,  1428,  1429,  1406,  1413,  1414,  1322,  1416,  1421,  2029,
    1439,  1193,  1194,  1195,  1196,  1197,  1198,  1424, -1382,  1426,
    1507,  1444,  1199,  1446,   691,  1445,  1184,  1949, -1383,  1185,
    1471,  1101,  1456,  1472,  1323,  1455,  1516, -1382,  1199,  1691,
    1651,  1517,  1186,  1530,  1187,  1970,   691,  1531,  1537,  1540,
    1365,  1556,  2085,  1558,  1585,  1593,  1599,  1708,  1708,  1598,
    1692,   532,  1606,  1610, -1382,  1611,  1708, -1382,  1615, -1382,
   -1382,  1693,  1616,  1989,  1622,  1228,  1998,   757,   570,  1624,
    1844,  1845,  1846,  1625,  1847,  1848,  1849,  1850,  1851,  1852,
    1948,  1626,  1189,  1628,  1631,  1853,  1653,  1641,  1188,  1193,
    1194,  1195,  1196,  1197,  1198,   371,  1642,  1652,   122,  1658,
    1199,  1654,  1681,  1697,   122,  2431,  1671,   122,  1700,  1702,
    2051,  2475,  2334,  1704,  2067,  1703,  2059,  1711,  1715,  2060,
    1930,  1721,  1723,  1449,  1726,  1727,   122,  1728,  1729,  1583,
    1730,  1731,  1744,  1791,  1749,  1750,  1769,  1772,  2074,  1774,
    1775,  1776,  1777,  1778,  2053,   564,   376,  1785,  1805,  1786,
    1781,  1807,   376,  1821,  1826,  1189,  1822,  1825,  1190,  1191,
    1192,  1827,  1193,  1194,  1195,  1196,  1197,  1198,  1828,  1829,
    1349,  1833,  1604,  1199,  1434,  1836,  1863,  1350,  1856,  1862,
    1864,  1865,   376,   558,  1866,  1873,  1877,   526,   415,  1883,
    1879,  1878,  2137,  2138,  2139,  2140,   526,  1889,  1898,   416,
    1953,  1919,  1847,  1848,  1849,  1850,  1851,  1852,  1941,  1841,
    1895,  1968,  1966,  1853,  1479,  1480,  1481,   417,  1942,  1967,
    1969,  1972,  1492,  2120,  1493,  1494,  1973,  1842,  1166,  1975,
    1977,  1498,  1982,  1981,  2148,   418,  1983,  2143,  2148,  2162,
    1518,  2456,  1519,   574,  2000,  2001,   575,   576,   577,   419,
     578,   579,   580,   581,   582,   583,  2012,  1532,  2010,  1533,
    2011,  2013,  2035,  2014,   653,  2480,   420,  1365,  1365,  2044,
    1842,  2048,  2045,  2613,  2042,  2480,  2049,  2054,  2050,  2055,
    2062,  1843,  2076,  2058,  2077,  1116,  2080,  2083,  1859,  1858,
    1853,  2114,   371,   371,   421,   570,  2115,   422,  2116,  1170,
    2126,  2164,   376,   376,  1915,  1842,  2149,  2171,  1595,   423,
    2134,   129,  2168,  2190,  2172,  2194,  2173,  2192,  2193,  2179,
    2180,  2181,  1708,  2195,  1843,  2197,  2228,  1708,  1708,  2213,
    2528,  2214,  2198,  1754,  2235,  2241,  2243,  2249,  1771,  2255,
    2256,  2188,  2189,   371,   371,   371,  2237,   371,  2257,  2262,
    2283,  2281,  2295,  2286,  2296,  2289,  2317,  2290,   130,  1843,
    2219,  2221,  2291,  2318,  2293,  2297,  1753,  2298,  1668,   585,
    2313,  1668,   131,  2253,   371,  2330,  2326,  2331,   424,  2340,
    2344,  1651,  2345,  2315,  2329,  2352,  2349,  2356,  2359,   132,
    2362,  2205,  2223,  2225,  2227,  1791,  2229,   425,  2363,  2260,
    2364,  2365,  1228,  2372,   757,  1228,  1228,  1844,  1845,  1846,
     376,  1847,  1848,  1849,  1850,  1851,  1852,   133,  2373,   426,
     134,   427,  1853,  2254,  2375,   376,   428,  2377,  2380,  2381,
    2388,  2382,   135,   376,  2379,  2398,   561,  2390,  2401,  2408,
     561,  2399,  2407,  2409,  2412,  2418,  2425,   757,   429,   430,
    2428, -1383, -1383,   136,  1847,  1848,  1849,  1850,  1851,  1852,
    2435,   431,  2434,  2442,  2234,  1853,   432,  2447,  1732,  2148,
    2449,  2454,  2314,  2457,  2458,  2470,   433,  2471,  2459,  1908,
    2483,  2474,   757,  1908,  2502,   434,  2328,  1908,  2506,  1847,
    1848,  1849,  1850,  1851,  1852,  2511,  2515,   587,   570,   371,
    1853,   137,  2516,  1904,  2523,   570,   371,   570,  2524,  2537,
    2540,  2542,  2348,  2333,  2549,  2557,  2598,  2558,  2563,  2538,
    2567,  2539,  2593,  2594,  2612,  2577,  2586,  2627,  1407,  2587,
    2628,  1714,  2614,   824,   376,   376,   376,   376,  1745,  1708,
    1241,  1924,  1708,  1708,   138,  1678,  1915,  1023,  2336,   139,
    1915,  1963,  2245,  2251,  1915,  2342,  1014,  1812,  2182,  1667,
    2369,  1940,  1985,  2560,  2591,  2543,  2541,  2573,  2455,  2513,
    2282,   140,   141,  2252,  2347,  1408,  2387,  1439,  1023,  1733,
    2630,  2617,   457,   371,   142,  1990,  2361,  1014,  2395,   143,
    2360,  2599,  1389,  1072,  2631,   480,  1015,   692,  2078,   144,
     702,  1094,  1465,  2284,   458,  2520,  1747,  2253,  2397,  1945,
    2057,  2335,  1023,  2462,  2499,  2605,  2405,  2629,  2341,   814,
    2343,  1014,   459,  1109,   439,  1603,  1079,  1015,  2075,  1083,
    1268,  1929,  2053,  1601,  1266,  2386,  1936,  2145,  2323,  2148,
    2244,   371,  2485,  1372,  1724,  1893,  2119,  1908,  1997,  1815,
    1584,  1925,  1908,  1753,  2410,  2430,  1908,  2285,  1047,   558,
     460,  1015,  1639,     0,     0,     0,     0,     0,  2512,     0,
       0,     0,     0,  2037,     0,     0,     0,     0,     0,  2043,
       0,     0,  1922,     0,  1228,     0,     0,     0,     0,  2521,
       0,     0,   561,     0,     0,     0,     0,  1708,     0,  1651,
    1668,  2440,     0,     0,     0,     0,     0,     0,     0,  2065,
       0,     0,     0,     0,  1915,     0,   564,     0,     0,  1915,
     564,   564,   561,  1915,     0,  1227,     0,     0,   561,     0,
       0,     0,     0,  2461,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,  1228,     0,   461,     0,     0,
       0,  1228,  1228,     0,  2430,  1908,     0,  1023,     0,     0,
     558,     0,   376,   462,     0,     0,  1014,     0,     0,   463,
       0,     0,     0,   585,     0,   371,     0,  1971,     0,   376,
       0,     0,     0,     0,  1023,     0,     0,     0,  2597,     0,
       0,  2395,   564,  1014,   464,     0,   465,     0,     0,     0,
       0,     0,     0,     0,   376,   466,  1015,  1228,   793,   371,
       0,     0,  2002,  2004,     0,  2522,     0,     0,   467,   468,
       0,     0,  1915,     0,  2510,     0,  2623,  2033,     0,  2141,
    2142,     0,   376,  1015,     0,     0,     0,     0,     0,     0,
       0,     0,   371,     0,   564,     0,     0,     0,     0,     0,
       0,   558,     0,     0,     0,     0,     0,     0,     0,     0,
    1365,     0,   558,     0,     0,     0,     0,     0,     0,     0,
       0,  1175,     0,     0,     0,  2585,  2561,  2562,  1177,     0,
    2565,  2566,     0,  1178,     0,     0,     0,     0,     0,  1365,
       0,  2554,  2622,     0,  2584,  1023,     0,     0,     0,     0,
       0,   587,     0,     0,  1014,     0,     0,   793,   969,     0,
    2086,     0,   561,     0,  1175,     0,     0,     0,  2089,   561,
     122,  1177,     0,     0,     0,  1023,  1178,  2585,     0,     0,
       0,     0,     0,  2621,  1014,  1025,     0,  2216,     0,     0,
       0,     0,     0,     0,  1015,     0,  2584,     0,  1023,     0,
       0,     0,  2236,  2585,     0,     0,   122,  1014,   561,     0,
    2240,     0,     0,     0,     0,     0,  1025,     0,     0,     0,
       0,   558,  2584,     0,  1015,     0,     0,     0,  1023,  1179,
     793,     0,     0,  1180,     0,  1023,     0,  1014,     0,     0,
       0,     0,     0,     0,  1014,     0,     0,  1015,     0,     0,
    1025,  1181,  1182,     0,     0,     0,     0,  1858,     0,   558,
       0,     0,  1859,  1183,     0,     0,   793,     0,     0,     0,
       0,     0,  1179,     0,     0,     0,  1180,  1015,     0,     0,
       0,     0,     0,     0,  1015,     0,     0,     0,     0,  1184,
     793,     0,  1185,     0,  1181,  1182,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1186,  1183,  1187,     0,     0,
       0,  2309,  2310,  2311,  2312,     0,   793,   793,     0,   793,
     793,   793,     0,     0,     0,     0,     0,     0,  1595,     0,
       0,     0,  1184,     0,     0,  1185,  2210,     0,     0,   793,
       0,     0,     0,     0,     0,     0,     0,     0,  1186,     0,
    1187,  2218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1188,     0,     0,     0,     0,     0,     0,  1023,     0,
       0,     0,     0,     0,     0,     0,     0,  1014,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   793,     0,     0,
     793,   793,     0,  1017,     0,  1025,     0,     0,   969,     0,
       0,     0,     0,     0,  1188,     0,     0,     0,     0,     0,
       0,     0,     0,  1177,     0,     0,     0,  1015,  1178,     0,
       0,     0,  1025,     0,  1017,     0,     0,     0,  1189,     0,
       0,  1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,
    1198,     0,     0,     0,     0,     0,  1199,     0,     0,  1830,
       0,     0,     0,     0,     0,     0,     0,     0,  1017,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1023,     0,
       0,  1189,     0,     0,  1190,  1191,  1192,  1014,  1193,  1194,
    1195,  1196,  1197,  1198,     0,     0,     0,     0,     0,  1199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1179,     0,     0,  1015,  1180,     0,
    1023,  1228,     0,     0,     0,     0,  1023,     0,     0,  1014,
       0,     0,     0,  1025,     0,  1014,  1181,  1182,     0,  2444,
       0,     0,  1023,     0,     0,   969,     0,     0,  1183,     0,
       0,  1014,     0,     0,     0,     0,   691,     0,     0,     0,
       0,     0,     0,  1025,     0,     0,     0,     0,     0,  1015,
       0,     0,     0,     0,     0,  1015,     0,  1185,     0,     0,
       0,  2476,     0,     0,     0,     0,  1025,     0,     0,     0,
    1186,  1015,     0,  1023,     0,     0,     0,     0,     0,     0,
       0,     0,  1014,  1017,     0,     0,     0,     0,     0,  2489,
       0,     0,     0,     0,   793,     0,  1025,     0,     0,     0,
       0,     0,     0,  1025,     0,     0,     0,     0,  1023,     0,
    1017,     0,     0,     0,     0,     0,     0,  1014,     0,     0,
       0,     0,  1015,     0,   561,     0,  1188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   793,   793,     0,     0,     0,  1015,     0,     0,
     793,     0,  1595,   793,   793,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   793,     0,     0,     0,   793,   793,   793,   793,     0,
       0,     0,     0,  1189,     0,   793,   793, -1383, -1383,     0,
    1193,  1194,  1195,  1196,  1197,  1198,     0,     0,     0,     0,
       0,  1199,   793,   969,     0,   793,   793,     0,     0,     0,
     793,  1017,     0,     0,   793,     0,     0,   793,   793,   793,
     793,   793,   793,   793,   793,   793,  1025,     0,   793,     0,
       0,     0,     0,   793,     0,     0,   793,     0,     0,     0,
       0,  1017,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1177,     0,  1017,     0,     0,  1178,     0,     0,
       0,     0,     0,     0,  1023,     0,     0,     0,     0,     0,
       0,     0,     0,  1014,     0,     0,     0,     0,  1018,     0,
       0,  1023,     0,  1023,  1017,     0,     0,     0,     0,     0,
    1014,  1017,  1014,   969,     0,     0,     0,  1023,     0,     0,
       0,     0,     0,     0,     0,     0,  1014,     0,   793,  1018,
       0,     0,     0,  1015,     0,     0,  1640,     0,     0,     0,
       0,     0,     0,     0,     0,  1881,     0,     0,     0,  1023,
    1015,     0,  1015,     0,     0,     0,     0,     0,  1014,     0,
    2574,  2575,     0,  1018,     0,     0,  1015,     0,  1020,     0,
    1023,     0,     0, -1383,     0,     0,     0,  1180,     0,  1014,
       0,     0,     0,     0,     0,     0,     0,   793,  1025,     0,
       0,     0,     0,     0,  1025,  1181,  1182,     0,  1015,  1020,
       0,     0,  1023,     0,     0,     0,     0, -1383,   793,     0,
    1025,  1014,     0,  1023,     0,     0,     0,     0,     0,  1015,
       0,  1023,  1014,     0,     0,     0,     0,     0,     0,     0,
    1014,     0,     0,  1020,     0,     0,  1185,     0,     0,     0,
       0,     0,     0,     0,  1017,     0,     0,     0,     0,  1186,
       0,  1015,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1025,  1015,     0,     0,     0,  1023,     0,     0,     0,
    1015,   793,     0,     0,     0,  1014,     0,     0,     0,     0,
       0,     0,     0,   793,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1025,     0,     0,     0,
       0,     0,  1023,     0,     0, -1383,     0,     0,  1018,   793,
       0,  1014,     0,     0,     0,  1015,  1023,     0,     0,     0,
       0,     0,     0,     0,  1175,  1014,     0,     0,  1607,     0,
       0,  1177,     0,     0,     0,  1018,  1178,     0,  1023,   793,
     793,   793,   793,     0,  1017,     0,   793,  1014,     0,     0,
       0,  1015,     0,     0,     0,     0,     0,     0,   793,   793,
     793,   793,     0,     0,     0,  1015,     0,   793,     0,     0,
       0,     0,  1189,     0,     0,     0,     0,   793,  1020,  1193,
    1194,  1195,  1196,  1197,  1198,     0,     0,  1015,   793,   793,
    1199,   793,     0,  1608,     0,   793,  1017,     0,     0,     0,
       0,     0,  1017,     0,     0,  1020,     0,     0,     0,     0,
       0,  1023,   793,     0,     0,     0,     0,     0,  1017,     0,
    1014,     0,   561,     0,   793,   793,     0,     0,     0,     0,
       0,     0,  1179,     0,     0,     0,  1180,  1021,     0,     0,
       0,     0,     0,   793,     0,     0,  1018,     0,     0,     0,
     793,   793,   793,     0,  1181,  1182,     0,     0,     0,   793,
    1015,     0,     0,     0,     0,     0,  1183,     0,  1021,  1017,
       0,     0,  1025,     0,     0,     0,  1018,     0,     0,     0,
       0,     0,     0,     0,  1023,     0,     0,     0,     0,  1025,
       0,  1025,  1184,  1014,     0,  1185,     0,     0,     0,  1018,
       0,     0,  1021,     0,  1017,  1025,     0,     0,  1186,     0,
    1187,     0,     0,     0,     0,     0,  1020,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1018,
       0,     0,     0,  1015,     0,     0,  1018,  1025,     0,     0,
       0,     0,     0,     0,     0,     0,  1020,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   969,  1025,     0,
    1022,     0,     0,     0,  1188,     0,     0,     0,     0,  1020,
       0,     0,     0,     0,     0,  1023,     0,     0,     0,     0,
       0,     0,     0,     0,  1014,     0,     0,     0,     0,     0,
    1025,  1022,     0,     0,     0,     0,     0,     0,     0,  1020,
       0,  1025,     0,     0,     0,     0,  1020,  1609,     0,  1025,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   561,  1015,  1022,     0,     0,     0,     0,
       0,  1189,     0,     0,  1190,  1191,  1192,     0,  1193,  1194,
    1195,  1196,  1197,  1198,     0,     0,     0,  1021,     0,  1199,
       0,   793,     0,     0,  1025,     0,     0,     0,     0,     0,
       0,     0,     0,   793,     0,     0,     0,   793,     0,  1018,
    1177,   793,     0,     0,  1021,  1178,     0,     0,   793,     0,
    1017,   793,   793,   793,   793,   793,   793,   793,   793,   793,
    1025,   793,     0,     0,     0,   793,   793,  1017,     0,  1017,
       0,     0,     0,     0,  1025,     0,     0,     0,     0,   793,
       0,     0,     0,  1017,     0,     0,   793,   793,   793,     0,
     793,     0,     0,     0,     0,     0,  1025,   793,     0,     0,
       0,     0,   793,     0,     0,   793,  1175,     0,     0,  1020,
       0,     0,     0,  1177,   561,  1017,  1023,     0,  1178,     0,
       0,  1023,     0,     0,     0,  1014,     0,     0,     0,     0,
    1014,     0,     0,     0,   793,     0,  1017,     0,     0,  1018,
    1022,  1179,     0,     0,     0,  1180,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1021,     0,  1024,     0,     0,
       0,     0,     0,  1181,  1182,  1015,     0,  1022,  1017,  1025,
    1015,     0,     0,     0,     0,  1183,     0,     0,     0,  1017,
       0,     0,     0,     0,     0,  1021,     0,  1017,  1024,     0,
       0,  1018,     0,     0,     0,     0,     0,  1018,     0,     0,
       0,  1184,     0,     0,  1185,     0,     0,     0,  1021,  1020,
       0,     0,     0,  1018,  1179,     0,     0,  1186,  1180,     0,
       0,     0,  1024,     0,     0,     0,     0,     0,     0,   793,
       0,  1023,  1017,     0,     0,     0,  1181,  1182,  1021,     0,
    1014,     0,  1025,     0,     0,  1021,     0,     0,  1183,  1023,
       0,     0,     0,     0,  1012,     0,     0,     0,  1014,     0,
       0,  1020,     0,     0,  1018,     0,     0,  1020,  1017,     0,
       0,     0,     0,  1188,  1184,     0,     0,  1185,  1022,   793,
    1015,     0,  1017,  1020,     0,  1063,     0,     0,   793,     0,
    1186,     0,  1187,     0,     0,     0,     0,     0,  1015,  1018,
       0,     0,     0,     0,  1017,     0,     0,     0,  1022,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1022,     0,  1025,  1020,     0,     0,   793,   793,   793,
    1189,     0,   793,  1190,  1191,  1192,  1188,  1193,  1194,  1195,
    1196,  1197,  1198,     0,     0,     0,   561,     0,  1199,     0,
     561,  1022,     0,     0,   561,  1023,     0,  1024,  1022,  1020,
       0,     0,     0,     0,  1014,     0,     0,  1017,  1021,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1024,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1189,  1015,     0,  1190,  1191,  1192,     0,
    1193,  1194,  1195,  1196,  1197,  1198,     0,     0,     0,     0,
    1529,  1199,     0,     0,  1023,   793,     0,     0,     0,     0,
       0,     0,     0,  1014,     0,     0,     0,     0,     0,     0,
    1017,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1272,     0,     0,     0,     0,   561,
       0,     0,     0,     0,     0,  1018,     0,     0,  1021,     0,
       0,     0,     0,  1015,     0,     0,     0,     0,     0,     0,
       0,     0,  1018,   793,  1018,     0,     0,     0,     0,     0,
       0,  1022,   793,     0,  1025,  1024,     0,     0,  1018,  1025,
       0,     0,     0,   793,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   561,     0,     0,   778,     0,   561,
    1021,     0,     0,   561,     0,  1024,  1021,   793,   793,     0,
    1018,  1017,     0,     0,     0,  1020,     0,     0,     0,     0,
       0,     0,  1021,     0,     0,     0,   793,     0,  1024,     0,
       0,  1018,  1020,     0,  1020,     0,     0,     0,     0,     0,
     561,     0,     0,     0,     0,     0,     0,     0,  1020,     0,
    1175,     0,     0,  1176,     0,     0,     0,  1177,  1024,     0,
       0,     0,  1178,  1018,     0,  1024,     0,     0,   793,     0,
       0,  1022,  1352,  1021,  1018,     0,     0,     0,     0,     0,
    1020,     0,  1018,     0,     0,     0,     0,     0,     0,  1025,
       0,     0,     0,     0,     0,     0,   894,     0,   793,     0,
       0,  1020,   561,     0,     0,     0,     0,  1025,  1021,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1022,     0,  1387,     0,  1018,     0,  1022,
       0,   561,     0,  1020,  1175,     0,     0,  1817,     0,     0,
       0,  1177,   561,     0,  1020,  1022,  1178,     0,     0,     0,
       0,     0,  1020,     0,     0,  1272,     0,     0,  1179,     0,
       0,     0,  1180,  1018,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1018,     0,     0,
    1181,  1182,  1017,     0,     0,     0,     0,  1017,     0,     0,
       0,     0,  1183,     0,     0,     0,  1022,  1020,  1024,  1018,
       0,     0,     0,     0,     0,  1121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1184,     0,
       0,  1185,     0,  1025,     0,     0,     0,     0,     0,  1143,
       0,  1022,     0,  1020,  1186,     0,  1187,     0,     0,     0,
       0,     0,  1179,     0,     0,     0,  1180,  1020,     0,     0,
       0,   561,     0,     0,     0,  1162,  1163,     0,  1164,  1165,
    1167,     0,     0,     0,  1181,  1182,     0,     0,     0,  1020,
       0,     0,  1018,     0,     0,     0,  1183,     0,  1204,     0,
       0,     0,     0,     0,  1021,     0,     0,     0,     0,   561,
    1188,     0,  1025,     0,     0,  1568,     0,  1017,  1638,     0,
       0,  1021,  1184,  1021,     0,  1185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1017,     0,  1021,  1186,     0,
    1187,     0,     0,     0,     0,     0,  1257,     0,     0,  1263,
    1265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1020,     0,     0,  1018,     0,     0,     0,  1021,
    1024,     0,     0,     0,     0,     0,  1024,  1189,     0,     0,
    1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,  1198,
    1021,     0,  1024,     0,  1188,  1199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1175,     0,  1637,     0,     0,     0,     0,
    1177,     0,  1021,     0,     0,  1178,     0,  1022,     0,     0,
       0,     0,     0,  1021,     0,  1020,     0,  1177,     0,     0,
       0,  1021,  1178,  1024,  1022,     0,  1022,     0,     0,     0,
       0,  1017,     0,     0,     0,     0,  1018,     0,     0,     0,
    1022,  1189,     0,     0,  1190,  1191,  1192,  1272,  1193,  1194,
    1195,  1196,  1197,  1198,     0,     0,     0,     0,  1024,  1199,
       0,     0,     0,     0,     0,     0,  1021,     0,     0,  1725,
       0,     0,  1022,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1890,     0,     0,  1022,     0,     0,     0,     0,     0,     0,
    1017,  1179,  1021,     0,     0,  1180,  1020,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1021,     0, -1383,     0,
    1779,     0,  1180,  1181,  1182,  1022,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1183,  1022,     0,  1021,     0,
    1181,  1182,     0,     0,  1022,     0,     0,     0,     0,     0,
       0,     0, -1383,  1422,     0,  1806,     0,     0,     0,     0,
       0,  1184,     0,     0,  1185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1186,     0,  1187,
       0,  1185,     0,     0,     0,     0,     0,     0,     0,  1022,
       0,     0,     0,     0,  1186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1018,     0,     0,
       0,  1021,  1018,     0,     0,     0,     0,     0,     0,  1475,
       0,     0,     0,  1477,     0,  1022,     0,     0,     0,     0,
       0,     0,     0,  1188,  1638,     0,     0,     0,     0,  1022,
    1497,     0,     0,     0,  1500,     0,     0,  1513,     0,     0,
   -1383,  1024,     0,  1024,  1520,  1525,     0,     0,     0,     0,
       0,  1022,     0,     0,     0,     0,     0,  1024,     0,     0,
       0,  1535,     0,     0,     0,  1539,  1819,  1020,     0,  1550,
       0,     0,  1020,  1557,  1021,     0,  1559,  1560,  1561,  1562,
    1563,  1564,  1565,  1566,  1567,     0,     0,  1569,     0,  1024,
    1189,     0,   778,  1190,  1191,  1192,     0,  1193,  1194,  1195,
    1196,  1197,  1198,     0,     0,     0,     0,  1189,  1199,     0,
    1638,     0,  1018,     0,  1193,  1194,  1195,  1196,  1197,  1198,
       0,  1637,     0,     0,  1022,  1199,     0,     0,     0,     0,
    1018,     0,     0,     0,     0,     0,     0,     0,  1952,     0,
    1955,     0,  1024,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1024,  1959,     0,  1175,     0,     0,  1867,
    1201,  1638,     0,  1177,     0,  1021,     0,     0,  1178,     0,
       0,     0,     0,     0,     0,     0,     0,  1630,     0,     0,
       0,     0,  1020,     0,     0,     0,  1976,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1022,     0,     0,
    1020,     0,     0,     0,     0,     0,  1024,  1637,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1698,     0,     0,  2041,
       0,     0,  1024,     0,     0,     0,  1018,  1175,     0,     0,
    1959,     0,     0,     0,  1177,     0,  1024,  1722,  1637,  1178,
       0,     0,     0,     0,  1179,     0,     0,     0,  1180,     0,
       0,     0,     0,     0,     0,     0,  1201,     0,  1024,     0,
       0,     0,     0,     0,     0,     0,  1181,  1182,  1022,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1183,     0,
       0,     0,     0,  2084,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1018,  1020,     0,     0,     0,
    1784,     0,     0,     0,  1184,     0,     0,  1185,     0,     0,
       0,     0,  1793,     0,     0,     0,  1021,     0,     0,  2105,
    1186,  1021,  1187,     0,     0,     0,     0,     0,     0,     0,
       0,  1024,     0,  2113,     0,  1179,     0,     0,  1813,  1180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2127,     0,  1181,  1182,     0,
       0,     0,     0,     0,     0,  1020,     0,     0,     0,  1183,
       0,     0,     0,     0,     0,     0,  1188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1525,     0,  1525,
    1525,     0,     0,     0,     0,  1184,  1875,     0,  1185,     0,
       0,     0,     0,     0,  1024,     0,     0,     0,     0,     0,
       0,  1186,     0,  1187,     0,     0,     0,     0,  1892,     0,
    1894,     0,  1834,     0,  1897,     0,     0,     0,  2187,     0,
       0,  1021,     0,     0,     0,     0,     0,  1201,     0,  1022,
       0,     0,     0,  1189,  1022,     0,  1190,  1191,  1192,  1021,
    1193,  1194,  1195,  1196,  1197,  1198,     0,     0,     0,     0,
       0,  1199,     0,     0,     0,     0,     0,  1188,     0,     0,
       0,     0,  1257,     0,     0,     0,     0,     0,     0,  1265,
    1265,  1263,     0,  1201,     0,     0,     0,     0,  1939,     0,
    1175,     0,     0,     0,     0,  1024,     0,  1177,     0,     0,
       0,  2239,  1178,     0,     0,  1201,     0,     0,     0,     0,
    1175,  1509,     0,     0,     0,     0,     0,  1177,     0,     0,
       0,     0,  1178,     0,  1201,  1201,  1201,  1201,     0,  1201,
       0,     0,     0,     0,  1189,     0,     0,  1190,  1191,  1192,
    1509,  1193,  1194,  1195,  1196,  1197,  1198,     0,     0,     0,
       0,     0,  1199,     0,  1022,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1021,  1201,     0,     0,     0,
       0,     0,  1022,     0,  1175,     0,     0,     0,     0,     0,
       0,  1177,     0,     0,     0,     0,  1178,     0,  1872,     0,
       0,     0,  2127,     0,     0,     0,     0,     0,  1179,     0,
       0,     0,  1180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1179,  1201,
    1181,  1182,  1180,     0,     0,  1201,     0,  1201,     0,     0,
       0,     0,  1183,     0,  1021,     0,     0,     0,     0,     0,
    1181,  1182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1183,     0,     0,     0,     0,     0,  1184,     0,
       0,  1185,     0,     0,     0,     0,  1024,     0,     0,     0,
       0,  1024,     0,     0,  1186,     0,  1187,     0,  1184,     0,
    2082,  1185,  1179,     0,     0,     0,  1180,     0,  1022,     0,
       0,     0,  2087,     0,  1186,     0,  2088,     0,     0,     0,
    2090,     0,     0,     0,  1181,  1182,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1183,     0,     0,     0,
       0,     0,     0,     0,  2107,  2108,     0,     0,     0,     0,
    1188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1184,     0,     0,  1185,     0,  2123,     0,  2125,
    1188,     0,     0,     0,     0,     0,  2129,  1022,  1186,     0,
    1187,  2133,     0,  2127,  2136,     0,     0,     0,  2415,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1024,     0,     0,  1201,     0,     0,     0,     0,     0,
       0,     0,     0,  2170,     0,     0,     0,  1189,     0,  1024,
    1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,  1198,
       0,     0,     0,     0,  1188,  1199,     0,  1189,     0,     0,
    1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,  1198,
       0,     0,     0,     0,     0,  1199,     0,  1201,     0,  1201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1201,
       0,     0,  1201,     0,  1509,  1509,  1509,  1509,  1854,     0,
       0,  1509,     0,     0,     0,  1201,     0,     0,  2127,     0,
       0,  1189,  1201,     0,  1190,  1191,  1192,  1201,  1193,  1194,
    1195,  1196,  1197,  1198,     0,     0,  2041,  1201,  1999,  1199,
    1854,  1201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1201,  1509,     0,  1024,     0,     0,     0,  1201,
       0,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,  1201,
       0,  1201,     0,     0,     0,     0,     0,     0,  1793,     1,
       0,     0,     0,     0,     0,     0,     0,  2288,     2,     3,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     7,     8,  1024,     0,     0,     9,    10,     0,
       0,     0,  1201,     0,    11,    12,     0,  2304,  2305,     0,
       0,  2307,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    14,  2576,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    18,     0,    19,   605,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
    1201,     0,  1175,     0,     0,     0,     0,   606,     0,  1177,
       0,     0,     0,    22,  1178,     0,     0,     0,     0,   607,
       0,     0,     0,   608,  1201,   609,     0,     0,     0,     0,
       0,     0,     0,     0,  2367,    23,    24,     0,     0,   610,
       0,    25,     0,     0,     0,     0,     0,     0,    26,     0,
    1175,     0,     0,     0,     0,     0,   611,  1177,     0,     0,
       0,    27,  1178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   612,     0,  1201,     0,     0,     0,
      28,     0,  1793,     0,     0,  1201,     0,     0,     0,   613,
       0,    29,     0,    30,     0,     0,     0,    31,     0,     0,
    1179,    32,  2416,    33,  1180,  1201,     0,    34,     0,     0,
       0,   614,    35,     0,     0,     0,     0,    36,     0,     0,
      37,     0,  1181,  1182,     0,     0,    38,  2432,     0,  1854,
    1854,  1854,  1854,  1509,  1183,     0,  1509,  1509,  1509,  1509,
    1509,  1509,  1509,  1509,  1509,  2437,  1509,  1854,  1179,     0,
       0,    39,  1180,     0,     0,     0,     0,     0,   615,    40,
    1184,    41,     0,  1185,     0,    42,     0,  1201,     0,     0,
    1181,  1182,  1509,     0,     0,     0,  1186,   425,  1187,     0,
       0,     0,  1183,  1854,  1201,     0,  1201,  2463,     0,  1201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   616,
       0,   617,     0,     0,    43,     0,   618,     0,  1184,     0,
       0,  1185,     0,     0,     0,     0,     0,  2482,     0,     0,
       0,     0,     0,     0,  1186,     0,  1187,     0,   619,     0,
       0,  1201,  1188,     0,     0,     0,     0,     0,     0,     0,
       0,   620,     0,     0,     0,     0,   621,     0,     0,     0,
       0,  2081,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   622,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1175,     0,     0,     0,     0,     0,  1189,
    1177,     0,  1190,  1191,  1192,  1178,  1193,  1194,  1195,  1196,
    1197,  1198,     0,     0,  1509,     0,     0,  1199,  1175,     0,
       0,     0,     0,     0,     0,  1177,     0,     0,     0,     0,
    1178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1189,     0,     0,
    1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,  1198,
       0,  1175,  1974,     0,     0,  1199,     0,     0,  1177,     0,
       0,     0,     0,  1178,  1201,     0,     0,     0,     0,  1201,
    1201,     0,  1201,     0,  1854,     0,     0,     0,  1854,  1854,
    1854,  1854,  1854,  1854,  1854,  1854,  1854,     0,  1854,  1201,
    1201,  1179,     0,     0,     0,  1180,     0,  1177,     0,     0,
       0,     0,  1178,     0,  1854,  1201,     0,  1201,     0,     0,
       0,  1201,  1509,  1181,  1182,  1201,  1179,     0,  1201,     0,
    1180,     0,     0,     0,     0,  1183,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1181,  1182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1183,  1184,  1201,     0,  1185,     0,     0,     0,     0,  1179,
       0,     0,     0,  1180,     0,     0,     0,  1186,     0,  1187,
       0,     0,     0,     0,     0,     0,  1184,     0,     0,  1185,
       0,  1181,  1182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1186,  1183,  1187,     0,     0,     0,  1179,     0,
       0,     0,  1180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1854,     0,     0,     0,     0,     0,     0,  1184,
    1181,  1182,  1185,  1188,     0,     0,     0,     0,     0,     0,
       0,     0,  1183,     0,     0,  1186,     0,  1187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1185,     0,     0,     0,     0,     0,     0,     0,     0,
    1201,     0,     0,     0,  1186,     0,     0,  1509,     0,     0,
       0,     0,     0,     0,     0,  1854,  1201,  1201,     0,  1201,
    1189,  1188,     0,  1190,  1191,  1192,     0,  1193,  1194,  1195,
    1196,  1197,  1198,     0,     0,     0,     0,  2118,  1199,     0,
       0,     0,     0,     0,     0,  1189,     0,     0,  1190,  1191,
    1192,     0,  1193,  1194,  1195,  1196,  1197,  1198,     0,     0,
    1188,     0,  2174,  1199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1201,
       0,     0,     0,     0,     0,     0,     0,     0,  1189,     0,
       0,  1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,
    1198,     0,     0,     0,     0,  2292,  1199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1854,     0,     0,     0,  1189,  1201,     0,
    1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,  1198,
       0,     0,     0,     0,  1201,  1199,     0,     0,     0,  1201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,     0,
       0,     0,     0,     0,     0,  1201,   155,   156,   157,     0,
     158,   159,   160,     0,   161,     0,   162,   163,     0,   164,
     165,   166,   167,     0,  1201,   168,   169,   170,   171,     0,
     172,   173,   174,   175,   176,     0,     0,   177,   178,   179,
       0,   180,   181,   182,   183,     0,   184,   185,     0,   186,
       0,     0,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,     0,   195,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   201,   202,   203,   204,     0,   205,   206,
       0,   207,     0,   208,   209,   210,   211,   212,   213,   214,
       0,   215,   216,   217,     0,   218,     0,   219,     0,     0,
       0,   220,   221,     0,     0,   222,     0,   223,   224,     0,
     225,   226,   227,     0,   228,   229,   230,   231,     0,     0,
     232,   233,   234,   235,   236,   237,   238,     0,   239,     0,
     240,     0,     0,   241,     0,   242,   243,   244,   245,   246,
       0,     0,   247,     0,     0,   248,   249,   250,     0,     0,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,     0,   262,     0,   263,   264,   265,   266,   267,     0,
     268,   269,     0,   270,     0,   271,   272,   273,   274,     0,
       0,   275,     0,     0,     0,   276,   277,     0,     0,   278,
       0,     0,   279,   280,   281,   282,     0,   283,   284,   285,
     286,     0,   287,   288,   289,   290,   291,   292,   293,   294,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,   306,   307,   308,   309,   310,   311,   312,
     313,   314,     0,   315,   316,   317,     0,   318,   319,   320,
     321,     0,   322,   323,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,     0,   334,   335,   336,   337,
       0,   338,   339,     0,   340,     0,   341,   342,   343,   344,
       0,   345,   346,   347,   348,   349,     0,     0,   350,   351,
     352,   353,   354,     0,  2466,   355,   356,   357,   358,   359,
     360,     0,   361,   362,     0,     0,   363,   364,   365,   366,
     367,   368,     0,   369,     0,     0,     0,     0,     0,     0,
       0,   146,   147,   148,   149,   150,   151,   152,  1587,   153,
     154,     0, -1179,     0,     0,   705,     0, -1179,   155,   156,
     157,   537,   158,   159,   160,   538,   706,   539,   707,   708,
       0,   164,   165,   166,   167,   709,   710,   168,   711,   712,
     171,     0,   172,   173,   174,   175,   713,     0,     0,   177,
     178,   179,     0,   180,   181,   714,   183,     0,   184,   185,
     540,   186,   715,   716,   717,   718,   187,   188,   189,   190,
     191,   719,   720,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,  1588,     0,   201,   721,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   722,   212,
     213,   723,   724,   215,   216,   725,     0,   218,     0,   219,
     541,     0,   542,   220,   221,     0,     0,   222,     0,   223,
     224,   543,   225,   226,   227,     0,   228,   229,   230,   231,
       0,   544,   232,   233,   234,   235,   236,   726,   727,     0,
     728,     0,   240,   545,   546,   241,   547,   242,   243,   244,
     245,   246,     0,   548,   247,   549,     0,   248,   249,   250,
     729,   730,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   731,   550,   732,   374,   263,   264,   265,   266,
     267,   733,   268,   269,   551,   270,   734,   735,   736,   273,
     274,     0,     0,   275,   375,     0,     0,   737,   277,     0,
       0,   278,   552,   553,   738,   280,   281,   282,     0,   739,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     740,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   554,   306,   741,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,   742,   318,
     319,   320,   321,   555,   322,   743,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   744,   333,     0,   334,   335,
     336,   337,     0,   745,   746,     0,   340,     0,   341,   747,
     343,   748,   749,   345,   346,   347,   348,   349,     0,   750,
     350,   351,   352,   353,   354,   751,     0,   355,   356,   357,
     358,   752,   360,   556,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   753,   754,   475,   755,   756,
     757,   450,   758,     0,     0,     0,     0,   759,   760,  1589,
       0,   762,   763,     0,     0,     0,   764,  1590,   146,   147,
     148,   149,   150,   151,   152,     0,   153,   154,     0,     0,
       0,     0,   705,     0,     0,   155,   156,   157,   537,   158,
     159,   160,   538,   706,   539,   707,   708,     0,   164,   165,
     166,   167,   709,   710,   168,   711,   712,   171,     0,   172,
     173,   174,   175,   713,     0,     0,   177,   178,   179,     0,
     180,   181,   714,   183,     0,   184,   185,   540,   186,   715,
     716,   717,   718,   187,   188,   189,   190,   191,   719,   720,
     194,     0,   195,     0,   196,   197,   198,   199,   200,     0,
       0,     0,   201,   721,   203,   204,     0,   205,   206,     0,
     207,     0,   208,   209,   210,   722,   212,   213,   723,   724,
     215,   216,   725,     0,   218,     0,   219,   541,     0,   542,
     220,   221,     0,     0,   222,     0,   223,   224,   543,   225,
     226,   227,     0,   228,   229,   230,   231,     0,   544,   232,
     233,   234,   235,   236,   726,   727,     0,   728,     0,   240,
     545,   546,   241,   547,   242,   243,   244,   245,   246,     0,
     548,   247,   549,     0,   248,   249,   250,   729,   730,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   731,
     550,   732,   374,   263,   264,   265,   266,   267,   733,   268,
     269,   551,   270,   734,   735,   736,   273,   274,     0,     0,
     275,   375,     0,     0,   737,   277,     0,     0,   278,   552,
     553,   738,   280,   281,   282,     0,   739,   284,   285,   286,
       0,   287,   288,   289,   290,   291,   292,   740,   294,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   554,   306,   741,   308,   309,   310,   311,   312,   313,
     314,     0,   315,   316,   317,   742,   318,   319,   320,   321,
     555,   322,   743,     0,   324,   325,   326,   327,   328,   329,
     330,   331,   744,   333,     0,   334,   335,   336,   337,     0,
     745,   746,     0,   340,     0,   341,   747,   343,   748,   749,
     345,   346,   347,   348,   349,     0,   750,   350,   351,   352,
     353,   354,   751,     0,   355,   356,   357,   358,   752,   360,
     556,   361,   362,     0,     0,   363,   364,   365,   366,   367,
     368,     0,   753,   754,   475,   755,   756,   757,   450,   758,
       0,     0,     0,     0,   759,   760,     0,     0,   762,   763,
       0,     0,     0,   764,  1511,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,     0,     0,     0,     0,     0,
    2146,     0,   155,   156,   157,     0,   158,   159,   160,     0,
     161,     0,   162,   163,     0,   164,   165,   166,   167,     0,
       0,   168,   169,   170,   171,     0,   172,   173,   174,   175,
     176,     0,     0,   177,   178,   179,     0,   180,   181,   182,
     183,     0,   184,   185,     0,   186,     0,     0,     0,     0,
     187,   188,   189,   190,   191,   192,   193,   194,     0,   195,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   201,
     202,   203,   204,     0,   205,   206,     0,   207,  -781,   208,
     209,   210,   211,   212,   213,   214,     0,   215,   216,   217,
    -781,   218,     0,   219,     0,     0,     0,   220,   221,     0,
       0,   222,     0,   223,   224,     0,   225,   226,   227,     0,
     228,   229,   230,   231,     0,     0,   232,   233,   234,   235,
     236,   237,   238,  -781,   239,     0,   240,     0,     0,   241,
       0,   242,   243,   244,   245,   246,     0,     0,   247,     0,
    -781,   248,   249,   250,     0,     0,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   262,     0,
     263,   264,   265,   266,   267,     0,   268,   269,     0,   270,
       0,   271,   272,   273,   274,     0,  -781,   275,     0,     0,
       0,   276,   277,     0,  -781,   278,     0,     0,   279,   280,
     281,   282,     0,   283,   284,   285,   286,     0,   287,   288,
     289,   290,   291,   292,   293,   294,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,     0,   306,
     307,   308,   309,   310,   311,   312,   313,   314,     0,   315,
     316,   317,     0,   318,   319,   320,   321,     0,   322,   323,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,     0,   334,   335,   336,   337,     0,   338,   339,     0,
     340,     0,   341,   342,   343,   344,     0,   345,   346,   347,
     348,   349,  -781,     0,   350,   351,   352,   353,   354,     0,
       0,   355,   356,   357,   358,   359,   360,     0,   361,   362,
       0,     0,   363,   364,   365,   366,   367,   368,     0,   369,
       0,     0,     0,     0,     0,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,     0,     0,     0,     0,   705,
       0,   822,   155,   156,   157,   537,   158,   159,   160,   538,
     706,   539,   707,   708,  1521,   164,   165,   166,   167,   709,
     710,   168,   711,   712,   171,     0,   172,   173,   174,   175,
     713,     0,     0,   177,   178,   179,     0,   180,   181,   714,
     183,     0,   184,   185,   540,   186,   715,   716,   717,   718,
     187,   188,   189,   190,   191,   719,   720,   194,     0,   195,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   201,
     721,   203,   204,     0,   205,   206,     0,   207,     0,   208,
     209,   210,   722,   212,   213,   723,   724,   215,   216,   725,
       0,   218,     0,   219,   541,  1522,   542,   220,   221,     0,
       0,   222,     0,   223,   224,   543,   225,   226,   227,     0,
     228,   229,   230,   231,     0,   544,   232,   233,   234,   235,
     236,   726,   727,     0,   728,     0,   240,   545,   546,   241,
     547,   242,   243,   244,   245,   246,  1523,   548,   247,   549,
       0,   248,   249,   250,   729,   730,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   731,   550,   732,   374,
     263,   264,   265,   266,   267,   733,   268,   269,   551,   270,
     734,   735,   736,   273,   274,     0,     0,   275,   375,     0,
       0,   737,   277,     0,     0,   278,   552,   553,   738,   280,
     281,   282,     0,   739,   284,   285,   286,     0,   287,   288,
     289,   290,   291,   292,   740,   294,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   554,   306,
     741,   308,   309,   310,   311,   312,   313,   314,     0,   315,
     316,   317,   742,   318,   319,   320,   321,   555,   322,   743,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   744,
     333,     0,   334,   335,   336,   337,     0,   745,   746,     0,
     340,  1524,   341,   747,   343,   748,   749,   345,   346,   347,
     348,   349,     0,   750,   350,   351,   352,   353,   354,   751,
       0,   355,   356,   357,   358,   752,   360,   556,   361,   362,
       0,     0,   363,   364,   365,   366,   367,   368,     0,   753,
     754,   475,   755,   756,   757,   450,   758,     0,     0,     0,
       0,   759,   760,     0,     0,   762,   763,     0,     0,     0,
     764,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,   705,     0,     0,   155,   156,
     157,   537,   158,   159,   160,   538,   706,   539,   707,   708,
       0,   164,   165,   166,   167,   709,   710,   168,   711,   712,
     171,     0,   172,   173,   174,   175,   713,     0,     0,   177,
     178,   179,     0,   180,   181,   714,   183,     0,   184,   185,
     540,   186,   715,   716,   717,   718,   187,   188,   189,   190,
     191,   719,   720,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   721,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   722,   212,
     213,   723,   724,   215,   216,   725,     0,   218,     0,   219,
     541,     0,   542,   220,   221,     0,     0,   222,     0,   223,
     224,   543,   225,   226,   227,     0,   228,   229,   230,   231,
       0,   544,   232,   233,   234,   235,   236,   726,   727,     0,
     728,     0,   240,   545,   546,   241,   547,   242,   243,   244,
     245,   246,     0,   548,   247,   549,     0,   248,   249,   250,
     729,   730,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   731,   550,   732,   374,   263,   264,   265,   266,
     267,   733,   268,   269,   551,   270,   734,   735,   736,   273,
     274,     0,     0,   275,   375,     0,     0,   737,   277,     0,
       0,   278,   552,   553,   738,   280,   281,   282,     0,   739,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     740,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   554,   306,   741,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,   742,   318,
     319,   320,   321,   555,   322,   743,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   744,   333,     0,   334,   335,
     336,   337,     0,   745,   746,     0,   340,     0,   341,   747,
     343,   748,   749,   345,   346,   347,   348,   349,     0,   750,
     350,   351,   352,   353,   354,   751,     0,   355,   356,   357,
     358,   752,   360,   556,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   753,   754,   475,   755,   756,
     757,   450,   758,     0,     0,     0,     0,   759,   760,   761,
       0,   762,   763,     0,     0,     0,   764,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,   705,     0,     0,   155,   156,   157,   537,   158,   159,
     160,   538,   706,   539,   707,   708,     0,   164,   165,   166,
     167,   709,   710,   168,   711,   712,   171,     0,   172,   173,
     174,   175,   713,     0,     0,   177,   178,   179,     0,   180,
     181,   714,   183,     0,   184,   185,   540,   186,   715,   716,
     717,   718,   187,   188,   189,   190,   191,   719,   720,   194,
       0,   195,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   201,   721,   203,   204,     0,   205,   206,     0,   207,
       0,   208,   209,   210,   722,   212,   213,   723,   724,   215,
     216,   725,     0,   218,     0,   219,   541,     0,   542,   220,
     221,     0,     0,   222,     0,   223,   224,   543,   225,   226,
     227,     0,   228,   229,   230,   231,     0,   544,   232,   233,
     234,   235,   236,   726,   727,     0,   728,     0,   240,   545,
     546,   241,   547,   242,   243,   244,   245,   246,     0,   548,
     247,   549,     0,   248,   249,   250,   729,   730,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   731,   550,
     732,   374,   263,   264,   265,   266,   267,   733,   268,   269,
     551,   270,   734,   735,   736,   273,   274,     0,     0,   275,
     375,     0,     0,   737,   277,     0,     0,   278,   552,   553,
     738,   280,   281,   282,     0,   739,   284,   285,   286,     0,
     287,   288,   289,   290,   291,   292,   740,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     554,   306,   741,   308,   309,   310,   311,   312,   313,   314,
      35,   315,   316,   317,   742,   318,   319,   320,   321,   555,
     322,   743,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   744,   333,     0,   334,   335,   336,   337,     0,   745,
     746,     0,   340,     0,   341,   747,   343,   748,   749,   345,
     346,   347,   348,   349,     0,   750,   350,   351,   352,   353,
     354,   751,     0,   355,   356,   357,   358,   752,   360,   556,
     361,   362,     0,     0,   363,   364,   365,   366,   367,   368,
       0,   753,   754,   475,   755,   756,   757,   450,   758,     0,
       0,     0,     0,   759,   760,     0,     0,   762,   763,     0,
       0,     0,   764,   146,   147,   148,   149,   150,   151,   152,
    1261,   153,   154,     0,     0,     0,     0,   705,     0,     0,
     155,   156,   157,   537,   158,   159,   160,   538,   706,   539,
     707,   708,     0,   164,   165,   166,   167,   709,   710,   168,
     711,   712,   171,     0,   172,   173,   174,   175,   713,     0,
       0,   177,   178,   179,     0,   180,   181,   714,   183,     0,
     184,   185,   540,   186,   715,   716,   717,   718,   187,   188,
     189,   190,   191,   719,   720,   194,     0,   195,     0,   196,
     197,   198,   199,   200,     0,     0,     0,   201,   721,   203,
     204,     0,   205,   206,     0,   207,     0,   208,   209,   210,
     722,   212,   213,   723,   724,   215,   216,   725,     0,   218,
       0,   219,   541,     0,   542,   220,   221,     0,     0,   222,
       0,   223,   224,   543,   225,   226,   227,     0,   228,   229,
     230,   231,     0,   544,   232,   233,   234,   235,   236,   726,
     727,     0,   728,     0,   240,   545,   546,   241,   547,   242,
     243,   244,   245,   246,     0,   548,   247,   549,     0,   248,
     249,   250,   729,   730,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   731,   550,   732,   374,   263,   264,
     265,   266,   267,   733,   268,   269,   551,   270,   734,   735,
     736,   273,   274,     0,     0,   275,   375,     0,     0,   737,
     277,     0,     0,   278,   552,   553,   738,   280,   281,   282,
       0,   739,   284,   285,   286,     0,   287,   288,   289,   290,
     291,   292,   740,   294,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   554,   306,   741,   308,
     309,   310,   311,   312,   313,   314,     0,   315,   316,   317,
     742,   318,   319,   320,   321,   555,   322,   743,     0,   324,
     325,   326,   327,   328,   329,   330,   331,   744,   333,     0,
     334,   335,   336,   337,     0,   745,   746,     0,   340,     0,
     341,   747,   343,   748,   749,   345,   346,   347,   348,   349,
       0,   750,   350,   351,   352,   353,   354,   751,     0,   355,
     356,   357,   358,   752,   360,   556,   361,   362,     0,     0,
     363,   364,   365,   366,   367,   368,     0,   753,   754,   475,
     755,   756,   757,   450,   758,     0,     0,     0,     0,   759,
     760,     0,     0,   762,   763,     0,     0,     0,   764,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,     0,
       0,     0,     0,   705,     0,     0,   155,   156,   157,   537,
     158,   159,   160,   538,   706,   539,   707,   708,     0,   164,
     165,   166,   167,   709,   710,   168,   711,   712,   171,     0,
     172,   173,   174,   175,   713,     0,     0,   177,   178,   179,
       0,   180,   181,   714,   183,     0,   184,   185,   540,   186,
     715,   716,   717,   718,   187,   188,   189,   190,   191,   719,
     720,   194,     0,   195,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   201,   721,   203,   204,     0,   205,   206,
       0,   207,     0,   208,   209,   210,   722,   212,   213,   723,
     724,   215,   216,   725,     0,   218,     0,   219,   541,     0,
     542,   220,   221,     0,     0,   222,     0,   223,   224,   543,
     225,   226,   227,     0,   228,   229,   230,   231,     0,   544,
     232,   233,   234,   235,   236,   726,   727,     0,   728,     0,
     240,   545,   546,   241,   547,   242,   243,   244,   245,   246,
       0,   548,   247,   549,     0,   248,   249,   250,   729,   730,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     731,   550,   732,   374,   263,   264,   265,   266,   267,   733,
     268,   269,   551,   270,   734,   735,   736,   273,   274,     0,
       0,   275,   375,     0,     0,   737,   277,     0,     0,   278,
     552,   553,   738,   280,   281,   282,     0,   739,   284,   285,
     286,     0,   287,   288,   289,   290,   291,   292,   740,   294,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   554,   306,   741,   308,   309,   310,   311,   312,
     313,   314,     0,   315,   316,   317,   742,   318,   319,   320,
     321,   555,   322,   743,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   744,   333,     0,   334,   335,   336,   337,
       0,   745,   746,     0,   340,     0,   341,   747,   343,   748,
     749,   345,   346,   347,   348,   349,     0,   750,   350,   351,
     352,   353,   354,   751,     0,   355,   356,   357,   358,   752,
     360,   556,   361,   362,     0,     0,   363,   364,   365,   366,
     367,   368,     0,   753,   754,   475,   755,   756,   757,   450,
     758,     0,     0,     0,     0,   759,   760,     0,     0,   762,
     763,     0,  1116,     0,   764,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,     0,     0,     0,     0,   705,
       0,     0,   155,   156,   157,   537,   158,   159,   160,   538,
     706,   539,   707,   708,     0,   164,   165,   166,   167,   709,
     710,   168,   711,   712,   171,     0,   172,   173,   174,   175,
     713,     0,     0,   177,   178,   179,     0,   180,   181,   714,
     183,     0,   184,   185,   540,   186,   715,   716,   717,   718,
     187,   188,   189,   190,   191,   719,   720,   194,  1792,   195,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   201,
     721,   203,   204,     0,   205,   206,     0,   207,     0,   208,
     209,   210,   722,   212,   213,   723,   724,   215,   216,   725,
       0,   218,     0,   219,   541,     0,   542,   220,   221,     0,
       0,   222,     0,   223,   224,   543,   225,   226,   227,     0,
     228,   229,   230,   231,     0,   544,   232,   233,   234,   235,
     236,   726,   727,     0,   728,     0,   240,   545,   546,   241,
     547,   242,   243,   244,   245,   246,     0,   548,   247,   549,
       0,   248,   249,   250,   729,   730,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   731,   550,   732,   374,
     263,   264,   265,   266,   267,   733,   268,   269,   551,   270,
     734,   735,   736,   273,   274,     0,     0,   275,   375,     0,
       0,   737,   277,     0,     0,   278,   552,   553,   738,   280,
     281,   282,     0,   739,   284,   285,   286,     0,   287,   288,
     289,   290,   291,   292,   740,   294,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   554,   306,
     741,   308,   309,   310,   311,   312,   313,   314,     0,   315,
     316,   317,   742,   318,   319,   320,   321,   555,   322,   743,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   744,
     333,     0,   334,   335,   336,   337,     0,   745,   746,     0,
     340,     0,   341,   747,   343,   748,   749,   345,   346,   347,
     348,   349,     0,   750,   350,   351,   352,   353,   354,   751,
       0,   355,   356,   357,   358,   752,   360,   556,   361,   362,
       0,     0,   363,   364,   365,   366,   367,   368,     0,   753,
     754,   475,   755,   756,   757,   450,   758,     0,     0,     0,
       0,   759,   760,     0,     0,   762,   763,     0,     0,     0,
     764,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,   705,     0,     0,   155,   156,
     157,   537,   158,   159,   160,   538,   706,   539,   707,   708,
       0,   164,   165,   166,   167,   709,   710,   168,   711,   712,
     171,     0,   172,   173,   174,   175,   713,     0,     0,   177,
     178,   179,     0,   180,   181,   714,   183,     0,   184,   185,
     540,   186,   715,   716,   717,   718,   187,   188,   189,   190,
     191,   719,   720,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   721,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   722,   212,
     213,   723,   724,   215,   216,   725,     0,   218,     0,   219,
     541,  1522,   542,   220,   221,     0,     0,   222,     0,   223,
     224,   543,   225,   226,   227,     0,   228,   229,   230,   231,
       0,   544,   232,   233,   234,   235,   236,   726,   727,     0,
     728,     0,   240,   545,   546,   241,   547,   242,   243,   244,
     245,   246,     0,   548,   247,   549,     0,   248,   249,   250,
     729,   730,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   731,   550,   732,   374,   263,   264,   265,   266,
     267,   733,   268,   269,   551,   270,   734,   735,   736,   273,
     274,     0,     0,   275,   375,     0,     0,   737,   277,     0,
       0,   278,   552,   553,   738,   280,   281,   282,     0,   739,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     740,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   554,   306,   741,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,   742,   318,
     319,   320,   321,   555,   322,   743,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   744,   333,     0,   334,   335,
     336,   337,     0,   745,   746,     0,   340,     0,   341,   747,
     343,   748,   749,   345,   346,   347,   348,   349,     0,   750,
     350,   351,   352,   353,   354,   751,     0,   355,   356,   357,
     358,   752,   360,   556,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   753,   754,   475,   755,   756,
     757,   450,   758,     0,     0,     0,     0,   759,   760,     0,
       0,   762,   763,     0,     0,     0,   764,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,   705,     0,     0,   155,   156,   157,   537,   158,   159,
     160,   538,   706,   539,   707,   708,     0,   164,   165,   166,
     167,   709,   710,   168,   711,   712,   171,     0,   172,   173,
     174,   175,   713,     0,     0,   177,   178,   179,     0,   180,
     181,   714,   183,     0,   184,   185,   540,   186,   715,   716,
     717,   718,   187,   188,   189,   190,   191,   719,   720,   194,
    2169,   195,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   201,   721,   203,   204,     0,   205,   206,     0,   207,
       0,   208,   209,   210,   722,   212,   213,   723,   724,   215,
     216,   725,     0,   218,     0,   219,   541,     0,   542,   220,
     221,     0,     0,   222,     0,   223,   224,   543,   225,   226,
     227,     0,   228,   229,   230,   231,     0,   544,   232,   233,
     234,   235,   236,   726,   727,     0,   728,     0,   240,   545,
     546,   241,   547,   242,   243,   244,   245,   246,     0,   548,
     247,   549,     0,   248,   249,   250,   729,   730,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   731,   550,
     732,   374,   263,   264,   265,   266,   267,   733,   268,   269,
     551,   270,   734,   735,   736,   273,   274,     0,     0,   275,
     375,     0,     0,   737,   277,     0,     0,   278,   552,   553,
     738,   280,   281,   282,     0,   739,   284,   285,   286,     0,
     287,   288,   289,   290,   291,   292,   740,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     554,   306,   741,   308,   309,   310,   311,   312,   313,   314,
       0,   315,   316,   317,   742,   318,   319,   320,   321,   555,
     322,   743,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   744,   333,     0,   334,   335,   336,   337,     0,   745,
     746,     0,   340,     0,   341,   747,   343,   748,   749,   345,
     346,   347,   348,   349,     0,   750,   350,   351,   352,   353,
     354,   751,     0,   355,   356,   357,   358,   752,   360,   556,
     361,   362,     0,     0,   363,   364,   365,   366,   367,   368,
       0,   753,   754,   475,   755,   756,   757,   450,   758,     0,
       0,     0,     0,   759,   760,     0,     0,   762,   763,     0,
       0,     0,   764,   146,   147,   148,   149,   150,   151,   152,
       0,   153,   154,     0,     0,     0,     0,   705,     0,     0,
     155,   156,   157,   537,   158,   159,   160,   538,   706,   539,
     707,   708,     0,   164,   165,   166,   167,   709,   710,   168,
     711,   712,   171,     0,   172,   173,   174,   175,   713,     0,
       0,   177,   178,   179,     0,   180,   181,   714,   183,     0,
     184,   185,   540,   186,   715,   716,   717,   718,   187,   188,
     189,   190,   191,   719,   720,   194,     0,   195,     0,   196,
     197,   198,   199,   200,     0,     0,     0,   201,   721,   203,
     204,     0,   205,   206,     0,   207,     0,   208,   209,   210,
     722,   212,   213,   723,   724,   215,   216,   725,     0,   218,
       0,   219,   541,     0,   542,   220,   221,     0,     0,   222,
       0,   223,   224,   543,   225,   226,   227,     0,   228,   229,
     230,   231,     0,   544,   232,   233,   234,   235,   236,   726,
     727,     0,   728,     0,   240,   545,   546,   241,   547,   242,
     243,   244,   245,   246,     0,   548,   247,   549,     0,   248,
     249,   250,   729,   730,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   731,   550,   732,   374,   263,   264,
     265,   266,   267,   733,   268,   269,   551,   270,   734,   735,
     736,   273,   274,     0,     0,   275,   375,     0,     0,   737,
     277,     0,     0,   278,   552,   553,   738,   280,   281,   282,
       0,   739,   284,   285,   286,     0,   287,   288,   289,   290,
     291,   292,   740,   294,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   554,   306,   741,   308,
     309,   310,   311,   312,   313,   314,     0,   315,   316,   317,
     742,   318,   319,   320,   321,   555,   322,   743,     0,   324,
     325,   326,   327,   328,   329,   330,   331,   744,   333,     0,
     334,   335,   336,   337,     0,   745,   746,     0,   340,     0,
     341,   747,   343,   748,   749,   345,   346,   347,   348,   349,
       0,   750,   350,   351,   352,   353,   354,   751,     0,   355,
     356,   357,   358,   752,   360,   556,   361,   362,     0,     0,
     363,   364,   365,   366,   367,   368,     0,   753,   754,   475,
     755,   756,   757,   450,   758,     0,     0,     0,     0,   759,
     760,     0,     0,   762,   763,     0,     0,     0,   764,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,     0,
       0,     0,     0,   705,     0,     0,   155,   156,   157,   537,
     158,   159,   160,   538,   706,   539,   707,   708,     0,   164,
     165,   166,   167,   709,   710,   168,   711,   712,   171,     0,
     172,   173,   174,   175,   713,     0,     0,   177,   178,   179,
       0,   180,   181,   714,   183,     0,   184,   185,   540,   186,
     715,   716,   717,   718,   187,   188,   189,   190,   191,   719,
     720,   194,     0,   195,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   201,   721,   203,   204,     0,   205,   206,
       0,   207,     0,   208,   209,   210,   722,   212,   213,   723,
     724,   215,   216,   725,     0,   218,     0,   219,   541,     0,
     542,   220,   221,     0,     0,   222,     0,   223,   224,   543,
     225,   226,   227,     0,   228,   229,   230,   231,     0,   544,
     232,   233,   234,   235,   236,   726,   727,     0,   728,     0,
     240,   545,   546,   241,   547,   242,   243,   244,   245,   246,
       0,   548,   247,   549,     0,   248,   249,   250,   729,   730,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     731,   550,   732,   374,   263,   264,   265,   266,   267,     0,
     268,   269,   551,   270,   734,   735,   736,   273,   274,     0,
       0,   275,   375,     0,     0,   737,   277,     0,     0,   278,
     552,   553,   738,   280,   281,   282,     0,   739,   284,   285,
     286,     0,   287,   288,   289,   290,   291,   292,   740,   294,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   554,   306,   741,   308,   309,   310,   311,   312,
     313,   314,     0,   315,   316,   317,   742,   318,   319,   320,
     321,   555,   322,   743,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   744,   333,     0,   334,   335,   336,   337,
       0,   745,   746,     0,   340,     0,   341,   747,   343,   748,
     749,   345,   346,   347,   348,   349,     0,     0,   350,   351,
     352,   353,   354,   751,     0,   355,   356,   357,   358,   752,
     360,   556,   361,   362,     0,     0,   363,   364,   365,   366,
     367,   368,     0,   753,   754,   475,   755,   756,   757,   450,
     758,     0,     0,     0,     0,  1502,  1503,     0,     0,  1504,
    1505,     0,     0,     0,   764,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,     0,     0,     0,     0,   705,
       0,     0,   155,   156,   157,   537,   158,   159,   160,     0,
     706,   539,   707,   708,     0,   164,   165,   166,   167,   709,
     710,   168,   711,   712,   171,     0,   172,   173,   174,   175,
     713,     0,     0,   177,   178,   179,     0,   180,   181,   714,
     183,     0,   184,   185,   540,   186,   715,   716,   717,   718,
     187,   188,   189,   190,   191,   719,   720,   194,     0,   195,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   201,
     721,   203,   204,     0,   205,   206,     0,     0,     0,   208,
     209,   210,   722,   212,   213,   723,   724,   215,   216,   725,
       0,   218,     0,   219,   541,     0,   542,   220,   221,     0,
       0,   222,     0,   223,   224,     0,   225,   226,   227,     0,
     228,   229,   230,   231,     0,   544,   232,   233,   234,   235,
     236,   726,   727,     0,   728,     0,   240,   545,   546,   241,
     547,   242,   243,   244,   245,   246,     0,   548,   247,     0,
       0,   248,   249,   250,   729,   730,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   731,   550,   732,   374,
     263,   264,   265,   266,   267,     0,   268,   269,   551,   270,
     734,   735,   736,   273,   274,     0,     0,   275,   375,     0,
       0,   737,   277,     0,     0,   278,   552,   553,   738,   280,
     281,   282,     0,   739,   284,   285,   286,     0,   287,   288,
     289,   290,   291,   292,   740,   294,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   554,   306,
     741,   308,   309,   310,   311,   312,   313,   314,     0,   315,
     316,   317,   742,   318,   319,   320,   321,     0,   322,   743,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   744,
     333,     0,   334,   335,   336,   337,     0,   745,   746,     0,
     340,     0,   341,   747,   343,   748,   749,   345,   346,   347,
     348,   349,     0,   750,   350,   351,   352,   353,   354,   751,
       0,   355,   356,   357,   358,   752,   360,   556,   361,   362,
       0,     0,   363,   364,   365,   366,   367,   368,     0,   753,
     754,   475,   755,   756,   757,   450,   758,     0,     0,     0,
       0,   759,   760,     0,     0,   762,   763,     0,     0,     0,
     764,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,   705,     0,     0,   155,   156,
     157,   537,   158,   159,   160,     0,   706,   539,   707,   708,
       0,   164,   165,   166,   167,   709,   710,   168,   711,   712,
     171,     0,   172,   173,   174,   175,   713,     0,     0,   177,
     178,   179,     0,   180,   181,   714,   183,     0,   184,   185,
     540,   186,   715,   716,   717,   718,   187,   188,   189,   190,
     191,   719,   720,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   721,   203,   204,     0,
     205,   206,     0,     0,     0,   208,   209,   210,   722,   212,
     213,   723,   724,   215,   216,   725,     0,   218,     0,   219,
     541,     0,   542,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,   544,   232,   233,   234,   235,   236,   726,   727,     0,
     728,     0,   240,   545,   546,   241,   547,   242,   243,   244,
     245,   246,     0,   548,   247,     0,     0,   248,   249,   250,
     729,   730,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   731,   550,   732,   374,   263,   264,   265,   266,
     267,     0,   268,   269,   551,   270,   734,   735,   736,   273,
     274,     0,     0,   275,   375,     0,     0,   737,   277,     0,
       0,   278,   552,   553,   738,   280,   281,   282,     0,   739,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     740,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   554,   306,   741,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,   742,   318,
     319,   320,   321,     0,   322,   743,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   744,   333,     0,   334,   335,
     336,   337,     0,   745,   746,     0,   340,     0,   341,   747,
     343,   748,   749,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,   751,     0,   355,   356,   357,
     358,   752,   360,   556,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   753,   754,   475,   755,   756,
     757,   450,   758,     0,     0,     0,     0,  1502,  1503,     0,
       0,  1504,  1505,     0,     0,     0,   764,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,   705,     0,     0,   155,   156,   157,   537,   158,   159,
     160,   538,   706,   539,   707,   708,     0,   164,   165,   166,
     167,   709,   710,   168,   711,   712,   171,     0,   172,   173,
     174,   175,   713,     0,     0,   177,   178,   179,     0,   180,
     181,   714,   183,     0,   184,   185,   540,   186,   715,   716,
     717,   718,   187,   188,   189,   190,   191,   719,   720,   194,
       0,   195,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   201,   721,   203,   204,     0,   205,   206,     0,   207,
       0,   208,   209,   210,   722,   212,   213,   723,   724,   215,
     216,   725,     0,   218,     0,   219,   541,     0,   542,   220,
     221,     0,     0,   222,     0,   223,   224,   543,   225,   226,
     227,     0,   228,   229,   230,   231,     0,   544,   232,   233,
     234,   235,   236,   726,   727,     0,   728,     0,   240,   545,
     546,   241,   547,   242,   243,   244,   245,   246,     0,   548,
     247,   549,     0,   248,   249,   250,   729,   730,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   731,   550,
     732,   374,   263,   264,   265,   266,   267,     0,   268,   269,
     551,   270,   734,   735,   736,   273,   274,     0,     0,   275,
     375,     0,     0,   276,   277,     0,     0,   278,   552,   553,
     738,   280,   281,   282,     0,   739,   284,   285,   286,     0,
     287,   288,   289,   290,   291,   292,   740,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     554,   306,   741,   308,   309,   310,   311,   312,   313,   314,
       0,   315,   316,   317,   742,   318,   319,   320,   321,   555,
     322,   743,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   744,   333,     0,   334,   335,   336,   337,     0,   745,
     746,     0,   340,     0,   341,   747,   343,   748,   749,   345,
     346,   347,   348,   349,     0,     0,   350,   351,   352,   353,
     354,   751,     0,   355,   356,   357,   358,   752,   360,   556,
     361,   362,     0,     0,   363,   364,   365,   366,   367,   368,
       0,   753,   754,   475,   755,   756,     0,   450,   758,     0,
     146,   147,   148,   149,   150,   151,   152, -1096,   153,   154,
       0,     0,   764, -1096,   705,     0,     0,   155,   156,   157,
     537,   158,   159,   160,     0,   706,   539,   707,   708,     0,
     164,   165,   166,   167,   709,   710,   168,   711,   712,   171,
       0,   172,   173,   174,   175,   713,     0,     0,   177,   178,
     179,     0,   180,   181,   714,   183,     0,   184,   185,   540,
     186,   715,   716,   717,   718,   187,   188,   189,   190,   191,
     719,   720,   194,     0,   195,     0,   196,   197,   198,   199,
     200,     0,     0,     0,   201,   721,   203,   204,     0,   205,
     206,     0,     0,     0,   208,   209,   210,   722,   212,   213,
     723,   724,   215,   216,   725,     0,   218,     0,   219,   541,
       0,   542,   220,   221,     0,     0,   222,     0,   223,   224,
       0,   225,   226,   227,     0,   228,   229,   230,   231,     0,
     544,   232,   233,   234,   235,   236,   726,   727,     0,   728,
       0,   240,     0,     0,   241,   547,   242,   243,   244,   245,
     246,     0,   548,   247,     0,     0,   248,   249,   250,   729,
     730,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   731,   550,   732,   374,   263,   264,   265,   266,   267,
       0,   268,   269,     0,   270,   734,   735,   736,   273,   274,
       0,     0,   275,   375,     0,     0,     0,   277,     0,     0,
     278,   552,   553,   738,   280,   281,   282,     0,   739,   284,
     285,   286,     0,   287,   288,   289,   290,   291,   292,   740,
     294,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   554,   306,   741,   308,   309,   310,   311,
     312,   313,   314,     0,   315,   316,   317,   742,   318,   319,
     320,   321,     0,   322,   743, -1096,   324,   325,   326,   327,
     328,   329,   330,   331,   744,   333,     0,   334,   335,   336,
     337,     0,   745,   746,     0,   340,     0,   341,   747,   343,
     748,   749,   345,   346,   347,   348,   349,     0,   750,   350,
     351,   352,   353,   354,   751,     0,   355,   356,   357,   358,
     752,   360,   556,   361,   362,     0,     0,   363,   364,   365,
     366,   367,   368,     0,   753,   754,   475,   755,   756,     0,
     450,   758,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   763,     0,     0,     0,   764,   146,   147,   148,   149,
     150,   151,   152, -1097,   153,   154,     0,     0,     0, -1097,
     705,     0,     0,   155,   156,   157,   537,   158,   159,   160,
       0,   706,   539,   707,   708,     0,   164,   165,   166,   167,
     709,   710,   168,   711,   712,   171,     0,   172,   173,   174,
     175,   713,     0,     0,   177,   178,   179,     0,   180,   181,
     714,   183,     0,   184,   185,   540,   186,   715,   716,   717,
     718,   187,   188,   189,   190,   191,   719,   720,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   721,   203,   204,     0,   205,   206,     0,     0,     0,
     208,   209,   210,   722,   212,   213,   723,   724,   215,   216,
     725,     0,   218,     0,   219,   541,     0,   542,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,   544,   232,   233,   234,
     235,   236,   726,   727,     0,   728,     0,   240,     0,     0,
     241,   547,   242,   243,   244,   245,   246,     0,   548,   247,
       0,     0,   248,   249,   250,   729,   730,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   731,   550,   732,
     374,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,   734,   735,   736,   273,   274,     0,     0,   275,   375,
       0,     0,     0,   277,     0,     0,   278,   552,   553,   738,
     280,   281,   282,     0,   739,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   740,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   554,
     306,   741,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,   742,   318,   319,   320,   321,     0,   322,
     743, -1097,   324,   325,   326,   327,   328,   329,   330,   331,
     744,   333,     0,   334,   335,   336,   337,     0,   745,   746,
       0,   340,     0,   341,   747,   343,   748,   749,   345,   346,
     347,   348,   349,     0,   750,   350,   351,   352,   353,   354,
     751,     0,   355,   356,   357,   358,   752,   360,   556,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     753,   754,   475,   755,   756,     0,   450,   758,   146,   147,
     148,   149,   150,   151,   152,     0,   153,   154,     0,     0,
       0,   764,   705,     0,     0,   155,   156,   157,   537,   158,
     159,   160,     0,   706,   539,   707,   708,     0,   164,   165,
     166,   167,   709,   710,   168,   711,   712,   171,     0,   172,
     173,   174,   175,   713,     0,     0,   177,   178,   179,     0,
     180,   181,   714,   183,     0,   184,   185,   540,   186,   715,
     716,   717,   718,   187,   188,   189,   190,   191,   719,   720,
     194,     0,   195,     0,   196,   197,   198,   199,   200,     0,
       0,     0,   201,   721,   203,   204,     0,   205,   206,     0,
       0,     0,   208,   209,   210,   722,   212,   213,   723,   724,
     215,   216,   725,     0,   218,     0,   219,   541,     0,   542,
     220,   221,     0,     0,   222,     0,   223,   224,     0,   225,
     226,   227,     0,   228,   229,   230,   231,     0,   544,   232,
     233,   234,   235,   236,   726,   727,     0,   728,     0,   240,
       0,     0,   241,   547,   242,   243,   244,   245,   246,     0,
     548,   247,     0,     0,   248,   249,   250,   729,   730,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   731,
     550,   732,   374,   263,   264,   265,   266,   267,     0,   268,
     269,     0,   270,     0,   735,   736,   273,   274,     0,     0,
     275,   375,     0,     0,     0,   277,     0,     0,   278,   552,
     553,   738,   280,   281,   282,     0,   739,   284,   285,   286,
       0,   287,   288,   289,   290,   291,   292,   740,   294,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   554,   306,   741,   308,   309,   310,   311,   312,   313,
     314,     0,   315,   316,   317,   742,   318,   319,   320,   321,
       0,   322,   743,     0,   324,   325,   326,   327,   328,   329,
     330,   331,   744,   333,     0,   334,   335,   336,   337,     0,
     745,   746,     0,   340,     0,   341,   747,   343,   748,   749,
     345,   346,   347,   348,   349,     0,     0,   350,   351,   352,
     353,   354,   751,     0,   355,   356,   357,   358,   752,   360,
     556,   361,   362,     0,     0,   363,   364,   365,   366,   367,
     368,     0,   753,   754,   475,   755,   756,     0,   450,   758,
       0,     0,   146,   147,   148,   149,   150,   151,   152,  1505,
     153,   154,     0,   764,     0,     0,     0,     0,     0,   155,
     156,   157,   537,   158,   159,   160,   538,   161,   539,   162,
     163,     0,   164,   165,   166,   167,     0,   710,   168,   169,
     170,   171,     0,   172,   173,   174,   175,   713,     0,     0,
     177,   178,   179,     0,   180,   181,   714,   183,     0,   184,
     185,   540,   186,   715,   716,   717,   718,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,     0,   196,   197,
     198,   199,   200,     0,     0,     0,   201,   202,   203,   204,
       0,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   723,     0,   215,   216,   217,     0,   218,     0,
     219,   541,     0,   542,   220,   221,     0,     0,   222,     0,
     223,   224,   543,   225,   226,   227,     0,   228,   229,   230,
     231,     0,   544,   232,   233,   234,   235,   236,   237,   238,
       0,   239,     0,   240,   545,   546,   241,   547,   242,   243,
     244,   245,   246,     0,   548,   247,   549,     0,   248,   249,
     250,   729,   730,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   550,   262,   374,   263,   264,   265,
     266,   267,     0,   268,   269,   551,   270,     0,   735,   272,
     273,   274,     0,     0,   275,   375,     0,   520,   276,   277,
       0,     0,   278,   552,   553,   738,   280,   281,   282,     0,
     739,   284,   285,   286,     0,   287,   288,   289,   290,   291,
     292,   293,   294,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   554,   306,   307,   308,   309,
     310,   311,   312,   313,   314,    35,   315,   316,   317,   742,
     318,   319,   320,   321,   555,   322,   323,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   744,   333,     0,   334,
     335,   336,   337,     0,   338,   339,     0,   340,     0,   341,
     747,   343,   748,     0,   345,   346,   347,   348,   349,     0,
       0,   350,   351,   352,   353,   354,   751,     0,   355,   356,
     357,   358,   359,   360,   556,   361,   362,     0,     0,   363,
     364,   365,   366,   367,   368,     0,   557,     0,     0,     0,
       0,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,  1907,   155,   156,
     157,   537,   158,   159,   160,   538,   161,   539,   162,   163,
       0,   164,   165,   166,   167,     0,   710,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   713,     0,     0,   177,
     178,   179,     0,   180,   181,   714,   183,     0,   184,   185,
     540,   186,   715,   716,   717,   718,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   723,     0,   215,   216,   217,     0,   218,     0,   219,
     541,     0,   542,   220,   221,     0,     0,   222,     0,   223,
     224,   543,   225,   226,   227,     0,   228,   229,   230,   231,
       0,   544,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,   545,   546,   241,   547,   242,   243,   244,
     245,   246,     0,   548,   247,   549,     0,   248,   249,   250,
     729,   730,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   550,   262,   374,   263,   264,   265,   266,
     267,     0,   268,   269,   551,   270,     0,   735,   272,   273,
     274,     0,     0,   275,   375,     0,   520,   276,   277,     0,
       0,   278,   552,   553,   738,   280,   281,   282,     0,   739,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   554,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,   742,   318,
     319,   320,   321,   555,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   744,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   747,
     343,   748,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,   751,     0,   355,   356,   357,
     358,   359,   360,   556,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   557,     0,     0,     0,     0,
     146,   147,   148,   149,   150,   151,   152,     0,   153,   154,
       0,     0,     0,     0,   705,     0,  1907,   155,   156,   157,
     537,   158,   159,   160,     0,   706,   539,   707,   708,     0,
     164,   165,   166,   167,   709,   710,   168,   711,   712,   171,
       0,   172,   173,   174,   175,   713,     0,     0,   177,   178,
     179,     0,   180,   181,   714,   183,     0,   184,   185,   540,
     186,   715,   716,   717,   718,   187,   188,   189,   190,   191,
     719,   720,   194,     0,   195,     0,   196,   197,   198,   199,
     200,     0,     0,     0,   201,   721,   203,   204,     0,   205,
     206,     0,     0,     0,   208,   209,   210,   722,   212,   213,
     723,   724,   215,   216,   725,     0,   218,     0,   219,   541,
       0,   542,   220,   221,     0,     0,   222,     0,   223,   224,
       0,   225,   226,   227,     0,   228,   229,   230,   231,     0,
     544,   232,   233,   234,   235,   236,   726,   727,     0,   728,
       0,   240,     0,     0,   241,   547,   242,   243,   244,   245,
     246,     0,   548,   247,     0,     0,   248,   249,   250,   729,
     730,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   731,   550,   732,   374,   263,   264,   265,   266,   267,
       0,   268,   269,     0,   270,     0,   735,   736,   273,   274,
       0,     0,   275,   375,     0,     0,     0,   277,     0,     0,
     278,   552,   553,   738,   280,   281,   282,     0,   739,   284,
     285,   286,     0,   287,   288,   289,   290,   291,   292,   740,
     294,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   554,   306,   741,   308,   309,   310,   311,
     312,   313,   314,     0,   315,   316,   317,   742,   318,   319,
     320,   321,     0,   322,   743,     0,   324,   325,   326,   327,
     328,   329,   330,   331,   744,   333,     0,   334,   335,   336,
     337,     0,   745,   746,     0,   340,     0,   341,   747,   343,
     748,   749,   345,   346,   347,   348,   349,     0,     0,   350,
     351,   352,   353,   354,   751,     0,   355,   356,   357,   358,
     752,   360,   556,   361,   362,     0,     0,   363,   364,   365,
     366,   367,   368,     0,   753,   754,   475,   755,   756,     0,
     450,   758,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,     0,     0,     0,   764,     0,     0,     0,   155,
     156,   157,   537,   158,   159,   160,   538,   161,   539,   162,
     163,     0,   164,   165,   166,   167,     0,   710,   168,   169,
     170,   171,     0,   172,   173,   174,   175,   713,     0,     0,
     177,   178,   179,     0,   180,   181,   714,   183,     0,   184,
     185,   540,   186,   715,   716,   717,   718,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,     0,   196,   197,
     198,   199,   200,     0,     0,     0,   201,   202,   203,   204,
       0,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   723,     0,   215,   216,   217,     0,   218,     0,
     219,   541,     0,   542,   220,   221,     0,     0,   222,     0,
     223,   224,   543,   225,   226,   227,     0,   228,   229,   230,
     231,     0,   544,   232,   233,   234,   235,   236,   237,   238,
       0,   239,     0,   240,   545,   546,   241,   547,   242,   243,
     244,   245,   246,     0,   548,   247,   549,     0,   248,   249,
     250,   729,   730,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   550,   262,   374,   263,   264,   265,
     266,   267,     0,   268,   269,   551,   270,     0,   735,   272,
     273,   274,     0,     0,   275,   375,     0,     0,   276,   277,
       0,     0,   278,   552,   553,   738,   280,   281,   282,     0,
     739,   284,   285,   286,     0,   287,   288,   289,   290,   291,
     292,   293,   294,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   554,   306,   307,   308,   309,
     310,   311,   312,   313,   314,     0,   315,   316,   317,   742,
     318,   319,   320,   321,   555,   322,   323,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   744,   333,     0,   334,
     335,   336,   337,     0,   338,   339,     0,   340,     0,   341,
     747,   343,   748,     0,   345,   346,   347,   348,   349,     0,
       0,   350,   351,   352,   353,   354,   751,     0,   355,   356,
     357,   358,   359,   360,   556,   361,   362,     0,     0,   363,
     364,   365,   366,   367,   368,     0,   557,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,  2391,   158,   159,
     160,     0,   161,     0,   162,   163,     0,   164,   165,   166,
     167,     0,     0,   168,   169,   170,   171,     0,   172,   173,
     174,   175,   176,     0,     0,   177,   178,   179,     0,   180,
     181,   182,   183,     0,   184,   185,     0,   186,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   201,   202,   203,   204,     0,   205,   206,     0,   207,
       0,   208,   209,   210,   211,   212,   213,   214,     0,   215,
     216,   217,     0,   218,     0,   219,     0,     0,     0,   220,
     221,     0,     0,   222,     0,   223,   224,     0,   225,   226,
     227,     0,   228,   229,   230,   231,     0,     0,   232,   233,
     234,   235,   236,   237,   238,     0,   239,     0,   240,     0,
       0,   241,     0,   242,   243,   244,   245,   246,     0,     0,
     247,     0,     0,   248,   249,   250,     0,     0,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
     262,   374,   263,   264,   265,   266,   267,     0,   268,   269,
       0,   270,     0,   271,   272,   273,   274,     0,     0,   275,
     375,     0,     0,   276,   277,     0,     0,   278,     0,     0,
     279,   280,   281,   282,     0,   283,   284,   285,   286,     0,
     287,   288,   289,   290,   291,   292,   293,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,   306,   307,   308,   309,   310,   311,   312,   313,   314,
       0,   315,   316,   317,     0,   318,   319,   320,   321,     0,
     322,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   334,   335,   336,   337,     0,   338,
     339,     0,   340,     0,   341,   342,   343,   344,     0,   345,
     346,   347,   348,   349,     0,     0,   350,   351,   352,   353,
     354,     0,     0,   355,   356,   357,   358,   359,   360,     0,
     361,   362,     0,     0,   363,   364,   365,   366,   367,   368,
       0,   369,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,   816,   158,   159,   160,     0,   161,     0,   162,
     163,     0,   164,   165,   166,   167,     0,     0,   168,   169,
     170,   171,     0,   172,   173,   174,   175,   176,     0,     0,
     177,   178,   179,     0,   180,   181,   182,   183,     0,   184,
     185,     0,   186,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,     0,   196,   197,
     198,   199,   200,     0,     0,     0,   201,   202,   203,   204,
       0,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   216,   217,     0,   218,     0,
     219,     0,     0,     0,   220,   221,     0,     0,   222,     0,
     223,   224,     0,   225,   226,   227,     0,   228,   229,   230,
     231,     0,     0,   232,   233,   234,   235,   236,   237,   238,
       0,   239,     0,   240,     0,     0,   241,     0,   242,   243,
     244,   245,   246,     0,     0,   247,     0,     0,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,   262,     0,   263,   264,   265,
     266,   267,     0,   268,   269,     0,   270,     0,   271,   272,
     273,   274,     0,     0,   275,     0,     0,     0,   276,   277,
       0,     0,   278,     0,     0,   279,   280,   281,   282,     0,
     283,   284,   285,   286,     0,   287,   288,   289,   290,   291,
     292,   293,   294,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,   306,   307,   308,   309,
     310,   311,   312,   313,   314,    35,   315,   316,   317,     0,
     318,   319,   320,   321,     0,   322,   323,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,     0,   334,
     335,   336,   337,     0,   338,   339,     0,   340,     0,   341,
     342,   343,   344,     0,   345,   346,   347,   348,   349,     0,
       0,   350,   351,   352,   353,   354,     0,     0,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,     0,   363,
     364,   365,   366,   367,   368,     0,   369,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,    43,   158,   159,
     160,     0,   161,     0,   162,   163,     0,   164,   165,   166,
     167,     0,     0,   168,   169,   170,   171,     0,   172,   173,
     174,   175,   176,     0,     0,   177,   178,   179,     0,   180,
     181,   182,   183,     0,   184,   185,     0,   186,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   201,   202,   203,   204,     0,   205,   206,     0,   207,
       0,   208,   209,   210,   211,   212,   213,   214,     0,   215,
     216,   217,     0,   218,     0,   219,     0,     0,     0,   220,
     221,     0,     0,   222,     0,   223,   224,     0,   225,   226,
     227,     0,   228,   229,   230,   231,     0,     0,   232,   233,
     234,   235,   236,   237,   238,     0,   239,     0,   240,     0,
       0,   241,     0,   242,   243,   244,   245,   246,     0,     0,
     247,     0,     0,   248,   249,   250,     0,     0,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
     262,     0,   263,   264,   265,   266,   267,     0,   268,   269,
       0,   270,     0,   271,   272,   273,   274,     0,     0,   275,
       0,     0,     0,   276,   277,     0,     0,   278,     0,     0,
     279,   280,   281,   282,     0,   283,   284,   285,   286,     0,
     287,   288,   289,   290,   291,   292,   293,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,   306,   307,   308,   309,   310,   311,   312,   313,   314,
       0,   315,   316,   317,     0,   318,   319,   320,   321,     0,
     322,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   334,   335,   336,   337,     0,   338,
     339,     0,   340,     0,   341,   342,   343,   344,     0,   345,
     346,   347,   348,   349,     0,     0,   350,   351,   352,   353,
     354,     0,     0,   355,   356,   357,   358,   359,   360,     0,
     361,   362,     0,     0,   363,   364,   365,   366,   367,   368,
       0,   369,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,  2327,   158,   159,   160,     0,   161,     0,   162,
     163,     0,   164,   165,   166,   167,     0,     0,   168,   169,
     170,   171,     0,   172,   573,   174,   175,   176,     0,     0,
     177,   178,   179,     0,   180,   181,   182,   183,     0,   184,
     185,     0,   186,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,     0,   196,   197,
     198,   199,   200,     0,     0,     0,   201,   202,   203,   204,
       0,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   216,   217,     0,   218,     0,
     219,     0,     0,     0,   220,   221,     0,     0,   222,     0,
     223,   224,     0,   225,   226,   227,     0,   228,   229,   230,
     231,     0,     0,   232,   233,   234,   235,   236,   237,   238,
       0,   239,     0,   240,     0,     0,   241,     0,   242,   243,
     244,   245,   246,     0,     0,   247,     0,     0,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,   262,     0,   263,   264,   265,
     266,   267,     0,   268,   269,     0,   270,     0,   271,   272,
     273,   274,     0,     0,   275,     0,     0,     0,   276,   277,
       0,     0,   278,     0,     0,   279,   280,   281,   282,     0,
     283,   284,   285,   286,     0,   287,   288,   289,   290,   291,
     292,   293,   294,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,   306,   307,   308,   309,
     310,   311,   312,   313,   314,     0,   315,   316,   317,     0,
     318,   319,   320,   321,     0,   322,   323,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,     0,   334,
     335,   336,   337,     0,   338,   339,     0,   340,     0,   341,
     342,   343,   344,     0,   345,   346,   347,   348,   349,     0,
       0,   350,   351,   352,   353,   354,     0,     0,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,     0,   363,
     364,   365,   366,   367,   368,     0,   369,     0,     0,     0,
       0,   574,     0,     0,   575,   576,   577,     0,   578,   579,
     580,   581,   582,   583,   146,   147,   148,   149,   150,   151,
     152,     0,   153,   154,     0,     0,     0,     0,     0,     0,
       0,   155,   156,   157,     0,   158,   159,   160,     0,   161,
       0,   162,   163,     0,   164,   165,   166,   167,     0,     0,
     168,   169,   170,   171,     0,   172,   637,   174,   175,   176,
       0,     0,   177,   178,   179,     0,   180,   181,   182,   183,
       0,   184,   185,     0,   186,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   195,     0,
     196,   197,   198,   199,   200,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   206,     0,   207,     0,   208,   209,
     210,   211,   212,   213,   214,     0,   215,   216,   217,     0,
     218,     0,   219,     0,     0,     0,   220,   221,     0,     0,
     222,     0,   223,   224,     0,   225,   226,   227,     0,   228,
     229,   230,   231,     0,     0,   232,   233,   234,   235,   236,
     237,   238,     0,   239,     0,   240,     0,     0,   241,     0,
     242,   243,   244,   245,   246,     0,     0,   247,     0,     0,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,     0,   262,     0,   263,
     264,   265,   266,   267,     0,   268,   269,     0,   270,     0,
     271,   272,   273,   274,     0,     0,   275,     0,     0,     0,
     276,   277,     0,     0,   278,     0,     0,   279,   280,   281,
     282,     0,   283,   284,   285,   286,     0,   287,   288,   289,
     290,   291,   292,   293,   294,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,   306,   307,
     308,   309,   310,   311,   312,   313,   314,     0,   315,   316,
     317,     0,   318,   319,   320,   321,     0,   322,   323,     0,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
       0,   334,   335,   336,   337,     0,   338,   339,     0,   340,
       0,   341,   342,   343,   344,     0,   345,   346,   347,   348,
     349,     0,     0,   350,   351,   352,   353,   354,     0,     0,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
       0,   363,   364,   365,   366,   367,   368,     0,   369,     0,
       0,     0,     0,   574,     0,     0,   575,   576,   577,     0,
     578,   579,   580,   581,   582,   583,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   663,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,     0,     0,     0,     0,   574,     0,     0,   575,   576,
     577,     0,   578,   579,   580,   581,   582,   583,   146,   147,
     148,   149,   150,   151,   152,     0,   153,   154,     0,     0,
       0,     0,     0,     0,     0,   155,   156,   157,     0,   158,
     159,   160,     0,   161,     0,   162,   163,     0,   164,   165,
     166,   167,     0,     0,   168,   169,   170,   171,     0,   172,
     980,   174,   175,   176,     0,     0,   177,   178,   179,     0,
     180,   181,   182,   183,     0,   184,   185,     0,   186,     0,
       0,     0,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,     0,   196,   197,   198,   199,   200,     0,
       0,     0,   201,   202,   203,   204,     0,   205,   206,     0,
     207,     0,   208,   209,   210,   211,   212,   213,   214,     0,
     215,   216,   217,     0,   218,     0,   219,     0,     0,     0,
     220,   221,     0,     0,   222,     0,   223,   224,     0,   225,
     226,   227,     0,   228,   229,   230,   231,     0,     0,   232,
     233,   234,   235,   236,   237,   238,     0,   239,     0,   240,
       0,     0,   241,     0,   242,   243,   244,   245,   246,     0,
       0,   247,     0,     0,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
       0,   262,     0,   263,   264,   265,   266,   267,     0,   268,
     269,     0,   270,     0,   271,   272,   273,   274,     0,     0,
     275,     0,     0,     0,   276,   277,     0,     0,   278,     0,
       0,   279,   280,   281,   282,     0,   283,   284,   285,   286,
       0,   287,   288,   289,   290,   291,   292,   293,   294,     0,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,   306,   307,   308,   309,   310,   311,   312,   313,
     314,     0,   315,   316,   317,     0,   318,   319,   320,   321,
       0,   322,   323,     0,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,     0,   334,   335,   336,   337,     0,
     338,   339,     0,   340,     0,   341,   342,   343,   344,     0,
     345,   346,   347,   348,   349,     0,     0,   350,   351,   352,
     353,   354,     0,     0,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,     0,   363,   364,   365,   366,   367,
     368,     0,   369,     0,     0,     0,     0,   574,     0,     0,
     575,   576,   577,     0,   578,   579,   580,   581,   582,   583,
     146,   147,   148,   149,   150,   151,   152,     0,   153,   154,
       0,     0,     0,     0,     0,     0,     0,   155,   156,   157,
       0,   158,   159,   160,     0,   161,     0,   162,   163,     0,
     164,   165,   166,   167,     0,     0,   168,   169,   170,   171,
       0,   172,   173,   174,   175,   176,     0,     0,   177,   178,
     179,     0,   180,   181,   182,   183,     0,   184,   185,     0,
     186,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,     0,   195,     0,   196,   197,   198,   199,
     200,     0,     0,     0,   201,   202,   203,   204,     0,   205,
     206,     0,   207,     0,   208,   209,   210,   211,   212,   213,
     214,     0,   215,   216,   217,     0,   218,     0,   219,     0,
       0,     0,   220,   221,     0,     0,   222,     0,   223,   224,
       0,   225,   226,   227,     0,   228,   229,   230,   231,     0,
       0,   232,   233,   234,   235,   236,   237,   238,     0,   239,
       0,   240,     0,     0,   241,     0,   242,   243,   244,   245,
     246,     0,     0,   247,     0,     0,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,     0,   262,     0,   263,   264,   265,   266,   267,
       0,   268,   269,     0,   270,     0,   271,   272,   273,   274,
       0,     0,   275,     0,     0,     0,   276,   277,     0,     0,
     278,     0,     0,   279,   280,   281,   282,     0,   283,   284,
     285,   286,     0,   287,   288,   289,   290,   291,   292,   293,
     294,     0,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,     0,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,   315,   316,   317,     0,   318,   319,
     320,   321,     0,   322,   323,     0,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,     0,   334,   335,   336,
     337,     0,   338,   339,     0,   340,     0,   341,   342,   343,
     344,     0,   345,   346,   347,   348,   349,     0,     0,   350,
     351,   352,   353,   354,     0,     0,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,     0,   363,   364,   365,
     366,   367,   368,     0,   369,     0,     0,     0,     0,   574,
       0,     0,   575,   576,   577,     0,   578,   579,   580,   581,
     582,   583,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,     0,   158,   159,   160,     0,   991,     0,   992,
     993,     0,   164,   165,   166,   167,     0,     0,   168,   994,
     995,   171,     0,   172,   173,   174,   175,     0,     0,     0,
     177,   178,   179,     0,   180,   181,     0,   183,     0,   184,
     185,     0,   186,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   996,   997,   194,     0,   195,     0,   196,   197,
     198,   199,   200,     0,     0,     0,   201,   721,   203,   204,
       0,   205,   206,     0,   207,     0,   208,   209,   210,     0,
     212,   213,     0,     0,   215,   216,   998,     0,   218,     0,
     219,     0,     0,     0,   220,   221,     0,     0,   222,     0,
     223,   224,     0,   225,   226,   227,     0,   228,   229,   230,
     231,     0,     0,     0,   233,   234,   235,   236,   999,  1000,
       0,  1001,     0,   240,     0,     0,   241,     0,   242,   243,
     244,   245,   246,     0,     0,   247,     0,     0,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,  1002,     0,  1003,     0,   263,   264,   265,
     266,     0,     0,   268,   269,     0,   270,     0,     0,  1004,
     273,   274,     0,     0,   275,     0,     0,     0,  1991,   277,
       0,     0,     0,     0,     0,     0,   280,   281,   282,     0,
       0,     0,   285,   286,     0,   287,   288,   289,   290,   291,
     292,  1005,   294,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,   306,     0,   308,   309,
     310,   311,   312,   313,   314,     0,   315,   316,   317,     0,
     318,  1006,   320,   321,     0,   322,  1007,     0,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   333,     0,   334,
     335,   336,   337,     0,  1008,  1009,     0,   340,     0,   341,
       0,   343,     0,     0,   345,   346,   347,   348,   349,     0,
       0,   350,   351,   352,   353,   354,     0,     0,   355,   356,
     357,   358,  1010,   360,     0,   361,   362,     0,     0,   363,
     364,   365,   366,   367,   368,     0,  1011,  1221,   475,     0,
       0,   574,   450,     0,   575,   576,   577,     0,   578,  1992,
     580,   581,   582,   583,   146,   147,   148,   149,   150,   151,
     152,   895,   153,   154,   896,   897,   898,   899,   900,   901,
     902,   155,   156,   157,   537,   158,   159,   160,   538,   161,
     539,   162,   163,   903,   164,   165,   166,   167,   904,   905,
     168,   169,   170,   171,   906,   172,   173,   174,   175,   176,
     907,   908,   177,   178,   179,   909,   180,   181,   182,   183,
     910,   184,   185,   540,   186,   911,   912,   913,   914,   187,
     188,   189,   190,   191,   192,   193,   194,   915,   195,   916,
     196,   197,   198,   199,   200,   917,   918,   919,   201,   202,
     203,   204,   920,   205,   206,   921,   207,   922,   208,   209,
     210,   211,   212,   213,   214,   923,   215,   216,   217,   924,
     218,   925,   219,   541,   926,   542,   220,   221,   927,   928,
     222,   929,   223,   224,   543,   225,   226,   227,   930,   228,
     229,   230,   231,   931,   544,   232,   233,   234,   235,   236,
     237,   238,   932,   239,   933,   240,   545,   546,   241,   547,
     242,   243,   244,   245,   246,   934,   548,   247,   549,   935,
     248,   249,   250,   936,   937,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   550,   262,   938,   263,
     264,   265,   266,   267,   939,   268,   269,   551,   270,   940,
     271,   272,   273,   274,   941,   942,   275,   943,   944,   945,
     276,   277,   946,   947,   278,   552,   553,   279,   280,   281,
     282,   948,   283,   284,   285,   286,   949,   287,   288,   289,
     290,   291,   292,   293,   294,   950,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   554,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   951,   315,   316,
     317,   952,   318,   319,   320,   321,   555,   322,   323,   953,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     954,   334,   335,   336,   337,   955,   338,   339,   956,   340,
     957,   341,   342,   343,   344,   958,   345,   346,   347,   348,
     349,   959,   960,   350,   351,   352,   353,   354,   961,   962,
     355,   356,   357,   358,   359,   360,   556,   361,   362,   963,
     964,   363,   364,   365,   366,   367,   368,     0,   965,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,     0,
       0,     0,   966,     0,     0,     0,   155,   156,   157,     0,
     158,   159,   160,     0,   161,     0,   162,   163,     0,   164,
     165,   166,   167,     0,     0,   168,   169,   170,   171,     0,
     172,   173,   174,   175,   176,     0,     0,   177,   178,   179,
       0,   180,   181,   182,   183,     0,   184,   185,     0,   186,
       0,     0,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,     0,   195,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   201,   202,   203,   204,     0,   205,   206,
       0,   207,     0,   208,   209,   210,   211,   212,   213,   214,
       0,   215,   216,   217,     0,   218,     0,   219,     0,     0,
       0,   220,   221,     0,     0,   222,     0,   223,   224,     0,
     225,   226,   227,     0,   228,   229,   230,   231,     0,     0,
     232,   233,   234,   235,   236,   237,   238,     0,   239,     0,
     240,     0,     0,   241,     0,   242,   243,   244,   245,   246,
       0,     0,   247,     0,     0,   248,   249,   250,     0,     0,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,     0,   262,   374,   263,   264,   265,   266,   267,     0,
     268,   269,     0,   270,     0,   271,   272,   273,   274,     0,
       0,   275,   375,     0,     0,   276,   277,     0,     0,   278,
       0,     0,   279,   280,   281,   282,     0,   283,   284,   285,
     286,     0,   287,   288,   289,   290,   291,   292,   293,   294,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,   306,   307,   308,   309,   310,   311,   312,
     313,   314,     0,   315,   316,   317,     0,   318,   319,   320,
     321,     0,   322,   323,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,     0,   334,   335,   336,   337,
       0,   338,   339,     0,   340,     0,   341,   342,   343,   344,
       0,   345,   346,   347,   348,   349,     0,     0,   350,   351,
     352,   353,   354,     0,     0,   355,   356,   357,   358,   359,
     360,     0,   361,   362,     0,     0,   363,   364,   365,   366,
     367,   368,     0,   369,   146,   147,   148,   149,   150,   151,
     152,     0,   153,   154,     0,     0,     0,   518,     0,     0,
       0,   155,   156,   157,     0,   158,   159,   160,     0,   991,
       0,   992,   993,     0,   164,   165,   166,   167,     0,     0,
     168,   994,   995,   171,     0,   172,   173,   174,   175,     0,
       0,     0,   177,   178,   179,     0,   180,   181,     0,   183,
       0,   184,   185,     0,   186,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   996,   997,   194,     0,   195,     0,
     196,   197,   198,   199,   200,     0,     0,     0,   201,   721,
     203,   204,     0,   205,   206,     0,   207,     0,   208,   209,
     210,     0,   212,   213,     0,     0,   215,   216,   998,     0,
     218,     0,   219,     0,     0,     0,   220,   221,     0,     0,
     222,     0,   223,   224,     0,   225,   226,   227,     0,   228,
     229,   230,   231,     0,     0,     0,   233,   234,   235,   236,
     999,  1000,     0,  1001,     0,   240,     0,     0,   241,     0,
     242,   243,   244,   245,   246,     0,     0,   247,     0,     0,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,  1002,     0,  1003,     0,   263,
     264,   265,   266,     0,     0,   268,   269,     0,   270,     0,
       0,  1004,   273,   274,     0,     0,   275,     0,     0,     0,
     276,   277,     0,     0,     0,     0,     0,     0,   280,   281,
     282,     0,     0,     0,   285,   286,     0,   287,   288,   289,
     290,   291,   292,  1005,   294,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,   306,     0,
     308,   309,   310,   311,   312,   313,   314,     0,   315,   316,
     317,     0,   318,  1006,   320,   321,     0,   322,  1007,     0,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   333,
       0,   334,   335,   336,   337,     0,  1008,  1009,     0,   340,
       0,   341,     0,   343,     0,     0,   345,   346,   347,   348,
     349,     0,     0,   350,   351,   352,   353,   354,     0,     0,
     355,   356,   357,   358,  1010,   360,     0,   361,   362,     0,
       0,   363,   364,   365,   366,   367,   368,     0,  1011,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,     0,
       0,     0,  1270,     0,     0,     0,   155,   156,   157,     0,
     158,   159,   160,     0,   161,     0,   162,   163,     0,   164,
     165,   166,   167,     0,     0,   168,   169,   170,   171,     0,
     172,   173,   174,   175,   176,     0,     0,   177,   178,   179,
       0,   180,   181,   182,   183,     0,   184,   185,     0,   186,
       0,     0,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,  1230,   195,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   201,   202,   203,   204,     0,   205,   206,
       0,   207,     0,   208,   209,   210,   211,   212,   213,   214,
    1231,   215,   216,   217,     0,   218,     0,   219,     0,     0,
       0,   220,   221,     0,     0,   222,     0,   223,   224,     0,
     225,   226,   227,     0,   228,   229,   230,   231,     0,     0,
     232,   233,   234,   235,   236,   237,   238,     0,   239,     0,
     240,     0,     0,   241,     0,   242,   243,   244,   245,   246,
       0,     0,   247,     0,     0,   248,   249,   250,     0,     0,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,     0,   262,     0,   263,   264,   265,   266,   267,     0,
     268,   269,     0,   270,     0,   271,   272,   273,   274,  1232,
       0,   275,     0,  1233,     0,   276,   277,     0,     0,   278,
       0,     0,   279,   280,   281,   282,     0,   283,   284,   285,
     286,     0,   287,   288,   289,   290,   291,   292,   293,   294,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,   306,   307,   308,   309,   310,   311,   312,
     313,   314,     0,   315,   316,   317,     0,   318,   319,   320,
     321,     0,   322,   323,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,     0,   334,   335,   336,   337,
       0,   338,   339,     0,   340,     0,   341,   342,   343,   344,
    1234,   345,   346,   347,   348,   349,     0,     0,   350,   351,
     352,   353,   354,     0,     0,   355,   356,   357,   358,   359,
     360,     0,   361,   362,     0,     0,   363,   364,   365,   366,
     367,   368,     0,   369,  1221,  1070,     0,     0,     0,   450,
       0,     0,     0,     0,     0,     0,  1222,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,     0,   158,   159,
     160,     0,   161,     0,   162,   163,     0,   164,   165,   166,
     167,     0,     0,   168,   169,   170,   171,     0,   172,   173,
     174,   175,   176,     0,     0,   177,   178,   179,     0,   180,
     181,   182,   183,     0,   184,   185,     0,   186,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   201,   202,   203,   204,     0,   205,   206,     0,   207,
       0,   208,   209,   210,   211,   212,   213,   214,  1231,   215,
     216,   217,     0,   218,     0,   219,     0,     0,     0,   220,
     221,     0,     0,   222,     0,   223,   224,     0,   225,   226,
     227,     0,   228,   229,   230,   231,     0,     0,   232,   233,
     234,   235,   236,   237,   238,     0,   239,     0,   240,     0,
       0,   241,     0,   242,   243,   244,   245,   246,     0,     0,
     247,     0,     0,   248,   249,   250,     0,     0,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
     262,     0,   263,   264,   265,   266,   267,     0,   268,   269,
       0,   270,     0,   271,   272,   273,   274,  1232,     0,   275,
       0,  1233,     0,   276,   277,     0,     0,   278,     0,     0,
     279,   280,   281,   282,     0,   283,   284,   285,   286,     0,
     287,   288,   289,   290,   291,   292,   293,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,   306,   307,   308,   309,   310,   311,   312,   313,   314,
       0,   315,   316,   317,     0,   318,   319,   320,   321,     0,
     322,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   334,   335,   336,   337,     0,   338,
     339,     0,   340,     0,   341,   342,   343,   344,  1234,   345,
     346,   347,   348,   349,     0,     0,   350,   351,   352,   353,
     354,     0,     0,   355,   356,   357,   358,   359,   360,     0,
     361,   362,     0,     0,   363,   364,   365,   366,   367,   368,
       0,   369,  1221,  1070,     0,     0,     0,   450,     0,     0,
       0,     0,     0,     0,  1222,   146,   441,   148,   149,   150,
     151,   152,   442,   153,   154,     0,     0,     0,     0,     0,
       0,     0,   155,   156,   157,     0,   443,   159,   160,     0,
     161,     0,   162,   163,     0,   164,   165,   166,   167,     0,
       0,   168,   169,   170,   171,     0,   172,   173,   174,   175,
     176,     0,     0,   177,   178,   179,     0,   180,   181,   182,
     183,     0,   184,   185,     0,   186,     0,     0,     0,     0,
     187,   188,   189,   190,   191,   192,   193,   194,     0,   195,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   201,
     202,   203,   204,     0,   205,   206,     0,   207,     0,   208,
     209,   210,   211,   212,   213,   214,     0,   215,   444,   217,
       0,   218,     0,   445,     0,     0,     0,   220,   221,     0,
       0,   222,     0,   223,   224,     0,   225,   226,   227,     0,
     228,   229,   230,   231,     0,     0,   232,   233,   234,   235,
     236,   237,   238,     0,   239,     0,   240,     0,     0,   241,
       0,   242,   243,   244,   245,   446,     0,     0,   247,     0,
       0,   248,   249,   250,     0,     0,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   262,     0,
     447,   264,   265,   266,   267,     0,   268,   269,     0,   270,
       0,   271,   272,   273,   274,     0,     0,   275,     0,     0,
       0,   276,   277,     0,     0,   278,     0,     0,   279,   280,
     281,   282,     0,   283,   284,   285,   286,     0,   448,   288,
     289,   290,   291,   292,   293,   294,     0,   295,   449,   297,
     298,   299,   300,   301,   302,   303,   304,   305,     0,   306,
     307,   308,   309,   310,   311,   312,   313,   314,     0,   315,
     316,   317,     0,   318,   319,   320,   321,     0,   322,   323,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,     0,   334,   335,   336,   337,     0,   338,   339,     0,
     340,  1177,   341,   342,   343,   344,  1178,   345,   346,   347,
     348,   349,     0,     0,   350,   351,   352,   353,   354,     0,
       0,   355,   356,   357,   358,   359,   360,     0,   361,   362,
       0,  1175,   363,   364,   365,   366,   367,   368,  1177,   369,
       0,     0,     0,  1178,     0,   450,     0,     0,     0,     0,
       0,  1175,   451,     0,     0,     0,     0,     0,  1177,     0,
       0,     0,     0,  1178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2131,     0,  1175,     0,     0,     0,
       0,     0,     0,  1177,     0,     0,     0,     0,  1178,     0,
       0,     0,     0,     0,     0,     0,  1175,     0,     0,     0,
       0,     0, -1383,  1177,     0,     0,  1180,     0,  1178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1181,  1182,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1383,     0,     0,  1179,
       0,     0,     0,  1180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1179,
       0,  1181,  1182,  1180,     0,  1185,     0,     0,     0,     0,
       0,     0,     0,  1183,     0,     0,     0,     0,  1186,     0,
       0,  1181,  1182,     0,  1179,     0,     0,     0,  1180,     0,
       0,     0,     0,  1183,     0,     0,     0,     0,     0,  1184,
       0,     0,  1185,     0,  1179,     0,  1181,  1182,  1180,     0,
       0,     0,     0,     0,     0,  1186,     0,  1187,  1183,  1184,
       0,     0,  1185,     0,     0,     0,  1181,  1182,     0,     0,
       0,     0,     0,     0, -1383,  1186,     0,  1187,  1183,     0,
       0,     0,     0,     0,  1184,     0,     0,  1185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1186,     0,  1187,     0,  1184,     0,     0,  1185,     0,     0,
       0,  1188,     0,     0,     0,     0,     0,     0,     0,     0,
    1186,     0,  1187,     0,     0,     0,     0,     0,     0,     0,
       0,  1188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1189,     0,     0,     0,     0,     0,     0,  1193,  1194,
    1195,  1196,  1197,  1198,     0,     0,  1188,     0,     0,  1199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1188,     0,  1189,     0,
       0,  1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,
    1198,     0,     0,     0,     0,  2308,  1199,     0,  1189,     0,
       0,  1190,  1191,  1192,     0,  1193,  1194,  1195,  1196,  1197,
    1198,     0,     0,     0,     0,  2446,  1199,     0,     0,     0,
       0,     0,     0,  1189,     0,     0,  1190,  1191,  1192,     0,
    1193,  1194,  1195,  1196,  1197,  1198,     0,     0,     0,     0,
    2518,  1199,     0,  1189,     0,     0,  1190,  1191,  1192,     0,
    1193,  1194,  1195,  1196,  1197,  1198,     0,     0,     0,     0,
       0,  1199,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,     0,   158,   159,   160,     0,   161,     0,   162,
     163,     0,   164,   165,   166,   167,     0,     0,   168,   169,
     170,   171,     0,   172,   173,   174,   175,   176,     0,     0,
     177,   178,   179,     0,   180,   181,   182,   183,     0,   184,
     185,     0,   186,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,     0,   196,   197,
     198,   199,   200,     0,     0,     0,   201,   202,   203,   204,
       0,   205,   206,     0,   207,     0,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   216,   217,     0,   218,     0,
     219,     0,     0,     0,   220,   221,     0,     0,   222,     0,
     223,   224,     0,   225,   226,   227,     0,   228,   229,   230,
     231,     0,     0,   232,   233,   234,   235,   236,   237,   238,
       0,   239,     0,   240,     0,     0,   241,     0,   242,   243,
     244,   245,   246,     0,     0,   247,     0,     0,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,   262,     0,   263,   264,   265,
     266,   267,     0,   268,   269,     0,   270,     0,   271,   272,
     273,   274,     0,     0,   275,     0,     0,     0,   276,   277,
       0,     0,   278,     0,     0,   279,   280,   281,   282,     0,
     283,   284,   285,   286,     0,   287,   288,   289,   290,   291,
     292,   293,   294,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,   306,   307,   308,   309,
     310,   311,   312,   313,   314,     0,   315,   316,   317,     0,
     318,   319,   320,   321,     0,   322,   323,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,  1177,   334,
     335,   336,   337,  1178,   338,   339,     0,   340,     0,   341,
     342,   343,   344,     0,   345,   346,   347,   348,   349,     0,
       0,   350,   351,   352,   353,   354,     0,     0,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,     0,   363,
     364,   365,   366,   367,   368,     0,   369,  2578,   475,  2579,
    2580,     0,  2581,  1177,     0,     0,     0,     0,  1178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1177,     0,
       0,  2132,     0,  1178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1383,
       0,     0,     0,  1180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1181,  1182,     0,     0,     0,  2135,     0,     0,     0,
       0,     0,     0, -1383,     0,     0,     0,     0,     0,     0,
       0,  2306,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1383,     0,     0,     0,  1180,     0,
       0,     0,  1185,     0,     0,     0,     0,     0,     0, -1383,
       0,     0,     0,  1180,     0,  1186,  1181,  1182,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1383,     0,
       0,  1181,  1182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1383,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1186, -1383,  1185,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1383,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1189,     0,
       0, -1383,     0,     0,     0,  1193,  1194,  1195,  1196,  1197,
    1198,     0,     0,     0,     0,     0,  1199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1189,     0,     0,     0,     0,     0,     0,
    1193,  1194,  1195,  1196,  1197,  1198,     0,     0,  1189,     0,
       0,  1199,     0,     0,     0,  1193,  1194,  1195,  1196,  1197,
    1198,     0,     0,     0,     0,     0,  1199,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,     0,   158,   159,
     160,     0,   161,     0,   162,   163,     0,   164,   165,   166,
     167,     0,     0,   168,   169,   170,   171,     0,   172,   173,
     174,   175,   176,     0,     0,   177,   178,   179,     0,   180,
     181,   182,   183,     0,   184,   185,     0,   186,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   194,
    1215,   195,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   201,   202,   203,   204,     0,   205,   206,     0,   207,
       0,   208,   209,   210,   211,   212,   213,   214,     0,   215,
     216,   217,     0,   218,     0,   219,     0,     0,     0,   220,
     221,     0,     0,   222,     0,   223,   224,     0,   225,   226,
     227,     0,   228,   229,   230,   231,     0,     0,   232,   233,
     234,   235,   236,   237,   238,     0,   239,     0,   240,     0,
       0,   241,     0,   242,   243,   244,   245,   246,     0,     0,
     247,     0,     0,   248,   249,   250,     0,     0,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
     262,     0,   263,   264,   265,   266,   267,     0,   268,   269,
       0,   270,     0,   271,   272,   273,   274,     0,     0,   275,
       0,     0,     0,   276,   277,     0,     0,   278,     0,     0,
     279,   280,   281,   282,     0,   283,   284,   285,   286,     0,
     287,   288,   289,   290,   291,   292,   293,   294,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,   306,   307,   308,   309,   310,   311,   312,   313,   314,
       0,   315,   316,   317,     0,   318,   319,   320,   321,     0,
     322,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   334,   335,   336,   337,     0,   338,
     339,     0,   340,     0,   341,   342,   343,   344,     0,   345,
     346,   347,   348,   349,     0,     0,   350,   351,   352,   353,
     354,     0,     0,   355,   356,   357,   358,   359,   360,     0,
     361,   362,     0,     0,   363,   364,   365,   366,   367,   368,
       0,   369,     0,  1070,   146,   147,   148,   149,   150,   151,
     152,     0,   153,   154,     0,     0,     0,     0,     0,     0,
       0,   155,   156,   157,     0,   158,   159,   160,     0,   161,
       0,   162,   163,     0,   164,   165,   166,   167,     0,     0,
     168,   169,   170,   171,     0,   172,   173,   174,   175,   176,
       0,     0,   177,   178,   179,     0,   180,   181,   182,   183,
       0,   184,   185,     0,   186,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   195,     0,
     196,   197,   198,   199,   200,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   206,     0,   207,     0,   208,   209,
     210,   211,   212,   213,   214,     0,   215,   216,   217,     0,
     218,     0,   219,     0,     0,     0,   220,   221,     0,     0,
     222,     0,   223,   224,     0,   225,   226,   227,     0,   228,
     229,   230,   231,     0,     0,   232,   233,   234,   235,   236,
     237,   238,     0,   239,     0,   240,     0,     0,   241,     0,
     242,   243,   244,   245,   246,     0,     0,   247,     0,     0,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,     0,   262,     0,   263,
     264,   265,   266,   267,     0,   268,   269,     0,   270,     0,
     271,   272,   273,   274,     0,     0,   275,     0,     0,     0,
     276,   277,     0,     0,   278,     0,     0,   279,   280,   281,
     282,     0,   283,   284,   285,   286,     0,   287,   288,   289,
     290,   291,   292,   293,   294,     0,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,   306,   307,
     308,   309,   310,   311,   312,   313,   314,     0,   315,   316,
     317,     0,   318,   319,   320,   321,     0,   322,   323,     0,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
       0,   334,   335,   336,   337,     0,   338,   339,     0,   340,
       0,   341,   342,   343,   344,     0,   345,   346,   347,   348,
     349,     0,     0,   350,   351,   352,   353,   354,     0,     0,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
       0,   363,   364,   365,   366,   367,   368,     0,   369,     0,
    1070,   146,   147,   148,   149,   150,   151,   152,   895,   153,
     154,   896,   897,   898,   899,   900,   901,   902,   155,   156,
     157,   537,   158,   159,   160,   538,   161,   539,   162,   163,
     903,   164,   165,   166,   167,   904,   905,   168,   169,   170,
     171,   906,   172,   173,   174,   175,   176,   907,   908,   177,
     178,   179,   909,   180,   181,   182,   183,   910,   184,   185,
     540,   186,   911,   912,   913,   914,   187,   188,   189,   190,
     191,   192,   193,   194,   915,   195,   916,   196,   197,   198,
     199,   200,   917,   918,   919,   201,   202,   203,   204,   920,
     205,   206,   921,   207,   922,   208,   209,   210,   211,   212,
     213,   214,   923,   215,   216,   217,   924,   218,   925,   219,
     541,   926,   542,   220,   221,   927,   928,   222,   929,   223,
     224,   543,   225,   226,   227,   930,   228,   229,   230,   231,
     931,   544,   232,   233,   234,   235,   236,   237,   238,   932,
     239,   933,   240,   545,   546,   241,   547,   242,   243,   244,
     245,   246,   934,   548,   247,   549,   935,   248,   249,   250,
     936,   937,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   550,   262,   938,   263,   264,   265,   266,
     267,   939,   268,   269,   551,   270,   940,   271,   272,   273,
     274,   941,   942,   275,   943,   944,   945,   276,   277,   946,
     947,   278,   552,   553,   279,   280,   281,   282,   948,   283,
     284,   285,   286,   949,   287,   288,   289,   290,   291,   292,
     293,   294,   950,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   554,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   951,   315,   316,   317,   952,   318,
     319,   320,   321,   555,   322,   323,   953,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   954,   334,   335,
     336,   337,   955,   338,   339,   956,   340,   957,   341,   342,
     343,   344,   958,   345,   346,   347,   348,   349,   959,   960,
     350,   351,   352,   353,   354,   961,   962,   355,   356,   357,
     358,   359,   360,   556,   361,   362,   963,   964,   363,   364,
     365,   366,   367,   368,     0,   965,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,   537,   158,   159,   160,
     538,   161,   539,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,   540,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,   541,     0,   542,   220,   221,
       0,     0,   222,     0,   223,   224,   543,   225,   226,   227,
       0,   228,   229,   230,   231,     0,   544,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,   545,   546,
     241,   547,   242,   243,   244,   245,   246,     0,   548,   247,
     549,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   550,   262,
     374,   263,   264,   265,   266,   267,     0,   268,   269,   551,
     270,     0,   271,   272,   273,   274,     0,     0,   275,   375,
       0,     0,   276,   277,     0,     0,   278,   552,   553,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   554,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,   555,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,   556,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     557,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,  1280,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,  1281,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,  1282,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,  1755,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,  1283,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,  1284,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,   537,   158,   159,   160,
     538,   991,   539,   992,   993,     0,   164,   165,   166,   167,
       0,     0,   168,   994,   995,   171,     0,   172,   173,   174,
     175,     0,     0,     0,   177,   178,   179,     0,   180,   181,
       0,   183,     0,   184,   185,   540,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   996,   997,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   721,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,     0,   212,   213,     0,     0,   215,   216,
     998,     0,   218,     0,   219,   541,     0,   542,   220,   221,
       0,     0,   222,     0,   223,   224,   543,   225,   226,   227,
       0,   228,   229,   230,   231,     0,   544,     0,   233,   234,
     235,   236,   999,  1000,     0,  1001,     0,   240,   545,   546,
     241,   547,   242,   243,   244,   245,   246,     0,   548,   247,
     549,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,  1002,   550,  1003,
       0,   263,   264,   265,   266,     0,     0,   268,   269,   551,
     270,     0,     0,  1004,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,     0,   552,   553,     0,
     280,   281,   282,     0,     0,     0,   285,   286,     0,   287,
     288,   289,   290,   291,   292,  1005,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   554,
     306,     0,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,  1006,   320,   321,   555,   322,
    1007,     0,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   333,     0,   334,   335,   336,   337,     0,  1008,  1009,
       0,   340,     0,   341,     0,   343,     0,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,  1010,   360,   556,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
    1634,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     3,     4,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,   374,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,   375,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
     374,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,   375,
       0,   520,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,  1086,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,  1087,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,  1088,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,   374,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,   375,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
    1089,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,  1090,  1091,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,  1577,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,  1578,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
     374,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,   375,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,  1579,   334,  1580,   336,  1581,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,   374,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,   375,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,   490,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   491,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   492,   339,
       0,   340,     0,   493,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,   511,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   512,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   513,   339,     0,   340,     0,   514,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,   794,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,   803,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     804,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   504,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   798,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   506,   339,     0,   340,     0,   507,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,  1788,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,  2146,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,  2160,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,  2222,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,  2224,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,  2226,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,  2466,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   411,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   488,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   338,   339,     0,   340,     0,   341,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   502,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   503,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   504,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   505,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   506,   339,
       0,   340,     0,   507,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   161,     0,   162,   163,
       0,   164,   165,   166,   167,     0,     0,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   177,
     178,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,   232,   233,   234,   235,   236,   237,   238,     0,
     239,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   504,   261,     0,   262,     0,   263,   264,   265,   266,
     267,     0,   268,   269,     0,   270,     0,   271,   272,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,   278,     0,     0,   279,   280,   281,   282,     0,   283,
     284,   285,   286,     0,   287,   288,   289,   290,   291,   292,
     293,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   798,     0,   318,
     319,   320,   321,     0,   322,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,     0,   506,   339,     0,   340,     0,   507,   342,
     343,   344,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,   369,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   161,     0,   162,   163,     0,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,     0,   172,   173,   174,
     175,   176,     0,     0,   177,   178,   179,     0,   180,   181,
     182,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   202,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,   232,   233,   234,
     235,   236,   237,   238,     0,   239,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   262,
       0,   263,   264,   265,   266,   267,     0,   268,   269,     0,
     270,     0,   271,   272,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,   278,     0,     0,   279,
     280,   281,   282,     0,   283,   284,   285,   286,     0,   287,
     288,   289,   290,   291,   292,   293,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   307,   308,   309,  1113,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,   319,   320,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,     0,   338,   339,
       0,   340,     0,   341,   342,   343,   344,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
     369,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   991,     0,   992,   993,
       0,   164,   165,   166,   167,     0,     0,   168,   994,   995,
     171,     0,   172,   173,   174,   175,     0,     0,     0,   177,
     178,   179,     0,   180,   181,     0,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   996,   997,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   721,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,     0,   212,
     213,     0,     0,   215,   216,   998,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,     0,   233,   234,   235,   236,   999,  1000,     0,
    1001,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,  1002,     0,  1003,     0,   263,   264,   265,   266,
    1310,     0,   268,   269,     0,   270,     0,     0,  1004,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,     0,     0,     0,     0,   280,   281,   282,     0,     0,
       0,   285,   286,     0,   287,   288,   289,   290,   291,   292,
    1005,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,     0,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
    1006,   320,   321,     0,   322,  1007,     0,   324,   325,   326,
     327,   328,   329,   330,   331,     0,   333,     0,   334,   335,
     336,   337,     0,  1008,  1009,     0,   340,     0,   341,     0,
     343,     0,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,  1010,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,  1011,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   991,     0,   992,   993,     0,   164,   165,   166,   167,
       0,     0,   168,   994,   995,   171,     0,   172,   173,   174,
     175,     0,     0,     0,   177,   178,   179,     0,   180,   181,
       0,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   996,   997,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   721,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,     0,   212,   213,     0,     0,   215,   216,
     998,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,     0,   233,   234,
     235,   236,   999,  1000,     0,  1001,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,  1002,     0,  1003,
       0,   263,   264,   265,   266,  1954,     0,   268,   269,     0,
     270,     0,     0,  1004,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,     0,     0,     0,     0,
     280,   281,   282,     0,     0,     0,   285,   286,     0,   287,
     288,   289,   290,   291,   292,  1005,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,     0,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,  1006,   320,   321,     0,   322,
    1007,     0,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   333,     0,   334,   335,   336,   337,     0,  1008,  1009,
       0,   340,     0,   341,     0,   343,     0,     0,   345,   346,
     347,   348,   349,     0,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,  1010,   360,     0,   361,
     362,     0,     0,   363,   364,   365,   366,   367,   368,     0,
    1011,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,     0,   158,   159,   160,     0,   991,     0,   992,   993,
       0,   164,   165,   166,   167,     0,     0,   168,   994,   995,
     171,     0,   172,   173,   174,   175,     0,     0,     0,   177,
     178,   179,     0,   180,   181,     0,   183,     0,   184,   185,
       0,   186,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   996,   997,   194,     0,   195,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   201,   721,   203,   204,     0,
     205,   206,     0,   207,     0,   208,   209,   210,     0,   212,
     213,     0,     0,   215,   216,   998,     0,   218,     0,   219,
       0,     0,     0,   220,   221,     0,     0,   222,     0,   223,
     224,     0,   225,   226,   227,     0,   228,   229,   230,   231,
       0,     0,     0,   233,   234,   235,   236,   999,  1000,     0,
    1001,     0,   240,     0,     0,   241,     0,   242,   243,   244,
     245,   246,     0,     0,   247,     0,     0,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,  1002,     0,  1003,     0,   263,   264,   265,   266,
       0,     0,   268,   269,     0,   270,     0,     0,  1004,   273,
     274,     0,     0,   275,     0,     0,     0,   276,   277,     0,
       0,     0,     0,     0,     0,   280,   281,   282,     0,     0,
       0,   285,   286,     0,   287,   288,   289,   290,   291,   292,
    1005,   294,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,     0,   308,   309,   310,
     311,   312,   313,   314,     0,   315,   316,   317,     0,   318,
    1006,   320,   321,     0,   322,  1007,     0,   324,   325,   326,
     327,   328,   329,   330,   331,     0,   333,     0,   334,   335,
     336,   337,     0,  1008,  1009,     0,   340,     0,   341,     0,
     343,     0,     0,   345,   346,   347,   348,   349,     0,     0,
     350,   351,   352,   353,   354,     0,     0,   355,   356,   357,
     358,  1010,   360,     0,   361,   362,     0,     0,   363,   364,
     365,   366,   367,   368,     0,  1011,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,     0,   158,   159,   160,
       0,   991,     0,   992,   993,     0,   164,   165,   166,   167,
       0,     0,   168,   994,   995,   171,     0,   172,   173,   174,
     175,     0,     0,     0,   177,   178,   179,     0,   180,   181,
       0,   183,     0,   184,   185,     0,   186,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   996,   997,   194,     0,
     195,     0,   196,   197,   198,   199,   200,     0,     0,     0,
     201,   721,   203,   204,     0,   205,   206,     0,   207,     0,
     208,   209,   210,     0,   212,   213,     0,     0,   215,   216,
     998,     0,   218,     0,   219,     0,     0,     0,   220,   221,
       0,     0,   222,     0,   223,   224,     0,   225,   226,   227,
       0,   228,   229,   230,   231,     0,     0,     0,   233,   234,
     235,   236,   999,  1000,     0,  1001,     0,   240,     0,     0,
     241,     0,   242,   243,   244,   245,   246,     0,     0,   247,
       0,     0,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,  1002,     0,  1003,
       0,   263,   264,   265,   266,     0,     0,   268,   269,     0,
     270,     0,     0,  1004,   273,   274,     0,     0,   275,     0,
       0,     0,   276,   277,     0,     0,     0,     0,     0,     0,
     280,   281,   282,     0,     0,     0,   285,   286,     0,   287,
     288,   289,   290,   291,   292,  1005,   294,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,     0,   308,   309,   310,   311,   312,   313,   314,     0,
     315,   316,   317,     0,   318,     0,   320,   321,     0,   322,
    1007,     0,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   333,     0,   334,   335,   336,   337,     0,  1008,  1009,
       0,   340,   385,   341,     0,   343,     0,     0,   345,   346,
     347,   348,   349,   386,     0,   350,   351,   352,   353,   354,
       0,     0,   355,   356,   357,   358,  1010,   360,     0,   361,
     362,   387,     0,   363,   364,   365,   366,   367,   368,     0,
    1011,     0,     0,     0,     0,     0,     0,   388,     0,  -418,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   389,     0,     0,     0,     0,     0,   390,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   392,
       0,   393,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -524,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -344,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,     0,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   397,     0,     0,     0,     0,
    -242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -242,   398,   399,     0,   400,     0,     0,     0,
       0,     0,     0,     0,     0,   401,     0,     0,     0,   402,
     403,     0,     0,     0,   404,     0,     0,     0,     0,     0,
     405
};

static const short yycheck[] =
{
       0,    39,    43,     7,     8,   137,   395,   661,   479,    13,
      14,   670,     0,   129,    18,   638,    20,   133,   603,   502,
    1066,   644,    26,   130,    28,   132,    30,    31,   558,  1051,
      34,   598,    36,    37,   630,   424,   143,  1174,   634,    24,
     746,   507,     0,    43,  1426,   988,     0,   571,  1024,   645,
    1626,  1586,     7,   389,   601,    41,  1034,   601,    13,    14,
       0,  1034,   671,    18,  1034,    20,  1601,  1034,  1034,  1034,
    1362,    26,  1786,    28,  1116,     8,  1303,   841,   440,     0,
    1750,    41,     0,   419,  1912,  1913,    22,    18,    18,  1077,
      23,   503,     0,   505,    27,     0,     0,     0,     0,    41,
       0,    76,  2126,     0,    76,   113,  1907,    40,    41,  2366,
      10,  1299,    41,   720,    53,    50,    81,    62,   673,  1860,
      91,  1059,   711,   712,     5,    81,   130,   131,   132,    36,
     134,    98,   136,   137,   138,    22,   113,   141,   142,   143,
     144,    59,   806,   732,   803,   127,    17,    36,   114,   135,
      11,    98,    10,   143,   140,    59,    81,    36,    16,    76,
      83,   194,    81,     7,   115,  2395,  1247,     0,   192,   114,
     142,   192,   137,    76,   246,    47,    85,    10,   198,   168,
    1178,   136,    78,   138,   108,   188,   141,   142,   133,   161,
     122,    76,    76,   246,    76,   238,   129,    10,   277,   117,
     133,    10,   135,   148,   147,   223,   139,   140,   238,   764,
     155,  2464,   137,   117,   207,    10,    79,    98,   137,    17,
     185,    16,  1585,     0,   280,  1149,   615,   207,    21,   333,
     175,   158,   323,  1176,   158,   228,   168,   341,    10,   330,
     807,   238,   208,   134,    16,    89,   325,   197,   228,   302,
       7,    81,   837,   144,  1178,   244,   312,   787,   251,    89,
    2513,   124,   341,   395,   261,   295,   338,   194,    70,   385,
     194,   246,    85,  2297,   183,    76,    85,   138,   221,  1203,
      22,   246,    59,   192,   391,   338,   253,   183,  2518,   240,
     256,   236,   424,   313,   841,   338,   403,   841,   183,   415,
     277,   183,    43,  1009,   188,   421,   253,    43,   115,    50,
     343,  1357,   244,    54,   338,   979,   319,   338,    54,    96,
     338,   246,  1704,   195,   978,   892,   233,   302,   130,   436,
     295,   108,    89,   126,  2591,   343,   113,   308,    89,   295,
     117,   118,   277,   120,   233,   317,   318,   319,  2149,   288,
    2091,   323,  2153,   343,   233,   306,  2157,   238,   330,   319,
      36,   343,   304,   338,   141,  1941,  1942,    29,  1449,   110,
     295,   316,   253,   338,   110,   298,   295,   319,   338,   310,
     311,   158,   386,   213,   228,   389,  1045,   391,  2412,   393,
     997,   395,   199,   397,   398,  1049,   338,   401,   334,   403,
     258,   405,   319,  1391,   340,   994,   995,   411,   338,   338,
    1702,  1703,   416,  1351,  1003,   419,   319,   194,   422,  1711,
     424,   339,   426,   323,   342,   202,   430,   431,   414,   433,
     330,   386,   436,   845,   342,   339,   343,   342,   342,   342,
     342,   988,   342,   398,   988,   342,   401,  1635,  1529,   268,
     207,   384,   385,   340,   343,  1064,   411,   127,   265,   821,
    1597,   416,  1071,   258,   134,   336,   573,   269,   339,   143,
     341,   426,   343,   885,   215,   430,   431,   866,   297,   215,
     484,   414,   415,   615,   488,  2313,   258,   183,   421,   605,
     323,    43,   269,   221,   251,    78,   612,   330,   502,   503,
     251,   505,   393,   179,  1502,  1503,  1504,  1505,   147,   342,
     113,  1509,  1276,   290,   405,  1742,  2317,   624,   319,   504,
     319,  2322,   323,   116,   220,  2326,   247,    22,   528,   484,
     637,   422,   309,   203,  1149,   651,   287,    78,   336,   472,
     528,   339,   649,   341,  1907,   343,   479,   269,   269,   132,
     291,  1140,  1141,  1551,   487,   291,   663,   233,   110,   336,
    1115,  1116,   339,  1178,   341,   342,   145,   295,   161,   573,
     528,  1126,  1127,  2243,   528,   251,  1161,    96,  1502,  1503,
    1504,  1505,   221,    81,   517,  1509,  2177,   520,   528,   331,
     332,   333,   334,    59,    80,  1150,  1151,   530,   340,    29,
     183,   280,     8,  1086,   608,  1088,  1089,   528,  1091,    76,
      69,   615,   616,   847,   108,    54,   620,    23,   197,  1090,
     624,    27,   141,  1208,  2425,   629,   270,  1551,   117,  1176,
       7,    92,  1176,   637,    40,    12,   870,    76,    68,   137,
    2327,     0,  2329,    71,  2235,   649,   650,   188,   652,  2363,
     145,   117,  1316,   608,  1209,  1319,  1320,    27,   144,   663,
      80,   616,  1638,   215,   158,   620,   670,   311,   114,   339,
      47,   604,   605,  2055,   629,   675,   310,   207,   271,   612,
     273,   685,    59,   202,   342,  1977,   127,   675,   692,   689,
    1982,  1983,   228,   134,   122,   231,   565,   652,   228,   703,
     194,   689,     8,   164,   343,   705,   136,    79,   167,   343,
     169,    79,    89,   646,   647,   251,   183,   675,   651,    25,
     653,   675,   722,   764,   144,   594,  1322,  1323,    15,  1276,
     685,   305,  1276,   139,   866,   675,   304,   692,   207,   291,
     168,  2428,  1969,   171,   183,   207,   207,  2338,   246,   179,
     750,   319,   124,   123,   687,   197,   124,   127,  1147,   228,
       7,   323,   203,    43,   764,    12,  1249,  1745,   330,  1811,
     338,   290,  1745,   104,   310,  1745,    20,  1720,  1745,  1745,
    1745,   766,    26,  1307,    97,  1439,  2149,   157,   336,   251,
    2153,   114,   777,   341,  2157,   262,    76,   295,   265,   803,
      47,   381,   207,   319,   808,   809,   810,    18,   282,   270,
     133,   272,    59,   243,   818,   128,   244,    13,    14,  1428,
    1429,   806,   338,   228,    35,   148,   197,   407,   828,   829,
     207,   831,   155,   247,   329,   330,   331,   332,   333,   334,
     338,   845,    89,  1841,    81,   340,  1844,  1845,  1846,  1847,
    1848,  1849,  1850,  1851,  1852,   269,  1854,   188,   145,   263,
     264,   192,   866,   336,     5,   338,   337,    18,   341,    10,
     310,   311,   343,   980,   251,  2012,    17,   984,  1835,   319,
     207,   885,  1880,   816,    35,   255,   314,  1502,  1503,  1504,
    1505,   102,    33,    62,  1509,   207,   882,   230,   338,  2262,
     137,   228,  2194,   183,  1861,  2197,  2198,    56,   188,    29,
     338,   207,   199,   236,   125,   319,   228,  1841,    85,   231,
    1844,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,   318,
    1854,   319,   228,   319,   323,   215,  1551,   104,   221,   251,
     151,  2476,  1278,    63,   224,   114,   229,   184,   185,   882,
     338,   102,   338,   284,  2317,  1879,  1880,   338,  2534,  2322,
     207,   292,    82,  2326,   133,   248,  1073,  1522,   310,   311,
     271,  1087,   273,   319,   125,    95,   980,   319,   384,   148,
     984,   228,   986,  2120,  2519,  1540,   155,  2563,    23,   109,
     218,  2373,   338,   319,   319,  1659,   338,   271,   130,   273,
     151,  1665,  1666,   319,   251,   113,   175,    42,   319,   246,
     338,   291,   338,   338,    96,  1147,   183,  1602,  1627,   127,
    1575,   188,   338,   234,  2022,   192,   108,   338,   197,  1033,
     337,  1035,  1587,  1588,   245,   322,   343,   323,   325,   326,
     327,  1045,   329,   330,   331,   332,   333,   334,   259,   318,
     310,   311,   151,   340,   323,   266,  1097,  1721,   295,   141,
    2352,   330,  2425,  1672,  1673,  1069,   472,   236,   188,  1073,
      50,   338,   323,   479,    54,   195,   158,  2053,   338,   217,
    1035,   487,  1086,   234,  1088,  1089,   337,  1091,    71,  1735,
    1736,  1737,  1738,  1097,   245,    71,   307,  1097,  2022,   310,
     220,   338,  2465,   310,   311,   325,  1106,   334,   259,  1113,
     197,   517,   194,   340,   520,   266,   336,   284,  1106,    15,
     202,   341,    59,   338,   530,   292,   339,  1593,  1611,   298,
     343,   338,  2130,    10,  1067,  1068,    23,   871,    75,   122,
     874,   875,  1033,  1147,    81,   339,   122,   316,  1106,   343,
    2492,  2493,  1106,  2495,  1087,  2497,   307,  1090,   343,  1865,
    1866,   339,    99,   310,   311,   343,  1106,  1556,  1101,  1778,
     315,  1780,  1781,  1720,    40,    41,  1720,   339,  1069,  1112,
    1180,   343,    59,   339,   147,   168,   339,   343,   171,   339,
     343,   339,   168,   343,   342,   171,  2333,   441,   604,   443,
     137,   445,  1613,  1614,    81,   449,  2130,   451,   290,  1213,
     336,   277,   338,  1798,  2236,   331,   332,   333,   334,   441,
      23,   443,    99,   445,   340,   339,  1841,   449,   342,  1844,
    1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,   200,  1854,
     646,   647,  1227,   197,   339,  1249,  1353,   653,   343,   145,
     339,   339,  1359,  1360,   343,   343,   315,   339,  1213,   339,
     137,   244,   339,   343,  1879,  1880,   343,   339,   244,  1273,
    1274,   343,  1205,  1277,  1278,   145,   339,  1281,   339,   315,
     343,   687,   343,  1287,   339,   147,  1290,   339,   343,  1874,
     339,   343,   339,   271,   343,   273,   343,  2295,  1302,  1303,
    1304,  1305,  1306,   199,  1308,  1309,   251,   331,   339,   246,
    1314,  1315,   343,   112,   339,  1248,   339,  1872,   343,  1274,
     343,   310,   311,  1327,  1328,  1329,  1281,  1331,  1332,  1333,
    1334,   314,  1287,  1337,  1338,   339,  1340,  1341,   314,   343,
     339,   317,   339,   319,   343,   339,   343,   224,   339,  1353,
    1305,  1306,   343,  1308,  1921,  1359,  1360,   339,   295,    33,
    1315,   343,   339,   240,    22,   271,   343,   273,   339,   246,
     339,  2295,   343,  1358,  1329,   341,  1331,  1362,  1333,  1334,
     339,   338,  1273,  1338,   343,  1915,  1277,   339,     0,   339,
     532,   343,   534,   343,   271,   338,   273,   828,   829,  1290,
     831,   338,  1406,   338,    54,   282,  1410,  2022,   339,   338,
     816,  1302,   343,  1304,   228,  1400,   339,   338,   295,   296,
     343,    43,  1426,  1314,  1556,  2154,   322,  2156,  1413,   325,
     326,   327,    54,   329,   330,   331,   332,   333,   334,   339,
    1444,   339,   341,   343,   340,   343,  1337,    59,   197,  1340,
    1341,   339,    22,  2062,    76,   343,    78,    27,   156,   329,
     330,   331,   332,   333,   334,   207,   116,  2489,    34,  2078,
     340,   339,   310,   311,   338,   343,  1409,  1609,   310,   311,
     130,  1414,   191,   151,    96,   338,   338,   145,   146,    43,
     310,    60,    61,    18,   828,   829,   108,   831,   151,  1540,
      23,   113,    23,    69,   207,   117,   118,   309,   120,   338,
     132,   161,   338,   197,  1521,  2130,  1523,  1524,    15,   197,
     343,   109,    18,   156,    93,    22,   108,  1531,   186,   141,
      27,   197,   338,   319,   319,   212,   319,   338,   338,   319,
    1540,   338,  1580,  1581,   338,   338,   158,   338,   338,   338,
     338,   201,  1556,  1553,   338,   319,   338,   127,   127,   338,
     145,   183,   806,   129,   808,   809,   188,   338,   338,  2615,
     338,   319,   338,  1573,   205,   145,   146,   338,  2163,   338,
     343,    18,   194,   156,   338,  1585,   108,   277,   277,  1721,
     202,   341,   277,   215,  1598,   277,  1600,   277,   277,   270,
     297,   167,   224,   169,   277,   277,  2202,  1611,  2267,   343,
     277,   180,   181,   179,   199,   298,   186,   277,   277,    50,
     197,   271,  1626,   273,   278,   343,   123,   338,   277,   199,
     127,   277,   282,   277,   277,   197,   338,  1641,  1642,   197,
     209,   291,   145,   338,   338,   310,  1579,   304,   145,   146,
     338,   338,  1585,    18,    17,     8,   306,   269,    76,   164,
     157,  1067,  1068,   338,   108,   197,   232,    18,   243,   291,
    1786,   329,   330,   331,   332,   333,   334,    18,   290,   298,
    2295,   277,   340,   338,  1090,   302,   183,  1642,   145,   186,
     338,   343,   187,   308,   260,  1101,   275,   309,   340,   268,
    1704,   275,   199,   343,   201,  1690,  1112,   251,   275,   338,
    1714,   338,  1819,   277,   113,   280,   339,  1702,  1703,   343,
     289,   141,   343,   198,   336,   192,  1711,   339,   158,   341,
     342,   300,   339,  1718,   338,   979,  1721,   322,  1742,   149,
     325,   326,   327,   149,   329,   330,   331,   332,   333,   334,
    1641,   338,   322,   188,   188,   340,   339,   277,   255,   329,
     330,   331,   332,   333,   334,  1769,   277,   343,  1768,    33,
     340,   343,   228,   221,  1774,  2330,   269,  1777,    18,   145,
    1768,  2404,  2171,   298,  1788,   145,  1774,   145,   195,  1777,
     199,   325,    17,  1797,   336,   336,  1796,   277,   277,  1205,
     277,   277,   108,  1807,   197,   201,   119,   234,  1796,    18,
     121,   121,   108,   339,  1769,  1819,  1749,   269,   170,   343,
     339,   113,  1755,   339,   113,   322,   339,   339,   325,   326,
     327,   339,   329,   330,   331,   332,   333,   334,   339,   339,
     337,   339,  1248,   340,   343,   339,   315,   344,   339,   339,
     315,   339,  1785,  1786,   339,   339,   339,  1898,     9,   113,
     315,   339,  1900,  1901,  1902,  1903,  1907,   338,   338,    20,
     207,   339,   329,   330,   331,   332,   333,   334,   338,   127,
     277,   209,   277,   340,  1128,  1129,  1130,    38,   338,   277,
     118,   209,  1136,  1878,  1138,  1139,   294,   145,  1898,   339,
     145,  1145,   145,   339,  1908,    56,   145,  1907,  1912,  1913,
    1154,  2382,  1156,   322,   336,   339,   325,   326,   327,    70,
     329,   330,   331,   332,   333,   334,   339,  1171,   244,  1173,
     171,   197,   287,   325,   306,  2418,    87,  1941,  1942,   339,
     145,    99,   343,  2597,   338,  2428,   195,   277,   195,   298,
     339,   199,    98,   197,    98,   336,   339,    94,   113,   108,
     340,   339,  1966,  1967,   115,  1969,   339,   118,   339,    41,
     338,   118,  1905,  1906,  1907,   145,   343,   338,  1222,   130,
     339,     9,   339,  1968,   277,   145,   277,  1972,  1973,   277,
     277,   277,  1977,   339,   199,   145,   338,  1982,  1983,   337,
    2483,   337,   145,  1409,   149,   108,   201,   131,  1414,    18,
      18,  1966,  1967,  2017,  2018,  2019,   298,  2021,   301,   338,
     117,   338,   113,   338,   192,   339,   148,   339,    56,   199,
    2015,  2016,   339,   204,   339,   338,  2040,   339,  2042,  2171,
     339,  2045,    70,  2047,  2048,    33,   148,   120,   199,   287,
     188,  2055,   188,   338,   338,   145,   298,    83,    78,    87,
     337,   132,  2017,  2018,  2019,  2069,  2021,   218,   115,  2054,
     115,   113,  1316,   130,   322,  1319,  1320,   325,   326,   327,
    2013,   329,   330,   331,   332,   333,   334,   115,   298,   240,
     118,   242,   340,  2048,    90,  2028,   247,    99,    77,    77,
     150,   338,   130,  2036,   339,   197,   129,   113,   188,    18,
     133,   245,   277,   200,   338,   338,   148,   322,   269,   270,
     338,   326,   327,   151,   329,   330,   331,   332,   333,   334,
     224,   282,   339,    18,   188,   340,   287,   166,  1382,  2143,
     270,   219,  2146,   195,   195,   343,   297,   188,   197,  2149,
     338,   197,   322,  2153,   108,   306,  2160,  2157,   197,   329,
     330,   331,   332,   333,   334,    18,    52,  2171,  2172,  2173,
     340,   199,   270,  1579,   135,  2179,  2180,  2181,   188,    90,
     197,   197,  2186,  2168,   338,   135,  2575,    86,   188,    81,
     238,   295,    99,     6,   219,   343,   239,   338,  1042,   239,
     339,   343,   223,   528,  2137,  2138,  2139,  2140,  1390,  2194,
     809,  1598,  2197,  2198,   242,  1336,  2149,   628,  2173,   247,
    2153,  1669,  2042,  2045,  2157,  2180,   628,  1471,  1959,  1327,
    2229,  1623,  1714,  2530,  2560,  2509,  2508,  2539,  2379,  2455,
    2065,   269,   270,  2047,  2185,  1043,  2257,  2363,   659,  1385,
    2627,  2601,    59,  2257,   282,  1720,  2209,   659,  2262,   287,
    2208,  2577,  1031,  2267,  2628,    26,   628,   480,  1807,   297,
     496,   688,  1112,  2069,    81,  2465,  1391,  2281,  2263,  1633,
    1772,  2172,   693,  2390,  2441,  2590,  2273,  2626,  2179,   516,
    2181,   693,    99,   696,    19,  1248,   675,   659,  1797,   675,
     836,  1606,  2257,  1245,   835,  2254,  1615,  1907,  2155,  2313,
    2040,  2315,  2426,  1006,  1372,  1553,  1877,  2317,  1721,  1473,
    1206,  1600,  2322,  2327,  2286,  2329,  2326,  2072,   650,  2262,
     137,   693,  1299,    -1,    -1,    -1,    -1,    -1,  2454,    -1,
      -1,    -1,    -1,  1749,    -1,    -1,    -1,    -1,    -1,  1755,
      -1,    -1,  1596,    -1,  1598,    -1,    -1,    -1,    -1,  2466,
      -1,    -1,   385,    -1,    -1,    -1,    -1,  2352,    -1,  2373,
    2374,  2356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1785,
      -1,    -1,    -1,    -1,  2317,    -1,  2390,    -1,    -1,  2322,
    2394,  2395,   415,  2326,    -1,   806,    -1,    -1,   421,    -1,
      -1,    -1,    -1,  2388,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2418,  1659,    -1,   224,    -1,    -1,
      -1,  1665,  1666,    -1,  2428,  2425,    -1,   838,    -1,    -1,
    2363,    -1,  2365,   240,    -1,    -1,   838,    -1,    -1,   246,
      -1,    -1,    -1,  2575,    -1,  2449,    -1,  1691,    -1,  2382,
      -1,    -1,    -1,    -1,   865,    -1,    -1,    -1,  2574,    -1,
      -1,  2465,  2466,   865,   271,    -1,   273,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2407,   282,   838,  1721,   501,  2483,
      -1,    -1,  1726,  1727,    -1,  2470,    -1,    -1,   295,   296,
      -1,    -1,  2425,    -1,  2449,    -1,  2612,  1741,    -1,  1905,
    1906,    -1,  2435,   865,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2516,    -1,  2518,    -1,    -1,    -1,    -1,    -1,
      -1,  2454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2534,    -1,  2465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,  2549,  2531,  2532,    22,    -1,
    2535,  2536,    -1,    27,    -1,    -1,    -1,    -1,    -1,  2563,
      -1,  2516,  2603,    -1,  2549,   976,    -1,    -1,    -1,    -1,
      -1,  2575,    -1,    -1,   976,    -1,    -1,   600,   601,    -1,
    1824,    -1,   605,    -1,    15,    -1,    -1,    -1,  1832,   612,
    2590,    22,    -1,    -1,    -1,  1006,    27,  2601,    -1,    -1,
      -1,    -1,    -1,  2603,  1006,   628,    -1,  2013,    -1,    -1,
      -1,    -1,    -1,    -1,   976,    -1,  2601,    -1,  1029,    -1,
      -1,    -1,  2028,  2627,    -1,    -1,  2626,  1029,   651,    -1,
    2036,    -1,    -1,    -1,    -1,    -1,   659,    -1,    -1,    -1,
      -1,  2574,  2627,    -1,  1006,    -1,    -1,    -1,  1059,   123,
     673,    -1,    -1,   127,    -1,  1066,    -1,  1059,    -1,    -1,
      -1,    -1,    -1,    -1,  1066,    -1,    -1,  1029,    -1,    -1,
     693,   145,   146,    -1,    -1,    -1,    -1,   108,    -1,  2612,
      -1,    -1,   113,   157,    -1,    -1,   709,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,   127,  1059,    -1,    -1,
      -1,    -1,    -1,    -1,  1066,    -1,    -1,    -1,    -1,   183,
     733,    -1,   186,    -1,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   199,   157,   201,    -1,    -1,
      -1,  2137,  2138,  2139,  2140,    -1,   759,   760,    -1,   762,
     763,   764,    -1,    -1,    -1,    -1,    -1,    -1,  1992,    -1,
      -1,    -1,   183,    -1,    -1,   186,  2000,    -1,    -1,   782,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,
     201,  2015,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,  1199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,    -1,
     833,   834,    -1,   628,    -1,   838,    -1,    -1,   841,    -1,
      -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,  1199,    27,    -1,
      -1,    -1,   865,    -1,   659,    -1,    -1,    -1,   322,    -1,
      -1,   325,   326,   327,    -1,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   693,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1299,    -1,
      -1,   322,    -1,    -1,   325,   326,   327,  1299,   329,   330,
     331,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,   340,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,  1299,   127,    -1,
    1351,  2185,    -1,    -1,    -1,    -1,  1357,    -1,    -1,  1351,
      -1,    -1,    -1,   976,    -1,  1357,   145,   146,    -1,  2365,
      -1,    -1,  1373,    -1,    -1,   988,    -1,    -1,   157,    -1,
      -1,  1373,    -1,    -1,    -1,    -1,  2382,    -1,    -1,    -1,
      -1,    -1,    -1,  1006,    -1,    -1,    -1,    -1,    -1,  1351,
      -1,    -1,    -1,    -1,    -1,  1357,    -1,   186,    -1,    -1,
      -1,  2407,    -1,    -1,    -1,    -1,  1029,    -1,    -1,    -1,
     199,  1373,    -1,  1424,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1424,   838,    -1,    -1,    -1,    -1,    -1,  2435,
      -1,    -1,    -1,    -1,  1057,    -1,  1059,    -1,    -1,    -1,
      -1,    -1,    -1,  1066,    -1,    -1,    -1,    -1,  1459,    -1,
     865,    -1,    -1,    -1,    -1,    -1,    -1,  1459,    -1,    -1,
      -1,    -1,  1424,    -1,  1087,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1115,  1116,    -1,    -1,    -1,  1459,    -1,    -1,
    1123,    -1,  2346,  1126,  1127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1144,    -1,    -1,    -1,  1148,  1149,  1150,  1151,    -1,
      -1,    -1,    -1,   322,    -1,  1158,  1159,   326,   327,    -1,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
      -1,   340,  1175,  1176,    -1,  1178,  1179,    -1,    -1,    -1,
    1183,   976,    -1,    -1,  1187,    -1,    -1,  1190,  1191,  1192,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,    -1,  1201,    -1,
      -1,    -1,    -1,  1206,    -1,    -1,  1209,    -1,    -1,    -1,
      -1,  1006,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,  1029,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,   628,    -1,
      -1,  1652,    -1,  1654,  1059,    -1,    -1,    -1,    -1,    -1,
    1652,  1066,  1654,  1276,    -1,    -1,    -1,  1668,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1668,    -1,  1291,   659,
      -1,    -1,    -1,  1635,    -1,    -1,  1299,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,  1700,
    1652,    -1,  1654,    -1,    -1,    -1,    -1,    -1,  1700,    -1,
    2544,  2545,    -1,   693,    -1,    -1,  1668,    -1,   628,    -1,
    1721,    -1,    -1,   123,    -1,    -1,    -1,   127,    -1,  1721,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1350,  1351,    -1,
      -1,    -1,    -1,    -1,  1357,   145,   146,    -1,  1700,   659,
      -1,    -1,  1753,    -1,    -1,    -1,    -1,   157,  1371,    -1,
    1373,  1753,    -1,  1764,    -1,    -1,    -1,    -1,    -1,  1721,
      -1,  1772,  1764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1772,    -1,    -1,   693,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1199,    -1,    -1,    -1,    -1,   199,
      -1,  1753,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1424,  1764,    -1,    -1,    -1,  1817,    -1,    -1,    -1,
    1772,  1434,    -1,    -1,    -1,  1817,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1446,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1459,    -1,    -1,    -1,
      -1,    -1,  1853,    -1,    -1,   255,    -1,    -1,   838,  1472,
      -1,  1853,    -1,    -1,    -1,  1817,  1867,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,  1867,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    -1,   865,    27,    -1,  1889,  1502,
    1503,  1504,  1505,    -1,  1299,    -1,  1509,  1889,    -1,    -1,
      -1,  1853,    -1,    -1,    -1,    -1,    -1,    -1,  1521,  1522,
    1523,  1524,    -1,    -1,    -1,  1867,    -1,  1530,    -1,    -1,
      -1,    -1,   322,    -1,    -1,    -1,    -1,  1540,   838,   329,
     330,   331,   332,   333,   334,    -1,    -1,  1889,  1551,  1552,
     340,  1554,    -1,    84,    -1,  1558,  1351,    -1,    -1,    -1,
      -1,    -1,  1357,    -1,    -1,   865,    -1,    -1,    -1,    -1,
      -1,  1962,  1575,    -1,    -1,    -1,    -1,    -1,  1373,    -1,
    1962,    -1,  1585,    -1,  1587,  1588,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,   127,   628,    -1,    -1,
      -1,    -1,    -1,  1606,    -1,    -1,   976,    -1,    -1,    -1,
    1613,  1614,  1615,    -1,   145,   146,    -1,    -1,    -1,  1622,
    1962,    -1,    -1,    -1,    -1,    -1,   157,    -1,   659,  1424,
      -1,    -1,  1635,    -1,    -1,    -1,  1006,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2035,    -1,    -1,    -1,    -1,  1652,
      -1,  1654,   183,  2035,    -1,   186,    -1,    -1,    -1,  1029,
      -1,    -1,   693,    -1,  1459,  1668,    -1,    -1,   199,    -1,
     201,    -1,    -1,    -1,    -1,    -1,   976,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1059,
      -1,    -1,    -1,  2035,    -1,    -1,  1066,  1700,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1006,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1720,  1721,    -1,
     628,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,  1029,
      -1,    -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,    -1,    -1,
    1753,   659,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1059,
      -1,  1764,    -1,    -1,    -1,    -1,  1066,   298,    -1,  1772,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1786,  2126,   693,    -1,    -1,    -1,    -1,
      -1,   322,    -1,    -1,   325,   326,   327,    -1,   329,   330,
     331,   332,   333,   334,    -1,    -1,    -1,   838,    -1,   340,
      -1,  1814,    -1,    -1,  1817,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1826,    -1,    -1,    -1,  1830,    -1,  1199,
      22,  1834,    -1,    -1,   865,    27,    -1,    -1,  1841,    -1,
    1635,  1844,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,
    1853,  1854,    -1,    -1,    -1,  1858,  1859,  1652,    -1,  1654,
      -1,    -1,    -1,    -1,  1867,    -1,    -1,    -1,    -1,  1872,
      -1,    -1,    -1,  1668,    -1,    -1,  1879,  1880,  1881,    -1,
    1883,    -1,    -1,    -1,    -1,    -1,  1889,  1890,    -1,    -1,
      -1,    -1,  1895,    -1,    -1,  1898,    15,    -1,    -1,  1199,
      -1,    -1,    -1,    22,  1907,  1700,  2297,    -1,    27,    -1,
      -1,  2302,    -1,    -1,    -1,  2297,    -1,    -1,    -1,    -1,
    2302,    -1,    -1,    -1,  1927,    -1,  1721,    -1,    -1,  1299,
     838,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   976,    -1,   628,    -1,    -1,
      -1,    -1,    -1,   145,   146,  2297,    -1,   865,  1753,  1962,
    2302,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,  1764,
      -1,    -1,    -1,    -1,    -1,  1006,    -1,  1772,   659,    -1,
      -1,  1351,    -1,    -1,    -1,    -1,    -1,  1357,    -1,    -1,
      -1,   183,    -1,    -1,   186,    -1,    -1,    -1,  1029,  1299,
      -1,    -1,    -1,  1373,   123,    -1,    -1,   199,   127,    -1,
      -1,    -1,   693,    -1,    -1,    -1,    -1,    -1,    -1,  2022,
      -1,  2412,  1817,    -1,    -1,    -1,   145,   146,  1059,    -1,
    2412,    -1,  2035,    -1,    -1,  1066,    -1,    -1,   157,  2430,
      -1,    -1,    -1,    -1,   628,    -1,    -1,    -1,  2430,    -1,
      -1,  1351,    -1,    -1,  1424,    -1,    -1,  1357,  1853,    -1,
      -1,    -1,    -1,   255,   183,    -1,    -1,   186,   976,  2072,
    2412,    -1,  1867,  1373,    -1,   659,    -1,    -1,  2081,    -1,
     199,    -1,   201,    -1,    -1,    -1,    -1,    -1,  2430,  1459,
      -1,    -1,    -1,    -1,  1889,    -1,    -1,    -1,  1006,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   693,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1029,    -1,  2126,  1424,    -1,    -1,  2130,  2131,  2132,
     322,    -1,  2135,   325,   326,   327,   255,   329,   330,   331,
     332,   333,   334,    -1,    -1,    -1,  2149,    -1,   340,    -1,
    2153,  1059,    -1,    -1,  2157,  2546,    -1,   838,  1066,  1459,
      -1,    -1,    -1,    -1,  2546,    -1,    -1,  1962,  1199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   865,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,  2546,    -1,   325,   326,   327,    -1,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
     339,   340,    -1,    -1,  2615,  2228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2615,    -1,    -1,    -1,    -1,    -1,    -1,
    2035,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   838,    -1,    -1,    -1,    -1,  2262,
      -1,    -1,    -1,    -1,    -1,  1635,    -1,    -1,  1299,    -1,
      -1,    -1,    -1,  2615,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1652,  2286,  1654,    -1,    -1,    -1,    -1,    -1,
      -1,  1199,  2295,    -1,  2297,   976,    -1,    -1,  1668,  2302,
      -1,    -1,    -1,  2306,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2317,    -1,    -1,   501,    -1,  2322,
    1351,    -1,    -1,  2326,    -1,  1006,  1357,  2330,  2331,    -1,
    1700,  2126,    -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,
      -1,    -1,  1373,    -1,    -1,    -1,  2349,    -1,  1029,    -1,
      -1,  1721,  1652,    -1,  1654,    -1,    -1,    -1,    -1,    -1,
    2363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1668,    -1,
      15,    -1,    -1,    18,    -1,    -1,    -1,    22,  1059,    -1,
      -1,    -1,    27,  1753,    -1,  1066,    -1,    -1,  2391,    -1,
      -1,  1299,   976,  1424,  1764,    -1,    -1,    -1,    -1,    -1,
    1700,    -1,  1772,    -1,    -1,    -1,    -1,    -1,    -1,  2412,
      -1,    -1,    -1,    -1,    -1,    -1,   600,    -1,  2421,    -1,
      -1,  1721,  2425,    -1,    -1,    -1,    -1,  2430,  1459,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1351,    -1,  1029,    -1,  1817,    -1,  1357,
      -1,  2454,    -1,  1753,    15,    -1,    -1,    18,    -1,    -1,
      -1,    22,  2465,    -1,  1764,  1373,    27,    -1,    -1,    -1,
      -1,    -1,  1772,    -1,    -1,  1059,    -1,    -1,   123,    -1,
      -1,    -1,   127,  1853,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1867,    -1,    -1,
     145,   146,  2297,    -1,    -1,    -1,    -1,  2302,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,  1424,  1817,  1199,  1889,
      -1,    -1,    -1,    -1,    -1,   709,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,   186,    -1,  2546,    -1,    -1,    -1,    -1,    -1,   733,
      -1,  1459,    -1,  1853,   199,    -1,   201,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,   127,  1867,    -1,    -1,
      -1,  2574,    -1,    -1,    -1,   759,   760,    -1,   762,   763,
     764,    -1,    -1,    -1,   145,   146,    -1,    -1,    -1,  1889,
      -1,    -1,  1962,    -1,    -1,    -1,   157,    -1,   782,    -1,
      -1,    -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,  2612,
     255,    -1,  2615,    -1,    -1,  1199,    -1,  2412,  1299,    -1,
      -1,  1652,   183,  1654,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2430,    -1,  1668,   199,    -1,
     201,    -1,    -1,    -1,    -1,    -1,   830,    -1,    -1,   833,
     834,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1962,    -1,    -1,  2035,    -1,    -1,    -1,  1700,
    1351,    -1,    -1,    -1,    -1,    -1,  1357,   322,    -1,    -1,
     325,   326,   327,    -1,   329,   330,   331,   332,   333,   334,
    1721,    -1,  1373,    -1,   255,   340,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,  1299,    -1,    -1,    -1,    -1,
      22,    -1,  1753,    -1,    -1,    27,    -1,  1635,    -1,    -1,
      -1,    -1,    -1,  1764,    -1,  2035,    -1,    22,    -1,    -1,
      -1,  1772,    27,  1424,  1652,    -1,  1654,    -1,    -1,    -1,
      -1,  2546,    -1,    -1,    -1,    -1,  2126,    -1,    -1,    -1,
    1668,   322,    -1,    -1,   325,   326,   327,  1351,   329,   330,
     331,   332,   333,   334,    -1,    -1,    -1,    -1,  1459,   340,
      -1,    -1,    -1,    -1,    -1,    -1,  1817,    -1,    -1,  1373,
      -1,    -1,  1700,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,  1721,    -1,    -1,    -1,    -1,    -1,    -1,
    2615,   123,  1853,    -1,    -1,   127,  2126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1867,    -1,   123,    -1,
    1424,    -1,   127,   145,   146,  1753,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,  1764,    -1,  1889,    -1,
     145,   146,    -1,    -1,  1772,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,  1057,    -1,  1459,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,   201,
      -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1817,
      -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2297,    -1,    -1,
      -1,  1962,  2302,    -1,    -1,    -1,    -1,    -1,    -1,  1123,
      -1,    -1,    -1,  1127,    -1,  1853,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,  1635,    -1,    -1,    -1,    -1,  1867,
    1144,    -1,    -1,    -1,  1148,    -1,    -1,  1151,    -1,    -1,
     255,  1652,    -1,  1654,  1158,  1159,    -1,    -1,    -1,    -1,
      -1,  1889,    -1,    -1,    -1,    -1,    -1,  1668,    -1,    -1,
      -1,  1175,    -1,    -1,    -1,  1179,   298,  2297,    -1,  1183,
      -1,    -1,  2302,  1187,  2035,    -1,  1190,  1191,  1192,  1193,
    1194,  1195,  1196,  1197,  1198,    -1,    -1,  1201,    -1,  1700,
     322,    -1,  1206,   325,   326,   327,    -1,   329,   330,   331,
     332,   333,   334,    -1,    -1,    -1,    -1,   322,   340,    -1,
    1721,    -1,  2412,    -1,   329,   330,   331,   332,   333,   334,
      -1,  1635,    -1,    -1,  1962,   340,    -1,    -1,    -1,    -1,
    2430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1652,    -1,
    1654,    -1,  1753,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1764,  1668,    -1,    15,    -1,    -1,    18,
     778,  1772,    -1,    22,    -1,  2126,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1291,    -1,    -1,
      -1,    -1,  2412,    -1,    -1,    -1,  1700,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2035,    -1,    -1,
    2430,    -1,    -1,    -1,    -1,    -1,  1817,  1721,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1350,    -1,    -1,  1753,
      -1,    -1,  1853,    -1,    -1,    -1,  2546,    15,    -1,    -1,
    1764,    -1,    -1,    -1,    22,    -1,  1867,  1371,  1772,    27,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   894,    -1,  1889,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,  2126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,  1817,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2615,  2546,    -1,    -1,    -1,
    1434,    -1,    -1,    -1,   183,    -1,    -1,   186,    -1,    -1,
      -1,    -1,  1446,    -1,    -1,    -1,  2297,    -1,    -1,  1853,
     199,  2302,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1962,    -1,  1867,    -1,   123,    -1,    -1,  1472,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1889,    -1,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,  2615,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1521,    -1,  1523,
    1524,    -1,    -1,    -1,    -1,   183,  1530,    -1,   186,    -1,
      -1,    -1,    -1,    -1,  2035,    -1,    -1,    -1,    -1,    -1,
      -1,   199,    -1,   201,    -1,    -1,    -1,    -1,  1552,    -1,
    1554,    -1,   210,    -1,  1558,    -1,    -1,    -1,  1962,    -1,
      -1,  2412,    -1,    -1,    -1,    -1,    -1,  1075,    -1,  2297,
      -1,    -1,    -1,   322,  2302,    -1,   325,   326,   327,  2430,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
      -1,   340,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,  1606,    -1,    -1,    -1,    -1,    -1,    -1,  1613,
    1614,  1615,    -1,  1121,    -1,    -1,    -1,    -1,  1622,    -1,
      15,    -1,    -1,    -1,    -1,  2126,    -1,    22,    -1,    -1,
      -1,  2035,    27,    -1,    -1,  1143,    -1,    -1,    -1,    -1,
      15,  1149,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,  1162,  1163,  1164,  1165,    -1,  1167,
      -1,    -1,    -1,    -1,   322,    -1,    -1,   325,   326,   327,
    1178,   329,   330,   331,   332,   333,   334,    -1,    -1,    -1,
      -1,    -1,   340,    -1,  2412,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2546,  1204,    -1,    -1,    -1,
      -1,    -1,  2430,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    27,    -1,   113,    -1,
      -1,    -1,  2126,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,  1257,
     145,   146,   127,    -1,    -1,  1263,    -1,  1265,    -1,    -1,
      -1,    -1,   157,    -1,  2615,    -1,    -1,    -1,    -1,    -1,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,   186,    -1,    -1,    -1,    -1,  2297,    -1,    -1,    -1,
      -1,  2302,    -1,    -1,   199,    -1,   201,    -1,   183,    -1,
    1814,   186,   123,    -1,    -1,    -1,   127,    -1,  2546,    -1,
      -1,    -1,  1826,    -1,   199,    -1,  1830,    -1,    -1,    -1,
    1834,    -1,    -1,    -1,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1858,  1859,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,   186,    -1,  1881,    -1,  1883,
     255,    -1,    -1,    -1,    -1,    -1,  1890,  2615,   199,    -1,
     201,  1895,    -1,  2297,  1898,    -1,    -1,    -1,  2302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2412,    -1,    -1,  1422,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1927,    -1,    -1,    -1,   322,    -1,  2430,
     325,   326,   327,    -1,   329,   330,   331,   332,   333,   334,
      -1,    -1,    -1,    -1,   255,   340,    -1,   322,    -1,    -1,
     325,   326,   327,    -1,   329,   330,   331,   332,   333,   334,
      -1,    -1,    -1,    -1,    -1,   340,    -1,  1475,    -1,  1477,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1497,
      -1,    -1,  1500,    -1,  1502,  1503,  1504,  1505,  1506,    -1,
      -1,  1509,    -1,    -1,    -1,  1513,    -1,    -1,  2412,    -1,
      -1,   322,  1520,    -1,   325,   326,   327,  1525,   329,   330,
     331,   332,   333,   334,    -1,    -1,  2430,  1535,   339,   340,
    1538,  1539,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1550,  1551,    -1,  2546,    -1,    -1,    -1,  1557,
      -1,  1559,  1560,  1561,  1562,  1563,  1564,  1565,  1566,  1567,
      -1,  1569,    -1,    -1,    -1,    -1,    -1,    -1,  2072,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2081,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    46,    47,  2615,    -1,    -1,    51,    52,    -1,
      -1,    -1,  1630,    -1,    58,    59,    -1,  2131,  2132,    -1,
      -1,  2135,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,  2546,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    99,    -1,   101,     9,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
    1698,    -1,    15,    -1,    -1,    -1,    -1,    38,    -1,    22,
      -1,    -1,    -1,   137,    27,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,  1722,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2228,   159,   160,    -1,    -1,    70,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    87,    22,    -1,    -1,
      -1,   185,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,  1784,    -1,    -1,    -1,
     214,    -1,  2286,    -1,    -1,  1793,    -1,    -1,    -1,   130,
      -1,   225,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
     123,   235,  2306,   237,   127,  1813,    -1,   241,    -1,    -1,
      -1,   152,   246,    -1,    -1,    -1,    -1,   251,    -1,    -1,
     254,    -1,   145,   146,    -1,    -1,   260,  2331,    -1,  1837,
    1838,  1839,  1840,  1841,   157,    -1,  1844,  1845,  1846,  1847,
    1848,  1849,  1850,  1851,  1852,  2349,  1854,  1855,   123,    -1,
      -1,   285,   127,    -1,    -1,    -1,    -1,    -1,   199,   293,
     183,   295,    -1,   186,    -1,   299,    -1,  1875,    -1,    -1,
     145,   146,  1880,    -1,    -1,    -1,   199,   218,   201,    -1,
      -1,    -1,   157,  1891,  1892,    -1,  1894,  2391,    -1,  1897,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,   242,    -1,    -1,   338,    -1,   247,    -1,   183,    -1,
      -1,   186,    -1,    -1,    -1,    -1,    -1,  2421,    -1,    -1,
      -1,    -1,    -1,    -1,   199,    -1,   201,    -1,   269,    -1,
      -1,  1939,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   282,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,   322,
      22,    -1,   325,   326,   327,    27,   329,   330,   331,   332,
     333,   334,    -1,    -1,  2022,    -1,    -1,   340,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,
     325,   326,   327,    -1,   329,   330,   331,   332,   333,   334,
      -1,    15,   337,    -1,    -1,   340,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,  2082,    -1,    -1,    -1,    -1,  2087,
    2088,    -1,  2090,    -1,  2092,    -1,    -1,    -1,  2096,  2097,
    2098,  2099,  2100,  2101,  2102,  2103,  2104,    -1,  2106,  2107,
    2108,   123,    -1,    -1,    -1,   127,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,  2122,  2123,    -1,  2125,    -1,    -1,
      -1,  2129,  2130,   145,   146,  2133,   123,    -1,  2136,    -1,
     127,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,   183,  2170,    -1,   186,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,   199,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,   186,
      -1,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,   157,   201,    -1,    -1,    -1,   123,    -1,
      -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2230,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     145,   146,   186,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   199,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2288,    -1,    -1,    -1,   199,    -1,    -1,  2295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2303,  2304,  2305,    -1,  2307,
     322,   255,    -1,   325,   326,   327,    -1,   329,   330,   331,
     332,   333,   334,    -1,    -1,    -1,    -1,   339,   340,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,   325,   326,
     327,    -1,   329,   330,   331,   332,   333,   334,    -1,    -1,
     255,    -1,   339,   340,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2367,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
      -1,   325,   326,   327,    -1,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,   339,   340,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2411,    -1,    -1,    -1,   322,  2416,    -1,
     325,   326,   327,    -1,   329,   330,   331,   332,   333,   334,
      -1,    -1,    -1,    -1,  2432,   340,    -1,    -1,    -1,  2437,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,  2463,    20,    21,    22,    -1,
      24,    25,    26,    -1,    28,    -1,    30,    31,    -1,    33,
      34,    35,    36,    -1,  2482,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,   105,   106,   107,    -1,   109,    -1,   111,    -1,    -1,
      -1,   115,   116,    -1,    -1,   119,    -1,   121,   122,    -1,
     124,   125,   126,    -1,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,   142,    -1,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
      -1,    -1,   156,    -1,    -1,   159,   160,   161,    -1,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,    -1,   176,    -1,   178,   179,   180,   181,   182,    -1,
     184,   185,    -1,   187,    -1,   189,   190,   191,   192,    -1,
      -1,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
      -1,    -1,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    -1,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,   249,    -1,   251,   252,   253,
     254,    -1,   256,   257,    -1,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,    -1,   280,   281,   282,   283,
      -1,   285,   286,   287,   288,   289,    -1,    -1,   292,   293,
     294,   295,   296,    -1,   298,   299,   300,   301,   302,   303,
     304,    -1,   306,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,    -1,   317,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,   336,    -1,    -1,    17,    -1,   341,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    85,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,    -1,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,    -1,   291,
     292,   293,   294,   295,   296,   297,    -1,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,    -1,    -1,    -1,    -1,   329,   330,   331,
      -1,   333,   334,    -1,    -1,    -1,   338,   339,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,    -1,   111,   112,    -1,   114,
     115,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,    -1,
     195,   196,    -1,    -1,   199,   200,    -1,    -1,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,   272,   273,    -1,
     275,   276,    -1,   278,    -1,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    -1,   291,   292,   293,   294,
     295,   296,   297,    -1,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    -1,    -1,   310,   311,   312,   313,   314,
     315,    -1,   317,   318,   319,   320,   321,   322,   323,   324,
      -1,    -1,    -1,    -1,   329,   330,    -1,    -1,   333,   334,
      -1,    -1,    -1,   338,   339,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    22,    -1,    24,    25,    26,    -1,
      28,    -1,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,   105,   106,   107,
     108,   109,    -1,   111,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,    -1,   121,   122,    -1,   124,   125,   126,    -1,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,    -1,   144,    -1,    -1,   147,
      -1,   149,   150,   151,   152,   153,    -1,    -1,   156,    -1,
     158,   159,   160,   161,    -1,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,    -1,   176,    -1,
     178,   179,   180,   181,   182,    -1,   184,   185,    -1,   187,
      -1,   189,   190,   191,   192,    -1,   194,   195,    -1,    -1,
      -1,   199,   200,    -1,   202,   203,    -1,    -1,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,    -1,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
     248,   249,    -1,   251,   252,   253,   254,    -1,   256,   257,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,    -1,   280,   281,   282,   283,    -1,   285,   286,   287,
     288,   289,   290,    -1,   292,   293,   294,   295,   296,    -1,
      -1,   299,   300,   301,   302,   303,   304,    -1,   306,   307,
      -1,    -1,   310,   311,   312,   313,   314,   315,    -1,   317,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,   339,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,   109,    -1,   111,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
      -1,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,    -1,    -1,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,    -1,   291,   292,   293,   294,   295,   296,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      -1,    -1,   310,   311,   312,   313,   314,   315,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,    -1,    -1,    -1,
      -1,   329,   330,    -1,    -1,   333,   334,    -1,    -1,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,    -1,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,    -1,   291,
     292,   293,   294,   295,   296,   297,    -1,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,    -1,    -1,    -1,    -1,   329,   330,   331,
      -1,   333,   334,    -1,    -1,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,    -1,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,    -1,   195,
     196,    -1,    -1,   199,   200,    -1,    -1,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,    -1,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,    -1,   291,   292,   293,   294,   295,
     296,   297,    -1,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    -1,    -1,   310,   311,   312,   313,   314,   315,
      -1,   317,   318,   319,   320,   321,   322,   323,   324,    -1,
      -1,    -1,    -1,   329,   330,    -1,    -1,   333,   334,    -1,
      -1,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      -1,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    92,    93,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,   109,
      -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,    -1,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,    -1,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,   195,   196,    -1,    -1,   199,
     200,    -1,    -1,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,    -1,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,    -1,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,    -1,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
      -1,   291,   292,   293,   294,   295,   296,   297,    -1,   299,
     300,   301,   302,   303,   304,   305,   306,   307,    -1,    -1,
     310,   311,   312,   313,   314,   315,    -1,   317,   318,   319,
     320,   321,   322,   323,   324,    -1,    -1,    -1,    -1,   329,
     330,    -1,    -1,   333,   334,    -1,    -1,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,   109,    -1,   111,   112,    -1,
     114,   115,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,   131,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
      -1,   195,   196,    -1,    -1,   199,   200,    -1,    -1,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,    -1,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,    -1,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,    -1,   291,   292,   293,
     294,   295,   296,   297,    -1,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,    -1,   317,   318,   319,   320,   321,   322,   323,
     324,    -1,    -1,    -1,    -1,   329,   330,    -1,    -1,   333,
     334,    -1,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
      -1,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,    -1,    -1,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,    -1,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,    -1,   291,   292,   293,   294,   295,   296,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      -1,    -1,   310,   311,   312,   313,   314,   315,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,    -1,    -1,    -1,
      -1,   329,   330,    -1,    -1,   333,   334,    -1,    -1,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,    -1,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,    -1,   291,
     292,   293,   294,   295,   296,   297,    -1,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,    -1,    -1,    -1,    -1,   329,   330,    -1,
      -1,   333,   334,    -1,    -1,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,    -1,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,    -1,   195,
     196,    -1,    -1,   199,   200,    -1,    -1,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,    -1,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,    -1,   291,   292,   293,   294,   295,
     296,   297,    -1,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    -1,    -1,   310,   311,   312,   313,   314,   315,
      -1,   317,   318,   319,   320,   321,   322,   323,   324,    -1,
      -1,    -1,    -1,   329,   330,    -1,    -1,   333,   334,    -1,
      -1,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      -1,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    92,    93,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,   109,
      -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,    -1,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,    -1,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,    -1,   195,   196,    -1,    -1,   199,
     200,    -1,    -1,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,    -1,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,    -1,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,    -1,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
      -1,   291,   292,   293,   294,   295,   296,   297,    -1,   299,
     300,   301,   302,   303,   304,   305,   306,   307,    -1,    -1,
     310,   311,   312,   313,   314,   315,    -1,   317,   318,   319,
     320,   321,   322,   323,   324,    -1,    -1,    -1,    -1,   329,
     330,    -1,    -1,   333,   334,    -1,    -1,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,   109,    -1,   111,   112,    -1,
     114,   115,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,   131,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
      -1,   195,   196,    -1,    -1,   199,   200,    -1,    -1,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,    -1,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,    -1,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,    -1,    -1,   292,   293,
     294,   295,   296,   297,    -1,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,    -1,   317,   318,   319,   320,   321,   322,   323,
     324,    -1,    -1,    -1,    -1,   329,   330,    -1,    -1,   333,
     334,    -1,    -1,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
      -1,   119,    -1,   121,   122,    -1,   124,   125,   126,    -1,
     128,   129,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,    -1,
      -1,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,   184,   185,   186,   187,
     188,   189,   190,   191,   192,    -1,    -1,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,    -1,   256,   257,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,    -1,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,    -1,   291,   292,   293,   294,   295,   296,   297,
      -1,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      -1,    -1,   310,   311,   312,   313,   314,   315,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,    -1,    -1,    -1,
      -1,   329,   330,    -1,    -1,   333,   334,    -1,    -1,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,    -1,    -1,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,   250,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,   297,    -1,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,    -1,    -1,    -1,    -1,   329,   330,    -1,
      -1,   333,   334,    -1,    -1,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,    -1,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,    -1,   195,
     196,    -1,    -1,   199,   200,    -1,    -1,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,    -1,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,    -1,    -1,   292,   293,   294,   295,
     296,   297,    -1,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    -1,    -1,   310,   311,   312,   313,   314,   315,
      -1,   317,   318,   319,   320,   321,    -1,   323,   324,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,   338,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    55,    56,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,   109,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,   119,    -1,   121,   122,
      -1,   124,   125,   126,    -1,   128,   129,   130,   131,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
      -1,   144,    -1,    -1,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,    -1,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,   184,   185,    -1,   187,   188,   189,   190,   191,   192,
      -1,    -1,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,   248,   249,   250,   251,   252,
     253,   254,    -1,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,   271,   272,
     273,    -1,   275,   276,    -1,   278,    -1,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,    -1,   291,   292,
     293,   294,   295,   296,   297,    -1,   299,   300,   301,   302,
     303,   304,   305,   306,   307,    -1,    -1,   310,   311,   312,
     313,   314,   315,    -1,   317,   318,   319,   320,   321,    -1,
     323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,   338,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,   133,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
      -1,    -1,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,   188,   189,   190,   191,   192,    -1,    -1,   195,   196,
      -1,    -1,    -1,   200,    -1,    -1,   203,   204,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,   250,   251,   252,   253,   254,    -1,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,    -1,   291,   292,   293,   294,   295,   296,
     297,    -1,   299,   300,   301,   302,   303,   304,   305,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,   318,   319,   320,   321,    -1,   323,   324,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,   338,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    -1,    92,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,    -1,   111,   112,    -1,   114,
     115,   116,    -1,    -1,   119,    -1,   121,   122,    -1,   124,
     125,   126,    -1,   128,   129,   130,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,    -1,   144,
      -1,    -1,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,    -1,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    -1,   184,
     185,    -1,   187,    -1,   189,   190,   191,   192,    -1,    -1,
     195,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,   248,   249,   250,   251,   252,   253,   254,
      -1,   256,   257,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,   272,   273,    -1,
     275,   276,    -1,   278,    -1,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    -1,    -1,   292,   293,   294,
     295,   296,   297,    -1,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    -1,    -1,   310,   311,   312,   313,   314,
     315,    -1,   317,   318,   319,   320,   321,    -1,   323,   324,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,   334,
      11,    12,    -1,   338,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,   105,   106,   107,    -1,   109,    -1,
     111,   112,    -1,   114,   115,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,   184,   185,   186,   187,    -1,   189,   190,
     191,   192,    -1,    -1,   195,   196,    -1,   198,   199,   200,
      -1,    -1,   203,   204,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,    -1,   280,
     281,   282,   283,    -1,   285,   286,   287,   288,   289,    -1,
      -1,   292,   293,   294,   295,   296,   297,    -1,   299,   300,
     301,   302,   303,   304,   305,   306,   307,    -1,    -1,   310,
     311,   312,   313,   314,   315,    -1,   317,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,   338,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,    -1,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,   186,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,   198,   199,   200,    -1,
      -1,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,   297,    -1,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    -1,   338,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    55,    56,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,   109,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,   119,    -1,   121,   122,
      -1,   124,   125,   126,    -1,   128,   129,   130,   131,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
      -1,   144,    -1,    -1,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,    -1,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,   184,   185,    -1,   187,    -1,   189,   190,   191,   192,
      -1,    -1,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,   248,   249,   250,   251,   252,
     253,   254,    -1,   256,   257,    -1,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,   271,   272,
     273,    -1,   275,   276,    -1,   278,    -1,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,    -1,    -1,   292,
     293,   294,   295,   296,   297,    -1,   299,   300,   301,   302,
     303,   304,   305,   306,   307,    -1,    -1,   310,   311,   312,
     313,   314,   315,    -1,   317,   318,   319,   320,   321,    -1,
     323,   324,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,   338,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,   105,   106,   107,    -1,   109,    -1,
     111,   112,    -1,   114,   115,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,   184,   185,   186,   187,    -1,   189,   190,
     191,   192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,
      -1,    -1,   203,   204,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,    -1,   280,
     281,   282,   283,    -1,   285,   286,   287,   288,   289,    -1,
      -1,   292,   293,   294,   295,   296,   297,    -1,   299,   300,
     301,   302,   303,   304,   305,   306,   307,    -1,    -1,   310,
     311,   312,   313,   314,   315,    -1,   317,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,   338,    24,    25,
      26,    -1,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,   105,
     106,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,
     116,    -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,    -1,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,    -1,    -1,
     156,    -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,    -1,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
      -1,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
     196,    -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,   248,   249,    -1,   251,   252,   253,   254,    -1,
     256,   257,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,    -1,   280,   281,   282,   283,    -1,   285,
     286,   287,   288,   289,    -1,    -1,   292,   293,   294,   295,
     296,    -1,    -1,   299,   300,   301,   302,   303,   304,    -1,
     306,   307,    -1,    -1,   310,   311,   312,   313,   314,   315,
      -1,   317,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,   338,    24,    25,    26,    -1,    28,    -1,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    60,
      61,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,   105,   106,   107,    -1,   109,    -1,
     111,    -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,
     121,   122,    -1,   124,   125,   126,    -1,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,
     161,    -1,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    -1,   176,    -1,   178,   179,   180,
     181,   182,    -1,   184,   185,    -1,   187,    -1,   189,   190,
     191,   192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,
      -1,    -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,   252,   253,   254,    -1,   256,   257,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,    -1,   280,
     281,   282,   283,    -1,   285,   286,   287,   288,   289,    -1,
      -1,   292,   293,   294,   295,   296,    -1,    -1,   299,   300,
     301,   302,   303,   304,    -1,   306,   307,    -1,    -1,   310,
     311,   312,   313,   314,   315,    -1,   317,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,   338,    24,    25,
      26,    -1,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,   105,
     106,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,
     116,    -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,    -1,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,    -1,    -1,
     156,    -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,    -1,
     176,    -1,   178,   179,   180,   181,   182,    -1,   184,   185,
      -1,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
      -1,    -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,   248,   249,    -1,   251,   252,   253,   254,    -1,
     256,   257,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,    -1,   280,   281,   282,   283,    -1,   285,
     286,   287,   288,   289,    -1,    -1,   292,   293,   294,   295,
     296,    -1,    -1,   299,   300,   301,   302,   303,   304,    -1,
     306,   307,    -1,    -1,   310,   311,   312,   313,   314,   315,
      -1,   317,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,   338,    24,    25,    26,    -1,    28,    -1,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    60,
      61,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,   105,   106,   107,    -1,   109,    -1,
     111,    -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,
     121,   122,    -1,   124,   125,   126,    -1,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,
     161,    -1,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    -1,   176,    -1,   178,   179,   180,
     181,   182,    -1,   184,   185,    -1,   187,    -1,   189,   190,
     191,   192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,
      -1,    -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,   248,   249,    -1,
     251,   252,   253,   254,    -1,   256,   257,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,    -1,   280,
     281,   282,   283,    -1,   285,   286,   287,   288,   289,    -1,
      -1,   292,   293,   294,   295,   296,    -1,    -1,   299,   300,
     301,   302,   303,   304,    -1,   306,   307,    -1,    -1,   310,
     311,   312,   313,   314,   315,    -1,   317,    -1,    -1,    -1,
      -1,   322,    -1,    -1,   325,   326,   327,    -1,   329,   330,
     331,   332,   333,   334,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,   105,   106,   107,    -1,
     109,    -1,   111,    -1,    -1,    -1,   115,   116,    -1,    -1,
     119,    -1,   121,   122,    -1,   124,   125,   126,    -1,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,   142,    -1,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
     159,   160,   161,    -1,    -1,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,    -1,   176,    -1,   178,
     179,   180,   181,   182,    -1,   184,   185,    -1,   187,    -1,
     189,   190,   191,   192,    -1,    -1,   195,    -1,    -1,    -1,
     199,   200,    -1,    -1,   203,    -1,    -1,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,    -1,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,   248,
     249,    -1,   251,   252,   253,   254,    -1,   256,   257,    -1,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
      -1,   270,   271,   272,   273,    -1,   275,   276,    -1,   278,
      -1,   280,   281,   282,   283,    -1,   285,   286,   287,   288,
     289,    -1,    -1,   292,   293,   294,   295,   296,    -1,    -1,
     299,   300,   301,   302,   303,   304,    -1,   306,   307,    -1,
      -1,   310,   311,   312,   313,   314,   315,    -1,   317,    -1,
      -1,    -1,    -1,   322,    -1,    -1,   325,   326,   327,    -1,
     329,   330,   331,   332,   333,   334,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,    -1,    -1,    -1,    -1,   322,    -1,    -1,   325,   326,
     327,    -1,   329,   330,   331,   332,   333,   334,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    -1,    28,    -1,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
     105,   106,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,
     115,   116,    -1,    -1,   119,    -1,   121,   122,    -1,   124,
     125,   126,    -1,   128,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,    -1,   144,
      -1,    -1,   147,    -1,   149,   150,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,   159,   160,   161,    -1,    -1,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
      -1,   176,    -1,   178,   179,   180,   181,   182,    -1,   184,
     185,    -1,   187,    -1,   189,   190,   191,   192,    -1,    -1,
     195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,    -1,
      -1,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,    -1,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,   248,   249,    -1,   251,   252,   253,   254,
      -1,   256,   257,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    -1,   270,   271,   272,   273,    -1,
     275,   276,    -1,   278,    -1,   280,   281,   282,   283,    -1,
     285,   286,   287,   288,   289,    -1,    -1,   292,   293,   294,
     295,   296,    -1,    -1,   299,   300,   301,   302,   303,   304,
      -1,   306,   307,    -1,    -1,   310,   311,   312,   313,   314,
     315,    -1,   317,    -1,    -1,    -1,    -1,   322,    -1,    -1,
     325,   326,   327,    -1,   329,   330,   331,   332,   333,   334,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    26,    -1,    28,    -1,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    55,    56,    57,    58,    -1,    60,    61,    -1,
      63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    97,    98,    99,   100,   101,   102,
     103,    -1,   105,   106,   107,    -1,   109,    -1,   111,    -1,
      -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,   122,
      -1,   124,   125,   126,    -1,   128,   129,   130,   131,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
      -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,    -1,
      -1,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,    -1,   176,    -1,   178,   179,   180,   181,   182,
      -1,   184,   185,    -1,   187,    -1,   189,   190,   191,   192,
      -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,
     203,    -1,    -1,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,    -1,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,   248,   249,    -1,   251,   252,
     253,   254,    -1,   256,   257,    -1,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,   271,   272,
     273,    -1,   275,   276,    -1,   278,    -1,   280,   281,   282,
     283,    -1,   285,   286,   287,   288,   289,    -1,    -1,   292,
     293,   294,   295,   296,    -1,    -1,   299,   300,   301,   302,
     303,   304,    -1,   306,   307,    -1,    -1,   310,   311,   312,
     313,   314,   315,    -1,   317,    -1,    -1,    -1,    -1,   322,
      -1,    -1,   325,   326,   327,    -1,   329,   330,   331,   332,
     333,   334,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    26,    -1,    28,    -1,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    -1,    58,    -1,    60,
      61,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,    -1,
     101,   102,    -1,    -1,   105,   106,   107,    -1,   109,    -1,
     111,    -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,
     121,   122,    -1,   124,   125,   126,    -1,   128,   129,   130,
     131,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
      -1,   142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,
     161,    -1,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    -1,   176,    -1,   178,   179,   180,
     181,    -1,    -1,   184,   185,    -1,   187,    -1,    -1,   190,
     191,   192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,    -1,
      -1,    -1,   213,   214,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,    -1,   237,    -1,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,   248,   249,    -1,
     251,   252,   253,   254,    -1,   256,   257,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,    -1,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,    -1,   280,
      -1,   282,    -1,    -1,   285,   286,   287,   288,   289,    -1,
      -1,   292,   293,   294,   295,   296,    -1,    -1,   299,   300,
     301,   302,   303,   304,    -1,   306,   307,    -1,    -1,   310,
     311,   312,   313,   314,   315,    -1,   317,   318,   319,    -1,
      -1,   322,   323,    -1,   325,   326,   327,    -1,   329,   330,
     331,   332,   333,   334,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,    -1,   317,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,   331,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    26,    -1,    28,    -1,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,   105,   106,   107,    -1,   109,    -1,   111,    -1,    -1,
      -1,   115,   116,    -1,    -1,   119,    -1,   121,   122,    -1,
     124,   125,   126,    -1,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,   142,    -1,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
      -1,    -1,   156,    -1,    -1,   159,   160,   161,    -1,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,    -1,   176,   177,   178,   179,   180,   181,   182,    -1,
     184,   185,    -1,   187,    -1,   189,   190,   191,   192,    -1,
      -1,   195,   196,    -1,    -1,   199,   200,    -1,    -1,   203,
      -1,    -1,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    -1,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,   249,    -1,   251,   252,   253,
     254,    -1,   256,   257,    -1,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,    -1,   280,   281,   282,   283,
      -1,   285,   286,   287,   288,   289,    -1,    -1,   292,   293,
     294,   295,   296,    -1,    -1,   299,   300,   301,   302,   303,
     304,    -1,   306,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,    -1,   317,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,   331,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    -1,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    -1,    58,
      -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    97,    98,
      99,    -1,   101,   102,    -1,    -1,   105,   106,   107,    -1,
     109,    -1,   111,    -1,    -1,    -1,   115,   116,    -1,    -1,
     119,    -1,   121,   122,    -1,   124,   125,   126,    -1,   128,
     129,   130,   131,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,    -1,   142,    -1,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
     159,   160,   161,    -1,    -1,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,    -1,   176,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,    -1,   187,    -1,
      -1,   190,   191,   192,    -1,    -1,   195,    -1,    -1,    -1,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,
     209,    -1,    -1,    -1,   213,   214,    -1,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,    -1,   237,    -1,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,   248,
     249,    -1,   251,   252,   253,   254,    -1,   256,   257,    -1,
     259,   260,   261,   262,   263,   264,   265,   266,    -1,   268,
      -1,   270,   271,   272,   273,    -1,   275,   276,    -1,   278,
      -1,   280,    -1,   282,    -1,    -1,   285,   286,   287,   288,
     289,    -1,    -1,   292,   293,   294,   295,   296,    -1,    -1,
     299,   300,   301,   302,   303,   304,    -1,   306,   307,    -1,
      -1,   310,   311,   312,   313,   314,   315,    -1,   317,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,   331,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    26,    -1,    28,    -1,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    92,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,   109,    -1,   111,    -1,    -1,
      -1,   115,   116,    -1,    -1,   119,    -1,   121,   122,    -1,
     124,   125,   126,    -1,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,   142,    -1,
     144,    -1,    -1,   147,    -1,   149,   150,   151,   152,   153,
      -1,    -1,   156,    -1,    -1,   159,   160,   161,    -1,    -1,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,    -1,   176,    -1,   178,   179,   180,   181,   182,    -1,
     184,   185,    -1,   187,    -1,   189,   190,   191,   192,   193,
      -1,   195,    -1,   197,    -1,   199,   200,    -1,    -1,   203,
      -1,    -1,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    -1,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,   249,    -1,   251,   252,   253,
     254,    -1,   256,   257,    -1,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,    -1,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,    -1,    -1,   292,   293,
     294,   295,   296,    -1,    -1,   299,   300,   301,   302,   303,
     304,    -1,   306,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,    -1,   317,   318,   319,    -1,    -1,    -1,   323,
      -1,    -1,    -1,    -1,    -1,    -1,   330,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      26,    -1,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,
     116,    -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,    -1,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,    -1,    -1,
     156,    -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,    -1,
     176,    -1,   178,   179,   180,   181,   182,    -1,   184,   185,
      -1,   187,    -1,   189,   190,   191,   192,   193,    -1,   195,
      -1,   197,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,   248,   249,    -1,   251,   252,   253,   254,    -1,
     256,   257,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,    -1,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,    -1,    -1,   292,   293,   294,   295,
     296,    -1,    -1,   299,   300,   301,   302,   303,   304,    -1,
     306,   307,    -1,    -1,   310,   311,   312,   313,   314,   315,
      -1,   317,   318,   319,    -1,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    -1,    -1,   330,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    26,    -1,
      28,    -1,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,   105,   106,   107,
      -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,    -1,   121,   122,    -1,   124,   125,   126,    -1,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,   147,
      -1,   149,   150,   151,   152,   153,    -1,    -1,   156,    -1,
      -1,   159,   160,   161,    -1,    -1,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,    -1,   176,    -1,
     178,   179,   180,   181,   182,    -1,   184,   185,    -1,   187,
      -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,    -1,
      -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,    -1,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
     248,   249,    -1,   251,   252,   253,   254,    -1,   256,   257,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,    22,   280,   281,   282,   283,    27,   285,   286,   287,
     288,   289,    -1,    -1,   292,   293,   294,   295,   296,    -1,
      -1,   299,   300,   301,   302,   303,   304,    -1,   306,   307,
      -1,    15,   310,   311,   312,   313,   314,   315,    22,   317,
      -1,    -1,    -1,    27,    -1,   323,    -1,    -1,    -1,    -1,
      -1,    15,   330,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,   123,    22,    -1,    -1,   127,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,   145,   146,   127,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,   199,    -1,
      -1,   145,   146,    -1,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,   183,
      -1,    -1,   186,    -1,   123,    -1,   145,   146,   127,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,   201,   157,   183,
      -1,    -1,   186,    -1,    -1,    -1,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,   255,   199,    -1,   201,   157,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,   201,    -1,   183,    -1,    -1,   186,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,   329,   330,
     331,   332,   333,   334,    -1,    -1,   255,    -1,    -1,   340,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,   322,    -1,
      -1,   325,   326,   327,    -1,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,   339,   340,    -1,   322,    -1,
      -1,   325,   326,   327,    -1,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,   339,   340,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,    -1,   325,   326,   327,    -1,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
     339,   340,    -1,   322,    -1,    -1,   325,   326,   327,    -1,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
      -1,   340,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    26,    -1,    28,    -1,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    60,
      61,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,   103,    -1,   105,   106,   107,    -1,   109,    -1,
     111,    -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,
     121,   122,    -1,   124,   125,   126,    -1,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,
     161,    -1,    -1,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    -1,   176,    -1,   178,   179,   180,
     181,   182,    -1,   184,   185,    -1,   187,    -1,   189,   190,
     191,   192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,
      -1,    -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,   248,   249,    -1,
     251,   252,   253,   254,    -1,   256,   257,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    22,   270,
     271,   272,   273,    27,   275,   276,    -1,   278,    -1,   280,
     281,   282,   283,    -1,   285,   286,   287,   288,   289,    -1,
      -1,   292,   293,   294,   295,   296,    -1,    -1,   299,   300,
     301,   302,   303,   304,    -1,   306,   307,    -1,    -1,   310,
     311,   312,   313,   314,   315,    -1,   317,   318,   319,   320,
     321,    -1,   323,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    95,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,   127,    -1,   199,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199,   255,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
      -1,   255,    -1,    -1,    -1,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
     329,   330,   331,   332,   333,   334,    -1,    -1,   322,    -1,
      -1,   340,    -1,    -1,    -1,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,    -1,   340,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      26,    -1,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,   103,    -1,   105,
     106,   107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,
     116,    -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,
     126,    -1,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,    -1,   144,    -1,
      -1,   147,    -1,   149,   150,   151,   152,   153,    -1,    -1,
     156,    -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,    -1,
     176,    -1,   178,   179,   180,   181,   182,    -1,   184,   185,
      -1,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
      -1,    -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,   248,   249,    -1,   251,   252,   253,   254,    -1,
     256,   257,    -1,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,    -1,   280,   281,   282,   283,    -1,   285,
     286,   287,   288,   289,    -1,    -1,   292,   293,   294,   295,
     296,    -1,    -1,   299,   300,   301,   302,   303,   304,    -1,
     306,   307,    -1,    -1,   310,   311,   312,   313,   314,   315,
      -1,   317,    -1,   319,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,   105,   106,   107,    -1,
     109,    -1,   111,    -1,    -1,    -1,   115,   116,    -1,    -1,
     119,    -1,   121,   122,    -1,   124,   125,   126,    -1,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,   142,    -1,   144,    -1,    -1,   147,    -1,
     149,   150,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
     159,   160,   161,    -1,    -1,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,    -1,   176,    -1,   178,
     179,   180,   181,   182,    -1,   184,   185,    -1,   187,    -1,
     189,   190,   191,   192,    -1,    -1,   195,    -1,    -1,    -1,
     199,   200,    -1,    -1,   203,    -1,    -1,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,    -1,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,   248,
     249,    -1,   251,   252,   253,   254,    -1,   256,   257,    -1,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
      -1,   270,   271,   272,   273,    -1,   275,   276,    -1,   278,
      -1,   280,   281,   282,   283,    -1,   285,   286,   287,   288,
     289,    -1,    -1,   292,   293,   294,   295,   296,    -1,    -1,
     299,   300,   301,   302,   303,   304,    -1,   306,   307,    -1,
      -1,   310,   311,   312,   313,   314,   315,    -1,   317,    -1,
     319,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,   133,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,
      -1,    -1,   199,   200,    -1,    -1,   203,   204,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,   255,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,   305,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,   110,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,   157,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,   291,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      -1,    58,    -1,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,   106,
     107,    -1,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,   133,    -1,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
      -1,   178,   179,   180,   181,    -1,    -1,   184,   185,   186,
     187,    -1,    -1,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,    -1,   204,   205,    -1,
     207,   208,   209,    -1,    -1,    -1,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    -1,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,   255,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,    -1,   282,    -1,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,   305,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,
      -1,   198,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,   118,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,   298,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,   203,    -1,    -1,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,   281,
     282,   283,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,   203,    -1,    -1,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,   281,   282,   283,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    -1,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,    -1,   101,
     102,    -1,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
     182,    -1,   184,   185,    -1,   187,    -1,    -1,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,    -1,    -1,    -1,    -1,   207,   208,   209,    -1,    -1,
      -1,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,    -1,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,    -1,
     282,    -1,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      -1,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,    -1,   184,   185,    -1,
     187,    -1,    -1,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
     207,   208,   209,    -1,    -1,    -1,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,    -1,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,   252,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,    -1,   280,    -1,   282,    -1,    -1,   285,   286,
     287,   288,   289,    -1,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    -1,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    -1,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      92,    93,    -1,    95,    -1,    97,    98,    99,    -1,   101,
     102,    -1,    -1,   105,   106,   107,    -1,   109,    -1,   111,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,   125,   126,    -1,   128,   129,   130,   131,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   140,    -1,
     142,    -1,   144,    -1,    -1,   147,    -1,   149,   150,   151,
     152,   153,    -1,    -1,   156,    -1,    -1,   159,   160,   161,
      -1,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,    -1,   176,    -1,   178,   179,   180,   181,
      -1,    -1,   184,   185,    -1,   187,    -1,    -1,   190,   191,
     192,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
      -1,    -1,    -1,    -1,    -1,   207,   208,   209,    -1,    -1,
      -1,   213,   214,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,   237,    -1,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,   248,   249,    -1,   251,
     252,   253,   254,    -1,   256,   257,    -1,   259,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,    -1,   280,    -1,
     282,    -1,    -1,   285,   286,   287,   288,   289,    -1,    -1,
     292,   293,   294,   295,   296,    -1,    -1,   299,   300,   301,
     302,   303,   304,    -1,   306,   307,    -1,    -1,   310,   311,
     312,   313,   314,   315,    -1,   317,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      -1,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,   106,
     107,    -1,   109,    -1,   111,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
      -1,   128,   129,   130,   131,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,    -1,   142,    -1,   144,    -1,    -1,
     147,    -1,   149,   150,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   159,   160,   161,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,   176,
      -1,   178,   179,   180,   181,    -1,    -1,   184,   185,    -1,
     187,    -1,    -1,   190,   191,   192,    -1,    -1,   195,    -1,
      -1,    -1,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
     207,   208,   209,    -1,    -1,    -1,   213,   214,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     237,    -1,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,   248,   249,    -1,   251,    -1,   253,   254,    -1,   256,
     257,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,     9,   280,    -1,   282,    -1,    -1,   285,   286,
     287,   288,   289,    20,    -1,   292,   293,   294,   295,   296,
      -1,    -1,   299,   300,   301,   302,   303,   304,    -1,   306,
     307,    38,    -1,   310,   311,   312,   313,   314,   315,    -1,
     317,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   269,   270,   271,    -1,   273,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   282,    -1,    -1,    -1,   286,
     287,    -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,
     297
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,     3,    12,    13,    14,    26,    44,    46,    47,    51,
      52,    58,    59,    72,    75,    81,    89,    94,    99,   101,
     105,   117,   137,   159,   160,   165,   172,   185,   214,   225,
     227,   231,   235,   237,   241,   246,   251,   254,   260,   285,
     293,   295,   299,   338,   346,   347,   348,   349,   351,   352,
     353,   357,   360,   362,   363,   367,   378,   379,   380,   383,
     384,   392,   393,   402,   429,   434,   435,   442,   447,   449,
     451,   452,   465,   466,   467,   468,   473,   478,   479,   484,
     485,   488,   492,   493,   504,   510,   523,   524,   526,   529,
     531,   532,   535,   537,   538,   546,   547,   548,   549,   550,
     555,   556,   557,   561,   562,   563,   564,   566,   567,   568,
     569,   570,   575,   578,   582,   584,   585,   589,   590,   594,
     595,   598,   599,   600,   601,   602,   280,   312,   551,     9,
      56,    70,    87,   115,   118,   130,   151,   199,   242,   247,
     269,   270,   282,   287,   297,   551,     3,     4,     5,     6,
       7,     8,     9,    11,    12,    20,    21,    22,    24,    25,
      26,    28,    30,    31,    33,    34,    35,    36,    39,    40,
      41,    42,    44,    45,    46,    47,    48,    51,    52,    53,
      55,    56,    57,    58,    60,    61,    63,    68,    69,    70,
      71,    72,    73,    74,    75,    77,    79,    80,    81,    82,
      83,    87,    88,    89,    90,    92,    93,    95,    97,    98,
      99,   100,   101,   102,   103,   105,   106,   107,   109,   111,
     115,   116,   119,   121,   122,   124,   125,   126,   128,   129,
     130,   131,   134,   135,   136,   137,   138,   139,   140,   142,
     144,   147,   149,   150,   151,   152,   153,   156,   159,   160,
     161,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   176,   178,   179,   180,   181,   182,   184,   185,
     187,   189,   190,   191,   192,   195,   199,   200,   203,   206,
     207,   208,   209,   211,   212,   213,   214,   216,   217,   218,
     219,   220,   221,   222,   223,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   247,   248,   249,   251,   252,
     253,   254,   256,   257,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   270,   271,   272,   273,   275,   276,
     278,   280,   281,   282,   283,   285,   286,   287,   288,   289,
     292,   293,   294,   295,   296,   299,   300,   301,   302,   303,
     304,   306,   307,   310,   311,   312,   313,   314,   315,   317,
     702,   713,   717,   718,   177,   196,   698,   700,   706,   713,
     721,   197,   551,    29,   398,     9,    20,    38,    54,    70,
      76,    87,   116,   118,   161,   199,   201,   242,   270,   271,
     273,   282,   286,   287,   291,   297,   403,   443,   476,   505,
     511,   214,   702,   702,   113,     9,    20,    38,    56,    70,
      87,   115,   118,   130,   199,   218,   240,   242,   247,   269,
     270,   282,   287,   297,   306,   448,   480,   551,   702,   570,
     577,     4,    10,    24,   106,   111,   153,   178,   216,   226,
     323,   330,   489,   490,   702,   710,    10,    59,    81,    99,
     137,   224,   240,   246,   271,   273,   282,   295,   296,   494,
     495,   496,   143,   700,   713,   319,   707,   711,   269,   605,
     489,   702,   700,   702,    70,   130,   269,   533,   241,   713,
      10,   249,   275,   280,   713,   117,   501,   551,   713,    10,
      85,   607,    55,   161,   173,   249,   275,   280,   368,   369,
     713,    10,   249,   275,   280,   713,   280,   605,   331,   700,
     198,   629,   700,   114,   572,   599,   600,     0,   342,   305,
     571,    96,   141,   202,   290,   608,   609,    23,    27,    29,
      62,   112,   114,   123,   133,   145,   146,   148,   155,   157,
     175,   186,   204,   205,   236,   255,   305,   317,   698,   708,
     715,   717,   719,   482,   713,   703,   713,   482,   708,   712,
     713,   629,   702,    45,   322,   325,   326,   327,   329,   330,
     331,   332,   333,   334,   528,   664,   665,   713,   702,   700,
     629,   702,   702,   482,   712,   147,   221,   552,   553,   554,
     336,   341,   689,   690,   197,     9,    38,    50,    54,    56,
      70,    87,   115,   130,   152,   199,   240,   242,   247,   269,
     282,   287,   306,   448,   486,   700,   708,   702,   338,   282,
     703,   482,   271,   273,   712,   271,   273,    45,   528,   230,
     364,   713,   702,   702,   482,   712,   247,   269,   448,    56,
     130,   115,   240,   306,   702,   596,   629,   708,   702,   338,
     703,   708,   712,    45,   528,   702,   702,   702,   356,   712,
     151,   481,   482,   338,   583,   571,   490,    10,   490,    10,
     490,   490,   710,   113,   127,   491,   217,   197,   343,   700,
     699,   700,   491,   338,   579,   702,   700,   713,    23,   315,
     147,   200,   494,   277,   197,    17,    28,    30,    31,    37,
      38,    40,    41,    48,    57,    64,    65,    66,    67,    73,
      74,    88,   100,   103,   104,   107,   139,   140,   142,   162,
     163,   174,   176,   183,   188,   189,   190,   199,   206,   211,
     222,   238,   250,   257,   267,   275,   276,   281,   283,   284,
     291,   297,   303,   317,   318,   320,   321,   322,   324,   329,
     330,   331,   333,   334,   338,   599,   637,   638,   639,   644,
     645,   646,   648,   649,   650,   651,   654,   655,   658,   660,
     661,   662,   666,   683,   688,   692,   693,   698,   708,   709,
     710,   711,   714,   717,    10,   381,   701,   702,   249,   368,
      76,   376,   711,    23,    42,   368,   315,   553,   277,   325,
     341,    23,   315,   147,   554,   700,   338,   700,   251,   331,
     112,   573,   339,   339,   348,   700,    10,    85,   606,   606,
      33,   606,   108,   158,   194,   612,   618,   690,   338,   207,
     228,   341,   483,   207,   228,   251,   379,     7,    89,   207,
     251,   389,   338,   512,     7,    89,   228,   361,   207,   228,
     251,   387,   388,   228,   482,   338,   341,   207,   228,   436,
       7,    12,    47,    59,    89,   228,   251,   385,   386,   388,
     207,   228,   197,   207,   228,   251,   310,   350,   379,   156,
     198,   313,   343,   552,   658,    10,    13,    14,    15,    16,
      17,    18,    19,    32,    37,    38,    43,    49,    50,    54,
      59,    64,    65,    66,    67,    76,    78,    84,    85,    86,
      91,    94,    96,   104,   108,   110,   113,   117,   118,   120,
     127,   132,   141,   143,   154,   158,   162,   163,   177,   183,
     188,   193,   194,   196,   197,   198,   201,   202,   210,   215,
     224,   246,   250,   258,   269,   274,   277,   279,   284,   290,
     291,   297,   298,   308,   309,   317,   331,   705,   716,   717,
     718,   719,   720,   689,   700,   708,   338,   702,   708,   191,
      45,   528,   702,   702,   151,   482,   338,   416,   338,   469,
      43,    28,    30,    31,    40,    41,    73,    74,   107,   139,
     140,   142,   174,   176,   190,   222,   252,   257,   275,   276,
     303,   317,   634,   636,   638,   639,   643,   645,   646,   647,
     649,   650,   654,   655,   714,   717,   702,   350,    18,   565,
     350,   482,   469,    23,   365,   207,   450,     8,    25,   453,
      18,   469,   350,   700,   700,   151,   482,   706,   713,   708,
     702,   700,    29,    68,   136,   179,   243,   309,   631,   338,
      36,   233,   390,   634,   512,   482,   338,   197,   197,   343,
     319,   377,   713,   343,   390,   658,   669,    59,   576,   582,
     585,   589,   594,   595,   598,   702,    70,   115,   151,   242,
     269,   270,   497,   699,   496,    76,   302,   338,   586,   598,
     127,   343,   591,   702,   580,   634,    18,   109,   534,   534,
     156,   108,   197,   241,   713,   338,   336,   599,   673,   304,
     652,   658,   687,   338,   652,   652,   338,   338,   338,   338,
     338,   642,   642,   212,   599,   338,   338,   640,   338,   338,
      40,    41,   652,   658,   338,   338,   641,   338,   338,   338,
     338,   338,   310,   311,   338,   656,   338,   656,   338,   338,
     599,   691,   658,   658,   658,   658,   599,   658,   669,   711,
      41,   338,   653,   338,   711,    15,    18,    22,    27,   123,
     127,   145,   146,   157,   183,   186,   199,   201,   255,   322,
     325,   326,   327,   329,   330,   331,   332,   333,   334,   340,
     664,   666,   668,   205,   658,   143,   343,   603,   690,   338,
      79,   124,   382,   343,    42,    76,   377,    18,    76,   161,
     317,   318,   330,   375,   439,   440,   441,   655,   710,   711,
      76,   104,   193,   197,   284,   370,   371,   372,   374,   377,
     439,   370,   713,   156,   700,   694,   695,   713,   571,   338,
     574,   599,   601,   602,   601,   610,   611,   658,   601,   221,
     295,    10,   614,   658,   615,   658,   618,   619,   612,   613,
     331,   525,   634,   277,   277,   705,   341,   277,   277,   368,
      43,    54,   110,   215,   291,   414,   415,    54,    76,   183,
     277,    76,   183,   127,   134,   203,   339,   513,   514,   515,
     207,   228,   277,   297,   277,   277,   270,   343,   277,   298,
     182,   527,   634,   528,   277,   277,    34,    69,   129,   167,
     169,   179,   232,   260,   437,    50,   414,   536,   536,   197,
     278,    54,   536,   277,   536,   311,   343,   277,   277,   629,
     277,   277,   368,   354,   221,   229,   248,   373,   552,   337,
     344,   338,   634,   197,   512,   439,   482,   338,   145,   197,
     197,   482,   145,   417,   418,   713,   310,   399,   470,   471,
     716,   338,   636,    18,    17,   635,    71,   122,   168,   171,
     244,   314,   338,   657,   483,     8,   558,   634,   358,   476,
     712,    59,   366,   402,   434,   452,   492,   504,   555,   702,
     164,    81,   137,   295,   454,   455,   338,   354,   436,   192,
     338,   431,   377,   108,   197,   512,    18,   416,   310,   311,
     597,   243,   658,   525,    18,   390,   298,   527,   700,   700,
     712,   390,   482,   339,   343,   403,   701,   502,   503,   708,
     701,   701,   699,   701,   277,   302,   338,   587,   588,   713,
       5,    98,   238,   253,   592,   700,   187,   593,   339,   343,
     581,   585,   589,   594,   598,   497,   713,   669,   669,   672,
     673,   338,   308,   684,   685,   658,   669,   658,   669,   710,
     710,   710,    71,   122,   168,   171,   244,   314,   317,   319,
     670,   674,   710,   710,   710,   652,   652,   658,   710,   528,
     658,   675,   329,   330,   333,   334,   659,   660,   662,   666,
     677,   339,   669,   658,   669,   678,   275,   275,   710,   710,
     658,    32,   113,   154,   279,   658,   669,   681,   689,   339,
     343,   251,   710,   710,   657,   658,   716,   275,   659,   658,
     338,   599,   682,    85,   104,   183,   188,   192,   284,   292,
     658,    27,   123,   127,   157,   255,   338,   658,   277,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   634,   658,
      10,    16,   258,   663,   238,   338,   662,   116,   161,   269,
     271,   273,   604,   700,   693,   113,   621,    10,    85,   331,
     339,   669,   702,   280,   318,   710,   338,   711,   343,   339,
     343,   621,   691,   569,   700,   701,   343,    19,    84,   298,
     198,   192,   620,   194,   343,   158,   339,   712,   702,   705,
     712,   703,   338,   702,   149,   149,   338,   702,   188,   712,
     658,   188,   339,   343,   317,   516,   518,   634,   714,   715,
     717,   277,   277,   712,   356,   712,   702,   702,   388,   702,
     704,   713,   343,   339,   343,   712,   702,   439,    33,   438,
     439,   439,    69,   167,   169,   350,   350,   407,   713,   713,
     702,   269,   702,   713,   702,   702,    47,   195,   386,   712,
     702,   228,   712,   712,    60,    61,    93,   127,   180,   181,
     209,   268,   289,   300,   355,    53,   288,   221,   658,   525,
      18,   482,   145,   145,   298,   527,   188,   487,   711,   482,
     482,   145,   487,   339,   343,   195,   113,   277,   394,   339,
     343,   325,   658,    17,   635,   634,   336,   336,   277,   277,
     277,   277,   710,   454,    92,   164,   207,   270,   272,   559,
     408,   268,   297,   359,   108,   365,   403,   511,   711,   197,
     201,   632,   633,   713,   700,   157,   404,   405,   406,   407,
     412,   414,   432,   433,   713,    18,   310,   311,   430,   119,
     711,   700,   234,   539,    18,   121,   121,   108,   339,   634,
     704,   339,   390,   390,   658,   269,   343,   512,   118,   498,
     499,   713,    76,   658,   696,   697,   339,   343,   691,    98,
     253,    98,   253,   238,   295,   170,   634,   113,   339,   337,
     337,   343,   710,   658,    91,   685,   686,    18,   339,   298,
     339,   339,   339,   339,   343,   339,   113,   339,   339,   339,
     343,   339,   343,   339,   210,   676,   339,   659,   659,   659,
     659,   127,   145,   199,   325,   326,   327,   329,   330,   331,
     332,   333,   334,   340,   666,   659,   339,   339,   108,   113,
     679,   680,   339,   315,   315,   339,   339,    18,   681,   669,
     681,   681,   113,   339,   691,   658,   713,   339,   339,   315,
      15,    95,   669,   113,   104,   188,   192,   284,   292,   338,
      95,   659,   658,   682,   658,   277,   528,   658,   338,   599,
     271,   273,   271,   273,   700,   605,   605,   338,   599,   622,
     623,   624,   629,   630,   661,   698,   631,   669,   669,   339,
     339,   553,   710,   657,   372,   695,   631,   325,   339,   611,
     199,   664,   667,   701,   615,   615,   614,   207,   228,   658,
     415,   338,   338,   417,   390,   514,   518,   483,   712,   702,
     207,   228,   634,   207,   182,   634,   439,   439,   439,   634,
      89,   251,   287,   389,   390,   390,   277,   277,   209,   118,
     711,   710,   209,   294,   337,   339,   634,   145,   487,   487,
     704,   339,   145,   145,   487,   418,   263,   264,   395,   711,
     471,   199,   330,   439,   472,   517,   518,   667,   711,   339,
     336,   339,   710,   337,   710,   122,   168,   244,   168,   244,
     244,   171,   339,   197,   325,   560,   560,   560,   560,   560,
      43,    54,    76,    78,   132,   183,   188,   215,   224,   291,
     409,   410,   411,   710,   356,   287,   269,   700,   455,   339,
     343,   634,   338,   700,   339,   343,   339,   343,    99,   195,
     195,   598,   444,   702,   277,   298,   506,   517,   197,   598,
     598,   390,   339,   390,   390,   700,   503,   713,   310,   343,
     500,   339,   343,   302,   598,   588,    98,    98,   498,   673,
     339,   274,   658,    94,   634,   482,   710,   658,   658,   710,
     658,   679,   659,    85,   183,   192,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   634,   659,   658,   658,   680,
     679,   656,   656,   634,   339,   339,   339,   669,   339,   653,
     711,   660,   659,   658,   339,   658,   338,   634,   671,   658,
      15,    95,    95,   658,   339,    95,   658,   605,   605,   605,
     605,   700,   700,   599,   623,   624,    18,   625,   713,   343,
      62,   114,   133,   148,   155,   175,   236,   316,   626,   625,
      18,   625,   713,   690,   118,   616,   339,   339,   339,    76,
     658,   338,   277,   277,   339,   417,   417,   339,   333,   277,
     277,   277,   408,   183,   183,   262,   265,   634,   702,   702,
     711,   356,   711,   711,   145,   339,   487,   145,   145,   487,
     487,   298,   400,   401,    78,   132,   183,   462,   463,   464,
     710,   310,   311,   337,   337,   657,   700,    76,   710,   711,
      76,   711,    76,   702,    76,   702,    76,   702,   338,   702,
     659,    79,   124,    78,   188,   149,   700,   298,   428,   634,
     700,   108,   456,   201,   633,   404,    97,   128,   413,   131,
     424,   406,   433,   713,   702,    18,    18,   301,   446,   483,
     711,   704,   338,    18,    35,   102,   125,   151,   234,   245,
     259,   266,   307,   519,   520,    81,   137,   246,   295,   544,
     390,   338,   431,   117,   499,   697,   338,   390,   658,   339,
     339,   339,   339,   339,   680,   113,   192,   338,   339,   657,
     671,   339,   343,   659,   658,   658,    95,   658,   339,   700,
     700,   700,   700,   339,   713,   338,   623,   148,   204,   627,
     623,   627,   148,   626,   627,   623,   148,   338,   713,   338,
      33,   120,   617,   711,   528,   712,   702,   339,   339,   428,
     287,   712,   702,   712,   188,   188,   330,   441,   713,   298,
     391,   487,   145,   487,   487,   350,    83,    79,   124,    78,
     464,   463,   337,   115,   115,   113,   461,   658,   183,   410,
     428,   416,   130,   298,   338,    90,   457,    99,   455,   339,
      77,    77,   338,   310,   311,   425,   583,   444,   150,   445,
     113,   338,   507,   508,   661,   713,   521,   711,   197,   245,
     377,   188,    80,   144,   310,   520,   522,   277,    18,   200,
     696,   659,   338,   671,   339,   634,   658,   625,   338,   701,
     623,   197,   298,   628,   623,   148,   623,   632,   338,   632,
     713,   669,   658,   657,   339,   224,   428,   658,   487,   396,
     711,   503,    18,   530,   700,   462,   339,   166,   419,   270,
     704,   238,   261,   458,   219,   425,   699,   195,   195,   197,
     426,   711,   482,   658,   339,   343,   298,   482,   509,   509,
     343,   188,    80,   144,   197,   469,   700,   339,   671,   339,
     701,   339,   658,   338,   623,   628,   339,   632,   339,   700,
      29,    63,    82,    95,   109,   188,   195,   220,   397,   530,
      21,   126,   108,   114,   208,   256,   197,   420,   421,   422,
     702,    18,   708,   426,   339,    52,   270,   427,   339,   427,
     508,   482,   711,   135,   188,   631,   339,   339,   701,   339,
     416,   565,   565,   183,   220,   565,   565,    90,    81,   295,
     197,   422,   197,   421,   115,   199,   265,   474,   475,   338,
     427,    81,    89,   213,   702,   509,   631,   135,    86,   339,
     419,   711,   711,   188,   417,   711,   711,   238,    36,   179,
     233,   251,   423,   423,   710,   710,   634,   343,   318,   320,
     321,   323,   459,   460,   711,   713,   239,   239,    11,   138,
     545,   420,   417,    99,     6,    76,   188,   708,   528,   475,
     339,   343,   184,   338,   540,   542,   547,   585,   589,   594,
     598,   462,   219,   512,   223,   338,   477,   460,   541,   542,
     543,   599,   600,   708,   527,   339,   342,   338,   339,   543,
     459,   477,   339
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 468 "gram.y"
    { parsetree = yyvsp[0].list; }
    break;

  case 3:
#line 473 "gram.y"
    { if (yyvsp[0].node != NULL)
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				  else
					yyval.list = yyvsp[-2].list;
				}
    break;

  case 4:
#line 479 "gram.y"
    { if (yyvsp[0].node != NULL)
						yyval.list = list_make1(yyvsp[0].node);
					  else
						yyval.list = NIL;
					}
    break;

  case 79:
#line 562 "gram.y"
    { yyval.node = NULL; }
    break;

  case 80:
#line 574 "gram.y"
    {
					CreateUserStmt *n = makeNode(CreateUserStmt);
					n->user = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 81:
#line 583 "gram.y"
    {}
    break;

  case 82:
#line 584 "gram.y"
    {}
    break;

  case 83:
#line 596 "gram.y"
    {
					AlterUserStmt *n = makeNode(AlterUserStmt);
					n->user = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				 }
    break;

  case 84:
#line 607 "gram.y"
    {
					AlterUserSetStmt *n = makeNode(AlterUserSetStmt);
					n->user = yyvsp[-2].str;
					n->variable = yyvsp[0].vsetstmt->name;
					n->value = yyvsp[0].vsetstmt->args;
					yyval.node = (Node *)n;
				}
    break;

  case 85:
#line 615 "gram.y"
    {
					AlterUserSetStmt *n = makeNode(AlterUserSetStmt);
					n->user = yyvsp[-1].str;
					n->variable = ((VariableResetStmt *)yyvsp[0].node)->name;
					n->value = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 86:
#line 636 "gram.y"
    {
					DropUserStmt *n = makeNode(DropUserStmt);
					n->users = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 87:
#line 647 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 88:
#line 648 "gram.y"
    { yyval.list = NIL; }
    break;

  case 89:
#line 653 "gram.y"
    {
					yyval.defelt = makeDefElem("password", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 90:
#line 657 "gram.y"
    {
					yyval.defelt = makeDefElem("encryptedPassword", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 91:
#line 661 "gram.y"
    {
					yyval.defelt = makeDefElem("unencryptedPassword", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 92:
#line 665 "gram.y"
    {
					yyval.defelt = makeDefElem("sysid", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 93:
#line 669 "gram.y"
    {
					yyval.defelt = makeDefElem("createdb", (Node *)makeInteger(TRUE));
				}
    break;

  case 94:
#line 673 "gram.y"
    {
					yyval.defelt = makeDefElem("createdb", (Node *)makeInteger(FALSE));
				}
    break;

  case 95:
#line 677 "gram.y"
    {
					yyval.defelt = makeDefElem("createuser", (Node *)makeInteger(TRUE));
				}
    break;

  case 96:
#line 681 "gram.y"
    {
					yyval.defelt = makeDefElem("createuser", (Node *)makeInteger(FALSE));
				}
    break;

  case 97:
#line 685 "gram.y"
    {
					yyval.defelt = makeDefElem("groupElts", (Node *)yyvsp[0].list);
				}
    break;

  case 98:
#line 689 "gram.y"
    {
					yyval.defelt = makeDefElem("validUntil", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 99:
#line 694 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, makeString(yyvsp[0].str)); }
    break;

  case 100:
#line 695 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 101:
#line 709 "gram.y"
    {
					CreateGroupStmt *n = makeNode(CreateGroupStmt);
					n->name = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 102:
#line 721 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 103:
#line 722 "gram.y"
    { yyval.list = NIL; }
    break;

  case 104:
#line 727 "gram.y"
    {
					yyval.defelt = makeDefElem("userElts", (Node *)yyvsp[0].list);
				}
    break;

  case 105:
#line 731 "gram.y"
    {
					yyval.defelt = makeDefElem("sysid", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 106:
#line 746 "gram.y"
    {
					AlterGroupStmt *n = makeNode(AlterGroupStmt);
					n->name = yyvsp[-3].str;
					n->action = yyvsp[-2].ival;
					n->listUsers = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 107:
#line 755 "gram.y"
    { yyval.ival = +1; }
    break;

  case 108:
#line 756 "gram.y"
    { yyval.ival = -1; }
    break;

  case 109:
#line 769 "gram.y"
    {
					DropGroupStmt *n = makeNode(DropGroupStmt);
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 110:
#line 785 "gram.y"
    {
					CreateSchemaStmt *n = makeNode(CreateSchemaStmt);
					/* One can omit the schema name or the authorization id. */
					if (yyvsp[-3].str != NULL)
						n->schemaname = yyvsp[-3].str;
					else
						n->schemaname = yyvsp[-1].str;
					n->authid = yyvsp[-1].str;
					n->schemaElts = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 111:
#line 797 "gram.y"
    {
					CreateSchemaStmt *n = makeNode(CreateSchemaStmt);
					/* ...but not both */
					n->schemaname = yyvsp[-1].str;
					n->authid = NULL;
					n->schemaElts = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 112:
#line 808 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 113:
#line 809 "gram.y"
    { yyval.str = NULL; }
    break;

  case 114:
#line 813 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 115:
#line 814 "gram.y"
    { yyval.list = NIL; }
    break;

  case 122:
#line 842 "gram.y"
    {
					VariableSetStmt *n = yyvsp[0].vsetstmt;
					n->is_local = false;
					yyval.node = (Node *) n;
				}
    break;

  case 123:
#line 848 "gram.y"
    {
					VariableSetStmt *n = yyvsp[0].vsetstmt;
					n->is_local = true;
					yyval.node = (Node *) n;
				}
    break;

  case 124:
#line 854 "gram.y"
    {
					VariableSetStmt *n = yyvsp[0].vsetstmt;
					n->is_local = false;
					yyval.node = (Node *) n;
				}
    break;

  case 125:
#line 862 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = yyvsp[-2].str;
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 126:
#line 869 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = yyvsp[-2].str;
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 127:
#line 876 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "timezone";
					if (yyvsp[0].node != NULL)
						n->args = list_make1(yyvsp[0].node);
					yyval.vsetstmt = n;
				}
    break;

  case 128:
#line 884 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "TRANSACTION";
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 129:
#line 891 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "SESSION CHARACTERISTICS";
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 130:
#line 898 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "client_encoding";
					if (yyvsp[0].str != NULL)
						n->args = list_make1(makeStringConst(yyvsp[0].str, NULL));
					yyval.vsetstmt = n;
				}
    break;

  case 131:
#line 906 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "session_authorization";
					n->args = list_make1(makeStringConst(yyvsp[0].str, NULL));
					yyval.vsetstmt = n;
				}
    break;

  case 132:
#line 913 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "session_authorization";
					n->args = NIL;
					yyval.vsetstmt = n;
				}
    break;

  case 133:
#line 922 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 134:
#line 924 "gram.y"
    {
					int qLen = strlen(yyvsp[-2].str);
					char* qualName = palloc(qLen + strlen(yyvsp[0].str) + 2);
					strcpy(qualName, yyvsp[-2].str);
					qualName[qLen] = '.';
					strcpy(qualName + qLen + 1, yyvsp[0].str);
					yyval.str = qualName;
				}
    break;

  case 135:
#line 935 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 136:
#line 936 "gram.y"
    { yyval.list = NIL; }
    break;

  case 137:
#line 939 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 138:
#line 940 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 139:
#line 944 "gram.y"
    { yyval.node = makeStringConst(yyvsp[0].str, NULL); }
    break;

  case 140:
#line 946 "gram.y"
    { yyval.node = makeStringConst(yyvsp[0].str, NULL); }
    break;

  case 141:
#line 948 "gram.y"
    { yyval.node = makeAConst(yyvsp[0].value); }
    break;

  case 142:
#line 951 "gram.y"
    { yyval.str = "read uncommitted"; }
    break;

  case 143:
#line 952 "gram.y"
    { yyval.str = "read committed"; }
    break;

  case 144:
#line 953 "gram.y"
    { yyval.str = "repeatable read"; }
    break;

  case 145:
#line 954 "gram.y"
    { yyval.str = "serializable"; }
    break;

  case 146:
#line 958 "gram.y"
    { yyval.str = "true"; }
    break;

  case 147:
#line 959 "gram.y"
    { yyval.str = "false"; }
    break;

  case 148:
#line 960 "gram.y"
    { yyval.str = "on"; }
    break;

  case 149:
#line 961 "gram.y"
    { yyval.str = "off"; }
    break;

  case 150:
#line 974 "gram.y"
    {
					yyval.node = makeStringConst(yyvsp[0].str, NULL);
				}
    break;

  case 151:
#line 978 "gram.y"
    {
					yyval.node = makeStringConst(yyvsp[0].str, NULL);
				}
    break;

  case 152:
#line 982 "gram.y"
    {
					A_Const *n = (A_Const *) makeStringConst(yyvsp[-1].str, yyvsp[-2].typnam);
					if (yyvsp[0].ival != INTERVAL_FULL_RANGE)
					{
						if ((yyvsp[0].ival & ~(INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE))) != 0)
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("time zone interval must be HOUR or HOUR TO MINUTE")));
						n->typename->typmod = INTERVAL_TYPMOD(INTERVAL_FULL_PRECISION, yyvsp[0].ival);
					}
					yyval.node = (Node *)n;
				}
    break;

  case 153:
#line 995 "gram.y"
    {
					A_Const *n = (A_Const *) makeStringConst(yyvsp[-1].str, yyvsp[-5].typnam);
					if (yyvsp[-3].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision must not be negative",
										yyvsp[-3].ival)));
					if (yyvsp[-3].ival > MAX_INTERVAL_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision reduced to maximum allowed, %d",
										yyvsp[-3].ival, MAX_INTERVAL_PRECISION)));
						yyvsp[-3].ival = MAX_INTERVAL_PRECISION;
					}

					if ((yyvsp[0].ival != INTERVAL_FULL_RANGE)
						&& ((yyvsp[0].ival & ~(INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE))) != 0))
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("time zone interval must be HOUR or HOUR TO MINUTE")));

					n->typename->typmod = INTERVAL_TYPMOD(yyvsp[-3].ival, yyvsp[0].ival);

					yyval.node = (Node *)n;
				}
    break;

  case 154:
#line 1021 "gram.y"
    { yyval.node = makeAConst(yyvsp[0].value); }
    break;

  case 155:
#line 1022 "gram.y"
    { yyval.node = NULL; }
    break;

  case 156:
#line 1023 "gram.y"
    { yyval.node = NULL; }
    break;

  case 157:
#line 1027 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 158:
#line 1028 "gram.y"
    { yyval.str = NULL; }
    break;

  case 159:
#line 1029 "gram.y"
    { yyval.str = NULL; }
    break;

  case 160:
#line 1033 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 161:
#line 1034 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 162:
#line 1040 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 163:
#line 1046 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "timezone";
					yyval.node = (Node *) n;
				}
    break;

  case 164:
#line 1052 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "transaction_isolation";
					yyval.node = (Node *) n;
				}
    break;

  case 165:
#line 1058 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "session_authorization";
					yyval.node = (Node *) n;
				}
    break;

  case 166:
#line 1064 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "all";
					yyval.node = (Node *) n;
				}
    break;

  case 167:
#line 1073 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 168:
#line 1079 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "timezone";
					yyval.node = (Node *) n;
				}
    break;

  case 169:
#line 1085 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "transaction_isolation";
					yyval.node = (Node *) n;
				}
    break;

  case 170:
#line 1091 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "session_authorization";
					yyval.node = (Node *) n;
				}
    break;

  case 171:
#line 1097 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "all";
					yyval.node = (Node *) n;
				}
    break;

  case 172:
#line 1107 "gram.y"
    {
					ConstraintsSetStmt *n = makeNode(ConstraintsSetStmt);
					n->constraints = yyvsp[-1].list;
					n->deferred    = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 173:
#line 1116 "gram.y"
    { yyval.list = NIL; }
    break;

  case 174:
#line 1117 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 175:
#line 1121 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 176:
#line 1122 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 177:
#line 1131 "gram.y"
    {
					CheckPointStmt *n = makeNode(CheckPointStmt);
					yyval.node = (Node *)n;
				}
    break;

  case 178:
#line 1146 "gram.y"
    {
					AlterTableStmt *n = makeNode(AlterTableStmt);
					n->relation = yyvsp[-1].range;
					n->cmds = yyvsp[0].list;
					n->relkind = OBJECT_TABLE; 
					yyval.node = (Node *)n;
				}
    break;

  case 179:
#line 1154 "gram.y"
    {
					AlterTableStmt *n = makeNode(AlterTableStmt);
					n->relation = yyvsp[-1].range;
					n->cmds = yyvsp[0].list;
					n->relkind = OBJECT_INDEX;
					yyval.node = (Node *)n;
				}
    break;

  case 180:
#line 1164 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 181:
#line 1165 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 182:
#line 1172 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_AddColumn;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 183:
#line 1180 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ColumnDefault;
					n->name = yyvsp[-1].str;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 184:
#line 1189 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropNotNull;
					n->name = yyvsp[-3].str;
					yyval.node = (Node *)n;
				}
    break;

  case 185:
#line 1197 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetNotNull;
					n->name = yyvsp[-3].str;
					yyval.node = (Node *)n;
				}
    break;

  case 186:
#line 1205 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetStatistics;
					n->name = yyvsp[-3].str;
					n->def = (Node *) yyvsp[0].value;
					yyval.node = (Node *)n;
				}
    break;

  case 187:
#line 1214 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetStorage;
					n->name = yyvsp[-3].str;
					n->def = (Node *) makeString(yyvsp[0].str);
					yyval.node = (Node *)n;
				}
    break;

  case 188:
#line 1223 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropColumn;
					n->name = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 189:
#line 1235 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_AlterColumnType;
					n->name = yyvsp[-3].str;
					n->def = (Node *) yyvsp[-1].typnam;
					n->transform = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 190:
#line 1245 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_AddConstraint;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 191:
#line 1253 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropConstraint;
					n->name = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 192:
#line 1262 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropOids;
					yyval.node = (Node *)n;
				}
    break;

  case 193:
#line 1269 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ToastTable;
					yyval.node = (Node *)n;
				}
    break;

  case 194:
#line 1276 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ClusterOn;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 195:
#line 1284 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropCluster;
					n->name = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 196:
#line 1291 "gram.y"
    {
					yyval.node = yyvsp[0].node;
				}
    break;

  case 197:
#line 1297 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 198:
#line 1298 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 199:
#line 1305 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ChangeOwner;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 200:
#line 1313 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetTableSpace;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 201:
#line 1323 "gram.y"
    {
					/* Treat SET DEFAULT NULL the same as DROP DEFAULT */
					if (exprIsNullConstant(yyvsp[0].node))
						yyval.node = NULL;
					else
						yyval.node = yyvsp[0].node;
				}
    break;

  case 202:
#line 1330 "gram.y"
    { yyval.node = NULL; }
    break;

  case 203:
#line 1334 "gram.y"
    { yyval.dbehavior = DROP_CASCADE; }
    break;

  case 204:
#line 1335 "gram.y"
    { yyval.dbehavior = DROP_RESTRICT; }
    break;

  case 205:
#line 1336 "gram.y"
    { yyval.dbehavior = DROP_RESTRICT; /* default */ }
    break;

  case 206:
#line 1340 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 207:
#line 1341 "gram.y"
    { yyval.node = NULL; }
    break;

  case 208:
#line 1355 "gram.y"
    {
					ClosePortalStmt *n = makeNode(ClosePortalStmt);
					n->portalname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 209:
#line 1375 "gram.y"
    {
					CopyStmt *n = makeNode(CopyStmt);
					n->relation = yyvsp[-7].range;
					n->attlist = yyvsp[-6].list;
					n->is_from = yyvsp[-4].boolean;
					n->filename = yyvsp[-3].str;

					n->options = NIL;
					/* Concatenate user-supplied flags */
					if (yyvsp[-8].defelt)
						n->options = lappend(n->options, yyvsp[-8].defelt);
					if (yyvsp[-5].defelt)
						n->options = lappend(n->options, yyvsp[-5].defelt);
					if (yyvsp[-2].defelt)
						n->options = lappend(n->options, yyvsp[-2].defelt);
					if (yyvsp[0].list)
						n->options = list_concat(n->options, yyvsp[0].list);
					yyval.node = (Node *)n;
				}
    break;

  case 210:
#line 1397 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 211:
#line 1398 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 212:
#line 1407 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 213:
#line 1408 "gram.y"
    { yyval.str = NULL; }
    break;

  case 214:
#line 1409 "gram.y"
    { yyval.str = NULL; }
    break;

  case 215:
#line 1415 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 216:
#line 1416 "gram.y"
    { yyval.list = NIL; }
    break;

  case 217:
#line 1422 "gram.y"
    {
					yyval.defelt = makeDefElem("binary", (Node *)makeInteger(TRUE));
				}
    break;

  case 218:
#line 1426 "gram.y"
    {
					yyval.defelt = makeDefElem("oids", (Node *)makeInteger(TRUE));
				}
    break;

  case 219:
#line 1430 "gram.y"
    {
					yyval.defelt = makeDefElem("delimiter", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 220:
#line 1434 "gram.y"
    {
					yyval.defelt = makeDefElem("null", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 221:
#line 1438 "gram.y"
    {
					yyval.defelt = makeDefElem("csv", (Node *)makeInteger(TRUE));
				}
    break;

  case 222:
#line 1442 "gram.y"
    {
					yyval.defelt = makeDefElem("quote", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 223:
#line 1446 "gram.y"
    {
					yyval.defelt = makeDefElem("escape", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 224:
#line 1450 "gram.y"
    {
					yyval.defelt = makeDefElem("force_quote", (Node *)yyvsp[0].list);
				}
    break;

  case 225:
#line 1454 "gram.y"
    {
					yyval.defelt = makeDefElem("force_notnull", (Node *)yyvsp[0].list);
				}
    break;

  case 226:
#line 1463 "gram.y"
    {
					yyval.defelt = makeDefElem("binary", (Node *)makeInteger(TRUE));
				}
    break;

  case 227:
#line 1466 "gram.y"
    { yyval.defelt = NULL; }
    break;

  case 228:
#line 1471 "gram.y"
    {
					yyval.defelt = makeDefElem("oids", (Node *)makeInteger(TRUE));
				}
    break;

  case 229:
#line 1474 "gram.y"
    { yyval.defelt = NULL; }
    break;

  case 230:
#line 1480 "gram.y"
    {
					yyval.defelt = makeDefElem("delimiter", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 231:
#line 1483 "gram.y"
    { yyval.defelt = NULL; }
    break;

  case 232:
#line 1487 "gram.y"
    {}
    break;

  case 233:
#line 1488 "gram.y"
    {}
    break;

  case 234:
#line 1501 "gram.y"
    {
					CreateStmt *n = makeNode(CreateStmt);
					yyvsp[-7].range->istemp = yyvsp[-9].boolean;
					n->relation = yyvsp[-7].range;
					n->tableElts = yyvsp[-5].list;
					n->inhRelations = yyvsp[-3].list;
					n->constraints = NIL;
					n->hasoids = yyvsp[-2].withoids;
					n->oncommit = yyvsp[-1].oncommit;
					n->tablespacename = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 235:
#line 1515 "gram.y"
    {
					/* SQL99 CREATE TABLE OF <UDT> (cols) seems to be satisfied
					 * by our inheritance capabilities. Let's try it...
					 */
					CreateStmt *n = makeNode(CreateStmt);
					yyvsp[-8].range->istemp = yyvsp[-10].boolean;
					n->relation = yyvsp[-8].range;
					n->tableElts = yyvsp[-4].list;
					n->inhRelations = list_make1(yyvsp[-6].range);
					n->constraints = NIL;
					n->hasoids = yyvsp[-2].withoids;
					n->oncommit = yyvsp[-1].oncommit;
					n->tablespacename = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 236:
#line 1539 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 237:
#line 1540 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 238:
#line 1541 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 239:
#line 1542 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 240:
#line 1543 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 241:
#line 1544 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 242:
#line 1545 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 243:
#line 1549 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 244:
#line 1550 "gram.y"
    { yyval.list = NIL; }
    break;

  case 245:
#line 1555 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].node);
				}
    break;

  case 246:
#line 1559 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				}
    break;

  case 247:
#line 1565 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 248:
#line 1566 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 249:
#line 1567 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 250:
#line 1571 "gram.y"
    {
					ColumnDef *n = makeNode(ColumnDef);
					n->colname = yyvsp[-2].str;
					n->typename = yyvsp[-1].typnam;
					n->constraints = yyvsp[0].list;
					n->is_local = true;
					yyval.node = (Node *)n;
				}
    break;

  case 251:
#line 1582 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 252:
#line 1583 "gram.y"
    { yyval.list = NIL; }
    break;

  case 253:
#line 1588 "gram.y"
    {
					switch (nodeTag(yyvsp[0].node))
					{
						case T_Constraint:
							{
								Constraint *n = (Constraint *)yyvsp[0].node;
								n->name = yyvsp[-1].str;
							}
							break;
						case T_FkConstraint:
							{
								FkConstraint *n = (FkConstraint *)yyvsp[0].node;
								n->constr_name = yyvsp[-1].str;
							}
							break;
						default:
							break;
					}
					yyval.node = yyvsp[0].node;
				}
    break;

  case 254:
#line 1608 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 255:
#line 1609 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 256:
#line 1629 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_NOTNULL;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 257:
#line 1640 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_NULL;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 258:
#line 1651 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_UNIQUE;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 259:
#line 1662 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_PRIMARY;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 260:
#line 1673 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_CHECK;
					n->name = NULL;
					n->raw_expr = yyvsp[-1].node;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 261:
#line 1684 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_DEFAULT;
					n->name = NULL;
					if (exprIsNullConstant(yyvsp[0].node))
					{
						/* DEFAULT NULL should be reported as empty expr */
						n->raw_expr = NULL;
					}
					else
					{
						n->raw_expr = yyvsp[0].node;
					}
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 262:
#line 1703 "gram.y"
    {
					FkConstraint *n = makeNode(FkConstraint);
					n->constr_name		= NULL;
					n->pktable			= yyvsp[-3].range;
					n->fk_attrs			= NIL;
					n->pk_attrs			= yyvsp[-2].list;
					n->fk_matchtype		= yyvsp[-1].ival;
					n->fk_upd_action	= (char) (yyvsp[0].ival >> 8);
					n->fk_del_action	= (char) (yyvsp[0].ival & 0xFF);
					n->deferrable		= FALSE;
					n->initdeferred		= FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 263:
#line 1731 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_DEFERRABLE;
					yyval.node = (Node *)n;
				}
    break;

  case 264:
#line 1737 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_NOT_DEFERRABLE;
					yyval.node = (Node *)n;
				}
    break;

  case 265:
#line 1743 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_DEFERRED;
					yyval.node = (Node *)n;
				}
    break;

  case 266:
#line 1749 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_IMMEDIATE;
					yyval.node = (Node *)n;
				}
    break;

  case 267:
#line 1767 "gram.y"
    {
					InhRelation *n = makeNode(InhRelation);
					n->relation = yyvsp[-1].range;
					n->including_defaults = yyvsp[0].boolean;

					yyval.node = (Node *)n;
				}
    break;

  case 268:
#line 1777 "gram.y"
    { yyval.boolean = true; }
    break;

  case 269:
#line 1778 "gram.y"
    { yyval.boolean = false; }
    break;

  case 270:
#line 1779 "gram.y"
    { yyval.boolean = false; }
    break;

  case 271:
#line 1789 "gram.y"
    {
					switch (nodeTag(yyvsp[0].node))
					{
						case T_Constraint:
							{
								Constraint *n = (Constraint *)yyvsp[0].node;
								n->name = yyvsp[-1].str;
							}
							break;
						case T_FkConstraint:
							{
								FkConstraint *n = (FkConstraint *)yyvsp[0].node;
								n->constr_name = yyvsp[-1].str;
							}
							break;
						default:
							break;
					}
					yyval.node = yyvsp[0].node;
				}
    break;

  case 272:
#line 1809 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 273:
#line 1814 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_CHECK;
					n->name = NULL;
					n->raw_expr = yyvsp[-1].node;
					n->cooked_expr = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 274:
#line 1824 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_UNIQUE;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = yyvsp[-2].list;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 275:
#line 1835 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_PRIMARY;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = yyvsp[-2].list;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 276:
#line 1847 "gram.y"
    {
					FkConstraint *n = makeNode(FkConstraint);
					n->constr_name		= NULL;
					n->pktable			= yyvsp[-4].range;
					n->fk_attrs			= yyvsp[-7].list;
					n->pk_attrs			= yyvsp[-3].list;
					n->fk_matchtype		= yyvsp[-2].ival;
					n->fk_upd_action	= (char) (yyvsp[-1].ival >> 8);
					n->fk_del_action	= (char) (yyvsp[-1].ival & 0xFF);
					n->deferrable		= (yyvsp[0].ival & 1) != 0;
					n->initdeferred		= (yyvsp[0].ival & 2) != 0;
					yyval.node = (Node *)n;
				}
    break;

  case 277:
#line 1863 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 278:
#line 1864 "gram.y"
    { yyval.list = NIL; }
    break;

  case 279:
#line 1868 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 280:
#line 1869 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 281:
#line 1873 "gram.y"
    {
					yyval.node = (Node *) makeString(yyvsp[0].str);
				}
    break;

  case 282:
#line 1879 "gram.y"
    {
				yyval.ival = FKCONSTR_MATCH_FULL;
			}
    break;

  case 283:
#line 1883 "gram.y"
    {
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("MATCH PARTIAL not yet implemented")));
				yyval.ival = FKCONSTR_MATCH_PARTIAL;
			}
    break;

  case 284:
#line 1890 "gram.y"
    {
				yyval.ival = FKCONSTR_MATCH_UNSPECIFIED;
			}
    break;

  case 285:
#line 1894 "gram.y"
    {
				yyval.ival = FKCONSTR_MATCH_UNSPECIFIED;
			}
    break;

  case 286:
#line 1907 "gram.y"
    { yyval.ival = (yyvsp[0].ival << 8) | (FKCONSTR_ACTION_NOACTION & 0xFF); }
    break;

  case 287:
#line 1909 "gram.y"
    { yyval.ival = (FKCONSTR_ACTION_NOACTION << 8) | (yyvsp[0].ival & 0xFF); }
    break;

  case 288:
#line 1911 "gram.y"
    { yyval.ival = (yyvsp[-1].ival << 8) | (yyvsp[0].ival & 0xFF); }
    break;

  case 289:
#line 1913 "gram.y"
    { yyval.ival = (yyvsp[0].ival << 8) | (yyvsp[-1].ival & 0xFF); }
    break;

  case 290:
#line 1915 "gram.y"
    { yyval.ival = (FKCONSTR_ACTION_NOACTION << 8) | (FKCONSTR_ACTION_NOACTION & 0xFF); }
    break;

  case 291:
#line 1918 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 292:
#line 1921 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 293:
#line 1925 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_NOACTION; }
    break;

  case 294:
#line 1926 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_RESTRICT; }
    break;

  case 295:
#line 1927 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_CASCADE; }
    break;

  case 296:
#line 1928 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_SETNULL; }
    break;

  case 297:
#line 1929 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_SETDEFAULT; }
    break;

  case 298:
#line 1932 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 299:
#line 1933 "gram.y"
    { yyval.list = NIL; }
    break;

  case 300:
#line 1937 "gram.y"
    { yyval.withoids = MUST_HAVE_OIDS; }
    break;

  case 301:
#line 1938 "gram.y"
    { yyval.withoids = MUST_NOT_HAVE_OIDS; }
    break;

  case 302:
#line 1939 "gram.y"
    { yyval.withoids = DEFAULT_OIDS; }
    break;

  case 303:
#line 1942 "gram.y"
    { yyval.oncommit = ONCOMMIT_DROP; }
    break;

  case 304:
#line 1943 "gram.y"
    { yyval.oncommit = ONCOMMIT_DELETE_ROWS; }
    break;

  case 305:
#line 1944 "gram.y"
    { yyval.oncommit = ONCOMMIT_PRESERVE_ROWS; }
    break;

  case 306:
#line 1945 "gram.y"
    { yyval.oncommit = ONCOMMIT_NOOP; }
    break;

  case 307:
#line 1948 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 308:
#line 1949 "gram.y"
    { yyval.str = NULL; }
    break;

  case 309:
#line 1952 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 310:
#line 1953 "gram.y"
    { yyval.str = NULL; }
    break;

  case 311:
#line 1964 "gram.y"
    {
					/*
					 * When the SelectStmt is a set-operation tree, we must
					 * stuff the INTO information into the leftmost component
					 * Select, because that's where analyze.c will expect
					 * to find it.	Similarly, the output column names must
					 * be attached to that Select's target list.
					 */
					SelectStmt *n = findLeftmostSelect((SelectStmt *) yyvsp[0].node);
					if (n->into != NULL)
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("CREATE TABLE AS may not specify INTO")));
					yyvsp[-3].range->istemp = yyvsp[-5].boolean;
					n->into = yyvsp[-3].range;
					n->intoColNames = yyvsp[-2].list;
					n->intoHasOids = yyvsp[-1].withoids;
					yyval.node = yyvsp[0].node;
				}
    break;

  case 312:
#line 1992 "gram.y"
    { yyval.withoids = MUST_HAVE_OIDS; }
    break;

  case 313:
#line 1993 "gram.y"
    { yyval.withoids = MUST_NOT_HAVE_OIDS; }
    break;

  case 314:
#line 1994 "gram.y"
    { yyval.withoids = DEFAULT_OIDS; }
    break;

  case 315:
#line 1998 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 316:
#line 1999 "gram.y"
    { yyval.list = NIL; }
    break;

  case 317:
#line 2003 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 318:
#line 2004 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 319:
#line 2009 "gram.y"
    {
					ColumnDef *n = makeNode(ColumnDef);
					n->colname = yyvsp[0].str;
					n->typename = NULL;
					n->inhcount = 0;
					n->is_local = true;
					n->is_not_null = false;
					n->raw_default = NULL;
					n->cooked_default = NULL;
					n->constraints = NIL;
					n->support = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 320:
#line 2035 "gram.y"
    {
					CreateSeqStmt *n = makeNode(CreateSeqStmt);
					yyvsp[-1].range->istemp = yyvsp[-3].boolean;
					n->sequence = yyvsp[-1].range;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 321:
#line 2046 "gram.y"
    {
					AlterSeqStmt *n = makeNode(AlterSeqStmt);
					n->sequence = yyvsp[-1].range;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 322:
#line 2054 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 323:
#line 2055 "gram.y"
    { yyval.list = NIL; }
    break;

  case 324:
#line 2059 "gram.y"
    {
					yyval.defelt = makeDefElem("cache", (Node *)yyvsp[0].value);
				}
    break;

  case 325:
#line 2063 "gram.y"
    {
					yyval.defelt = makeDefElem("cycle", (Node *)makeInteger(TRUE));
				}
    break;

  case 326:
#line 2067 "gram.y"
    {
					yyval.defelt = makeDefElem("cycle", (Node *)makeInteger(FALSE));
				}
    break;

  case 327:
#line 2071 "gram.y"
    {
					yyval.defelt = makeDefElem("increment", (Node *)yyvsp[0].value);
				}
    break;

  case 328:
#line 2075 "gram.y"
    {
					yyval.defelt = makeDefElem("maxvalue", (Node *)yyvsp[0].value);
				}
    break;

  case 329:
#line 2079 "gram.y"
    {
					yyval.defelt = makeDefElem("minvalue", (Node *)yyvsp[0].value);
				}
    break;

  case 330:
#line 2083 "gram.y"
    {
					yyval.defelt = makeDefElem("maxvalue", NULL);
				}
    break;

  case 331:
#line 2087 "gram.y"
    {
					yyval.defelt = makeDefElem("minvalue", NULL);
				}
    break;

  case 332:
#line 2091 "gram.y"
    {
					yyval.defelt = makeDefElem("start", (Node *)yyvsp[0].value);
				}
    break;

  case 333:
#line 2095 "gram.y"
    {
					yyval.defelt = makeDefElem("restart", (Node *)yyvsp[0].value);
				}
    break;

  case 334:
#line 2100 "gram.y"
    {}
    break;

  case 335:
#line 2101 "gram.y"
    {}
    break;

  case 336:
#line 2105 "gram.y"
    { yyval.value = yyvsp[0].value; }
    break;

  case 337:
#line 2106 "gram.y"
    { yyval.value = yyvsp[0].value; }
    break;

  case 338:
#line 2109 "gram.y"
    { yyval.value = makeFloat(yyvsp[0].str); }
    break;

  case 339:
#line 2111 "gram.y"
    {
					yyval.value = makeFloat(yyvsp[0].str);
					doNegateFloat(yyval.value);
				}
    break;

  case 340:
#line 2119 "gram.y"
    {
					yyval.value = makeInteger(yyvsp[0].ival);
				}
    break;

  case 341:
#line 2123 "gram.y"
    {
					yyval.value = makeInteger(yyvsp[0].ival);
					yyval.value->val.ival = - yyval.value->val.ival;
				}
    break;

  case 342:
#line 2140 "gram.y"
    {
				CreatePLangStmt *n = makeNode(CreatePLangStmt);
				n->plname = yyvsp[-4].str;
				n->plhandler = yyvsp[-2].list;
				n->plvalidator = yyvsp[-1].list;
				n->pltrusted = yyvsp[-7].boolean;
				yyval.node = (Node *)n;
			}
    break;

  case 343:
#line 2151 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 344:
#line 2152 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 345:
#line 2160 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 346:
#line 2161 "gram.y"
    { yyval.list = lcons(makeString(yyvsp[-1].str), yyvsp[0].list); }
    break;

  case 347:
#line 2165 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 348:
#line 2166 "gram.y"
    { yyval.str = ""; }
    break;

  case 349:
#line 2170 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 350:
#line 2171 "gram.y"
    { yyval.list = NULL; }
    break;

  case 351:
#line 2176 "gram.y"
    {
					DropPLangStmt *n = makeNode(DropPLangStmt);
					n->plname = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 352:
#line 2185 "gram.y"
    {}
    break;

  case 353:
#line 2186 "gram.y"
    {}
    break;

  case 354:
#line 2197 "gram.y"
    {
					CreateTableSpaceStmt *n = makeNode(CreateTableSpaceStmt);
					n->tablespacename = yyvsp[-3].str;
					n->owner = yyvsp[-2].str;
					n->location = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 355:
#line 2206 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 356:
#line 2207 "gram.y"
    { yyval.str = NULL; }
    break;

  case 357:
#line 2221 "gram.y"
    {
					DropTableSpaceStmt *n = makeNode(DropTableSpaceStmt);
					n->tablespacename = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 358:
#line 2240 "gram.y"
    {
					CreateTrigStmt *n = makeNode(CreateTrigStmt);
					n->trigname = yyvsp[-11].str;
					n->relation = yyvsp[-7].range;
					n->funcname = yyvsp[-3].list;
					n->args = yyvsp[-1].list;
					n->before = yyvsp[-10].boolean;
					n->row = yyvsp[-6].boolean;
					memcpy(n->actions, yyvsp[-9].str, 4);
					n->isconstraint  = FALSE;
					n->deferrable	 = FALSE;
					n->initdeferred  = FALSE;
					n->constrrel = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 359:
#line 2260 "gram.y"
    {
					CreateTrigStmt *n = makeNode(CreateTrigStmt);
					n->trigname = yyvsp[-15].str;
					n->relation = yyvsp[-11].range;
					n->funcname = yyvsp[-3].list;
					n->args = yyvsp[-1].list;
					n->before = FALSE;
					n->row = TRUE;
					memcpy(n->actions, yyvsp[-13].str, 4);
					n->isconstraint  = TRUE;
					n->deferrable = (yyvsp[-9].ival & 1) != 0;
					n->initdeferred = (yyvsp[-9].ival & 2) != 0;

					n->constrrel = yyvsp[-10].range;
					yyval.node = (Node *)n;
				}
    break;

  case 360:
#line 2279 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 361:
#line 2280 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 362:
#line 2285 "gram.y"
    {
					char *e = palloc(4);
					e[0] = yyvsp[0].chr; e[1] = '\0';
					yyval.str = e;
				}
    break;

  case 363:
#line 2291 "gram.y"
    {
					char *e = palloc(4);
					e[0] = yyvsp[-2].chr; e[1] = yyvsp[0].chr; e[2] = '\0';
					yyval.str = e;
				}
    break;

  case 364:
#line 2297 "gram.y"
    {
					char *e = palloc(4);
					e[0] = yyvsp[-4].chr; e[1] = yyvsp[-2].chr; e[2] = yyvsp[0].chr; e[3] = '\0';
					yyval.str = e;
				}
    break;

  case 365:
#line 2305 "gram.y"
    { yyval.chr = 'i'; }
    break;

  case 366:
#line 2306 "gram.y"
    { yyval.chr = 'd'; }
    break;

  case 367:
#line 2307 "gram.y"
    { yyval.chr = 'u'; }
    break;

  case 368:
#line 2312 "gram.y"
    {
					yyval.boolean = yyvsp[0].boolean;
				}
    break;

  case 369:
#line 2316 "gram.y"
    {
					/*
					 * If ROW/STATEMENT not specified, default to
					 * STATEMENT, per SQL
					 */
					yyval.boolean = FALSE;
				}
    break;

  case 370:
#line 2326 "gram.y"
    {}
    break;

  case 371:
#line 2327 "gram.y"
    {}
    break;

  case 372:
#line 2331 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 373:
#line 2332 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 374:
#line 2336 "gram.y"
    { yyval.list = list_make1(yyvsp[0].value); }
    break;

  case 375:
#line 2337 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].value); }
    break;

  case 376:
#line 2338 "gram.y"
    { yyval.list = NIL; }
    break;

  case 377:
#line 2343 "gram.y"
    {
					char buf[64];
					snprintf(buf, sizeof(buf), "%d", yyvsp[0].ival);
					yyval.value = makeString(pstrdup(buf));
				}
    break;

  case 378:
#line 2348 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 379:
#line 2349 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 380:
#line 2350 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 381:
#line 2351 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 382:
#line 2352 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 383:
#line 2356 "gram.y"
    { yyval.range = yyvsp[0].range; }
    break;

  case 384:
#line 2357 "gram.y"
    { yyval.range = NULL; }
    break;

  case 385:
#line 2362 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 386:
#line 2364 "gram.y"
    {
					if (yyvsp[-1].ival == 0 && yyvsp[0].ival != 0)
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("constraint declared INITIALLY DEFERRED must be DEFERRABLE")));
					yyval.ival = yyvsp[-1].ival | yyvsp[0].ival;
				}
    break;

  case 387:
#line 2372 "gram.y"
    {
					if (yyvsp[0].ival != 0)
						yyval.ival = 3;
					else
						yyval.ival = 0;
				}
    break;

  case 388:
#line 2379 "gram.y"
    {
					if (yyvsp[0].ival == 0 && yyvsp[-1].ival != 0)
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("constraint declared INITIALLY DEFERRED must be DEFERRABLE")));
					yyval.ival = yyvsp[-1].ival | yyvsp[0].ival;
				}
    break;

  case 389:
#line 2387 "gram.y"
    { yyval.ival = 0; }
    break;

  case 390:
#line 2391 "gram.y"
    { yyval.ival = 0; }
    break;

  case 391:
#line 2392 "gram.y"
    { yyval.ival = 1; }
    break;

  case 392:
#line 2396 "gram.y"
    { yyval.ival = 0; }
    break;

  case 393:
#line 2397 "gram.y"
    { yyval.ival = 2; }
    break;

  case 394:
#line 2403 "gram.y"
    {
					DropPropertyStmt *n = makeNode(DropPropertyStmt);
					n->relation = yyvsp[-1].range;
					n->property = yyvsp[-3].str;
					n->behavior = yyvsp[0].dbehavior;
					n->removeType = OBJECT_TRIGGER;
					yyval.node = (Node *) n;
				}
    break;

  case 395:
#line 2425 "gram.y"
    {
					CreateTrigStmt *n = makeNode(CreateTrigStmt);
					n->trigname = yyvsp[-5].str;
					n->args = list_make1(yyvsp[-2].node);
					n->isconstraint  = TRUE;
					n->deferrable = (yyvsp[0].ival & 1) != 0;
					n->initdeferred = (yyvsp[0].ival & 2) != 0;

					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("CREATE ASSERTION is not yet implemented")));

					yyval.node = (Node *)n;
				}
    break;

  case 396:
#line 2443 "gram.y"
    {
					DropPropertyStmt *n = makeNode(DropPropertyStmt);
					n->relation = NULL;
					n->property = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					n->removeType = OBJECT_TRIGGER; /* XXX */
					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("DROP ASSERTION is not yet implemented")));
					yyval.node = (Node *) n;
				}
    break;

  case 397:
#line 2466 "gram.y"
    {
					DefineStmt *n = makeNode(DefineStmt);
					n->kind = OBJECT_AGGREGATE;
					n->defnames = yyvsp[-1].list;
					n->definition = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 398:
#line 2474 "gram.y"
    {
					DefineStmt *n = makeNode(DefineStmt);
					n->kind = OBJECT_OPERATOR;
					n->defnames = yyvsp[-1].list;
					n->definition = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 399:
#line 2482 "gram.y"
    {
					DefineStmt *n = makeNode(DefineStmt);
					n->kind = OBJECT_TYPE;
					n->defnames = yyvsp[-1].list;
					n->definition = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 400:
#line 2490 "gram.y"
    {
					CompositeTypeStmt *n = makeNode(CompositeTypeStmt);
					RangeVar *r = makeNode(RangeVar);

					/* can't use qualified_name, sigh */
					switch (list_length(yyvsp[-4].list))
					{
						case 1:
							r->catalogname = NULL;
							r->schemaname = NULL;
							r->relname = strVal(linitial(yyvsp[-4].list));
							break;
						case 2:
							r->catalogname = NULL;
							r->schemaname = strVal(linitial(yyvsp[-4].list));
							r->relname = strVal(lsecond(yyvsp[-4].list));
							break;
						case 3:
							r->catalogname = strVal(linitial(yyvsp[-4].list));
							r->schemaname = strVal(lsecond(yyvsp[-4].list));
							r->relname = strVal(lthird(yyvsp[-4].list));
							break;
						default:
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("improper qualified name (too many dotted names): %s",
											NameListToString(yyvsp[-4].list))));
							break;
					}
					n->typevar = r;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *)n;
				}
    break;

  case 401:
#line 2525 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 402:
#line 2528 "gram.y"
    { yyval.list = list_make1(yyvsp[0].defelt); }
    break;

  case 403:
#line 2529 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].defelt); }
    break;

  case 404:
#line 2533 "gram.y"
    {
					yyval.defelt = makeDefElem(yyvsp[-2].str, (Node *)yyvsp[0].node);
				}
    break;

  case 405:
#line 2537 "gram.y"
    {
					yyval.defelt = makeDefElem(yyvsp[0].str, NULL);
				}
    break;

  case 406:
#line 2543 "gram.y"
    { yyval.node = (Node *)yyvsp[0].typnam; }
    break;

  case 407:
#line 2544 "gram.y"
    { yyval.node = (Node *)yyvsp[0].list; }
    break;

  case 408:
#line 2545 "gram.y"
    { yyval.node = (Node *)yyvsp[0].value; }
    break;

  case 409:
#line 2546 "gram.y"
    { yyval.node = (Node *)makeString(yyvsp[0].str); }
    break;

  case 410:
#line 2561 "gram.y"
    {
					CreateOpClassStmt *n = makeNode(CreateOpClassStmt);
					n->opclassname = yyvsp[-8].list;
					n->isDefault = yyvsp[-7].boolean;
					n->datatype = yyvsp[-4].typnam;
					n->amname = yyvsp[-2].str;
					n->items = yyvsp[0].list;
					yyval.node = (Node *) n;
				}
    break;

  case 411:
#line 2573 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 412:
#line 2574 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 413:
#line 2579 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_OPERATOR;
					n->name = yyvsp[-1].list;
					n->args = NIL;
					n->number = yyvsp[-2].ival;
					n->recheck = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 414:
#line 2589 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_OPERATOR;
					n->name = yyvsp[-4].list;
					n->args = yyvsp[-2].list;
					n->number = yyvsp[-5].ival;
					n->recheck = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 415:
#line 2599 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_FUNCTION;
					n->name = yyvsp[-1].list;
					n->args = extractArgTypes(yyvsp[0].list);
					n->number = yyvsp[-2].ival;
					yyval.node = (Node *) n;
				}
    break;

  case 416:
#line 2608 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_STORAGETYPE;
					n->storedtype = yyvsp[0].typnam;
					yyval.node = (Node *) n;
				}
    break;

  case 417:
#line 2616 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 418:
#line 2617 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 419:
#line 2620 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 420:
#line 2621 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 421:
#line 2627 "gram.y"
    {
					RemoveOpClassStmt *n = makeNode(RemoveOpClassStmt);
					n->opclassname = yyvsp[-3].list;
					n->amname = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *) n;
				}
    break;

  case 422:
#line 2646 "gram.y"
    {
					DropStmt *n = makeNode(DropStmt);
					n->removeType = yyvsp[-2].objtype;
					n->objects = yyvsp[-1].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 423:
#line 2655 "gram.y"
    { yyval.objtype = OBJECT_TABLE; }
    break;

  case 424:
#line 2656 "gram.y"
    { yyval.objtype = OBJECT_SEQUENCE; }
    break;

  case 425:
#line 2657 "gram.y"
    { yyval.objtype = OBJECT_VIEW; }
    break;

  case 426:
#line 2658 "gram.y"
    { yyval.objtype = OBJECT_INDEX; }
    break;

  case 427:
#line 2659 "gram.y"
    { yyval.objtype = OBJECT_TYPE; }
    break;

  case 428:
#line 2660 "gram.y"
    { yyval.objtype = OBJECT_DOMAIN; }
    break;

  case 429:
#line 2661 "gram.y"
    { yyval.objtype = OBJECT_CONVERSION; }
    break;

  case 430:
#line 2662 "gram.y"
    { yyval.objtype = OBJECT_SCHEMA; }
    break;

  case 431:
#line 2666 "gram.y"
    { yyval.list = list_make1(yyvsp[0].list); }
    break;

  case 432:
#line 2667 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].list); }
    break;

  case 433:
#line 2670 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 434:
#line 2671 "gram.y"
    { yyval.list = lcons(makeString(yyvsp[-1].str), yyvsp[0].list); }
    break;

  case 435:
#line 2675 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 436:
#line 2677 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, makeString(yyvsp[0].str)); }
    break;

  case 437:
#line 2690 "gram.y"
    {
					TruncateStmt *n = makeNode(TruncateStmt);
					n->relation = yyvsp[0].range;
					yyval.node = (Node *)n;
				}
    break;

  case 438:
#line 2716 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = yyvsp[-3].objtype;
					n->objname = yyvsp[-2].list;
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 439:
#line 2726 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_AGGREGATE;
					n->objname = yyvsp[-5].list;
					n->objargs = list_make1(yyvsp[-3].typnam);
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 440:
#line 2735 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_FUNCTION;
					n->objname = yyvsp[-3].list;
					n->objargs = extractArgTypes(yyvsp[-2].list);
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 441:
#line 2745 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_OPERATOR;
					n->objname = yyvsp[-5].list;
					n->objargs = yyvsp[-3].list;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 442:
#line 2754 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_CONSTRAINT;
					n->objname = lappend(yyvsp[-2].list, makeString(yyvsp[-4].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 443:
#line 2763 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_RULE;
					n->objname = lappend(yyvsp[-2].list, makeString(yyvsp[-4].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 444:
#line 2772 "gram.y"
    {
					/* Obsolete syntax supported for awhile for compatibility */
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_RULE;
					n->objname = list_make1(makeString(yyvsp[-2].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 445:
#line 2782 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_TRIGGER;
					n->objname = lappend(yyvsp[-2].list, makeString(yyvsp[-4].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 446:
#line 2791 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_OPCLASS;
					n->objname = yyvsp[-4].list;
					n->objargs = list_make1(makeString(yyvsp[-2].str));
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 447:
#line 2800 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_LARGEOBJECT;
					n->objname = list_make1(yyvsp[-2].value);
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 448:
#line 2809 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_CAST;
					n->objname = list_make1(yyvsp[-5].typnam);
					n->objargs = list_make1(yyvsp[-3].typnam);
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 449:
#line 2818 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_LANGUAGE;
					n->objname = yyvsp[-2].list;
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 450:
#line 2829 "gram.y"
    { yyval.objtype = OBJECT_COLUMN; }
    break;

  case 451:
#line 2830 "gram.y"
    { yyval.objtype = OBJECT_DATABASE; }
    break;

  case 452:
#line 2831 "gram.y"
    { yyval.objtype = OBJECT_SCHEMA; }
    break;

  case 453:
#line 2832 "gram.y"
    { yyval.objtype = OBJECT_INDEX; }
    break;

  case 454:
#line 2833 "gram.y"
    { yyval.objtype = OBJECT_SEQUENCE; }
    break;

  case 455:
#line 2834 "gram.y"
    { yyval.objtype = OBJECT_TABLE; }
    break;

  case 456:
#line 2835 "gram.y"
    { yyval.objtype = OBJECT_TYPE; }
    break;

  case 457:
#line 2836 "gram.y"
    { yyval.objtype = OBJECT_TYPE; }
    break;

  case 458:
#line 2837 "gram.y"
    { yyval.objtype = OBJECT_VIEW; }
    break;

  case 459:
#line 2838 "gram.y"
    { yyval.objtype = OBJECT_CONVERSION; }
    break;

  case 460:
#line 2842 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 461:
#line 2843 "gram.y"
    { yyval.str = NULL; }
    break;

  case 462:
#line 2854 "gram.y"
    {
					FetchStmt *n = (FetchStmt *) yyvsp[-2].node;
					n->portalname = yyvsp[0].str;
					n->ismove = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 463:
#line 2861 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					n->portalname = yyvsp[0].str;
					n->ismove = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 464:
#line 2870 "gram.y"
    {
					FetchStmt *n = (FetchStmt *) yyvsp[-2].node;
					n->portalname = yyvsp[0].str;
					n->ismove = TRUE;
					yyval.node = (Node *)n;
				}
    break;

  case 465:
#line 2877 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					n->portalname = yyvsp[0].str;
					n->ismove = TRUE;
					yyval.node = (Node *)n;
				}
    break;

  case 466:
#line 2889 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 467:
#line 2896 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 468:
#line 2903 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 469:
#line 2910 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_ABSOLUTE;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 470:
#line 2917 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_ABSOLUTE;
					n->howMany = -1;
					yyval.node = (Node *)n;
				}
    break;

  case 471:
#line 2924 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_ABSOLUTE;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 472:
#line 2931 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_RELATIVE;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 473:
#line 2938 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 474:
#line 2945 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = FETCH_ALL;
					yyval.node = (Node *)n;
				}
    break;

  case 475:
#line 2952 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 476:
#line 2959 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 477:
#line 2966 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = FETCH_ALL;
					yyval.node = (Node *)n;
				}
    break;

  case 478:
#line 2973 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 479:
#line 2980 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 480:
#line 2987 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = FETCH_ALL;
					yyval.node = (Node *)n;
				}
    break;

  case 481:
#line 2996 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 482:
#line 2997 "gram.y"
    { yyval.ival = - yyvsp[0].ival; }
    break;

  case 483:
#line 3000 "gram.y"
    {}
    break;

  case 484:
#line 3001 "gram.y"
    {}
    break;

  case 485:
#line 3013 "gram.y"
    {
					GrantStmt *n = makeNode(GrantStmt);
					n->is_grant = true;
					n->privileges = yyvsp[-5].list;
					n->objtype = (yyvsp[-3].privtarget)->objtype;
					n->objects = (yyvsp[-3].privtarget)->objs;
					n->grantees = yyvsp[-1].list;
					n->grant_option = yyvsp[0].boolean;
					yyval.node = (Node*)n;
				}
    break;

  case 486:
#line 3027 "gram.y"
    {
					GrantStmt *n = makeNode(GrantStmt);
					n->is_grant = false;
					n->privileges = yyvsp[-5].list;
					n->objtype = (yyvsp[-3].privtarget)->objtype;
					n->objects = (yyvsp[-3].privtarget)->objs;
					n->grantees = yyvsp[-1].list;
					n->grant_option = yyvsp[-6].boolean;
					n->behavior = yyvsp[0].dbehavior;

					yyval.node = (Node *)n;
				}
    break;

  case 487:
#line 3043 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 488:
#line 3044 "gram.y"
    { yyval.list = list_make1_int(ACL_ALL_RIGHTS); }
    break;

  case 489:
#line 3045 "gram.y"
    { yyval.list = list_make1_int(ACL_ALL_RIGHTS); }
    break;

  case 490:
#line 3049 "gram.y"
    { yyval.list = list_make1_int(yyvsp[0].ival); }
    break;

  case 491:
#line 3050 "gram.y"
    { yyval.list = lappend_int(yyvsp[-2].list, yyvsp[0].ival); }
    break;

  case 492:
#line 3056 "gram.y"
    { yyval.ival = ACL_SELECT; }
    break;

  case 493:
#line 3057 "gram.y"
    { yyval.ival = ACL_INSERT; }
    break;

  case 494:
#line 3058 "gram.y"
    { yyval.ival = ACL_UPDATE; }
    break;

  case 495:
#line 3059 "gram.y"
    { yyval.ival = ACL_DELETE; }
    break;

  case 496:
#line 3060 "gram.y"
    { yyval.ival = ACL_RULE; }
    break;

  case 497:
#line 3061 "gram.y"
    { yyval.ival = ACL_REFERENCES; }
    break;

  case 498:
#line 3062 "gram.y"
    { yyval.ival = ACL_TRIGGER; }
    break;

  case 499:
#line 3063 "gram.y"
    { yyval.ival = ACL_EXECUTE; }
    break;

  case 500:
#line 3064 "gram.y"
    { yyval.ival = ACL_USAGE; }
    break;

  case 501:
#line 3065 "gram.y"
    { yyval.ival = ACL_CREATE; }
    break;

  case 502:
#line 3066 "gram.y"
    { yyval.ival = ACL_CREATE_TEMP; }
    break;

  case 503:
#line 3067 "gram.y"
    { yyval.ival = ACL_CREATE_TEMP; }
    break;

  case 504:
#line 3075 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_RELATION;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 505:
#line 3082 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_RELATION;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 506:
#line 3089 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_FUNCTION;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 507:
#line 3096 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_DATABASE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 508:
#line 3103 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_LANGUAGE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 509:
#line 3110 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_NAMESPACE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 510:
#line 3117 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_TABLESPACE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 511:
#line 3127 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 512:
#line 3128 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 513:
#line 3132 "gram.y"
    {
					PrivGrantee *n = makeNode(PrivGrantee);
					/* This hack lets us avoid reserving PUBLIC as a keyword*/
					if (strcmp(yyvsp[0].str, "public") == 0)
						n->username = NULL;
					else
						n->username = yyvsp[0].str;
					n->groupname = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 514:
#line 3143 "gram.y"
    {
					PrivGrantee *n = makeNode(PrivGrantee);
					/* Treat GROUP PUBLIC as a synonym for PUBLIC */
					if (strcmp(yyvsp[0].str, "public") == 0)
						n->groupname = NULL;
					else
						n->groupname = yyvsp[0].str;
					n->username = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 515:
#line 3157 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 516:
#line 3158 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 517:
#line 3162 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 518:
#line 3163 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 519:
#line 3168 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 520:
#line 3170 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 521:
#line 3175 "gram.y"
    {
					FuncWithArgs *n = makeNode(FuncWithArgs);
					n->funcname = yyvsp[-1].list;
					n->funcargs = extractArgTypes(yyvsp[0].list);
					yyval.node = (Node *)n;
				}
    break;

  case 522:
#line 3197 "gram.y"
    {
					IndexStmt *n = makeNode(IndexStmt);
					n->unique = yyvsp[-10].boolean;
					n->idxname = yyvsp[-8].str;
					n->relation = yyvsp[-6].range;
					n->accessMethod = yyvsp[-5].str;
					n->indexParams = yyvsp[-3].list;
					n->tableSpace = yyvsp[-1].str;
					n->whereClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 523:
#line 3211 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 524:
#line 3212 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 525:
#line 3216 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 526:
#line 3217 "gram.y"
    { yyval.str = DEFAULT_INDEX_TYPE; }
    break;

  case 527:
#line 3220 "gram.y"
    { yyval.list = list_make1(yyvsp[0].ielem); }
    break;

  case 528:
#line 3221 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].ielem); }
    break;

  case 529:
#line 3230 "gram.y"
    {
					yyval.ielem = makeNode(IndexElem);
					yyval.ielem->name = yyvsp[-1].str;
					yyval.ielem->expr = NULL;
					yyval.ielem->opclass = yyvsp[0].list;
				}
    break;

  case 530:
#line 3237 "gram.y"
    {
					yyval.ielem = makeNode(IndexElem);
					yyval.ielem->name = NULL;
					yyval.ielem->expr = yyvsp[-1].node;
					yyval.ielem->opclass = yyvsp[0].list;
				}
    break;

  case 531:
#line 3244 "gram.y"
    {
					yyval.ielem = makeNode(IndexElem);
					yyval.ielem->name = NULL;
					yyval.ielem->expr = yyvsp[-2].node;
					yyval.ielem->opclass = yyvsp[0].list;
				}
    break;

  case 532:
#line 3252 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 533:
#line 3253 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 534:
#line 3254 "gram.y"
    { yyval.list = NIL; }
    break;

  case 535:
#line 3271 "gram.y"
    {
					CreateFunctionStmt *n = makeNode(CreateFunctionStmt);
					n->replace = yyvsp[-7].boolean;
					n->funcname = yyvsp[-5].list;
					n->parameters = yyvsp[-4].list;
					n->returnType = yyvsp[-2].typnam;
					n->options = yyvsp[-1].list;
					n->withClause = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 536:
#line 3284 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 537:
#line 3285 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 538:
#line 3288 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 539:
#line 3289 "gram.y"
    { yyval.list = NIL; }
    break;

  case 540:
#line 3293 "gram.y"
    { yyval.list = list_make1(yyvsp[0].fun_param); }
    break;

  case 541:
#line 3294 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].fun_param); }
    break;

  case 542:
#line 3303 "gram.y"
    {
					FunctionParameter *n = makeNode(FunctionParameter);
					n->name = yyvsp[-1].str;
					n->argType = yyvsp[0].typnam;
					yyval.fun_param = n;
				}
    break;

  case 543:
#line 3310 "gram.y"
    {
					FunctionParameter *n = makeNode(FunctionParameter);
					n->name = NULL;
					n->argType = yyvsp[0].typnam;
					yyval.fun_param = n;
				}
    break;

  case 544:
#line 3318 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 545:
#line 3320 "gram.y"
    {
					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("CREATE FUNCTION / OUT parameters are not implemented")));
					yyval.boolean = TRUE;
				}
    break;

  case 546:
#line 3327 "gram.y"
    {
					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("CREATE FUNCTION / INOUT parameters are not implemented")));
					yyval.boolean = FALSE;
				}
    break;

  case 547:
#line 3333 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 549:
#line 3344 "gram.y"
    {
					/* We can catch over-specified arguments here if we want to,
					 * but for now better to silently swallow typmod, etc.
					 * - thomas 2000-03-22
					 */
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 550:
#line 3357 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 551:
#line 3359 "gram.y"
    {
					yyval.typnam = makeNode(TypeName);
					yyval.typnam->names = lcons(makeString(yyvsp[-3].str), yyvsp[-2].list);
					yyval.typnam->pct_type = true;
					yyval.typnam->typmod = -1;
				}
    break;

  case 552:
#line 3370 "gram.y"
    { yyval.list = list_make1(yyvsp[0].defelt); }
    break;

  case 553:
#line 3371 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 554:
#line 3376 "gram.y"
    {
					yyval.defelt = makeDefElem("as", (Node *)yyvsp[0].list);
				}
    break;

  case 555:
#line 3380 "gram.y"
    {
					yyval.defelt = makeDefElem("language", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 556:
#line 3384 "gram.y"
    {
					yyval.defelt = makeDefElem("volatility", (Node *)makeString("immutable"));
				}
    break;

  case 557:
#line 3388 "gram.y"
    {
					yyval.defelt = makeDefElem("volatility", (Node *)makeString("stable"));
				}
    break;

  case 558:
#line 3392 "gram.y"
    {
					yyval.defelt = makeDefElem("volatility", (Node *)makeString("volatile"));
				}
    break;

  case 559:
#line 3396 "gram.y"
    {
					yyval.defelt = makeDefElem("strict", (Node *)makeInteger(FALSE));
				}
    break;

  case 560:
#line 3400 "gram.y"
    {
					yyval.defelt = makeDefElem("strict", (Node *)makeInteger(TRUE));
				}
    break;

  case 561:
#line 3404 "gram.y"
    {
					yyval.defelt = makeDefElem("strict", (Node *)makeInteger(TRUE));
				}
    break;

  case 562:
#line 3408 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(TRUE));
				}
    break;

  case 563:
#line 3412 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(FALSE));
				}
    break;

  case 564:
#line 3416 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(TRUE));
				}
    break;

  case 565:
#line 3420 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(FALSE));
				}
    break;

  case 566:
#line 3425 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 567:
#line 3427 "gram.y"
    {
					yyval.list = list_make2(makeString(yyvsp[-2].str), makeString(yyvsp[0].str));
				}
    break;

  case 568:
#line 3433 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 569:
#line 3434 "gram.y"
    { yyval.list = NIL; }
    break;

  case 570:
#line 3450 "gram.y"
    {
					RemoveFuncStmt *n = makeNode(RemoveFuncStmt);
					n->funcname = yyvsp[-2].list;
					n->args = extractArgTypes(yyvsp[-1].list);
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 571:
#line 3461 "gram.y"
    {
						RemoveAggrStmt *n = makeNode(RemoveAggrStmt);
						n->aggname = yyvsp[-4].list;
						n->aggtype = yyvsp[-2].typnam;
						n->behavior = yyvsp[0].dbehavior;
						yyval.node = (Node *)n;
				}
    break;

  case 572:
#line 3471 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 573:
#line 3472 "gram.y"
    { yyval.typnam = NULL; }
    break;

  case 574:
#line 3477 "gram.y"
    {
					RemoveOperStmt *n = makeNode(RemoveOperStmt);
					n->opname = yyvsp[-4].list;
					n->args = yyvsp[-2].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 575:
#line 3488 "gram.y"
    {
				   ereport(ERROR,
						   (errcode(ERRCODE_SYNTAX_ERROR),
							errmsg("missing argument"),
							errhint("Use NONE to denote the missing argument of a unary operator.")));
				}
    break;

  case 576:
#line 3495 "gram.y"
    { yyval.list = list_make2(yyvsp[-2].typnam, yyvsp[0].typnam); }
    break;

  case 577:
#line 3497 "gram.y"
    { yyval.list = list_make2(NULL, yyvsp[0].typnam); }
    break;

  case 578:
#line 3499 "gram.y"
    { yyval.list = list_make2(yyvsp[-2].typnam, NULL); }
    break;

  case 579:
#line 3504 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 580:
#line 3506 "gram.y"
    { yyval.list = lcons(makeString(yyvsp[-2].str), yyvsp[0].list); }
    break;

  case 581:
#line 3518 "gram.y"
    {
					CreateCastStmt *n = makeNode(CreateCastStmt);
					n->sourcetype = yyvsp[-7].typnam;
					n->targettype = yyvsp[-5].typnam;
					n->func = (FuncWithArgs *) yyvsp[-1].node;
					n->context = (CoercionContext) yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 582:
#line 3528 "gram.y"
    {
					CreateCastStmt *n = makeNode(CreateCastStmt);
					n->sourcetype = yyvsp[-6].typnam;
					n->targettype = yyvsp[-4].typnam;
					n->func = NULL;
					n->context = (CoercionContext) yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 583:
#line 3538 "gram.y"
    { yyval.ival = COERCION_IMPLICIT; }
    break;

  case 584:
#line 3539 "gram.y"
    { yyval.ival = COERCION_ASSIGNMENT; }
    break;

  case 585:
#line 3540 "gram.y"
    { yyval.ival = COERCION_EXPLICIT; }
    break;

  case 586:
#line 3545 "gram.y"
    {
					DropCastStmt *n = makeNode(DropCastStmt);
					n->sourcetype = yyvsp[-4].typnam;
					n->targettype = yyvsp[-2].typnam;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 587:
#line 3566 "gram.y"
    {
					ReindexStmt *n = makeNode(ReindexStmt);
					n->kind = yyvsp[-2].objtype;
					n->relation = yyvsp[-1].range;
					n->name = NULL;
					n->force = yyvsp[0].boolean;
					yyval.node = (Node *)n;
				}
    break;

  case 588:
#line 3575 "gram.y"
    {
					ReindexStmt *n = makeNode(ReindexStmt);
					n->kind = OBJECT_DATABASE;
					n->name = yyvsp[-1].str;
					n->relation = NULL;
					n->force = yyvsp[0].boolean;
					yyval.node = (Node *)n;
				}
    break;

  case 589:
#line 3586 "gram.y"
    { yyval.objtype = OBJECT_INDEX; }
    break;

  case 590:
#line 3587 "gram.y"
    { yyval.objtype = OBJECT_TABLE; }
    break;

  case 591:
#line 3590 "gram.y"
    {  yyval.boolean = TRUE; }
    break;

  case 592:
#line 3591 "gram.y"
    {  yyval.boolean = FALSE; }
    break;

  case 593:
#line 3602 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_AGGREGATE;
					n->object = yyvsp[-6].list;
					n->objarg = list_make1(yyvsp[-4].typnam);
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 594:
#line 3611 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_CONVERSION;
					n->object = yyvsp[-3].list;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 595:
#line 3619 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_DATABASE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 596:
#line 3627 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_FUNCTION;
					n->object = yyvsp[-4].list;
					n->objarg = extractArgTypes(yyvsp[-3].list);
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 597:
#line 3636 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_GROUP;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 598:
#line 3644 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_LANGUAGE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 599:
#line 3652 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_OPCLASS;
					n->object = yyvsp[-5].list;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 600:
#line 3661 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_SCHEMA;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 601:
#line 3669 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_TABLE;
					n->relation = yyvsp[-3].range;
					n->subname = NULL;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 602:
#line 3678 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_INDEX;
					n->relation = yyvsp[-3].range;
					n->subname = NULL;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 603:
#line 3687 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_COLUMN;
					n->relation = yyvsp[-5].range;
					n->subname = yyvsp[-2].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 604:
#line 3696 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->relation = yyvsp[-3].range;
					n->subname = yyvsp[-5].str;
					n->newname = yyvsp[0].str;
					n->renameType = OBJECT_TRIGGER;
					yyval.node = (Node *)n;
				}
    break;

  case 605:
#line 3705 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_USER;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 606:
#line 3713 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_TABLESPACE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 607:
#line 3722 "gram.y"
    { yyval.ival = COLUMN; }
    break;

  case 608:
#line 3723 "gram.y"
    { yyval.ival = 0; }
    break;

  case 609:
#line 3734 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_AGGREGATE;
					n->object = yyvsp[-6].list;
					n->objarg = list_make1(yyvsp[-4].typnam);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 610:
#line 3743 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_CONVERSION;
					n->object = yyvsp[-3].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 611:
#line 3751 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_DATABASE;
					n->object = list_make1(yyvsp[-3].str);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 612:
#line 3759 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_DOMAIN;
					n->object = yyvsp[-3].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 613:
#line 3767 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_FUNCTION;
					n->object = yyvsp[-4].list;
					n->objarg = extractArgTypes(yyvsp[-3].list);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 614:
#line 3776 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_OPERATOR;
					n->object = yyvsp[-6].list;
					n->objarg = yyvsp[-4].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 615:
#line 3785 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_OPCLASS;
					n->object = yyvsp[-5].list;
					n->addname = yyvsp[-3].str;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 616:
#line 3794 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_SCHEMA;
					n->object = list_make1(yyvsp[-3].str);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 617:
#line 3802 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_TYPE;
					n->object = yyvsp[-3].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 618:
#line 3810 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_TABLESPACE;
					n->object = list_make1(yyvsp[-3].str);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 619:
#line 3827 "gram.y"
    { QueryIsRule=TRUE; }
    break;

  case 620:
#line 3830 "gram.y"
    {
					RuleStmt *n = makeNode(RuleStmt);
					n->replace = yyvsp[-12].boolean;
					n->relation = yyvsp[-4].range;
					n->rulename = yyvsp[-10].str;
					n->whereClause = yyvsp[-3].node;
					n->event = yyvsp[-6].ival;
					n->instead = yyvsp[-1].boolean;
					n->actions = yyvsp[0].list;
					yyval.node = (Node *)n;
					QueryIsRule=FALSE;
				}
    break;

  case 621:
#line 3845 "gram.y"
    { yyval.list = NIL; }
    break;

  case 622:
#line 3846 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 623:
#line 3847 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 624:
#line 3853 "gram.y"
    { if (yyvsp[0].node != NULL)
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				  else
					yyval.list = yyvsp[-2].list;
				}
    break;

  case 625:
#line 3859 "gram.y"
    { if (yyvsp[0].node != NULL)
					yyval.list = list_make1(yyvsp[0].node);
				  else
					yyval.list = NIL;
				}
    break;

  case 631:
#line 3875 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 632:
#line 3876 "gram.y"
    { yyval.node = NULL; }
    break;

  case 633:
#line 3880 "gram.y"
    { yyval.ival = CMD_SELECT; }
    break;

  case 634:
#line 3881 "gram.y"
    { yyval.ival = CMD_UPDATE; }
    break;

  case 635:
#line 3882 "gram.y"
    { yyval.ival = CMD_DELETE; }
    break;

  case 636:
#line 3883 "gram.y"
    { yyval.ival = CMD_INSERT; }
    break;

  case 637:
#line 3887 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 638:
#line 3888 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 639:
#line 3889 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 640:
#line 3895 "gram.y"
    {
					DropPropertyStmt *n = makeNode(DropPropertyStmt);
					n->relation = yyvsp[-1].range;
					n->property = yyvsp[-3].str;
					n->behavior = yyvsp[0].dbehavior;
					n->removeType = OBJECT_RULE;
					yyval.node = (Node *) n;
				}
    break;

  case 641:
#line 3915 "gram.y"
    {
					NotifyStmt *n = makeNode(NotifyStmt);
					n->relation = yyvsp[0].range;
					yyval.node = (Node *)n;
				}
    break;

  case 642:
#line 3923 "gram.y"
    {
					ListenStmt *n = makeNode(ListenStmt);
					n->relation = yyvsp[0].range;
					yyval.node = (Node *)n;
				}
    break;

  case 643:
#line 3932 "gram.y"
    {
					UnlistenStmt *n = makeNode(UnlistenStmt);
					n->relation = yyvsp[0].range;
					yyval.node = (Node *)n;
				}
    break;

  case 644:
#line 3938 "gram.y"
    {
					UnlistenStmt *n = makeNode(UnlistenStmt);
					n->relation = makeNode(RangeVar);
					n->relation->relname = "*";
					n->relation->schemaname = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 645:
#line 3959 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 646:
#line 3966 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_BEGIN;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 647:
#line 3973 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_START;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 648:
#line 3980 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_COMMIT;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 649:
#line 3987 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_COMMIT;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 650:
#line 3994 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 651:
#line 4001 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_SAVEPOINT;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 652:
#line 4009 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_RELEASE;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 653:
#line 4017 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_RELEASE;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 654:
#line 4025 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK_TO;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 655:
#line 4033 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK_TO;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 656:
#line 4042 "gram.y"
    {}
    break;

  case 657:
#line 4043 "gram.y"
    {}
    break;

  case 658:
#line 4044 "gram.y"
    {}
    break;

  case 659:
#line 4049 "gram.y"
    { yyval.defelt = makeDefElem("transaction_isolation",
									   makeStringConst(yyvsp[0].str, NULL)); }
    break;

  case 660:
#line 4052 "gram.y"
    { yyval.defelt = makeDefElem("transaction_read_only",
									   makeIntConst(TRUE)); }
    break;

  case 661:
#line 4055 "gram.y"
    { yyval.defelt = makeDefElem("transaction_read_only",
									   makeIntConst(FALSE)); }
    break;

  case 662:
#line 4062 "gram.y"
    { yyval.list = list_make1(yyvsp[0].defelt); }
    break;

  case 663:
#line 4064 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].defelt); }
    break;

  case 664:
#line 4066 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 666:
#line 4072 "gram.y"
    { yyval.list = NIL; }
    break;

  case 667:
#line 4085 "gram.y"
    {
					ViewStmt *n = makeNode(ViewStmt);
					n->replace = yyvsp[-5].boolean;
					n->view = yyvsp[-3].range;
					n->aliases = yyvsp[-2].list;
					n->query = (Query *) yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 668:
#line 4104 "gram.y"
    {
					LoadStmt *n = makeNode(LoadStmt);
					n->filename = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 669:
#line 4120 "gram.y"
    {
					CreatedbStmt *n = makeNode(CreatedbStmt);
					n->dbname = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 670:
#line 4129 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 671:
#line 4130 "gram.y"
    { yyval.list = NIL; }
    break;

  case 672:
#line 4135 "gram.y"
    {
					yyval.defelt = makeDefElem("tablespace", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 673:
#line 4139 "gram.y"
    {
					yyval.defelt = makeDefElem("tablespace", NULL);
				}
    break;

  case 674:
#line 4143 "gram.y"
    {
					yyval.defelt = makeDefElem("location", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 675:
#line 4147 "gram.y"
    {
					yyval.defelt = makeDefElem("location", NULL);
				}
    break;

  case 676:
#line 4151 "gram.y"
    {
					yyval.defelt = makeDefElem("template", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 677:
#line 4155 "gram.y"
    {
					yyval.defelt = makeDefElem("template", NULL);
				}
    break;

  case 678:
#line 4159 "gram.y"
    {
					yyval.defelt = makeDefElem("encoding", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 679:
#line 4163 "gram.y"
    {
					yyval.defelt = makeDefElem("encoding", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 680:
#line 4167 "gram.y"
    {
					yyval.defelt = makeDefElem("encoding", NULL);
				}
    break;

  case 681:
#line 4171 "gram.y"
    {
					yyval.defelt = makeDefElem("owner", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 682:
#line 4175 "gram.y"
    {
					yyval.defelt = makeDefElem("owner", NULL);
				}
    break;

  case 683:
#line 4185 "gram.y"
    {}
    break;

  case 684:
#line 4186 "gram.y"
    {}
    break;

  case 685:
#line 4198 "gram.y"
    {
					AlterDatabaseSetStmt *n = makeNode(AlterDatabaseSetStmt);
					n->dbname = yyvsp[-2].str;
					n->variable = yyvsp[0].vsetstmt->name;
					n->value = yyvsp[0].vsetstmt->args;
					yyval.node = (Node *)n;
				}
    break;

  case 686:
#line 4206 "gram.y"
    {
					AlterDatabaseSetStmt *n = makeNode(AlterDatabaseSetStmt);
					n->dbname = yyvsp[-1].str;
					n->variable = ((VariableResetStmt *)yyvsp[0].node)->name;
					n->value = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 687:
#line 4224 "gram.y"
    {
					DropdbStmt *n = makeNode(DropdbStmt);
					n->dbname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 688:
#line 4240 "gram.y"
    {
					CreateDomainStmt *n = makeNode(CreateDomainStmt);
					n->domainname = yyvsp[-3].list;
					n->typename = yyvsp[-1].typnam;
					n->constraints = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 689:
#line 4252 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'T';
					n->typename = yyvsp[-1].list;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 690:
#line 4261 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'N';
					n->typename = yyvsp[-3].list;
					yyval.node = (Node *)n;
				}
    break;

  case 691:
#line 4269 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'O';
					n->typename = yyvsp[-3].list;
					yyval.node = (Node *)n;
				}
    break;

  case 692:
#line 4277 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'C';
					n->typename = yyvsp[-2].list;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 693:
#line 4286 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'X';
					n->typename = yyvsp[-4].list;
					n->name = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 694:
#line 4296 "gram.y"
    {}
    break;

  case 695:
#line 4297 "gram.y"
    {}
    break;

  case 696:
#line 4313 "gram.y"
    {
			  CreateConversionStmt *n = makeNode(CreateConversionStmt);
			  n->conversion_name = yyvsp[-6].list;
			  n->for_encoding_name = yyvsp[-4].str;
			  n->to_encoding_name = yyvsp[-2].str;
			  n->func_name = yyvsp[0].list;
			  n->def = yyvsp[-8].boolean;
			  yyval.node = (Node *)n;
			}
    break;

  case 697:
#line 4335 "gram.y"
    {
				   ClusterStmt *n = makeNode(ClusterStmt);
				   n->relation = yyvsp[0].range;
				   n->indexname = yyvsp[-2].str;
				   yyval.node = (Node*)n;
				}
    break;

  case 698:
#line 4342 "gram.y"
    {
			       ClusterStmt *n = makeNode(ClusterStmt);
				   n->relation = yyvsp[0].range;
				   n->indexname = NULL;
				   yyval.node = (Node*)n;
				}
    break;

  case 699:
#line 4349 "gram.y"
    {
				   ClusterStmt *n = makeNode(ClusterStmt);
				   n->relation = NULL;
				   n->indexname = NULL;
				   yyval.node = (Node*)n;
				}
    break;

  case 700:
#line 4366 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = true;
					n->analyze = false;
					n->full = yyvsp[-2].boolean;
					n->freeze = yyvsp[-1].boolean;
					n->verbose = yyvsp[0].boolean;
					n->relation = NULL;
					n->va_cols = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 701:
#line 4378 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = true;
					n->analyze = false;
					n->full = yyvsp[-3].boolean;
					n->freeze = yyvsp[-2].boolean;
					n->verbose = yyvsp[-1].boolean;
					n->relation = yyvsp[0].range;
					n->va_cols = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 702:
#line 4390 "gram.y"
    {
					VacuumStmt *n = (VacuumStmt *) yyvsp[0].node;
					n->vacuum = true;
					n->full = yyvsp[-3].boolean;
					n->freeze = yyvsp[-2].boolean;
					n->verbose |= yyvsp[-1].boolean;
					yyval.node = (Node *)n;
				}
    break;

  case 703:
#line 4402 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = false;
					n->analyze = true;
					n->full = false;
					n->freeze = false;
					n->verbose = yyvsp[0].boolean;
					n->relation = NULL;
					n->va_cols = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 704:
#line 4414 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = false;
					n->analyze = true;
					n->full = false;
					n->freeze = false;
					n->verbose = yyvsp[-2].boolean;
					n->relation = yyvsp[-1].range;
					n->va_cols = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 705:
#line 4428 "gram.y"
    {}
    break;

  case 706:
#line 4429 "gram.y"
    {}
    break;

  case 707:
#line 4433 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 708:
#line 4434 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 709:
#line 4437 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 710:
#line 4438 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 711:
#line 4441 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 712:
#line 4442 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 713:
#line 4446 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 714:
#line 4447 "gram.y"
    { yyval.list = NIL; }
    break;

  case 715:
#line 4459 "gram.y"
    {
					ExplainStmt *n = makeNode(ExplainStmt);
					n->analyze = yyvsp[-2].boolean;
					n->verbose = yyvsp[-1].boolean;
					n->query = (Query*)yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 722:
#line 4478 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 723:
#line 4479 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 724:
#line 4490 "gram.y"
    {
					PrepareStmt *n = makeNode(PrepareStmt);
					n->name = yyvsp[-3].str;
					n->argtypes = yyvsp[-2].list;
					n->query = (Query *) yyvsp[0].node;
					yyval.node = (Node *) n;
				}
    break;

  case 725:
#line 4499 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 726:
#line 4500 "gram.y"
    { yyval.list = NIL; }
    break;

  case 727:
#line 4503 "gram.y"
    { yyval.list = list_make1(yyvsp[0].typnam); }
    break;

  case 728:
#line 4505 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].typnam); }
    break;

  case 733:
#line 4523 "gram.y"
    {
					ExecuteStmt *n = makeNode(ExecuteStmt);
					n->name = yyvsp[-1].str;
					n->params = yyvsp[0].list;
					n->into = NULL;
					yyval.node = (Node *) n;
				}
    break;

  case 734:
#line 4531 "gram.y"
    {
					ExecuteStmt *n = makeNode(ExecuteStmt);
					n->name = yyvsp[-1].str;
					n->params = yyvsp[0].list;
					yyvsp[-5].range->istemp = yyvsp[-7].boolean;
					n->into = yyvsp[-5].range;
					if (yyvsp[-4].list)
						ereport(ERROR,
								(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
								 errmsg("column name list not allowed in CREATE TABLE / AS EXECUTE")));
					/* ... because it's not implemented, but it could be */
					yyval.node = (Node *) n;
				}
    break;

  case 735:
#line 4546 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 736:
#line 4547 "gram.y"
    { yyval.list = NIL; }
    break;

  case 737:
#line 4558 "gram.y"
    {
						DeallocateStmt *n = makeNode(DeallocateStmt);
						n->name = yyvsp[0].str;
						yyval.node = (Node *) n;
					}
    break;

  case 738:
#line 4564 "gram.y"
    {
						DeallocateStmt *n = makeNode(DeallocateStmt);
						n->name = yyvsp[0].str;
						yyval.node = (Node *) n;
					}
    break;

  case 739:
#line 4580 "gram.y"
    {
					yyvsp[0].istmt->relation = yyvsp[-1].range;
					yyval.node = (Node *) yyvsp[0].istmt;
				}
    break;

  case 740:
#line 4588 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = NIL;
					yyval.istmt->targetList = yyvsp[-1].list;
					yyval.istmt->selectStmt = NULL;
				}
    break;

  case 741:
#line 4595 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = NIL;
					yyval.istmt->targetList = NIL;
					yyval.istmt->selectStmt = NULL;
				}
    break;

  case 742:
#line 4602 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = NIL;
					yyval.istmt->targetList = NIL;
					yyval.istmt->selectStmt = yyvsp[0].node;
				}
    break;

  case 743:
#line 4609 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = yyvsp[-5].list;
					yyval.istmt->targetList = yyvsp[-1].list;
					yyval.istmt->selectStmt = NULL;
				}
    break;

  case 744:
#line 4616 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = yyvsp[-2].list;
					yyval.istmt->targetList = NIL;
					yyval.istmt->selectStmt = yyvsp[0].node;
				}
    break;

  case 745:
#line 4626 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 746:
#line 4628 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].target); }
    break;

  case 747:
#line 4633 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[-1].str;
					yyval.target->indirection = yyvsp[0].list;
					yyval.target->val = NULL;
				}
    break;

  case 748:
#line 4650 "gram.y"
    {
					DeleteStmt *n = makeNode(DeleteStmt);
					n->relation = yyvsp[-1].range;
					n->whereClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 749:
#line 4659 "gram.y"
    {
					LockStmt *n = makeNode(LockStmt);

					n->relations = yyvsp[-2].list;
					n->mode = yyvsp[-1].ival;
					n->nowait = yyvsp[0].boolean;
					yyval.node = (Node *)n;
				}
    break;

  case 750:
#line 4669 "gram.y"
    { yyval.ival = yyvsp[-1].ival; }
    break;

  case 751:
#line 4670 "gram.y"
    { yyval.ival = AccessExclusiveLock; }
    break;

  case 752:
#line 4673 "gram.y"
    { yyval.ival = AccessShareLock; }
    break;

  case 753:
#line 4674 "gram.y"
    { yyval.ival = RowShareLock; }
    break;

  case 754:
#line 4675 "gram.y"
    { yyval.ival = RowExclusiveLock; }
    break;

  case 755:
#line 4676 "gram.y"
    { yyval.ival = ShareUpdateExclusiveLock; }
    break;

  case 756:
#line 4677 "gram.y"
    { yyval.ival = ShareLock; }
    break;

  case 757:
#line 4678 "gram.y"
    { yyval.ival = ShareRowExclusiveLock; }
    break;

  case 758:
#line 4679 "gram.y"
    { yyval.ival = ExclusiveLock; }
    break;

  case 759:
#line 4680 "gram.y"
    { yyval.ival = AccessExclusiveLock; }
    break;

  case 760:
#line 4683 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 761:
#line 4684 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 762:
#line 4699 "gram.y"
    {
					UpdateStmt *n = makeNode(UpdateStmt);
					n->relation = yyvsp[-4].range;
					n->targetList = yyvsp[-2].list;
					n->fromClause = yyvsp[-1].list;
					n->whereClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 763:
#line 4717 "gram.y"
    {
					DeclareCursorStmt *n = makeNode(DeclareCursorStmt);
					n->portalname = yyvsp[-5].str;
					n->options = yyvsp[-4].ival;
					n->query = yyvsp[0].node;
					if (yyvsp[-2].boolean)
						n->options |= CURSOR_OPT_HOLD;
					yyval.node = (Node *)n;
				}
    break;

  case 764:
#line 4728 "gram.y"
    { yyval.ival = 0; }
    break;

  case 765:
#line 4729 "gram.y"
    { yyval.ival = yyvsp[-2].ival | CURSOR_OPT_NO_SCROLL; }
    break;

  case 766:
#line 4730 "gram.y"
    { yyval.ival = yyvsp[-1].ival | CURSOR_OPT_SCROLL; }
    break;

  case 767:
#line 4731 "gram.y"
    { yyval.ival = yyvsp[-1].ival | CURSOR_OPT_BINARY; }
    break;

  case 768:
#line 4732 "gram.y"
    { yyval.ival = yyvsp[-1].ival | CURSOR_OPT_INSENSITIVE; }
    break;

  case 769:
#line 4735 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 770:
#line 4736 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 771:
#line 4737 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 774:
#line 4790 "gram.y"
    { yyval.node = yyvsp[-1].node; }
    break;

  case 775:
#line 4791 "gram.y"
    { yyval.node = yyvsp[-1].node; }
    break;

  case 776:
#line 4801 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 777:
#line 4803 "gram.y"
    {
					insertSelectOptions((SelectStmt *) yyvsp[-1].node, yyvsp[0].list, NIL,
										NULL, NULL);
					yyval.node = yyvsp[-1].node;
				}
    break;

  case 778:
#line 4809 "gram.y"
    {
					insertSelectOptions((SelectStmt *) yyvsp[-3].node, yyvsp[-2].list, yyvsp[-1].list,
										list_nth(yyvsp[0].list, 0), list_nth(yyvsp[0].list, 1));
					yyval.node = yyvsp[-3].node;
				}
    break;

  case 779:
#line 4815 "gram.y"
    {
					insertSelectOptions((SelectStmt *) yyvsp[-3].node, yyvsp[-2].list, yyvsp[0].list,
										list_nth(yyvsp[-1].list, 0), list_nth(yyvsp[-1].list, 1));
					yyval.node = yyvsp[-3].node;
				}
    break;

  case 780:
#line 4823 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 781:
#line 4824 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 782:
#line 4854 "gram.y"
    {
					SelectStmt *n = makeNode(SelectStmt);
					n->distinctClause = yyvsp[-6].list;
					n->targetList = yyvsp[-5].list;
					n->into = yyvsp[-4].range;
					n->intoColNames = NIL;
					n->intoHasOids = DEFAULT_OIDS;
					n->fromClause = yyvsp[-3].list;
					n->whereClause = yyvsp[-2].node;
					n->groupClause = yyvsp[-1].list;
					n->havingClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 783:
#line 4868 "gram.y"
    {
					yyval.node = makeSetOp(SETOP_UNION, yyvsp[-1].boolean, yyvsp[-3].node, yyvsp[0].node);
				}
    break;

  case 784:
#line 4872 "gram.y"
    {
					yyval.node = makeSetOp(SETOP_INTERSECT, yyvsp[-1].boolean, yyvsp[-3].node, yyvsp[0].node);
				}
    break;

  case 785:
#line 4876 "gram.y"
    {
					yyval.node = makeSetOp(SETOP_EXCEPT, yyvsp[-1].boolean, yyvsp[-3].node, yyvsp[0].node);
				}
    break;

  case 786:
#line 4882 "gram.y"
    { yyval.range = yyvsp[0].range; }
    break;

  case 787:
#line 4883 "gram.y"
    { yyval.range = NULL; }
    break;

  case 788:
#line 4892 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 789:
#line 4897 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 790:
#line 4902 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 791:
#line 4907 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 792:
#line 4912 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 793:
#line 4917 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 794:
#line 4922 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = false;
				}
    break;

  case 795:
#line 4927 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = false;
				}
    break;

  case 796:
#line 4933 "gram.y"
    {}
    break;

  case 797:
#line 4934 "gram.y"
    {}
    break;

  case 798:
#line 4937 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 799:
#line 4938 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 800:
#line 4939 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 801:
#line 4946 "gram.y"
    { yyval.list = list_make1(NIL); }
    break;

  case 802:
#line 4947 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 803:
#line 4948 "gram.y"
    { yyval.list = NIL; }
    break;

  case 804:
#line 4949 "gram.y"
    { yyval.list = NIL; }
    break;

  case 805:
#line 4953 "gram.y"
    { yyval.list = yyvsp[0].list;}
    break;

  case 806:
#line 4954 "gram.y"
    { yyval.list = NIL; }
    break;

  case 807:
#line 4958 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 808:
#line 4962 "gram.y"
    { yyval.list = list_make1(yyvsp[0].sortby); }
    break;

  case 809:
#line 4963 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].sortby); }
    break;

  case 810:
#line 4967 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[-2].node;
					yyval.sortby->sortby_kind = SORTBY_USING;
					yyval.sortby->useOp = yyvsp[0].list;
				}
    break;

  case 811:
#line 4974 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[-1].node;
					yyval.sortby->sortby_kind = SORTBY_ASC;
					yyval.sortby->useOp = NIL;
				}
    break;

  case 812:
#line 4981 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[-1].node;
					yyval.sortby->sortby_kind = SORTBY_DESC;
					yyval.sortby->useOp = NIL;
				}
    break;

  case 813:
#line 4988 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[0].node;
					yyval.sortby->sortby_kind = SORTBY_ASC;	/* default */
					yyval.sortby->useOp = NIL;
				}
    break;

  case 814:
#line 4999 "gram.y"
    { yyval.list = list_make2(yyvsp[0].node, yyvsp[-2].node); }
    break;

  case 815:
#line 5001 "gram.y"
    { yyval.list = list_make2(yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 816:
#line 5003 "gram.y"
    { yyval.list = list_make2(NULL, yyvsp[0].node); }
    break;

  case 817:
#line 5005 "gram.y"
    { yyval.list = list_make2(yyvsp[0].node, NULL); }
    break;

  case 818:
#line 5007 "gram.y"
    {
					/* Disabled because it was too confusing, bjm 2002-02-18 */
					ereport(ERROR,
							(errcode(ERRCODE_SYNTAX_ERROR),
							 errmsg("LIMIT #,# syntax is not supported"),
							 errhint("Use separate LIMIT and OFFSET clauses.")));
				}
    break;

  case 819:
#line 5017 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 820:
#line 5019 "gram.y"
    { yyval.list = list_make2(NULL,NULL); }
    break;

  case 821:
#line 5023 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 822:
#line 5025 "gram.y"
    {
					/* LIMIT ALL is represented as a NULL constant */
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Null;
					yyval.node = (Node *)n;
				}
    break;

  case 823:
#line 5034 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 824:
#line 5046 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 825:
#line 5047 "gram.y"
    { yyval.list = NIL; }
    break;

  case 826:
#line 5051 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 827:
#line 5052 "gram.y"
    { yyval.node = NULL; }
    break;

  case 828:
#line 5056 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 829:
#line 5057 "gram.y"
    { yyval.list = NULL; }
    break;

  case 830:
#line 5061 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 831:
#line 5062 "gram.y"
    { yyval.list = NULL; }
    break;

  case 832:
#line 5066 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 833:
#line 5067 "gram.y"
    { yyval.list = list_make1(NULL); }
    break;

  case 834:
#line 5079 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 835:
#line 5080 "gram.y"
    { yyval.list = NIL; }
    break;

  case 836:
#line 5084 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 837:
#line 5085 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 838:
#line 5096 "gram.y"
    {
					yyval.node = (Node *) yyvsp[0].range;
				}
    break;

  case 839:
#line 5100 "gram.y"
    {
					yyvsp[-1].range->alias = yyvsp[0].alias;
					yyval.node = (Node *) yyvsp[-1].range;
				}
    break;

  case 840:
#line 5105 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					n->funccallnode = yyvsp[0].node;
					n->coldeflist = NIL;
					yyval.node = (Node *) n;
				}
    break;

  case 841:
#line 5112 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					n->funccallnode = yyvsp[-1].node;
					n->alias = yyvsp[0].alias;
					n->coldeflist = NIL;
					yyval.node = (Node *) n;
				}
    break;

  case 842:
#line 5120 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					n->funccallnode = yyvsp[-4].node;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *) n;
				}
    break;

  case 843:
#line 5127 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					Alias *a = makeNode(Alias);
					n->funccallnode = yyvsp[-5].node;
					a->aliasname = yyvsp[-3].str;
					n->alias = a;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *) n;
				}
    break;

  case 844:
#line 5137 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					Alias *a = makeNode(Alias);
					n->funccallnode = yyvsp[-4].node;
					a->aliasname = yyvsp[-3].str;
					n->alias = a;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *) n;
				}
    break;

  case 845:
#line 5147 "gram.y"
    {
					/*
					 * The SQL spec does not permit a subselect
					 * (<derived_table>) without an alias clause,
					 * so we don't either.  This avoids the problem
					 * of needing to invent a unique refname for it.
					 * That could be surmounted if there's sufficient
					 * popular demand, but for now let's just implement
					 * the spec and see if anyone complains.
					 * However, it does seem like a good idea to emit
					 * an error message that's better than "syntax error".
					 */
					ereport(ERROR,
							(errcode(ERRCODE_SYNTAX_ERROR),
							 errmsg("subquery in FROM must have an alias"),
							 errhint("For example, FROM (SELECT ...) [AS] foo.")));
					yyval.node = NULL;
				}
    break;

  case 846:
#line 5166 "gram.y"
    {
					RangeSubselect *n = makeNode(RangeSubselect);
					n->subquery = yyvsp[-1].node;
					n->alias = yyvsp[0].alias;
					yyval.node = (Node *) n;
				}
    break;

  case 847:
#line 5173 "gram.y"
    {
					yyval.node = (Node *) yyvsp[0].jexpr;
				}
    break;

  case 848:
#line 5177 "gram.y"
    {
					yyvsp[-2].jexpr->alias = yyvsp[0].alias;
					yyval.node = (Node *) yyvsp[-2].jexpr;
				}
    break;

  case 849:
#line 5203 "gram.y"
    {
					yyval.jexpr = yyvsp[-1].jexpr;
				}
    break;

  case 850:
#line 5207 "gram.y"
    {
					/* CROSS JOIN is same as unqualified inner join */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_INNER;
					n->isNatural = FALSE;
					n->larg = yyvsp[-3].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL;
					n->quals = NULL;
					yyval.jexpr = n;
				}
    break;

  case 851:
#line 5219 "gram.y"
    {
					/* UNION JOIN is made into 1 token to avoid shift/reduce
					 * conflict against regular UNION keyword.
					 */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_UNION;
					n->isNatural = FALSE;
					n->larg = yyvsp[-2].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL;
					n->quals = NULL;
					yyval.jexpr = n;
				}
    break;

  case 852:
#line 5233 "gram.y"
    {
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = yyvsp[-3].jtype;
					n->isNatural = FALSE;
					n->larg = yyvsp[-4].node;
					n->rarg = yyvsp[-1].node;
					if (yyvsp[0].node != NULL && IsA(yyvsp[0].node, List))
						n->using = (List *) yyvsp[0].node; /* USING clause */
					else
						n->quals = yyvsp[0].node; /* ON clause */
					yyval.jexpr = n;
				}
    break;

  case 853:
#line 5246 "gram.y"
    {
					/* letting join_type reduce to empty doesn't work */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_INNER;
					n->isNatural = FALSE;
					n->larg = yyvsp[-3].node;
					n->rarg = yyvsp[-1].node;
					if (yyvsp[0].node != NULL && IsA(yyvsp[0].node, List))
						n->using = (List *) yyvsp[0].node; /* USING clause */
					else
						n->quals = yyvsp[0].node; /* ON clause */
					yyval.jexpr = n;
				}
    break;

  case 854:
#line 5260 "gram.y"
    {
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = yyvsp[-2].jtype;
					n->isNatural = TRUE;
					n->larg = yyvsp[-4].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL; /* figure out which columns later... */
					n->quals = NULL; /* fill later */
					yyval.jexpr = n;
				}
    break;

  case 855:
#line 5271 "gram.y"
    {
					/* letting join_type reduce to empty doesn't work */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_INNER;
					n->isNatural = TRUE;
					n->larg = yyvsp[-3].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL; /* figure out which columns later... */
					n->quals = NULL; /* fill later */
					yyval.jexpr = n;
				}
    break;

  case 856:
#line 5286 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[-3].str;
					yyval.alias->colnames = yyvsp[-1].list;
				}
    break;

  case 857:
#line 5292 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[0].str;
				}
    break;

  case 858:
#line 5297 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[-3].str;
					yyval.alias->colnames = yyvsp[-1].list;
				}
    break;

  case 859:
#line 5303 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[0].str;
				}
    break;

  case 860:
#line 5309 "gram.y"
    { yyval.jtype = JOIN_FULL; }
    break;

  case 861:
#line 5310 "gram.y"
    { yyval.jtype = JOIN_LEFT; }
    break;

  case 862:
#line 5311 "gram.y"
    { yyval.jtype = JOIN_RIGHT; }
    break;

  case 863:
#line 5312 "gram.y"
    { yyval.jtype = JOIN_INNER; }
    break;

  case 864:
#line 5316 "gram.y"
    { yyval.node = NULL; }
    break;

  case 865:
#line 5317 "gram.y"
    { yyval.node = NULL; }
    break;

  case 866:
#line 5329 "gram.y"
    { yyval.node = (Node *) yyvsp[-1].list; }
    break;

  case 867:
#line 5330 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 868:
#line 5336 "gram.y"
    {
					/* default inheritance */
					yyval.range = yyvsp[0].range;
					yyval.range->inhOpt = INH_DEFAULT;
					yyval.range->alias = NULL;
				}
    break;

  case 869:
#line 5343 "gram.y"
    {
					/* inheritance query */
					yyval.range = yyvsp[-1].range;
					yyval.range->inhOpt = INH_YES;
					yyval.range->alias = NULL;
				}
    break;

  case 870:
#line 5350 "gram.y"
    {
					/* no inheritance */
					yyval.range = yyvsp[0].range;
					yyval.range->inhOpt = INH_NO;
					yyval.range->alias = NULL;
				}
    break;

  case 871:
#line 5357 "gram.y"
    {
					/* no inheritance, SQL99-style syntax */
					yyval.range = yyvsp[-1].range;
					yyval.range->inhOpt = INH_NO;
					yyval.range->alias = NULL;
				}
    break;

  case 872:
#line 5366 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 873:
#line 5371 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 874:
#line 5372 "gram.y"
    { yyval.node = NULL; }
    break;

  case 875:
#line 5378 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].node);
				}
    break;

  case 876:
#line 5382 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				}
    break;

  case 877:
#line 5388 "gram.y"
    {
					ColumnDef *n = makeNode(ColumnDef);
					n->colname = yyvsp[-1].str;
					n->typename = yyvsp[0].typnam;
					n->constraints = NIL;
					n->is_local = true;
					yyval.node = (Node *)n;
				}
    break;

  case 878:
#line 5409 "gram.y"
    {
					yyval.typnam = yyvsp[-1].typnam;
					yyval.typnam->arrayBounds = yyvsp[0].list;
				}
    break;

  case 879:
#line 5414 "gram.y"
    {
					yyval.typnam = yyvsp[-1].typnam;
					yyval.typnam->arrayBounds = yyvsp[0].list;
					yyval.typnam->setof = TRUE;
				}
    break;

  case 880:
#line 5420 "gram.y"
    {
					/* SQL99's redundant syntax */
					yyval.typnam = yyvsp[-4].typnam;
					yyval.typnam->arrayBounds = list_make1(makeInteger(yyvsp[-1].ival));
				}
    break;

  case 881:
#line 5426 "gram.y"
    {
					/* SQL99's redundant syntax */
					yyval.typnam = yyvsp[-4].typnam;
					yyval.typnam->arrayBounds = list_make1(makeInteger(yyvsp[-1].ival));
					yyval.typnam->setof = TRUE;
				}
    break;

  case 882:
#line 5436 "gram.y"
    {  yyval.list = lappend(yyvsp[-2].list, makeInteger(-1)); }
    break;

  case 883:
#line 5438 "gram.y"
    {  yyval.list = lappend(yyvsp[-3].list, makeInteger(yyvsp[-1].ival)); }
    break;

  case 884:
#line 5440 "gram.y"
    {  yyval.list = NIL; }
    break;

  case 885:
#line 5452 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 886:
#line 5453 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 887:
#line 5454 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 888:
#line 5455 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 889:
#line 5456 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 890:
#line 5458 "gram.y"
    {
					yyval.typnam = yyvsp[-1].typnam;
					if (yyvsp[0].ival != INTERVAL_FULL_RANGE)
						yyval.typnam->typmod = INTERVAL_TYPMOD(INTERVAL_FULL_PRECISION, yyvsp[0].ival);
				}
    break;

  case 891:
#line 5464 "gram.y"
    {
					yyval.typnam = yyvsp[-4].typnam;
					if (yyvsp[-2].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision must not be negative",
										yyvsp[-2].ival)));
					if (yyvsp[-2].ival > MAX_INTERVAL_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision reduced to maximum allowed, %d",
										yyvsp[-2].ival, MAX_INTERVAL_PRECISION)));
						yyvsp[-2].ival = MAX_INTERVAL_PRECISION;
					}
					yyval.typnam->typmod = INTERVAL_TYPMOD(yyvsp[-2].ival, yyvsp[0].ival);
				}
    break;

  case 892:
#line 5482 "gram.y"
    {
					yyval.typnam = makeNode(TypeName);
					yyval.typnam->names = lcons(makeString(yyvsp[-1].str), yyvsp[0].list);
					yyval.typnam->typmod = -1;
				}
    break;

  case 893:
#line 5499 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 894:
#line 5500 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 895:
#line 5501 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 896:
#line 5502 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 897:
#line 5503 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 898:
#line 5508 "gram.y"
    {
					yyval.typnam = makeTypeName(yyvsp[0].str);
				}
    break;

  case 899:
#line 5519 "gram.y"
    {
					yyval.typnam = SystemTypeName("int4");
				}
    break;

  case 900:
#line 5523 "gram.y"
    {
					yyval.typnam = SystemTypeName("int4");
				}
    break;

  case 901:
#line 5527 "gram.y"
    {
					yyval.typnam = SystemTypeName("int2");
				}
    break;

  case 902:
#line 5531 "gram.y"
    {
					yyval.typnam = SystemTypeName("int8");
				}
    break;

  case 903:
#line 5535 "gram.y"
    {
					yyval.typnam = SystemTypeName("float4");
				}
    break;

  case 904:
#line 5539 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 905:
#line 5543 "gram.y"
    {
					yyval.typnam = SystemTypeName("float8");
				}
    break;

  case 906:
#line 5547 "gram.y"
    {
					yyval.typnam = SystemTypeName("numeric");
					yyval.typnam->typmod = yyvsp[0].ival;
				}
    break;

  case 907:
#line 5552 "gram.y"
    {
					yyval.typnam = SystemTypeName("numeric");
					yyval.typnam->typmod = yyvsp[0].ival;
				}
    break;

  case 908:
#line 5557 "gram.y"
    {
					yyval.typnam = SystemTypeName("numeric");
					yyval.typnam->typmod = yyvsp[0].ival;
				}
    break;

  case 909:
#line 5562 "gram.y"
    {
					yyval.typnam = SystemTypeName("bool");
				}
    break;

  case 910:
#line 5568 "gram.y"
    {
					if (yyvsp[-1].ival < 1)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("precision for type float must be at least 1 bit")));
					else if (yyvsp[-1].ival <= 24)
						yyval.typnam = SystemTypeName("float4");
					else if (yyvsp[-1].ival <= 53)
						yyval.typnam = SystemTypeName("float8");
					else
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("precision for type float must be less than 54 bits")));
				}
    break;

  case 911:
#line 5583 "gram.y"
    {
					yyval.typnam = SystemTypeName("float8");
				}
    break;

  case 912:
#line 5590 "gram.y"
    {
					if (yyvsp[-3].ival < 1 || yyvsp[-3].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("NUMERIC precision %d must be between 1 and %d",
										yyvsp[-3].ival, NUMERIC_MAX_PRECISION)));
					if (yyvsp[-1].ival < 0 || yyvsp[-1].ival > yyvsp[-3].ival)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("NUMERIC scale %d must be between 0 and precision %d",
										yyvsp[-1].ival, yyvsp[-3].ival)));

					yyval.ival = ((yyvsp[-3].ival << 16) | yyvsp[-1].ival) + VARHDRSZ;
				}
    break;

  case 913:
#line 5605 "gram.y"
    {
					if (yyvsp[-1].ival < 1 || yyvsp[-1].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("NUMERIC precision %d must be between 1 and %d",
										yyvsp[-1].ival, NUMERIC_MAX_PRECISION)));

					yyval.ival = (yyvsp[-1].ival << 16) + VARHDRSZ;
				}
    break;

  case 914:
#line 5615 "gram.y"
    {
					/* Insert "-1" meaning "no limit" */
					yyval.ival = -1;
				}
    break;

  case 915:
#line 5623 "gram.y"
    {
					if (yyvsp[-3].ival < 1 || yyvsp[-3].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("DECIMAL precision %d must be between 1 and %d",
										yyvsp[-3].ival, NUMERIC_MAX_PRECISION)));
					if (yyvsp[-1].ival < 0 || yyvsp[-1].ival > yyvsp[-3].ival)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("DECIMAL scale %d must be between 0 and precision %d",
										yyvsp[-1].ival, yyvsp[-3].ival)));

					yyval.ival = ((yyvsp[-3].ival << 16) | yyvsp[-1].ival) + VARHDRSZ;
				}
    break;

  case 916:
#line 5638 "gram.y"
    {
					if (yyvsp[-1].ival < 1 || yyvsp[-1].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("DECIMAL precision %d must be between 1 and %d",
										yyvsp[-1].ival, NUMERIC_MAX_PRECISION)));

					yyval.ival = (yyvsp[-1].ival << 16) + VARHDRSZ;
				}
    break;

  case 917:
#line 5648 "gram.y"
    {
					/* Insert "-1" meaning "no limit" */
					yyval.ival = -1;
				}
    break;

  case 918:
#line 5660 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 919:
#line 5664 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 920:
#line 5672 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 921:
#line 5676 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
					yyval.typnam->typmod = -1;
				}
    break;

  case 922:
#line 5684 "gram.y"
    {
					char *typname;

					typname = yyvsp[-3].boolean ? "varbit" : "bit";
					yyval.typnam = SystemTypeName(typname);
					if (yyvsp[-1].ival < 1)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s must be at least 1",
										typname)));
					else if (yyvsp[-1].ival > (MaxAttrSize * BITS_PER_BYTE))
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s cannot exceed %d",
										typname, MaxAttrSize * BITS_PER_BYTE)));
					yyval.typnam->typmod = yyvsp[-1].ival;
				}
    break;

  case 923:
#line 5705 "gram.y"
    {
					/* bit defaults to bit(1), varbit to no limit */
					if (yyvsp[0].boolean)
					{
						yyval.typnam = SystemTypeName("varbit");
						yyval.typnam->typmod = -1;
					}
					else
					{
						yyval.typnam = SystemTypeName("bit");
						yyval.typnam->typmod = 1;
					}
				}
    break;

  case 924:
#line 5726 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 925:
#line 5730 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 926:
#line 5736 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 927:
#line 5740 "gram.y"
    {
					/* Length was not specified so allow to be unrestricted.
					 * This handles problems with fixed-length (bpchar) strings
					 * which in column definitions must default to a length
					 * of one, but should not be constrained if the length
					 * was not specified.
					 */
					yyval.typnam = yyvsp[0].typnam;
					yyval.typnam->typmod = -1;
				}
    break;

  case 928:
#line 5753 "gram.y"
    {
					if ((yyvsp[0].str != NULL) && (strcmp(yyvsp[0].str, "sql_text") != 0))
					{
						char *type;

						type = palloc(strlen(yyvsp[-4].str) + 1 + strlen(yyvsp[0].str) + 1);
						strcpy(type, yyvsp[-4].str);
						strcat(type, "_");
						strcat(type, yyvsp[0].str);
						yyvsp[-4].str = type;
					}

					yyval.typnam = SystemTypeName(yyvsp[-4].str);

					if (yyvsp[-2].ival < 1)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s must be at least 1",
										yyvsp[-4].str)));
					else if (yyvsp[-2].ival > MaxAttrSize)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s cannot exceed %d",
										yyvsp[-4].str, MaxAttrSize)));

					/* we actually implement these like a varlen, so
					 * the first 4 bytes is the length. (the difference
					 * between these and "text" is that we blank-pad and
					 * truncate where necessary)
					 */
					yyval.typnam->typmod = VARHDRSZ + yyvsp[-2].ival;
				}
    break;

  case 929:
#line 5788 "gram.y"
    {
					if ((yyvsp[0].str != NULL) && (strcmp(yyvsp[0].str, "sql_text") != 0))
					{
						char *type;

						type = palloc(strlen(yyvsp[-1].str) + 1 + strlen(yyvsp[0].str) + 1);
						strcpy(type, yyvsp[-1].str);
						strcat(type, "_");
						strcat(type, yyvsp[0].str);
						yyvsp[-1].str = type;
					}

					yyval.typnam = SystemTypeName(yyvsp[-1].str);

					/* char defaults to char(1), varchar to no limit */
					if (strcmp(yyvsp[-1].str, "bpchar") == 0)
						yyval.typnam->typmod = VARHDRSZ + 1;
					else
						yyval.typnam->typmod = -1;
				}
    break;

  case 930:
#line 5811 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 931:
#line 5813 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 932:
#line 5815 "gram.y"
    { yyval.str = "varchar"; }
    break;

  case 933:
#line 5817 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 934:
#line 5819 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 935:
#line 5821 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 936:
#line 5825 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 937:
#line 5826 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 938:
#line 5830 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 939:
#line 5831 "gram.y"
    { yyval.str = NULL; }
    break;

  case 940:
#line 5836 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timestamptz");
					else
						yyval.typnam = SystemTypeName("timestamp");
					/* XXX the timezone field seems to be unused
					 * - thomas 2001-09-06
					 */
					yyval.typnam->timezone = yyvsp[0].boolean;
					if (yyvsp[-2].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIMESTAMP(%d)%s precision must not be negative",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""))));
					if (yyvsp[-2].ival > MAX_TIMESTAMP_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIMESTAMP(%d)%s precision reduced to maximum allowed, %d",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""),
										MAX_TIMESTAMP_PRECISION)));
						yyvsp[-2].ival = MAX_TIMESTAMP_PRECISION;
					}
					yyval.typnam->typmod = yyvsp[-2].ival;
				}
    break;

  case 941:
#line 5862 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timestamptz");
					else
						yyval.typnam = SystemTypeName("timestamp");
					/* XXX the timezone field seems to be unused
					 * - thomas 2001-09-06
					 */
					yyval.typnam->timezone = yyvsp[0].boolean;
					/* SQL99 specified a default precision of six
					 * for schema definitions. But for timestamp
					 * literals we don't want to throw away precision
					 * so leave this as unspecified for now.
					 * Later, we may want a different production
					 * for schemas. - thomas 2001-12-07
					 */
					yyval.typnam->typmod = -1;
				}
    break;

  case 942:
#line 5881 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timetz");
					else
						yyval.typnam = SystemTypeName("time");
					if (yyvsp[-2].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIME(%d)%s precision must not be negative",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""))));
					if (yyvsp[-2].ival > MAX_TIME_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIME(%d)%s precision reduced to maximum allowed, %d",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""),
										MAX_TIME_PRECISION)));
						yyvsp[-2].ival = MAX_TIME_PRECISION;
					}
					yyval.typnam->typmod = yyvsp[-2].ival;
				}
    break;

  case 943:
#line 5903 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timetz");
					else
						yyval.typnam = SystemTypeName("time");
					/* SQL99 specified a default precision of zero.
					 * See comments for timestamp above on why we will
					 * leave this unspecified for now. - thomas 2001-12-07
					 */
					yyval.typnam->typmod = -1;
				}
    break;

  case 944:
#line 5917 "gram.y"
    { yyval.typnam = SystemTypeName("interval"); }
    break;

  case 945:
#line 5921 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 946:
#line 5922 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 947:
#line 5923 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 948:
#line 5927 "gram.y"
    { yyval.ival = INTERVAL_MASK(YEAR); }
    break;

  case 949:
#line 5928 "gram.y"
    { yyval.ival = INTERVAL_MASK(MONTH); }
    break;

  case 950:
#line 5929 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY); }
    break;

  case 951:
#line 5930 "gram.y"
    { yyval.ival = INTERVAL_MASK(HOUR); }
    break;

  case 952:
#line 5931 "gram.y"
    { yyval.ival = INTERVAL_MASK(MINUTE); }
    break;

  case 953:
#line 5932 "gram.y"
    { yyval.ival = INTERVAL_MASK(SECOND); }
    break;

  case 954:
#line 5934 "gram.y"
    { yyval.ival = INTERVAL_MASK(YEAR) | INTERVAL_MASK(MONTH); }
    break;

  case 955:
#line 5936 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY) | INTERVAL_MASK(HOUR); }
    break;

  case 956:
#line 5938 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY) | INTERVAL_MASK(HOUR)
						| INTERVAL_MASK(MINUTE); }
    break;

  case 957:
#line 5941 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY) | INTERVAL_MASK(HOUR)
						| INTERVAL_MASK(MINUTE) | INTERVAL_MASK(SECOND); }
    break;

  case 958:
#line 5944 "gram.y"
    { yyval.ival = INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE); }
    break;

  case 959:
#line 5946 "gram.y"
    { yyval.ival = INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE)
						| INTERVAL_MASK(SECOND); }
    break;

  case 960:
#line 5949 "gram.y"
    { yyval.ival = INTERVAL_MASK(MINUTE) | INTERVAL_MASK(SECOND); }
    break;

  case 961:
#line 5950 "gram.y"
    { yyval.ival = INTERVAL_FULL_RANGE; }
    break;

  case 962:
#line 5976 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 963:
#line 5978 "gram.y"
    { yyval.node = makeTypeCast(yyvsp[-2].node, yyvsp[0].typnam); }
    break;

  case 964:
#line 5980 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("timezone");
					n->args = list_make2(yyvsp[0].node, yyvsp[-4].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) n;
				}
    break;

  case 965:
#line 5998 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", NULL, yyvsp[0].node); }
    break;

  case 966:
#line 6000 "gram.y"
    { yyval.node = doNegate(yyvsp[0].node); }
    break;

  case 967:
#line 6002 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", NULL, yyvsp[0].node); }
    break;

  case 968:
#line 6004 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", NULL, yyvsp[0].node); }
    break;

  case 969:
#line 6006 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", yyvsp[-1].node, NULL); }
    break;

  case 970:
#line 6008 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", yyvsp[-1].node, NULL); }
    break;

  case 971:
#line 6010 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 972:
#line 6012 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "-", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 973:
#line 6014 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "*", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 974:
#line 6016 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "/", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 975:
#line 6018 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 976:
#line 6020 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 977:
#line 6022 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 978:
#line 6024 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 979:
#line 6026 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "=", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 980:
#line 6029 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 981:
#line 6031 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, NULL, yyvsp[0].node); }
    break;

  case 982:
#line 6033 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[0].list, yyvsp[-1].node, NULL); }
    break;

  case 983:
#line 6036 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_AND, NIL, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 984:
#line 6038 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OR, NIL, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 985:
#line 6040 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_NOT, NIL, NULL, yyvsp[0].node); }
    break;

  case 986:
#line 6043 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 987:
#line 6045 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~", yyvsp[-4].node, (Node *) n);
				}
    break;

  case 988:
#line 6054 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~", yyvsp[-3].node, yyvsp[0].node); }
    break;

  case 989:
#line 6056 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~", yyvsp[-5].node, (Node *) n);
				}
    break;

  case 990:
#line 6065 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~*", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 991:
#line 6067 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~*", yyvsp[-4].node, (Node *) n);
				}
    break;

  case 992:
#line 6076 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~*", yyvsp[-3].node, yyvsp[0].node); }
    break;

  case 993:
#line 6078 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~*", yyvsp[-5].node, (Node *) n);
				}
    break;

  case 994:
#line 6088 "gram.y"
    {
					A_Const *c = makeNode(A_Const);
					FuncCall *n = makeNode(FuncCall);
					c->val.type = T_Null;
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[0].node, (Node *) c);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~", yyvsp[-3].node, (Node *) n);
				}
    break;

  case 995:
#line 6099 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~", yyvsp[-5].node, (Node *) n);
				}
    break;

  case 996:
#line 6108 "gram.y"
    {
					A_Const *c = makeNode(A_Const);
					FuncCall *n = makeNode(FuncCall);
					c->val.type = T_Null;
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[0].node, (Node *) c);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~", yyvsp[-4].node, (Node *) n);
				}
    break;

  case 997:
#line 6119 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~", yyvsp[-6].node, (Node *) n);
				}
    break;

  case 998:
#line 6138 "gram.y"
    {
					if (IsA(yyvsp[-1].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NULL, (RowExpr *) yyvsp[-1].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-1].node;
						n->nulltesttype = IS_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 999:
#line 6150 "gram.y"
    {
					if (IsA(yyvsp[-2].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NULL, (RowExpr *) yyvsp[-2].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-2].node;
						n->nulltesttype = IS_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 1000:
#line 6162 "gram.y"
    {
					if (IsA(yyvsp[-1].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NOT_NULL, (RowExpr *) yyvsp[-1].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-1].node;
						n->nulltesttype = IS_NOT_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 1001:
#line 6174 "gram.y"
    {
					if (IsA(yyvsp[-3].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NOT_NULL, (RowExpr *) yyvsp[-3].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-3].node;
						n->nulltesttype = IS_NOT_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 1002:
#line 6186 "gram.y"
    {
					yyval.node = (Node *)makeOverlaps(yyvsp[-2].list, yyvsp[0].list);
				}
    break;

  case 1003:
#line 6190 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-2].node;
					b->booltesttype = IS_TRUE;
					yyval.node = (Node *)b;
				}
    break;

  case 1004:
#line 6197 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-3].node;
					b->booltesttype = IS_NOT_TRUE;
					yyval.node = (Node *)b;
				}
    break;

  case 1005:
#line 6204 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-2].node;
					b->booltesttype = IS_FALSE;
					yyval.node = (Node *)b;
				}
    break;

  case 1006:
#line 6211 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-3].node;
					b->booltesttype = IS_NOT_FALSE;
					yyval.node = (Node *)b;
				}
    break;

  case 1007:
#line 6218 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-2].node;
					b->booltesttype = IS_UNKNOWN;
					yyval.node = (Node *)b;
				}
    break;

  case 1008:
#line 6225 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-3].node;
					b->booltesttype = IS_NOT_UNKNOWN;
					yyval.node = (Node *)b;
				}
    break;

  case 1009:
#line 6232 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_DISTINCT, "=", yyvsp[-4].node, yyvsp[0].node);
				}
    break;

  case 1010:
#line 6236 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "=", yyvsp[-5].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1011:
#line 6240 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "!=", yyvsp[-6].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1012:
#line 6244 "gram.y"
    {
					yyval.node = (Node *) makeA_Expr(AEXPR_AND, NIL,
						(Node *) makeSimpleA_Expr(AEXPR_OP, ">=", yyvsp[-4].node, yyvsp[-2].node),
						(Node *) makeSimpleA_Expr(AEXPR_OP, "<=", yyvsp[-4].node, yyvsp[0].node));
				}
    break;

  case 1013:
#line 6250 "gram.y"
    {
					yyval.node = (Node *) makeA_Expr(AEXPR_OR, NIL,
						(Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-5].node, yyvsp[-2].node),
						(Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-5].node, yyvsp[0].node));
				}
    break;

  case 1014:
#line 6256 "gram.y"
    {
					/* in_expr returns a SubLink or a list of a_exprs */
					if (IsA(yyvsp[0].node, SubLink))
					{
							SubLink *n = (SubLink *)yyvsp[0].node;
							n->subLinkType = ANY_SUBLINK;
							if (IsA(yyvsp[-2].node, RowExpr))
								n->lefthand = ((RowExpr *) yyvsp[-2].node)->args;
							else
								n->lefthand = list_make1(yyvsp[-2].node);
							n->operName = list_make1(makeString("="));
							yyval.node = (Node *)n;
					}
					else
					{
						Node *n = NULL;
						ListCell *l;
						foreach(l, (List *) yyvsp[0].node)
						{
							Node *cmp;
							cmp = (Node *) makeSimpleA_Expr(AEXPR_OP, "=", yyvsp[-2].node, lfirst(l));
							if (n == NULL)
								n = cmp;
							else
								n = (Node *) makeA_Expr(AEXPR_OR, NIL, n, cmp);
						}
						yyval.node = n;
					}
				}
    break;

  case 1015:
#line 6286 "gram.y"
    {
					/* in_expr returns a SubLink or a list of a_exprs */
					if (IsA(yyvsp[0].node, SubLink))
					{
						/* Make an IN node */
						SubLink *n = (SubLink *)yyvsp[0].node;
						n->subLinkType = ANY_SUBLINK;
						if (IsA(yyvsp[-3].node, RowExpr))
							n->lefthand = ((RowExpr *) yyvsp[-3].node)->args;
						else
							n->lefthand = list_make1(yyvsp[-3].node);
						n->operName = list_make1(makeString("="));
						/* Stick a NOT on top */
						yyval.node = (Node *) makeA_Expr(AEXPR_NOT, NIL, NULL, (Node *) n);
					}
					else
					{
						Node *n = NULL;
						ListCell *l;
						foreach(l, (List *) yyvsp[0].node)
						{
							Node *cmp;
							cmp = (Node *) makeSimpleA_Expr(AEXPR_OP, "<>", yyvsp[-3].node, lfirst(l));
							if (n == NULL)
								n = cmp;
							else
								n = (Node *) makeA_Expr(AEXPR_AND, NIL, n, cmp);
						}
						yyval.node = n;
					}
				}
    break;

  case 1016:
#line 6318 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = yyvsp[-1].ival;
					if (IsA(yyvsp[-3].node, RowExpr))
						n->lefthand = ((RowExpr *) yyvsp[-3].node)->args;
					else
						n->lefthand = list_make1(yyvsp[-3].node);
					n->operName = yyvsp[-2].list;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1017:
#line 6330 "gram.y"
    {
					if (yyvsp[-3].ival == ANY_SUBLINK)
						yyval.node = (Node *) makeA_Expr(AEXPR_OP_ANY, yyvsp[-4].list, yyvsp[-5].node, yyvsp[-1].node);
					else
						yyval.node = (Node *) makeA_Expr(AEXPR_OP_ALL, yyvsp[-4].list, yyvsp[-5].node, yyvsp[-1].node);
				}
    break;

  case 1018:
#line 6337 "gram.y"
    {
					/* Not sure how to get rid of the parentheses
					 * but there are lots of shift/reduce errors without them.
					 *
					 * Should be able to implement this by plopping the entire
					 * select into a node, then transforming the target expressions
					 * from whatever they are into count(*), and testing the
					 * entire result equal to one.
					 * But, will probably implement a separate node in the executor.
					 */
					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("UNIQUE predicate is not yet implemented")));
				}
    break;

  case 1019:
#line 6363 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1020:
#line 6365 "gram.y"
    { yyval.node = makeTypeCast(yyvsp[-2].node, yyvsp[0].typnam); }
    break;

  case 1021:
#line 6367 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", NULL, yyvsp[0].node); }
    break;

  case 1022:
#line 6369 "gram.y"
    { yyval.node = doNegate(yyvsp[0].node); }
    break;

  case 1023:
#line 6371 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", NULL, yyvsp[0].node); }
    break;

  case 1024:
#line 6373 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", NULL, yyvsp[0].node); }
    break;

  case 1025:
#line 6375 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", yyvsp[-1].node, NULL); }
    break;

  case 1026:
#line 6377 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", yyvsp[-1].node, NULL); }
    break;

  case 1027:
#line 6379 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1028:
#line 6381 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "-", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1029:
#line 6383 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "*", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1030:
#line 6385 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "/", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1031:
#line 6387 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1032:
#line 6389 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1033:
#line 6391 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1034:
#line 6393 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1035:
#line 6395 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "=", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1036:
#line 6397 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1037:
#line 6399 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, NULL, yyvsp[0].node); }
    break;

  case 1038:
#line 6401 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[0].list, yyvsp[-1].node, NULL); }
    break;

  case 1039:
#line 6403 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_DISTINCT, "=", yyvsp[-4].node, yyvsp[0].node);
				}
    break;

  case 1040:
#line 6407 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "=", yyvsp[-5].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1041:
#line 6411 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "!=", yyvsp[-6].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1042:
#line 6424 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1043:
#line 6425 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1044:
#line 6427 "gram.y"
    {
					ParamRef *p = makeNode(ParamRef);
					p->number = yyvsp[-1].ival;
					if (yyvsp[0].list)
					{
						A_Indirection *n = makeNode(A_Indirection);
						n->arg = (Node *) p;
						n->indirection = yyvsp[0].list;
						yyval.node = (Node *) n;
					}
					else
						yyval.node = (Node *) p;
				}
    break;

  case 1045:
#line 6441 "gram.y"
    {
					if (yyvsp[0].list)
					{
						A_Indirection *n = makeNode(A_Indirection);
						n->arg = yyvsp[-2].node;
						n->indirection = yyvsp[0].list;
						yyval.node = (Node *)n;
					}
					else
						yyval.node = yyvsp[-2].node;
				}
    break;

  case 1046:
#line 6453 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1047:
#line 6455 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1048:
#line 6457 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = EXPR_SUBLINK;
					n->lefthand = NIL;
					n->operName = NIL;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1049:
#line 6466 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = EXISTS_SUBLINK;
					n->lefthand = NIL;
					n->operName = NIL;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1050:
#line 6475 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = ARRAY_SUBLINK;
					n->lefthand = NIL;
					n->operName = NIL;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1051:
#line 6484 "gram.y"
    {	yyval.node = yyvsp[0].node;	}
    break;

  case 1052:
#line 6486 "gram.y"
    {
					RowExpr *r = makeNode(RowExpr);
					r->args = yyvsp[0].list;
					r->row_typeid = InvalidOid;	/* not analyzed yet */
					yyval.node = (Node *)r;
				}
    break;

  case 1053:
#line 6503 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-2].list;
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1054:
#line 6512 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-3].list;
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1055:
#line 6521 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-4].list;
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					/* Ideally we'd mark the FuncCall node to indicate
					 * "must be an aggregate", but there's no provision
					 * for that in FuncCall at the moment.
					 */
					yyval.node = (Node *)n;
				}
    break;

  case 1056:
#line 6534 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-4].list;
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = TRUE;
					yyval.node = (Node *)n;
				}
    break;

  case 1057:
#line 6543 "gram.y"
    {
					/*
					 * For now, we transform AGGREGATE(*) into AGGREGATE(1).
					 *
					 * This does the right thing for COUNT(*) (in fact,
					 * any certainly-non-null expression would do for COUNT),
					 * and there are no other aggregates in SQL92 that accept
					 * '*' as parameter.
					 *
					 * The FuncCall node is also marked agg_star = true,
					 * so that later processing can detect what the argument
					 * really was.
					 */
					FuncCall *n = makeNode(FuncCall);
					A_Const *star = makeNode(A_Const);

					star->val.type = T_Integer;
					star->val.val.ival = 1;
					n->funcname = yyvsp[-3].list;
					n->args = list_make1(star);
					n->agg_star = TRUE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1058:
#line 6568 "gram.y"
    {
					/*
					 * Translate as "'now'::text::date".
					 *
					 * We cannot use "'now'::date" because coerce_type() will
					 * immediately reduce that to a constant representing
					 * today's date.  We need to delay the conversion until
					 * runtime, else the wrong things will happen when
					 * CURRENT_DATE is used in a column default value or rule.
					 *
					 * This could be simplified if we had a way to generate
					 * an expression tree representing runtime application
					 * of type-input conversion functions...
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("date");

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1059:
#line 6594 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timetz".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timetz");
					/* SQL99 mandates a default precision of zero for TIME
					 * fields in schemas. However, for CURRENT_TIME
					 * let's preserve the microsecond precision we
					 * might see from the system clock. - thomas 2001-12-07
					 */
					d->typmod = 6;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1060:
#line 6617 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timetz(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");
					d = SystemTypeName("timetz");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIME(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIME_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIME(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIME_PRECISION)));
						yyvsp[-1].ival = MAX_TIME_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1061:
#line 6647 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timestamptz".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timestamptz");
					/* SQL99 mandates a default precision of 6 for timestamp.
					 * Also, that is about as precise as we will get since
					 * we are using a microsecond time interface.
					 * - thomas 2001-12-07
					 */
					d->typmod = 6;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1062:
#line 6670 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timestamptz(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timestamptz");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIMESTAMP(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIMESTAMP_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIMESTAMP(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIMESTAMP_PRECISION)));
						yyvsp[-1].ival = MAX_TIMESTAMP_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1063:
#line 6701 "gram.y"
    {
					/*
					 * Translate as "'now'::text::time".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("time");
					/* SQL99 mandates a default precision of zero for TIME
					 * fields in schemas. However, for LOCALTIME
					 * let's preserve the microsecond precision we
					 * might see from the system clock. - thomas 2001-12-07
					 */
					d->typmod = 6;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1064:
#line 6724 "gram.y"
    {
					/*
					 * Translate as "'now'::text::time(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");
					d = SystemTypeName("time");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIME(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIME_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIME(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIME_PRECISION)));
						yyvsp[-1].ival = MAX_TIME_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1065:
#line 6754 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timestamp".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timestamp");
					/* SQL99 mandates a default precision of 6 for timestamp.
					 * Also, that is about as precise as we will get since
					 * we are using a microsecond time interface.
					 * - thomas 2001-12-07
					 */
					d->typmod = 6;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1066:
#line 6777 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timestamp(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timestamp");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIMESTAMP(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIMESTAMP_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIMESTAMP(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIMESTAMP_PRECISION)));
						yyvsp[-1].ival = MAX_TIMESTAMP_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1067:
#line 6808 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("current_user");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1068:
#line 6817 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("session_user");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1069:
#line 6826 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("current_user");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1070:
#line 6835 "gram.y"
    { yyval.node = makeTypeCast(yyvsp[-3].node, yyvsp[-1].typnam); }
    break;

  case 1071:
#line 6837 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("date_part");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1072:
#line 6846 "gram.y"
    {
					/* overlay(A PLACING B FROM C FOR D) is converted to
					 * substring(A, 1, C-1) || B || substring(A, C+1, C+D)
					 * overlay(A PLACING B FROM C) is converted to
					 * substring(A, 1, C-1) || B || substring(A, C+1, C+char_length(B))
					 */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("overlay");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1073:
#line 6860 "gram.y"
    {
					/* position(A in B) is converted to position(B, A) */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("position");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1074:
#line 6870 "gram.y"
    {
					/* substring(A from B for C) is converted to
					 * substring(A, B, C) - thomas 2000-11-28
					 */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("substring");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1075:
#line 6882 "gram.y"
    {
					/* TREAT(expr AS target) converts expr of a particular type to target,
					 * which is defined to be a subtype of the original expression.
					 * In SQL99, this is intended for use with structured UDTs,
					 * but let's make this a generally useful form allowing stronger
					 * coersions than are handled by implicit casting.
					 */
					FuncCall *n = makeNode(FuncCall);
					/* Convert SystemTypeName() to SystemFuncName() even though
					 * at the moment they result in the same thing.
					 */
					n->funcname = SystemFuncName(((Value *)llast(yyvsp[-1].typnam->names))->val.str);
					n->args = list_make1(yyvsp[-3].node);
					yyval.node = (Node *)n;
				}
    break;

  case 1076:
#line 6898 "gram.y"
    {
					/* various trim expressions are defined in SQL92
					 * - thomas 1997-07-19
					 */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("btrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1077:
#line 6910 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("ltrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1078:
#line 6919 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("rtrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1079:
#line 6928 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("btrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1080:
#line 6937 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					A_Const *c = makeNode(A_Const);

					c->val.type = T_String;
					c->val.val.str = NameListToQuotedString(yyvsp[-1].list);

					n->funcname = SystemFuncName("convert_using");
					n->args = list_make2(yyvsp[-3].node, c);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1081:
#line 6951 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("convert");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1082:
#line 6960 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_NULLIF, "=", yyvsp[-3].node, yyvsp[-1].node);
				}
    break;

  case 1083:
#line 6964 "gram.y"
    {
					CoalesceExpr *c = makeNode(CoalesceExpr);
					c->args = yyvsp[-1].list;
					yyval.node = (Node *)c;
				}
    break;

  case 1084:
#line 6981 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1085:
#line 6982 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1086:
#line 6983 "gram.y"
    { yyval.list = lappend(yyvsp[-3].list, yyvsp[-1].node); }
    break;

  case 1087:
#line 6986 "gram.y"
    { yyval.ival = ANY_SUBLINK; }
    break;

  case 1088:
#line 6987 "gram.y"
    { yyval.ival = ANY_SUBLINK; }
    break;

  case 1089:
#line 6988 "gram.y"
    { yyval.ival = ALL_SUBLINK; }
    break;

  case 1090:
#line 6991 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1091:
#line 6992 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1092:
#line 6995 "gram.y"
    { yyval.str = "+"; }
    break;

  case 1093:
#line 6996 "gram.y"
    { yyval.str = "-"; }
    break;

  case 1094:
#line 6997 "gram.y"
    { yyval.str = "*"; }
    break;

  case 1095:
#line 6998 "gram.y"
    { yyval.str = "/"; }
    break;

  case 1096:
#line 6999 "gram.y"
    { yyval.str = "%"; }
    break;

  case 1097:
#line 7000 "gram.y"
    { yyval.str = "^"; }
    break;

  case 1098:
#line 7001 "gram.y"
    { yyval.str = "<"; }
    break;

  case 1099:
#line 7002 "gram.y"
    { yyval.str = ">"; }
    break;

  case 1100:
#line 7003 "gram.y"
    { yyval.str = "="; }
    break;

  case 1101:
#line 7007 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1102:
#line 7009 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1103:
#line 7014 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1104:
#line 7016 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1105:
#line 7021 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1106:
#line 7023 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1107:
#line 7025 "gram.y"
    { yyval.list = list_make1(makeString("~~")); }
    break;

  case 1108:
#line 7027 "gram.y"
    { yyval.list = list_make1(makeString("!~~")); }
    break;

  case 1109:
#line 7029 "gram.y"
    { yyval.list = list_make1(makeString("~~*")); }
    break;

  case 1110:
#line 7031 "gram.y"
    { yyval.list = list_make1(makeString("!~~*")); }
    break;

  case 1111:
#line 7043 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].node);
				}
    break;

  case 1112:
#line 7047 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				}
    break;

  case 1113:
#line 7054 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_String;
					n->val.val.str = yyvsp[-2].str;
					yyval.list = list_make2((Node *) n, yyvsp[0].node);
				}
    break;

  case 1114:
#line 7060 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1115:
#line 7064 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].typnam);
				}
    break;

  case 1116:
#line 7068 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].typnam);
				}
    break;

  case 1117:
#line 7074 "gram.y"
    {	yyval.list = list_make1(yyvsp[0].node);		}
    break;

  case 1118:
#line 7076 "gram.y"
    {	yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);	}
    break;

  case 1119:
#line 7080 "gram.y"
    {
					ArrayExpr *n = makeNode(ArrayExpr);
					n->elements = yyvsp[-1].list;
					yyval.node = (Node *)n;
				}
    break;

  case 1120:
#line 7086 "gram.y"
    {
					ArrayExpr *n = makeNode(ArrayExpr);
					n->elements = yyvsp[-1].list;
					yyval.node = (Node *)n;
				}
    break;

  case 1121:
#line 7098 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1122:
#line 7099 "gram.y"
    { yyval.str = "year"; }
    break;

  case 1123:
#line 7100 "gram.y"
    { yyval.str = "month"; }
    break;

  case 1124:
#line 7101 "gram.y"
    { yyval.str = "day"; }
    break;

  case 1125:
#line 7102 "gram.y"
    { yyval.str = "hour"; }
    break;

  case 1126:
#line 7103 "gram.y"
    { yyval.str = "minute"; }
    break;

  case 1127:
#line 7104 "gram.y"
    { yyval.str = "second"; }
    break;

  case 1128:
#line 7105 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1129:
#line 7115 "gram.y"
    {
					yyval.list = list_make4(yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1130:
#line 7119 "gram.y"
    {
					yyval.list = list_make3(yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1131:
#line 7126 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1132:
#line 7132 "gram.y"
    { yyval.list = list_make2(yyvsp[0].node, yyvsp[-2].node); }
    break;

  case 1133:
#line 7133 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1134:
#line 7149 "gram.y"
    {
					yyval.list = list_make3(yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1135:
#line 7153 "gram.y"
    {
					yyval.list = list_make3(yyvsp[-2].node, yyvsp[0].node, yyvsp[-1].node);
				}
    break;

  case 1136:
#line 7157 "gram.y"
    {
					yyval.list = list_make2(yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1137:
#line 7161 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Integer;
					n->val.val.ival = 1;
					yyval.list = list_make3(yyvsp[-1].node, (Node *)n, yyvsp[0].node);
				}
    break;

  case 1138:
#line 7168 "gram.y"
    {
					yyval.list = yyvsp[0].list;
				}
    break;

  case 1139:
#line 7172 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1140:
#line 7176 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1141:
#line 7179 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1142:
#line 7182 "gram.y"
    { yyval.list = lappend(yyvsp[0].list, yyvsp[-2].node); }
    break;

  case 1143:
#line 7183 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 1144:
#line 7184 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 1145:
#line 7188 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subselect = yyvsp[0].node;
					/* other fields will be filled later */
					yyval.node = (Node *)n;
				}
    break;

  case 1146:
#line 7194 "gram.y"
    { yyval.node = (Node *)yyvsp[-1].list; }
    break;

  case 1147:
#line 7205 "gram.y"
    {
					CaseExpr *c = makeNode(CaseExpr);
					c->casetype = InvalidOid; /* not analyzed yet */
					c->arg = (Expr *) yyvsp[-3].node;
					c->args = yyvsp[-2].list;
					c->defresult = (Expr *) yyvsp[-1].node;
					yyval.node = (Node *)c;
				}
    break;

  case 1148:
#line 7217 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 1149:
#line 7218 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 1150:
#line 7223 "gram.y"
    {
					CaseWhen *w = makeNode(CaseWhen);
					w->expr = (Expr *) yyvsp[-2].node;
					w->result = (Expr *) yyvsp[0].node;
					yyval.node = (Node *)w;
				}
    break;

  case 1151:
#line 7232 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1152:
#line 7233 "gram.y"
    { yyval.node = NULL; }
    break;

  case 1153:
#line 7236 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1154:
#line 7237 "gram.y"
    { yyval.node = NULL; }
    break;

  case 1155:
#line 7246 "gram.y"
    {
					yyval.node = makeColumnRef(yyvsp[0].str, NIL);
				}
    break;

  case 1156:
#line 7250 "gram.y"
    {
					yyval.node = makeColumnRef(yyvsp[-1].str, yyvsp[0].list);
				}
    break;

  case 1157:
#line 7257 "gram.y"
    {
					yyval.node = (Node *) makeString(yyvsp[0].str);
				}
    break;

  case 1158:
#line 7261 "gram.y"
    {
					yyval.node = (Node *) makeString("*");
				}
    break;

  case 1159:
#line 7265 "gram.y"
    {
					A_Indices *ai = makeNode(A_Indices);
					ai->lidx = NULL;
					ai->uidx = yyvsp[-1].node;
					yyval.node = (Node *) ai;
				}
    break;

  case 1160:
#line 7272 "gram.y"
    {
					A_Indices *ai = makeNode(A_Indices);
					ai->lidx = yyvsp[-3].node;
					ai->uidx = yyvsp[-1].node;
					yyval.node = (Node *) ai;
				}
    break;

  case 1161:
#line 7281 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 1162:
#line 7282 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 1163:
#line 7286 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1164:
#line 7287 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 1165:
#line 7298 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 1166:
#line 7299 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].target); }
    break;

  case 1167:
#line 7304 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[0].str;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)yyvsp[-2].node;
				}
    break;

  case 1168:
#line 7311 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)yyvsp[0].node;
				}
    break;

  case 1169:
#line 7318 "gram.y"
    {
					ColumnRef *n = makeNode(ColumnRef);
					n->fields = list_make1(makeString("*"));

					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)n;
				}
    break;

  case 1170:
#line 7330 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 1171:
#line 7331 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list,yyvsp[0].target); }
    break;

  case 1172:
#line 7336 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[-3].str;
					yyval.target->indirection = yyvsp[-2].list;
					yyval.target->val = (Node *) yyvsp[0].node;
				}
    break;

  case 1173:
#line 7343 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[-3].str;
					yyval.target->indirection = yyvsp[-2].list;
					yyval.target->val = (Node *) makeNode(SetToDefault);
				}
    break;

  case 1174:
#line 7353 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 1175:
#line 7354 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].target); }
    break;

  case 1176:
#line 7359 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)yyvsp[0].node;
				}
    break;

  case 1177:
#line 7366 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *) makeNode(SetToDefault);
				}
    break;

  case 1178:
#line 7382 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1179:
#line 7383 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1180:
#line 7387 "gram.y"
    { yyval.list = list_make1(yyvsp[0].range); }
    break;

  case 1181:
#line 7388 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].range); }
    break;

  case 1182:
#line 7400 "gram.y"
    {
					yyval.range = makeNode(RangeVar);
					yyval.range->catalogname = NULL;
					yyval.range->schemaname = NULL;
					yyval.range->relname = yyvsp[0].str;
				}
    break;

  case 1183:
#line 7407 "gram.y"
    {
					check_qualified_name(yyvsp[0].list);
					yyval.range = makeNode(RangeVar);
					switch (list_length(yyvsp[0].list))
					{
						case 1:
							yyval.range->catalogname = NULL;
							yyval.range->schemaname = yyvsp[-1].str;
							yyval.range->relname = strVal(linitial(yyvsp[0].list));
							break;
						case 2:
							yyval.range->catalogname = yyvsp[-1].str;
							yyval.range->schemaname = strVal(linitial(yyvsp[0].list));
							yyval.range->relname = strVal(lsecond(yyvsp[0].list));
							break;
						default:
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("improper qualified name (too many dotted names): %s",
											NameListToString(lcons(makeString(yyvsp[-1].str), yyvsp[0].list)))));
							break;
					}
				}
    break;

  case 1184:
#line 7433 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1185:
#line 7435 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, makeString(yyvsp[0].str)); }
    break;

  case 1186:
#line 7439 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1187:
#line 7442 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1188:
#line 7445 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1189:
#line 7447 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1190:
#line 7449 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1191:
#line 7451 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1192:
#line 7462 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1193:
#line 7464 "gram.y"
    { yyval.list = check_func_name(lcons(makeString(yyvsp[-1].str), yyvsp[0].list)); }
    break;

  case 1194:
#line 7472 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Integer;
					n->val.val.ival = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 1195:
#line 7479 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Float;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1196:
#line 7486 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_String;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1197:
#line 7493 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_BitString;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1198:
#line 7500 "gram.y"
    {
					/* This is a bit constant per SQL99:
					 * Without Feature F511, "BIT data type",
					 * a <general literal> shall not be a
					 * <bit string literal> or a <hex string literal>.
					 */
					A_Const *n = makeNode(A_Const);
					n->val.type = T_BitString;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1199:
#line 7512 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->typename = yyvsp[-1].typnam;
					n->val.type = T_String;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1200:
#line 7520 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->typename = yyvsp[-2].typnam;
					n->val.type = T_String;
					n->val.val.str = yyvsp[-1].str;
					/* precision is not specified, but fields may be... */
					if (yyvsp[0].ival != INTERVAL_FULL_RANGE)
						n->typename->typmod = INTERVAL_TYPMOD(INTERVAL_FULL_PRECISION, yyvsp[0].ival);
					yyval.node = (Node *)n;
				}
    break;

  case 1201:
#line 7531 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->typename = yyvsp[-5].typnam;
					n->val.type = T_String;
					n->val.val.str = yyvsp[-1].str;
					/* precision specified, and fields may be... */
					if (yyvsp[-3].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision must not be negative",
										yyvsp[-3].ival)));
					if (yyvsp[-3].ival > MAX_INTERVAL_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision reduced to maximum allowed, %d",
										yyvsp[-3].ival, MAX_INTERVAL_PRECISION)));
						yyvsp[-3].ival = MAX_INTERVAL_PRECISION;
					}
					n->typename->typmod = INTERVAL_TYPMOD(yyvsp[-3].ival, yyvsp[0].ival);
					yyval.node = (Node *)n;
				}
    break;

  case 1202:
#line 7554 "gram.y"
    {
					yyval.node = (Node *)makeBoolAConst(TRUE);
				}
    break;

  case 1203:
#line 7558 "gram.y"
    {
					yyval.node = (Node *)makeBoolAConst(FALSE);
				}
    break;

  case 1204:
#line 7562 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Null;
					yyval.node = (Node *)n;
				}
    break;

  case 1205:
#line 7569 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 1206:
#line 7570 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1207:
#line 7571 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1208:
#line 7586 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1209:
#line 7587 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1210:
#line 7588 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1211:
#line 7593 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1212:
#line 7594 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1213:
#line 7600 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1214:
#line 7601 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1215:
#line 7602 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1216:
#line 7608 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1217:
#line 7609 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1218:
#line 7610 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1219:
#line 7611 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1220:
#line 7612 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1534:
#line 7981 "gram.y"
    {
					if (QueryIsRule)
						yyval.str = "*OLD*";
					else
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("OLD used in query that is not in a rule")));
				}
    break;

  case 1535:
#line 7990 "gram.y"
    {
					if (QueryIsRule)
						yyval.str = "*NEW*";
					else
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("NEW used in query that is not in a rule")));
				}
    break;


    }

/* Line 991 of yacc.c.  */
#line 19002 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 8000 "gram.y"


static Node *
makeColumnRef(char *relname, List *indirection)
{
	/*
	 * Generate a ColumnRef node, with an A_Indirection node added if there
	 * is any subscripting in the specified indirection list.  However,
	 * any field selection at the start of the indirection list must be
	 * transposed into the "fields" part of the ColumnRef node.
	 */
	ColumnRef  *c = makeNode(ColumnRef);
	int		nfields = 0;
	ListCell *l;

	foreach(l, indirection)
	{
		if (IsA(lfirst(l), A_Indices))
		{
			A_Indirection *i = makeNode(A_Indirection);

			if (nfields == 0)
			{
				/* easy case - all indirection goes to A_Indirection */
				c->fields = list_make1(makeString(relname));
				i->indirection = indirection;
			}
			else
			{
				/* got to split the list in two */
				i->indirection = list_copy_tail(indirection, nfields);
				indirection = list_truncate(indirection, nfields);
				c->fields = lcons(makeString(relname), indirection);
			}
			i->arg = (Node *) c;
			return (Node *) i;
		}
		nfields++;
	}
	/* No subscripting, so all indirection gets added to field list */
	c->fields = lcons(makeString(relname), indirection);
	return (Node *) c;
}

static Node *
makeTypeCast(Node *arg, TypeName *typename)
{
	/*
	 * Simply generate a TypeCast node.
	 *
	 * Earlier we would determine whether an A_Const would
	 * be acceptable, however Domains require coerce_type()
	 * to process them -- applying constraints as required.
	 */
	TypeCast *n = makeNode(TypeCast);
	n->arg = arg;
	n->typename = typename;
	return (Node *) n;
}

static Node *
makeStringConst(char *str, TypeName *typename)
{
	A_Const *n = makeNode(A_Const);

	n->val.type = T_String;
	n->val.val.str = str;
	n->typename = typename;

	return (Node *)n;
}

static Node *
makeIntConst(int val)
{
	A_Const *n = makeNode(A_Const);
	n->val.type = T_Integer;
	n->val.val.ival = val;
	n->typename = SystemTypeName("int4");

	return (Node *)n;
}

static Node *
makeFloatConst(char *str)
{
	A_Const *n = makeNode(A_Const);

	n->val.type = T_Float;
	n->val.val.str = str;
	n->typename = SystemTypeName("float8");

	return (Node *)n;
}

static Node *
makeAConst(Value *v)
{
	Node *n;

	switch (v->type)
	{
		case T_Float:
			n = makeFloatConst(v->val.str);
			break;

		case T_Integer:
			n = makeIntConst(v->val.ival);
			break;

		case T_String:
		default:
			n = makeStringConst(v->val.str, NULL);
			break;
	}

	return n;
}

/* makeDefElem()
 * Create a DefElem node and set contents.
 * Could be moved to nodes/makefuncs.c if this is useful elsewhere.
 */
static DefElem *
makeDefElem(char *name, Node *arg)
{
	DefElem *f = makeNode(DefElem);
	f->defname = name;
	f->arg = arg;
	return f;
}

/* makeBoolAConst()
 * Create an A_Const node and initialize to a boolean constant.
 */
static A_Const *
makeBoolAConst(bool state)
{
	A_Const *n = makeNode(A_Const);
	n->val.type = T_String;
	n->val.val.str = (state? "t": "f");
	n->typename = SystemTypeName("bool");
	return n;
}

/* makeRowNullTest()
 * Generate separate operator nodes for a single row descriptor test.
 *
 * Eventually this should be eliminated in favor of making the NullTest
 * node type capable of handling it directly.
 */
static Node *
makeRowNullTest(NullTestType test, RowExpr *row)
{
	Node		*result = NULL;
	ListCell	*arg;

	foreach(arg, row->args)
	{
		NullTest *n;

		n = makeNode(NullTest);
		n->arg = (Expr *) lfirst(arg);
		n->nulltesttype = test;

		if (result == NULL)
			result = (Node *) n;
		else if (test == IS_NOT_NULL)
			result = (Node *) makeA_Expr(AEXPR_OR, NIL, result, (Node *)n);
		else
			result = (Node *) makeA_Expr(AEXPR_AND, NIL, result, (Node *)n);
	}

	if (result == NULL)
	{
		/* zero-length rows?  Generate constant TRUE or FALSE */
		result = (Node *) makeBoolAConst(test == IS_NULL);
	}

	return result;
}

/* makeOverlaps()
 * Create and populate a FuncCall node to support the OVERLAPS operator.
 */
static FuncCall *
makeOverlaps(List *largs, List *rargs)
{
	FuncCall *n = makeNode(FuncCall);
	n->funcname = SystemFuncName("overlaps");
	if (list_length(largs) == 1)
		largs = lappend(largs, largs);
	else if (list_length(largs) != 2)
		ereport(ERROR,
				(errcode(ERRCODE_SYNTAX_ERROR),
				 errmsg("wrong number of parameters on left side of OVERLAPS expression")));
	if (list_length(rargs) == 1)
		rargs = lappend(rargs, rargs);
	else if (list_length(rargs) != 2)
		ereport(ERROR,
				(errcode(ERRCODE_SYNTAX_ERROR),
				 errmsg("wrong number of parameters on right side of OVERLAPS expression")));
	n->args = list_concat(largs, rargs);
	n->agg_star = FALSE;
	n->agg_distinct = FALSE;
	return n;
}

/* check_qualified_name --- check the result of qualified_name production
 *
 * It's easiest to let the grammar production for qualified_name allow
 * subscripts and '*', which we then must reject here.
 */
static void
check_qualified_name(List *names)
{
	ListCell   *i;

	foreach(i, names)
	{
		if (!IsA(lfirst(i), String))
			yyerror("syntax error");
		else if (strcmp(strVal(lfirst(i)), "*") == 0)
			yyerror("syntax error");
	}
}

/* check_func_name --- check the result of func_name production
 *
 * It's easiest to let the grammar production for func_name allow subscripts
 * and '*', which we then must reject here.
 */
static List *
check_func_name(List *names)
{
	ListCell   *i;

	foreach(i, names)
	{
		if (!IsA(lfirst(i), String))
			yyerror("syntax error");
		else if (strcmp(strVal(lfirst(i)), "*") == 0)
			yyerror("syntax error");
	}
	return names;
}

/* extractArgTypes()
 * Given a list of FunctionParameter nodes, extract a list of just the
 * argument types (TypeNames).  Most of the productions using func_args
 * don't currently want the full FunctionParameter data, so we use this
 * rather than having two sets of productions.
 */
static List *
extractArgTypes(List *parameters)
{
	List	   *result = NIL;
	ListCell   *i;

	foreach(i, parameters)
	{
		FunctionParameter *p = (FunctionParameter *) lfirst(i);

		result = lappend(result, p->argType);
	}
	return result;
}

/* findLeftmostSelect()
 * Find the leftmost component SelectStmt in a set-operation parsetree.
 */
static SelectStmt *
findLeftmostSelect(SelectStmt *node)
{
	while (node && node->op != SETOP_NONE)
		node = node->larg;
	Assert(node && IsA(node, SelectStmt) && node->larg == NULL);
	return node;
}

/* insertSelectOptions()
 * Insert ORDER BY, etc into an already-constructed SelectStmt.
 *
 * This routine is just to avoid duplicating code in SelectStmt productions.
 */
static void
insertSelectOptions(SelectStmt *stmt,
					List *sortClause, List *forUpdate,
					Node *limitOffset, Node *limitCount)
{
	/*
	 * Tests here are to reject constructs like
	 *	(SELECT foo ORDER BY bar) ORDER BY baz
	 */
	if (sortClause)
	{
		if (stmt->sortClause)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple ORDER BY clauses not allowed")));
		stmt->sortClause = sortClause;
	}
	if (forUpdate)
	{
		if (stmt->forUpdate)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple FOR UPDATE clauses not allowed")));
		stmt->forUpdate = forUpdate;
	}
	if (limitOffset)
	{
		if (stmt->limitOffset)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple OFFSET clauses not allowed")));
		stmt->limitOffset = limitOffset;
	}
	if (limitCount)
	{
		if (stmt->limitCount)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple LIMIT clauses not allowed")));
		stmt->limitCount = limitCount;
	}
}

static Node *
makeSetOp(SetOperation op, bool all, Node *larg, Node *rarg)
{
	SelectStmt *n = makeNode(SelectStmt);

	n->op = op;
	n->all = all;
	n->larg = (SelectStmt *) larg;
	n->rarg = (SelectStmt *) rarg;
	return (Node *) n;
}

/* SystemFuncName()
 * Build a properly-qualified reference to a built-in function.
 */
List *
SystemFuncName(char *name)
{
	return list_make2(makeString("pg_catalog"), makeString(name));
}

/* SystemTypeName()
 * Build a properly-qualified reference to a built-in type.
 *
 * typmod is defaulted, but may be changed afterwards by caller.
 */
TypeName *
SystemTypeName(char *name)
{
	TypeName   *n = makeNode(TypeName);

	n->names = list_make2(makeString("pg_catalog"), makeString(name));
	n->typmod = -1;
	return n;
}

/* parser_init()
 * Initialize to parse one query string
 */
void
parser_init(void)
{
	QueryIsRule = FALSE;
}

/* exprIsNullConstant()
 * Test whether an a_expr is a plain NULL constant or not.
 */
bool
exprIsNullConstant(Node *arg)
{
	if (arg && IsA(arg, A_Const))
	{
		A_Const *con = (A_Const *) arg;

		if (con->val.type == T_Null &&
			con->typename == NULL)
			return TRUE;
	}
	return FALSE;
}

/* doNegate()
 * Handle negation of a numeric constant.
 *
 * Formerly, we did this here because the optimizer couldn't cope with
 * indexquals that looked like "var = -4" --- it wants "var = const"
 * and a unary minus operator applied to a constant didn't qualify.
 * As of Postgres 7.0, that problem doesn't exist anymore because there
 * is a constant-subexpression simplifier in the optimizer.  However,
 * there's still a good reason for doing this here, which is that we can
 * postpone committing to a particular internal representation for simple
 * negative constants.	It's better to leave "-123.456" in string form
 * until we know what the desired type is.
 */
static Node *
doNegate(Node *n)
{
	if (IsA(n, A_Const))
	{
		A_Const *con = (A_Const *)n;

		if (con->val.type == T_Integer)
		{
			con->val.val.ival = -con->val.val.ival;
			return n;
		}
		if (con->val.type == T_Float)
		{
			doNegateFloat(&con->val);
			return n;
		}
	}

	return (Node *) makeSimpleA_Expr(AEXPR_OP, "-", NULL, n);
}

static void
doNegateFloat(Value *v)
{
	char   *oldval = v->val.str;

	Assert(IsA(v, Float));
	if (*oldval == '+')
		oldval++;
	if (*oldval == '-')
		v->val.str = oldval+1;	/* just strip the '-' */
	else
	{
		char   *newval = (char *) palloc(strlen(oldval) + 2);

		*newval = '-';
		strcpy(newval+1, oldval);
		v->val.str = newval;
	}
}

#include "scan.c"

