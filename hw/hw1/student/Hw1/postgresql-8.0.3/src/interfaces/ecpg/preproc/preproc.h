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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SQL_ALLOCATE = 258,
     SQL_AUTOCOMMIT = 259,
     SQL_BOOL = 260,
     SQL_BREAK = 261,
     SQL_CALL = 262,
     SQL_CARDINALITY = 263,
     SQL_CONNECT = 264,
     SQL_CONNECTION = 265,
     SQL_CONTINUE = 266,
     SQL_COUNT = 267,
     SQL_CURRENT = 268,
     SQL_DATA = 269,
     SQL_DATETIME_INTERVAL_CODE = 270,
     SQL_DATETIME_INTERVAL_PRECISION = 271,
     SQL_DESCRIBE = 272,
     SQL_DESCRIPTOR = 273,
     SQL_DISCONNECT = 274,
     SQL_ENUM = 275,
     SQL_FOUND = 276,
     SQL_FREE = 277,
     SQL_GO = 278,
     SQL_GOTO = 279,
     SQL_IDENTIFIED = 280,
     SQL_INDICATOR = 281,
     SQL_KEY_MEMBER = 282,
     SQL_LENGTH = 283,
     SQL_LONG = 284,
     SQL_NAME = 285,
     SQL_NULLABLE = 286,
     SQL_OCTET_LENGTH = 287,
     SQL_OPEN = 288,
     SQL_OUTPUT = 289,
     SQL_REFERENCE = 290,
     SQL_RETURNED_LENGTH = 291,
     SQL_RETURNED_OCTET_LENGTH = 292,
     SQL_SCALE = 293,
     SQL_SECTION = 294,
     SQL_SHORT = 295,
     SQL_SIGNED = 296,
     SQL_SQL = 297,
     SQL_SQLERROR = 298,
     SQL_SQLPRINT = 299,
     SQL_SQLWARNING = 300,
     SQL_START = 301,
     SQL_STOP = 302,
     SQL_STRUCT = 303,
     SQL_UNSIGNED = 304,
     SQL_VALUE = 305,
     SQL_VAR = 306,
     SQL_WHENEVER = 307,
     S_ADD = 308,
     S_AND = 309,
     S_ANYTHING = 310,
     S_AUTO = 311,
     S_CONST = 312,
     S_DEC = 313,
     S_DIV = 314,
     S_DOTPOINT = 315,
     S_EQUAL = 316,
     S_EXTERN = 317,
     S_INC = 318,
     S_LSHIFT = 319,
     S_MEMPOINT = 320,
     S_MEMBER = 321,
     S_MOD = 322,
     S_MUL = 323,
     S_NEQUAL = 324,
     S_OR = 325,
     S_REGISTER = 326,
     S_RSHIFT = 327,
     S_STATIC = 328,
     S_SUB = 329,
     S_VOLATILE = 330,
     S_TYPEDEF = 331,
     TYPECAST = 332,
     ABORT_P = 333,
     ABSOLUTE_P = 334,
     ACCESS = 335,
     ACTION = 336,
     ADD = 337,
     AFTER = 338,
     AGGREGATE = 339,
     ALL = 340,
     ALSO = 341,
     ALTER = 342,
     ANALYSE = 343,
     ANALYZE = 344,
     AND = 345,
     ANY = 346,
     ARRAY = 347,
     AS = 348,
     ASC = 349,
     ASSERTION = 350,
     ASSIGNMENT = 351,
     AT = 352,
     AUTHORIZATION = 353,
     BACKWARD = 354,
     BEFORE = 355,
     BEGIN_P = 356,
     BETWEEN = 357,
     BIGINT = 358,
     BINARY = 359,
     BIT = 360,
     BOOLEAN_P = 361,
     BOTH = 362,
     BY = 363,
     CACHE = 364,
     CALLED = 365,
     CASCADE = 366,
     CASE = 367,
     CAST = 368,
     CHAIN = 369,
     CHAR_P = 370,
     CHARACTER = 371,
     CHARACTERISTICS = 372,
     CHECK = 373,
     CHECKPOINT = 374,
     CLASS = 375,
     CLOSE = 376,
     CLUSTER = 377,
     COALESCE = 378,
     COLLATE = 379,
     COLUMN = 380,
     COMMENT = 381,
     COMMIT = 382,
     COMMITTED = 383,
     CONSTRAINT = 384,
     CONSTRAINTS = 385,
     CONVERSION_P = 386,
     CONVERT = 387,
     COPY = 388,
     CREATE = 389,
     CREATEDB = 390,
     CREATEUSER = 391,
     CROSS = 392,
     CSV = 393,
     CURRENT_DATE = 394,
     CURRENT_TIME = 395,
     CURRENT_TIMESTAMP = 396,
     CURRENT_USER = 397,
     CURSOR = 398,
     CYCLE = 399,
     DATABASE = 400,
     DAY_P = 401,
     DEALLOCATE = 402,
     DEC = 403,
     DECIMAL_P = 404,
     DECLARE = 405,
     DEFAULT = 406,
     DEFAULTS = 407,
     DEFERRABLE = 408,
     DEFERRED = 409,
     DEFINER = 410,
     DELETE_P = 411,
     DELIMITER = 412,
     DELIMITERS = 413,
     DESC = 414,
     DISTINCT = 415,
     DO = 416,
     DOMAIN_P = 417,
     DOUBLE_P = 418,
     DROP = 419,
     EACH = 420,
     ELSE = 421,
     ENCODING = 422,
     ENCRYPTED = 423,
     END_P = 424,
     ESCAPE = 425,
     EXCEPT = 426,
     EXCLUSIVE = 427,
     EXCLUDING = 428,
     EXECUTE = 429,
     EXISTS = 430,
     EXPLAIN = 431,
     EXTERNAL = 432,
     EXTRACT = 433,
     FALSE_P = 434,
     FETCH = 435,
     FIRST_P = 436,
     FLOAT_P = 437,
     FOR = 438,
     FORCE = 439,
     FOREIGN = 440,
     FORWARD = 441,
     FREEZE = 442,
     FROM = 443,
     FULL = 444,
     FUNCTION = 445,
     GET = 446,
     GLOBAL = 447,
     GRANT = 448,
     GROUP_P = 449,
     HANDLER = 450,
     HAVING = 451,
     HOLD = 452,
     HOUR_P = 453,
     ILIKE = 454,
     IMMEDIATE = 455,
     IMMUTABLE = 456,
     IMPLICIT_P = 457,
     IN_P = 458,
     INCLUDING = 459,
     INCREMENT = 460,
     INDEX = 461,
     INHERITS = 462,
     INITIALLY = 463,
     INNER_P = 464,
     INOUT = 465,
     INPUT_P = 466,
     INSENSITIVE = 467,
     INSERT = 468,
     INSTEAD = 469,
     INT_P = 470,
     INTEGER = 471,
     INTERSECT = 472,
     INTERVAL = 473,
     INTO = 474,
     INVOKER = 475,
     IS = 476,
     ISNULL = 477,
     ISOLATION = 478,
     JOIN = 479,
     KEY = 480,
     LANCOMPILER = 481,
     LANGUAGE = 482,
     LARGE_P = 483,
     LAST_P = 484,
     LEADING = 485,
     LEFT = 486,
     LEVEL = 487,
     LIKE = 488,
     LIMIT = 489,
     LISTEN = 490,
     LOAD = 491,
     LOCAL = 492,
     LOCATION = 493,
     LOCK_P = 494,
     MATCH = 495,
     MAXVALUE = 496,
     MINUTE_P = 497,
     MINVALUE = 498,
     MODE = 499,
     MONTH_P = 500,
     MOVE = 501,
     NAMES = 502,
     NATIONAL = 503,
     NATURAL = 504,
     NCHAR = 505,
     NEW = 506,
     NEXT = 507,
     NO = 508,
     NOCREATEDB = 509,
     NOCREATEUSER = 510,
     NONE = 511,
     NOT = 512,
     NOTHING = 513,
     NOTIFY = 514,
     NOTNULL = 515,
     NOWAIT = 516,
     NULL_P = 517,
     NULLIF = 518,
     NUMERIC = 519,
     OBJECT_P = 520,
     OF = 521,
     OFF = 522,
     OFFSET = 523,
     OIDS = 524,
     OLD = 525,
     ON = 526,
     ONLY = 527,
     OPERATOR = 528,
     OPTION = 529,
     OR = 530,
     ORDER = 531,
     OUT_P = 532,
     OUTER_P = 533,
     OVERLAPS = 534,
     OVERLAY = 535,
     OWNER = 536,
     PARTIAL = 537,
     PASSWORD = 538,
     PLACING = 539,
     POSITION = 540,
     PRECISION = 541,
     PRESERVE = 542,
     PREPARE = 543,
     PRIMARY = 544,
     PRIOR = 545,
     PRIVILEGES = 546,
     PROCEDURAL = 547,
     PROCEDURE = 548,
     QUOTE = 549,
     READ = 550,
     REAL = 551,
     RECHECK = 552,
     REFERENCES = 553,
     REINDEX = 554,
     RELATIVE_P = 555,
     RELEASE = 556,
     RENAME = 557,
     REPEATABLE = 558,
     REPLACE = 559,
     RESET = 560,
     RESTART = 561,
     RESTRICT = 562,
     RETURNS = 563,
     REVOKE = 564,
     RIGHT = 565,
     ROLLBACK = 566,
     ROW = 567,
     ROWS = 568,
     RULE = 569,
     SAVEPOINT = 570,
     SCHEMA = 571,
     SCROLL = 572,
     SECOND_P = 573,
     SECURITY = 574,
     SELECT = 575,
     SEQUENCE = 576,
     SERIALIZABLE = 577,
     SESSION = 578,
     SESSION_USER = 579,
     SET = 580,
     SETOF = 581,
     SHARE = 582,
     SHOW = 583,
     SIMILAR = 584,
     SIMPLE = 585,
     SMALLINT = 586,
     SOME = 587,
     STABLE = 588,
     START = 589,
     STATEMENT = 590,
     STATISTICS = 591,
     STDIN = 592,
     STDOUT = 593,
     STORAGE = 594,
     STRICT_P = 595,
     SUBSTRING = 596,
     SYSID = 597,
     TABLE = 598,
     TABLESPACE = 599,
     TEMP = 600,
     TEMPLATE = 601,
     TEMPORARY = 602,
     THEN = 603,
     TIME = 604,
     TIMESTAMP = 605,
     TO = 606,
     TOAST = 607,
     TRAILING = 608,
     TRANSACTION = 609,
     TREAT = 610,
     TRIGGER = 611,
     TRIM = 612,
     TRUE_P = 613,
     TRUNCATE = 614,
     TRUSTED = 615,
     TYPE_P = 616,
     UNCOMMITTED = 617,
     UNENCRYPTED = 618,
     UNION = 619,
     UNIQUE = 620,
     UNKNOWN = 621,
     UNLISTEN = 622,
     UNTIL = 623,
     UPDATE = 624,
     USAGE = 625,
     USER = 626,
     USING = 627,
     VACUUM = 628,
     VALID = 629,
     VALUES = 630,
     VARCHAR = 631,
     VARYING = 632,
     VERBOSE = 633,
     VIEW = 634,
     VOLATILE = 635,
     WHEN = 636,
     WHERE = 637,
     WITH = 638,
     WITHOUT = 639,
     WORK = 640,
     WRITE = 641,
     YEAR_P = 642,
     ZONE = 643,
     UNIONJOIN = 644,
     IDENT = 645,
     SCONST = 646,
     Op = 647,
     CSTRING = 648,
     CVARIABLE = 649,
     CPP_LINE = 650,
     IP = 651,
     BCONST = 652,
     XCONST = 653,
     ICONST = 654,
     PARAM = 655,
     FCONST = 656,
     POSTFIXOP = 657,
     UMINUS = 658
   };
#endif
#define SQL_ALLOCATE 258
#define SQL_AUTOCOMMIT 259
#define SQL_BOOL 260
#define SQL_BREAK 261
#define SQL_CALL 262
#define SQL_CARDINALITY 263
#define SQL_CONNECT 264
#define SQL_CONNECTION 265
#define SQL_CONTINUE 266
#define SQL_COUNT 267
#define SQL_CURRENT 268
#define SQL_DATA 269
#define SQL_DATETIME_INTERVAL_CODE 270
#define SQL_DATETIME_INTERVAL_PRECISION 271
#define SQL_DESCRIBE 272
#define SQL_DESCRIPTOR 273
#define SQL_DISCONNECT 274
#define SQL_ENUM 275
#define SQL_FOUND 276
#define SQL_FREE 277
#define SQL_GO 278
#define SQL_GOTO 279
#define SQL_IDENTIFIED 280
#define SQL_INDICATOR 281
#define SQL_KEY_MEMBER 282
#define SQL_LENGTH 283
#define SQL_LONG 284
#define SQL_NAME 285
#define SQL_NULLABLE 286
#define SQL_OCTET_LENGTH 287
#define SQL_OPEN 288
#define SQL_OUTPUT 289
#define SQL_REFERENCE 290
#define SQL_RETURNED_LENGTH 291
#define SQL_RETURNED_OCTET_LENGTH 292
#define SQL_SCALE 293
#define SQL_SECTION 294
#define SQL_SHORT 295
#define SQL_SIGNED 296
#define SQL_SQL 297
#define SQL_SQLERROR 298
#define SQL_SQLPRINT 299
#define SQL_SQLWARNING 300
#define SQL_START 301
#define SQL_STOP 302
#define SQL_STRUCT 303
#define SQL_UNSIGNED 304
#define SQL_VALUE 305
#define SQL_VAR 306
#define SQL_WHENEVER 307
#define S_ADD 308
#define S_AND 309
#define S_ANYTHING 310
#define S_AUTO 311
#define S_CONST 312
#define S_DEC 313
#define S_DIV 314
#define S_DOTPOINT 315
#define S_EQUAL 316
#define S_EXTERN 317
#define S_INC 318
#define S_LSHIFT 319
#define S_MEMPOINT 320
#define S_MEMBER 321
#define S_MOD 322
#define S_MUL 323
#define S_NEQUAL 324
#define S_OR 325
#define S_REGISTER 326
#define S_RSHIFT 327
#define S_STATIC 328
#define S_SUB 329
#define S_VOLATILE 330
#define S_TYPEDEF 331
#define TYPECAST 332
#define ABORT_P 333
#define ABSOLUTE_P 334
#define ACCESS 335
#define ACTION 336
#define ADD 337
#define AFTER 338
#define AGGREGATE 339
#define ALL 340
#define ALSO 341
#define ALTER 342
#define ANALYSE 343
#define ANALYZE 344
#define AND 345
#define ANY 346
#define ARRAY 347
#define AS 348
#define ASC 349
#define ASSERTION 350
#define ASSIGNMENT 351
#define AT 352
#define AUTHORIZATION 353
#define BACKWARD 354
#define BEFORE 355
#define BEGIN_P 356
#define BETWEEN 357
#define BIGINT 358
#define BINARY 359
#define BIT 360
#define BOOLEAN_P 361
#define BOTH 362
#define BY 363
#define CACHE 364
#define CALLED 365
#define CASCADE 366
#define CASE 367
#define CAST 368
#define CHAIN 369
#define CHAR_P 370
#define CHARACTER 371
#define CHARACTERISTICS 372
#define CHECK 373
#define CHECKPOINT 374
#define CLASS 375
#define CLOSE 376
#define CLUSTER 377
#define COALESCE 378
#define COLLATE 379
#define COLUMN 380
#define COMMENT 381
#define COMMIT 382
#define COMMITTED 383
#define CONSTRAINT 384
#define CONSTRAINTS 385
#define CONVERSION_P 386
#define CONVERT 387
#define COPY 388
#define CREATE 389
#define CREATEDB 390
#define CREATEUSER 391
#define CROSS 392
#define CSV 393
#define CURRENT_DATE 394
#define CURRENT_TIME 395
#define CURRENT_TIMESTAMP 396
#define CURRENT_USER 397
#define CURSOR 398
#define CYCLE 399
#define DATABASE 400
#define DAY_P 401
#define DEALLOCATE 402
#define DEC 403
#define DECIMAL_P 404
#define DECLARE 405
#define DEFAULT 406
#define DEFAULTS 407
#define DEFERRABLE 408
#define DEFERRED 409
#define DEFINER 410
#define DELETE_P 411
#define DELIMITER 412
#define DELIMITERS 413
#define DESC 414
#define DISTINCT 415
#define DO 416
#define DOMAIN_P 417
#define DOUBLE_P 418
#define DROP 419
#define EACH 420
#define ELSE 421
#define ENCODING 422
#define ENCRYPTED 423
#define END_P 424
#define ESCAPE 425
#define EXCEPT 426
#define EXCLUSIVE 427
#define EXCLUDING 428
#define EXECUTE 429
#define EXISTS 430
#define EXPLAIN 431
#define EXTERNAL 432
#define EXTRACT 433
#define FALSE_P 434
#define FETCH 435
#define FIRST_P 436
#define FLOAT_P 437
#define FOR 438
#define FORCE 439
#define FOREIGN 440
#define FORWARD 441
#define FREEZE 442
#define FROM 443
#define FULL 444
#define FUNCTION 445
#define GET 446
#define GLOBAL 447
#define GRANT 448
#define GROUP_P 449
#define HANDLER 450
#define HAVING 451
#define HOLD 452
#define HOUR_P 453
#define ILIKE 454
#define IMMEDIATE 455
#define IMMUTABLE 456
#define IMPLICIT_P 457
#define IN_P 458
#define INCLUDING 459
#define INCREMENT 460
#define INDEX 461
#define INHERITS 462
#define INITIALLY 463
#define INNER_P 464
#define INOUT 465
#define INPUT_P 466
#define INSENSITIVE 467
#define INSERT 468
#define INSTEAD 469
#define INT_P 470
#define INTEGER 471
#define INTERSECT 472
#define INTERVAL 473
#define INTO 474
#define INVOKER 475
#define IS 476
#define ISNULL 477
#define ISOLATION 478
#define JOIN 479
#define KEY 480
#define LANCOMPILER 481
#define LANGUAGE 482
#define LARGE_P 483
#define LAST_P 484
#define LEADING 485
#define LEFT 486
#define LEVEL 487
#define LIKE 488
#define LIMIT 489
#define LISTEN 490
#define LOAD 491
#define LOCAL 492
#define LOCATION 493
#define LOCK_P 494
#define MATCH 495
#define MAXVALUE 496
#define MINUTE_P 497
#define MINVALUE 498
#define MODE 499
#define MONTH_P 500
#define MOVE 501
#define NAMES 502
#define NATIONAL 503
#define NATURAL 504
#define NCHAR 505
#define NEW 506
#define NEXT 507
#define NO 508
#define NOCREATEDB 509
#define NOCREATEUSER 510
#define NONE 511
#define NOT 512
#define NOTHING 513
#define NOTIFY 514
#define NOTNULL 515
#define NOWAIT 516
#define NULL_P 517
#define NULLIF 518
#define NUMERIC 519
#define OBJECT_P 520
#define OF 521
#define OFF 522
#define OFFSET 523
#define OIDS 524
#define OLD 525
#define ON 526
#define ONLY 527
#define OPERATOR 528
#define OPTION 529
#define OR 530
#define ORDER 531
#define OUT_P 532
#define OUTER_P 533
#define OVERLAPS 534
#define OVERLAY 535
#define OWNER 536
#define PARTIAL 537
#define PASSWORD 538
#define PLACING 539
#define POSITION 540
#define PRECISION 541
#define PRESERVE 542
#define PREPARE 543
#define PRIMARY 544
#define PRIOR 545
#define PRIVILEGES 546
#define PROCEDURAL 547
#define PROCEDURE 548
#define QUOTE 549
#define READ 550
#define REAL 551
#define RECHECK 552
#define REFERENCES 553
#define REINDEX 554
#define RELATIVE_P 555
#define RELEASE 556
#define RENAME 557
#define REPEATABLE 558
#define REPLACE 559
#define RESET 560
#define RESTART 561
#define RESTRICT 562
#define RETURNS 563
#define REVOKE 564
#define RIGHT 565
#define ROLLBACK 566
#define ROW 567
#define ROWS 568
#define RULE 569
#define SAVEPOINT 570
#define SCHEMA 571
#define SCROLL 572
#define SECOND_P 573
#define SECURITY 574
#define SELECT 575
#define SEQUENCE 576
#define SERIALIZABLE 577
#define SESSION 578
#define SESSION_USER 579
#define SET 580
#define SETOF 581
#define SHARE 582
#define SHOW 583
#define SIMILAR 584
#define SIMPLE 585
#define SMALLINT 586
#define SOME 587
#define STABLE 588
#define START 589
#define STATEMENT 590
#define STATISTICS 591
#define STDIN 592
#define STDOUT 593
#define STORAGE 594
#define STRICT_P 595
#define SUBSTRING 596
#define SYSID 597
#define TABLE 598
#define TABLESPACE 599
#define TEMP 600
#define TEMPLATE 601
#define TEMPORARY 602
#define THEN 603
#define TIME 604
#define TIMESTAMP 605
#define TO 606
#define TOAST 607
#define TRAILING 608
#define TRANSACTION 609
#define TREAT 610
#define TRIGGER 611
#define TRIM 612
#define TRUE_P 613
#define TRUNCATE 614
#define TRUSTED 615
#define TYPE_P 616
#define UNCOMMITTED 617
#define UNENCRYPTED 618
#define UNION 619
#define UNIQUE 620
#define UNKNOWN 621
#define UNLISTEN 622
#define UNTIL 623
#define UPDATE 624
#define USAGE 625
#define USER 626
#define USING 627
#define VACUUM 628
#define VALID 629
#define VALUES 630
#define VARCHAR 631
#define VARYING 632
#define VERBOSE 633
#define VIEW 634
#define VOLATILE 635
#define WHEN 636
#define WHERE 637
#define WITH 638
#define WITHOUT 639
#define WORK 640
#define WRITE 641
#define YEAR_P 642
#define ZONE 643
#define UNIONJOIN 644
#define IDENT 645
#define SCONST 646
#define Op 647
#define CSTRING 648
#define CVARIABLE 649
#define CPP_LINE 650
#define IP 651
#define BCONST 652
#define XCONST 653
#define ICONST 654
#define PARAM 655
#define FCONST 656
#define POSTFIXOP 657
#define UMINUS 658




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 311 "preproc.y"
typedef union YYSTYPE {
	double	dval;
	char	*str;
	int     ival;
	struct	when		action;
	struct	index		index;
	int		tagname;
	struct	this_type	type;
	enum	ECPGttype	type_enum;
	enum	ECPGdtype	dtype_enum;
	struct	fetch_desc	descriptor;
	struct  su_symbol	struct_union;
} YYSTYPE;
/* Line 1248 of yacc.c.  */
#line 856 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



