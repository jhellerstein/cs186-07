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

/* If NAME_PREFIX is specified substitute the variables and functions
   names.  */
#define yyparse plpgsql_yyparse
#define yylex   plpgsql_yylex
#define yyerror plpgsql_yyerror
#define yylval  plpgsql_yylval
#define yychar  plpgsql_yychar
#define yydebug plpgsql_yydebug
#define yynerrs plpgsql_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     K_ALIAS = 258,
     K_ASSIGN = 259,
     K_BEGIN = 260,
     K_BY = 261,
     K_CLOSE = 262,
     K_CONSTANT = 263,
     K_CONTINUE = 264,
     K_CURSOR = 265,
     K_DEBUG = 266,
     K_DECLARE = 267,
     K_DEFAULT = 268,
     K_DIAGNOSTICS = 269,
     K_DOTDOT = 270,
     K_ELSE = 271,
     K_ELSIF = 272,
     K_END = 273,
     K_EXCEPTION = 274,
     K_EXECUTE = 275,
     K_EXIT = 276,
     K_FOR = 277,
     K_FETCH = 278,
     K_FROM = 279,
     K_GET = 280,
     K_IF = 281,
     K_IN = 282,
     K_INFO = 283,
     K_INSERT = 284,
     K_INTO = 285,
     K_IS = 286,
     K_LOG = 287,
     K_LOOP = 288,
     K_NEXT = 289,
     K_NOT = 290,
     K_NOTICE = 291,
     K_NULL = 292,
     K_OPEN = 293,
     K_OR = 294,
     K_PERFORM = 295,
     K_ROW_COUNT = 296,
     K_RAISE = 297,
     K_RENAME = 298,
     K_RESULT_OID = 299,
     K_RETURN = 300,
     K_REVERSE = 301,
     K_STRICT = 302,
     K_THEN = 303,
     K_TO = 304,
     K_TYPE = 305,
     K_WARNING = 306,
     K_WHEN = 307,
     K_WHILE = 308,
     T_FUNCTION = 309,
     T_TRIGGER = 310,
     T_STRING = 311,
     T_NUMBER = 312,
     T_SCALAR = 313,
     T_ROW = 314,
     T_RECORD = 315,
     T_DTYPE = 316,
     T_LABEL = 317,
     T_WORD = 318,
     T_ERROR = 319,
     O_OPTION = 320,
     O_DUMP = 321
   };
#endif
#define K_ALIAS 258
#define K_ASSIGN 259
#define K_BEGIN 260
#define K_BY 261
#define K_CLOSE 262
#define K_CONSTANT 263
#define K_CONTINUE 264
#define K_CURSOR 265
#define K_DEBUG 266
#define K_DECLARE 267
#define K_DEFAULT 268
#define K_DIAGNOSTICS 269
#define K_DOTDOT 270
#define K_ELSE 271
#define K_ELSIF 272
#define K_END 273
#define K_EXCEPTION 274
#define K_EXECUTE 275
#define K_EXIT 276
#define K_FOR 277
#define K_FETCH 278
#define K_FROM 279
#define K_GET 280
#define K_IF 281
#define K_IN 282
#define K_INFO 283
#define K_INSERT 284
#define K_INTO 285
#define K_IS 286
#define K_LOG 287
#define K_LOOP 288
#define K_NEXT 289
#define K_NOT 290
#define K_NOTICE 291
#define K_NULL 292
#define K_OPEN 293
#define K_OR 294
#define K_PERFORM 295
#define K_ROW_COUNT 296
#define K_RAISE 297
#define K_RENAME 298
#define K_RESULT_OID 299
#define K_RETURN 300
#define K_REVERSE 301
#define K_STRICT 302
#define K_THEN 303
#define K_TO 304
#define K_TYPE 305
#define K_WARNING 306
#define K_WHEN 307
#define K_WHILE 308
#define T_FUNCTION 309
#define T_TRIGGER 310
#define T_STRING 311
#define T_NUMBER 312
#define T_SCALAR 313
#define T_ROW 314
#define T_RECORD 315
#define T_DTYPE 316
#define T_LABEL 317
#define T_WORD 318
#define T_ERROR 319
#define O_OPTION 320
#define O_DUMP 321




/* Copy the first part of user declarations.  */
#line 1 "gram.y"

/*-------------------------------------------------------------------------
 *
 * gram.y				- Parser for the PL/pgSQL
 *						  procedural language
 *
 * Portions Copyright (c) 1996-2006, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL: pgsql/src/pl/plpgsql/src/gram.y,v 1.95.2.1 2007/02/08 18:37:38 tgl Exp $
 *
 *-------------------------------------------------------------------------
 */

#include "plpgsql.h"

#include "parser/parser.h"


static PLpgSQL_expr		*read_sql_construct(int until,
											int until2,
											const char *expected,
											const char *sqlstart,
											bool isexpression,
											bool valid_sql,
											int *endtoken);
static	PLpgSQL_expr	*read_sql_stmt(const char *sqlstart);
static	PLpgSQL_type	*read_datatype(int tok);
static	PLpgSQL_stmt	*make_execsql_stmt(const char *sqlstart, int lineno);
static	PLpgSQL_stmt	*make_fetch_stmt(int lineno, int curvar);
static	PLpgSQL_stmt	*make_return_stmt(int lineno);
static	PLpgSQL_stmt	*make_return_next_stmt(int lineno);
static	void			 check_assignable(PLpgSQL_datum *datum);
static	void			 read_into_target(PLpgSQL_rec **rec, PLpgSQL_row **row,
										  bool *strict);
static	PLpgSQL_row		*read_into_scalar_list(const char *initial_name,
											   PLpgSQL_datum *initial_datum);
static PLpgSQL_row		*make_scalar_list1(const char *initial_name,
										   PLpgSQL_datum *initial_datum,
										   int lineno);
static	void			 check_sql_expr(const char *stmt);
static	void			 plpgsql_sql_error_callback(void *arg);
static	void			 check_labels(const char *start_label,
									  const char *end_label);



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
#line 52 "gram.y"
typedef union YYSTYPE {
		int32					ival;
		bool					boolean;
		char					*str;
		struct
		{
			char *name;
			int  lineno;
		}						varname;
		struct
		{
			char *name;
			int  lineno;
			PLpgSQL_datum   *scalar;
			PLpgSQL_rec     *rec;
			PLpgSQL_row     *row;
		}						forvariable;
		struct
		{
			char *label;
			int  n_initvars;
			int  *initvarnos;
		}						declhdr;
		struct
		{
			char *end_label;
			List *stmts;
		}						loop_body;
		List					*list;
		PLpgSQL_type			*dtype;
		PLpgSQL_datum			*scalar;	/* a VAR, RECFIELD, or TRIGARG */
		PLpgSQL_variable		*variable;	/* a VAR, REC, or ROW */
		PLpgSQL_var				*var;
		PLpgSQL_row				*row;
		PLpgSQL_rec				*rec;
		PLpgSQL_expr			*expr;
		PLpgSQL_stmt			*stmt;
		PLpgSQL_stmt_block		*program;
		PLpgSQL_condition		*condition;
		PLpgSQL_exception		*exception;
		PLpgSQL_exception_block	*exception_block;
		PLpgSQL_nsitem			*nsitem;
		PLpgSQL_diag_item		*diagitem;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 310 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 322 "y.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   334

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  75
/* YYNRULES -- Number of rules. */
#define YYNRULES  137
/* YYNRULES -- Number of states. */
#define YYNSTATES  230

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      70,    71,     2,     2,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    67,
      68,     2,    69,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     8,    13,    14,    16,    19,    21,    24,
      25,    27,    35,    37,    40,    44,    46,    49,    51,    57,
      59,    61,    67,    73,    79,    80,    87,    88,    89,    93,
      95,    99,   102,   104,   106,   108,   110,   112,   113,   115,
     116,   117,   120,   122,   124,   126,   128,   129,   131,   134,
     136,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   177,
     182,   188,   192,   194,   198,   200,   202,   204,   206,   208,
     210,   214,   223,   224,   230,   233,   238,   244,   249,   253,
     255,   257,   259,   261,   266,   268,   270,   273,   278,   280,
     282,   284,   286,   288,   290,   292,   298,   301,   303,   305,
     309,   312,   316,   321,   326,   329,   331,   333,   334,   335,
     340,   343,   345,   351,   355,   357,   358,   359,   360,   361,
     362,   368,   369,   371,   373,   375,   378,   380
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
      75,     0,    -1,    54,    76,    80,    79,    -1,    55,    76,
      80,    79,    -1,    -1,    77,    -1,    77,    78,    -1,    78,
      -1,    65,    66,    -1,    -1,    67,    -1,    81,     5,   148,
     100,   135,    18,   145,    -1,   144,    -1,   144,    82,    -1,
     144,    82,    83,    -1,    12,    -1,    83,    84,    -1,    84,
      -1,    68,    68,   147,    69,    69,    -1,    12,    -1,    85,
      -1,    93,    95,    96,    97,    98,    -1,    93,     3,    22,
      92,    67,    -1,    43,    94,    49,    94,    67,    -1,    -1,
      93,    10,    86,    88,    91,    87,    -1,    -1,    -1,    70,
      89,    71,    -1,    90,    -1,    89,    72,    90,    -1,    93,
      96,    -1,    31,    -1,    22,    -1,    63,    -1,    63,    -1,
      63,    -1,    -1,     8,    -1,    -1,    -1,    35,    37,    -1,
      67,    -1,    99,    -1,     4,    -1,    13,    -1,    -1,   101,
      -1,   101,   102,    -1,   102,    -1,    80,    67,    -1,   104,
      -1,   111,    -1,   113,    -1,   114,    -1,   115,    -1,   118,
      -1,   120,    -1,   121,    -1,   125,    -1,   127,    -1,   128,
      -1,   103,    -1,   105,    -1,   129,    -1,   130,    -1,   131,
      -1,   132,    -1,    40,   148,   140,    -1,   110,   148,     4,
     140,    -1,    25,    14,   148,   106,    67,    -1,   106,    72,
     107,    -1,   107,    -1,   109,     4,   108,    -1,    41,    -1,
      44,    -1,    58,    -1,    58,    -1,    59,    -1,    60,    -1,
     110,    73,   141,    -1,    26,   148,   142,   100,   112,    18,
      26,    67,    -1,    -1,    17,   148,   142,   100,   112,    -1,
      16,   100,    -1,   144,    33,   148,   124,    -1,   144,    53,
     148,   143,   124,    -1,   144,    22,   116,   124,    -1,   148,
     117,    27,    -1,    58,    -1,    63,    -1,    60,    -1,    59,
      -1,   119,   148,   145,   146,    -1,    21,    -1,     9,    -1,
      45,   148,    -1,    42,   148,   123,   122,    -1,    56,    -1,
      19,    -1,    51,    -1,    36,    -1,    28,    -1,    32,    -1,
      11,    -1,   100,    18,    33,   145,    67,    -1,   126,   148,
      -1,    63,    -1,    64,    -1,    29,   148,    30,    -1,    20,
     148,    -1,    38,   148,   133,    -1,    23,   148,   134,    30,
      -1,     7,   148,   134,    67,    -1,    37,    67,    -1,    58,
      -1,    58,    -1,    -1,    -1,    19,   148,   136,   137,    -1,
     137,   138,    -1,   138,    -1,    52,   148,   139,    48,   100,
      -1,   139,    39,   147,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    68,   147,    69,    69,    -1,    -1,    62,
      -1,    63,    -1,    67,    -1,    52,   140,    -1,    63,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   219,   219,   223,   229,   230,   233,   234,   237,   243,
     244,   247,   269,   276,   283,   295,   304,   306,   310,   312,
     314,   318,   352,   357,   362,   361,   412,   424,   427,   456,
     460,   466,   473,   474,   476,   504,   514,   525,   526,   531,
     542,   543,   547,   549,   557,   558,   562,   565,   569,   576,
     585,   587,   589,   591,   593,   595,   597,   599,   601,   603,
     605,   607,   609,   611,   613,   615,   617,   619,   623,   636,
     650,   663,   667,   673,   685,   689,   695,   703,   708,   713,
     718,   733,   749,   752,   781,   787,   804,   822,   861,  1076,
    1091,  1112,  1120,  1130,  1145,  1149,  1155,  1172,  1215,  1221,
    1225,  1229,  1233,  1237,  1241,  1247,  1254,  1261,  1263,  1267,
    1281,  1314,  1431,  1437,  1450,  1457,  1474,  1492,  1494,  1493,
    1526,  1530,  1536,  1549,  1559,  1566,  1570,  1574,  1578,  1582,
    1586,  1594,  1597,  1603,  1610,  1612,  1616,  1626
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_ALIAS", "K_ASSIGN", "K_BEGIN", "K_BY", 
  "K_CLOSE", "K_CONSTANT", "K_CONTINUE", "K_CURSOR", "K_DEBUG", 
  "K_DECLARE", "K_DEFAULT", "K_DIAGNOSTICS", "K_DOTDOT", "K_ELSE", 
  "K_ELSIF", "K_END", "K_EXCEPTION", "K_EXECUTE", "K_EXIT", "K_FOR", 
  "K_FETCH", "K_FROM", "K_GET", "K_IF", "K_IN", "K_INFO", "K_INSERT", 
  "K_INTO", "K_IS", "K_LOG", "K_LOOP", "K_NEXT", "K_NOT", "K_NOTICE", 
  "K_NULL", "K_OPEN", "K_OR", "K_PERFORM", "K_ROW_COUNT", "K_RAISE", 
  "K_RENAME", "K_RESULT_OID", "K_RETURN", "K_REVERSE", "K_STRICT", 
  "K_THEN", "K_TO", "K_TYPE", "K_WARNING", "K_WHEN", "K_WHILE", 
  "T_FUNCTION", "T_TRIGGER", "T_STRING", "T_NUMBER", "T_SCALAR", "T_ROW", 
  "T_RECORD", "T_DTYPE", "T_LABEL", "T_WORD", "T_ERROR", "O_OPTION", 
  "O_DUMP", "';'", "'<'", "'>'", "'('", "')'", "','", "'['", "$accept", 
  "pl_function", "comp_optsect", "comp_options", "comp_option", 
  "opt_semi", "pl_block", "decl_sect", "decl_start", "decl_stmts", 
  "decl_stmt", "decl_statement", "@1", "decl_cursor_query", 
  "decl_cursor_args", "decl_cursor_arglist", "decl_cursor_arg", 
  "decl_is_from", "decl_aliasitem", "decl_varname", "decl_renname", 
  "decl_const", "decl_datatype", "decl_notnull", "decl_defval", 
  "decl_defkey", "proc_sect", "proc_stmts", "proc_stmt", "stmt_perform", 
  "stmt_assign", "stmt_getdiag", "getdiag_list", "getdiag_list_item", 
  "getdiag_kind", "getdiag_target", "assign_var", "stmt_if", "stmt_else", 
  "stmt_loop", "stmt_while", "stmt_for", "for_control", "for_variable", 
  "stmt_exit", "exit_type", "stmt_return", "stmt_raise", "raise_msg", 
  "raise_level", "loop_body", "stmt_execsql", "execsql_start", 
  "stmt_execsql_insert", "stmt_dynexecute", "stmt_open", "stmt_fetch", 
  "stmt_close", "stmt_null", "cursor_varptr", "cursor_variable", 
  "exception_sect", "@2", "proc_exceptions", "proc_exception", 
  "proc_conditions", "expr_until_semi", "expr_until_rightbracket", 
  "expr_until_then", "expr_until_loop", "opt_block_label", "opt_label", 
  "opt_exitcond", "opt_lblname", "lno", 0
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
     315,   316,   317,   318,   319,   320,   321,    59,    60,    62,
      40,    41,    44,    91
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    74,    75,    75,    76,    76,    77,    77,    78,    79,
      79,    80,    81,    81,    81,    82,    83,    83,    84,    84,
      84,    85,    85,    85,    86,    85,    87,    88,    88,    89,
      89,    90,    91,    91,    92,    93,    94,    95,    95,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   104,
     105,   106,   106,   107,   108,   108,   109,   110,   110,   110,
     110,   111,   112,   112,   112,   113,   114,   115,   116,   117,
     117,   117,   117,   118,   119,   119,   120,   121,   122,   123,
     123,   123,   123,   123,   123,   124,   125,   126,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   135,
     137,   137,   138,   139,   139,   140,   141,   142,   143,   144,
     144,   145,   145,   145,   146,   146,   147,   148
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     4,     4,     0,     1,     2,     1,     2,     0,
       1,     7,     1,     2,     3,     1,     2,     1,     5,     1,
       1,     5,     5,     5,     0,     6,     0,     0,     3,     1,
       3,     2,     1,     1,     1,     1,     1,     0,     1,     0,
       0,     2,     1,     1,     1,     1,     0,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       5,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     8,     0,     5,     2,     4,     5,     4,     3,     1,
       1,     1,     1,     4,     1,     1,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     5,     2,     1,     1,     3,
       2,     3,     4,     4,     2,     1,     1,     0,     0,     4,
       2,     1,     5,     3,     1,     0,     0,     0,     0,     0,
       5,     0,     1,     1,     1,     2,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     4,     4,     0,     0,   129,     5,     7,   129,     1,
       8,     0,     9,     0,    12,     6,     9,     0,    10,     2,
     137,    15,    13,     3,   136,     0,   129,    19,     0,    35,
       0,    14,    17,    20,    37,     0,   137,    95,   137,    94,
     137,     0,   137,   137,     0,   137,   137,   137,   137,    77,
      78,    79,   107,   108,     0,   117,    47,    49,    62,    51,
      63,   137,    52,    53,    54,    55,    56,   137,    57,    58,
      59,   137,    60,    61,    64,    65,    66,    67,    12,    36,
       0,     0,    16,     0,    38,    24,    39,   130,     0,   110,
       0,   137,   127,     0,   114,     0,   125,     0,    96,    50,
     137,     0,    48,   126,     0,   131,   106,   137,   137,   137,
       0,     0,     0,    27,    40,   116,     0,     0,     0,   129,
     109,   115,   111,    68,   104,    99,   102,   103,   101,   100,
       0,   118,   131,    80,   125,   132,   133,     0,   129,     0,
     129,   128,     0,     0,    34,     0,     0,     0,     0,     0,
     113,   112,    76,     0,    72,     0,    82,    98,    97,     0,
      11,    69,   125,   134,    93,     0,    87,    89,    92,    91,
      90,     0,    85,   129,    23,    18,    22,     0,    29,    39,
      33,    32,    26,    41,    44,    45,    42,    21,    43,    70,
       0,     0,   129,   137,     0,   137,   119,   121,   135,     0,
      88,    86,    28,     0,    31,    25,    71,    74,    75,    73,
      84,   127,     0,     0,   120,   131,    30,   129,     0,     0,
     124,     0,    82,    81,     0,   129,   105,    83,   123,   122
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     3,     5,     6,     7,    19,    54,    13,    22,    31,
      32,    33,   113,   205,   147,   177,   178,   182,   145,    34,
      80,    86,   114,   149,   187,   188,   165,    56,    57,    58,
      59,    60,   153,   154,   209,   155,    61,    62,   194,    63,
      64,    65,   138,   171,    66,    67,    68,    69,   158,   130,
     166,    70,    71,    72,    73,    74,    75,    76,    77,   122,
     116,   101,   159,   196,   197,   219,   123,   133,   119,   173,
      78,   137,   164,    25,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -138
static const short yypact[] =
{
      23,   -48,   -48,    25,   -31,   -29,   -48,  -138,   -29,  -138,
    -138,   -18,    -9,    83,    95,  -138,    -9,    31,  -138,  -138,
    -138,  -138,    28,  -138,  -138,    34,   150,  -138,    49,  -138,
      47,    28,  -138,  -138,    60,    51,  -138,  -138,  -138,  -138,
    -138,   102,  -138,  -138,    54,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,    55,    99,    22,  -138,  -138,  -138,
    -138,    56,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,     8,  -138,
      75,    31,  -138,   109,  -138,  -138,  -138,  -138,    74,  -138,
      74,  -138,  -138,   105,  -138,    78,  -138,    91,  -138,  -138,
    -138,   119,  -138,  -138,   134,    21,  -138,  -138,  -138,  -138,
      49,    70,    77,    71,   108,  -138,    86,   114,    92,    88,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
      93,  -138,    21,  -138,  -138,  -138,  -138,   -30,   266,    -6,
     266,  -138,    87,    94,  -138,    97,    98,    -8,   118,     2,
    -138,  -138,  -138,   -34,  -138,   158,    82,  -138,  -138,   113,
    -138,  -138,  -138,  -138,  -138,   149,  -138,  -138,  -138,  -138,
    -138,   145,  -138,   266,  -138,  -138,  -138,    29,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
      92,    35,   266,  -138,   156,  -138,   113,  -138,  -138,   144,
    -138,  -138,  -138,    98,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,   152,    31,  -138,    21,  -138,    88,   115,   -20,
    -138,   116,    82,  -138,    31,   208,  -138,  -138,  -138,  -138
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -138,  -138,   178,  -138,   175,   168,    16,  -138,  -138,  -138,
     154,  -138,  -138,  -138,  -138,  -138,   -17,  -138,  -138,  -137,
      79,  -138,    14,  -138,  -138,  -138,   -26,  -138,   138,  -138,
    -138,  -138,  -138,     6,  -138,  -138,  -138,  -138,   -25,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -124,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
     110,  -138,  -138,  -138,     5,  -138,  -116,  -138,   -13,  -138,
      84,  -128,  -138,   -79,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -130
static const short yytable[] =
{
      55,    88,   111,    89,   160,    90,   184,    92,    93,   179,
      95,    96,    97,    98,   180,   185,   172,     4,   161,   224,
      21,    12,   162,   181,    16,     9,   104,  -129,   225,    36,
     107,    37,   105,   189,  -129,    10,   106,   163,   190,    11,
      27,   108,    38,    39,  -129,    40,   198,    41,    42,   201,
      17,    43,   167,   168,   169,  -129,   118,   170,    18,    44,
      45,   109,    46,    83,    47,   131,   179,    48,    84,   186,
      85,    28,   139,   140,   141,  -129,   207,     1,     2,   208,
      49,    50,    51,   135,   136,    52,    53,   221,    20,    14,
      11,    29,    14,   156,    24,    36,    30,    37,   192,   193,
     202,   203,   124,    35,   -46,   -46,   -46,    21,    38,    39,
     125,    40,    79,    41,    42,    81,    91,    43,   100,   126,
      87,    94,    99,   127,   110,    44,    45,   128,    46,   103,
      47,   112,   115,    48,   220,   120,   121,   132,   134,   143,
     144,   146,   129,   148,   151,   228,    49,    50,    51,   157,
     152,    52,    53,   150,   174,   183,    11,    36,   211,    37,
     213,    29,   191,   175,   176,   195,   210,   199,   -46,   -46,
      38,    39,   200,    40,   212,    41,    42,   215,   218,    43,
       8,    15,   223,   226,    23,    82,   216,    44,    45,   142,
      46,   222,    47,   204,   102,    48,   206,   227,   217,   229,
     117,   214,     0,     0,     0,     0,     0,     0,    49,    50,
      51,     0,     0,    52,    53,    36,     0,    37,    11,     0,
       0,     0,     0,     0,     0,     0,   -46,     0,    38,    39,
       0,    40,     0,    41,    42,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,    44,    45,     0,    46,     0,
      47,     0,     0,    48,     0,     0,     0,     0,     0,     0,
     -46,     0,     0,     0,     0,     0,    49,    50,    51,     0,
       0,    52,    53,    36,     0,    37,    11,     0,     0,     0,
       0,     0,     0,     0,   -46,     0,    38,    39,     0,    40,
       0,    41,    42,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,    44,    45,     0,    46,     0,    47,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,     0,     0,    52,
      53,     0,     0,     0,    11
};

static const short yycheck[] =
{
      26,    36,    81,    38,   132,    40,     4,    42,    43,   146,
      45,    46,    47,    48,    22,    13,   140,    65,   134,    39,
      12,     5,    52,    31,     8,     0,    61,     5,    48,     7,
      22,     9,    67,    67,    12,    66,    71,    67,    72,    68,
      12,    33,    20,    21,    22,    23,   162,    25,    26,   173,
      68,    29,    58,    59,    60,    33,    91,    63,    67,    37,
      38,    53,    40,     3,    42,   100,   203,    45,     8,    67,
      10,    43,   107,   108,   109,    53,    41,    54,    55,    44,
      58,    59,    60,    62,    63,    63,    64,   215,     5,     5,
      68,    63,     8,   119,    63,     7,    68,     9,    16,    17,
      71,    72,    11,    69,    16,    17,    18,    12,    20,    21,
      19,    23,    63,    25,    26,    68,    14,    29,    19,    28,
      69,    67,    67,    32,    49,    37,    38,    36,    40,    73,
      42,    22,    58,    45,   213,    30,    58,    18,     4,    69,
      63,    70,    51,    35,    30,   224,    58,    59,    60,    56,
      58,    63,    64,    67,    67,    37,    68,     7,   193,     9,
     195,    63,     4,    69,    67,    52,   192,    18,    18,    19,
      20,    21,    27,    23,    18,    25,    26,    33,    26,    29,
       2,     6,    67,    67,    16,    31,   203,    37,    38,   110,
      40,   217,    42,   179,    56,    45,   190,   222,   211,   225,
      90,   196,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    63,    64,     7,    -1,     9,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      -1,    63,    64,     7,    -1,     9,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    54,    55,    75,    65,    76,    77,    78,    76,     0,
      66,    68,    80,    81,   144,    78,    80,    68,    67,    79,
       5,    12,    82,    79,    63,   147,   148,    12,    43,    63,
      68,    83,    84,    85,    93,    69,     7,     9,    20,    21,
      23,    25,    26,    29,    37,    38,    40,    42,    45,    58,
      59,    60,    63,    64,    80,   100,   101,   102,   103,   104,
     105,   110,   111,   113,   114,   115,   118,   119,   120,   121,
     125,   126,   127,   128,   129,   130,   131,   132,   144,    63,
      94,    68,    84,     3,     8,    10,    95,    69,   148,   148,
     148,    14,   148,   148,    67,   148,   148,   148,   148,    67,
      19,   135,   102,    73,   148,   148,   148,    22,    33,    53,
      49,   147,    22,    86,    96,    58,   134,   134,   148,   142,
      30,    58,   133,   140,    11,    19,    28,    32,    36,    51,
     123,   148,    18,   141,     4,    62,    63,   145,   116,   148,
     148,   148,    94,    69,    63,    92,    70,    88,    35,    97,
      67,    30,    58,   106,   107,   109,   100,    56,   122,   136,
     145,   140,    52,    67,   146,   100,   124,    58,    59,    60,
      63,   117,   124,   143,    67,    69,    67,    89,    90,    93,
      22,    31,    91,    37,     4,    13,    67,    98,    99,    67,
      72,     4,    16,    17,   112,    52,   137,   138,   140,    18,
      27,   124,    71,    72,    96,    87,   107,    41,    44,   108,
     100,   148,    18,   148,   138,    33,    90,   142,    26,   139,
     147,   145,   100,    67,    39,    48,    67,   112,   147,   100
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
#line 220 "gram.y"
    {
						yylval.program = (PLpgSQL_stmt_block *)yyvsp[-1].stmt;
					}
    break;

  case 3:
#line 224 "gram.y"
    {
						yylval.program = (PLpgSQL_stmt_block *)yyvsp[-1].stmt;
					}
    break;

  case 8:
#line 238 "gram.y"
    {
						plpgsql_DumpExecTree = true;
					}
    break;

  case 11:
#line 248 "gram.y"
    {
						PLpgSQL_stmt_block *new;

						new = palloc0(sizeof(PLpgSQL_stmt_block));

						new->cmd_type	= PLPGSQL_STMT_BLOCK;
						new->lineno		= yyvsp[-4].ival;
						new->label		= yyvsp[-6].declhdr.label;
						new->n_initvars = yyvsp[-6].declhdr.n_initvars;
						new->initvarnos = yyvsp[-6].declhdr.initvarnos;
						new->body		= yyvsp[-3].list;
						new->exceptions	= yyvsp[-2].exception_block;

						check_labels(yyvsp[-6].declhdr.label, yyvsp[0].str);
						plpgsql_ns_pop();

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 12:
#line 270 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						yyval.declhdr.label	  = yyvsp[0].str;
						yyval.declhdr.n_initvars = 0;
						yyval.declhdr.initvarnos = NULL;
					}
    break;

  case 13:
#line 277 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						yyval.declhdr.label	  = yyvsp[-1].str;
						yyval.declhdr.n_initvars = 0;
						yyval.declhdr.initvarnos = NULL;
					}
    break;

  case 14:
#line 284 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						if (yyvsp[0].str != NULL)
							yyval.declhdr.label = yyvsp[0].str;
						else
							yyval.declhdr.label = yyvsp[-2].str;
						/* Remember variables declared in decl_stmts */
						yyval.declhdr.n_initvars = plpgsql_add_initdatums(&(yyval.declhdr.initvarnos));
					}
    break;

  case 15:
#line 296 "gram.y"
    {
						/* Forget any variables created before block */
						plpgsql_add_initdatums(NULL);
						/* Make variable names be local to block */
						plpgsql_ns_setlocal(true);
					}
    break;

  case 16:
#line 305 "gram.y"
    {	yyval.str = yyvsp[0].str;	}
    break;

  case 17:
#line 307 "gram.y"
    {	yyval.str = yyvsp[0].str;	}
    break;

  case 18:
#line 311 "gram.y"
    {	yyval.str = yyvsp[-2].str;	}
    break;

  case 19:
#line 313 "gram.y"
    {	yyval.str = NULL;	}
    break;

  case 20:
#line 315 "gram.y"
    {	yyval.str = NULL;	}
    break;

  case 21:
#line 319 "gram.y"
    {
						PLpgSQL_variable	*var;

						var = plpgsql_build_variable(yyvsp[-4].varname.name, yyvsp[-4].varname.lineno,
													 yyvsp[-2].dtype, true);
						if (yyvsp[-3].boolean)
						{
							if (var->dtype == PLPGSQL_DTYPE_VAR)
								((PLpgSQL_var *) var)->isconst = yyvsp[-3].boolean;
							else
								ereport(ERROR,
										(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
										 errmsg("row or record variable cannot be CONSTANT")));
						}
						if (yyvsp[-1].boolean)
						{
							if (var->dtype == PLPGSQL_DTYPE_VAR)
								((PLpgSQL_var *) var)->notnull = yyvsp[-1].boolean;
							else
								ereport(ERROR,
										(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
										 errmsg("row or record variable cannot be NOT NULL")));
						}
						if (yyvsp[0].expr != NULL)
						{
							if (var->dtype == PLPGSQL_DTYPE_VAR)
								((PLpgSQL_var *) var)->default_val = yyvsp[0].expr;
							else
								ereport(ERROR,
										(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
										 errmsg("default value for row or record variable is not supported")));
						}
					}
    break;

  case 22:
#line 353 "gram.y"
    {
						plpgsql_ns_additem(yyvsp[-1].nsitem->itemtype,
										   yyvsp[-1].nsitem->itemno, yyvsp[-4].varname.name);
					}
    break;

  case 23:
#line 358 "gram.y"
    {
						plpgsql_ns_rename(yyvsp[-3].str, yyvsp[-1].str);
					}
    break;

  case 24:
#line 362 "gram.y"
    { plpgsql_ns_push(NULL); }
    break;

  case 25:
#line 364 "gram.y"
    {
						PLpgSQL_var *new;
						PLpgSQL_expr *curname_def;
						char		buf[1024];
						char		*cp1;
						char		*cp2;

						/* pop local namespace for cursor args */
						plpgsql_ns_pop();

						new = (PLpgSQL_var *)
							plpgsql_build_variable(yyvsp[-5].varname.name, yyvsp[-5].varname.lineno,
												   plpgsql_build_datatype(REFCURSOROID,
																		  -1),
												   true);

						curname_def = palloc0(sizeof(PLpgSQL_expr));

						curname_def->dtype = PLPGSQL_DTYPE_EXPR;
						strcpy(buf, "SELECT ");
						cp1 = new->refname;
						cp2 = buf + strlen(buf);
						/*
						 * Don't trust standard_conforming_strings here;
						 * it might change before we use the string.
						 */
						if (strchr(cp1, '\\') != NULL)
							*cp2++ = ESCAPE_STRING_SYNTAX;
						*cp2++ = '\'';
						while (*cp1)
						{
							if (SQL_STR_DOUBLE(*cp1, true))
								*cp2++ = *cp1;
							*cp2++ = *cp1++;
						}
						strcpy(cp2, "'::refcursor");
						curname_def->query = pstrdup(buf);
						new->default_val = curname_def;

						new->cursor_explicit_expr = yyvsp[0].expr;
						if (yyvsp[-2].row == NULL)
							new->cursor_explicit_argrow = -1;
						else
							new->cursor_explicit_argrow = yyvsp[-2].row->rowno;
					}
    break;

  case 26:
#line 412 "gram.y"
    {
						PLpgSQL_expr *query;

						plpgsql_ns_setlocal(false);
						query = read_sql_stmt("");
						plpgsql_ns_setlocal(true);

						yyval.expr = query;
					}
    break;

  case 27:
#line 424 "gram.y"
    {
						yyval.row = NULL;
					}
    break;

  case 28:
#line 428 "gram.y"
    {
						PLpgSQL_row *new;
						int i;
						ListCell *l;

						new = palloc0(sizeof(PLpgSQL_row));
						new->dtype = PLPGSQL_DTYPE_ROW;
						new->lineno = plpgsql_scanner_lineno();
						new->rowtupdesc = NULL;
						new->nfields = list_length(yyvsp[-1].list);
						new->fieldnames = palloc(new->nfields * sizeof(char *));
						new->varnos = palloc(new->nfields * sizeof(int));

						i = 0;
						foreach (l, yyvsp[-1].list)
						{
							PLpgSQL_variable *arg = (PLpgSQL_variable *) lfirst(l);
							new->fieldnames[i] = arg->refname;
							new->varnos[i] = arg->dno;
							i++;
						}
						list_free(yyvsp[-1].list);

						plpgsql_adddatum((PLpgSQL_datum *) new);
						yyval.row = new;
					}
    break;

  case 29:
#line 457 "gram.y"
    {
						yyval.list = list_make1(yyvsp[0].variable);
					}
    break;

  case 30:
#line 461 "gram.y"
    {
						yyval.list = lappend(yyvsp[-2].list, yyvsp[0].variable);
					}
    break;

  case 31:
#line 467 "gram.y"
    {
						yyval.variable = plpgsql_build_variable(yyvsp[-1].varname.name, yyvsp[-1].varname.lineno,
													yyvsp[0].dtype, true);
					}
    break;

  case 34:
#line 477 "gram.y"
    {
						char	*name;
						PLpgSQL_nsitem *nsi;

						plpgsql_convert_ident(yytext, &name, 1);
						if (name[0] != '$')
							yyerror("only positional parameters may be aliased");

						plpgsql_ns_setlocal(false);
						nsi = plpgsql_ns_lookup(name, NULL);
						if (nsi == NULL)
						{
							plpgsql_error_lineno = plpgsql_scanner_lineno();
							ereport(ERROR,
									(errcode(ERRCODE_UNDEFINED_PARAMETER),
									 errmsg("function has no parameter \"%s\"",
											name)));
						}

						plpgsql_ns_setlocal(true);

						pfree(name);

						yyval.nsitem = nsi;
					}
    break;

  case 35:
#line 505 "gram.y"
    {
						char	*name;

						plpgsql_convert_ident(yytext, &name, 1);
						yyval.varname.name = name;
						yyval.varname.lineno  = plpgsql_scanner_lineno();
					}
    break;

  case 36:
#line 515 "gram.y"
    {
						char	*name;

						plpgsql_convert_ident(yytext, &name, 1);
						/* the result must be palloc'd, see plpgsql_ns_rename */
						yyval.str = name;
					}
    break;

  case 37:
#line 525 "gram.y"
    { yyval.boolean = false; }
    break;

  case 38:
#line 527 "gram.y"
    { yyval.boolean = true; }
    break;

  case 39:
#line 531 "gram.y"
    {
						/*
						 * If there's a lookahead token, read_datatype
						 * should consume it.
						 */
						yyval.dtype = read_datatype(yychar);
						yyclearin;
					}
    break;

  case 40:
#line 542 "gram.y"
    { yyval.boolean = false; }
    break;

  case 41:
#line 544 "gram.y"
    { yyval.boolean = true; }
    break;

  case 42:
#line 548 "gram.y"
    { yyval.expr = NULL; }
    break;

  case 43:
#line 550 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						yyval.expr = plpgsql_read_expression(';', ";");
						plpgsql_ns_setlocal(true);
					}
    break;

  case 46:
#line 562 "gram.y"
    {
						yyval.list = NIL;
					}
    break;

  case 47:
#line 566 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 48:
#line 570 "gram.y"
    {
							if (yyvsp[0].stmt == NULL)
								yyval.list = yyvsp[-1].list;
							else
								yyval.list = lappend(yyvsp[-1].list, yyvsp[0].stmt);
						}
    break;

  case 49:
#line 577 "gram.y"
    {
							if (yyvsp[0].stmt == NULL)
								yyval.list = NULL;
							else
								yyval.list = list_make1(yyvsp[0].stmt);
						}
    break;

  case 50:
#line 586 "gram.y"
    { yyval.stmt = yyvsp[-1].stmt; }
    break;

  case 51:
#line 588 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 52:
#line 590 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 53:
#line 592 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 54:
#line 594 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 55:
#line 596 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 56:
#line 598 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 57:
#line 600 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 58:
#line 602 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 59:
#line 604 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 60:
#line 606 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 61:
#line 608 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 62:
#line 610 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 63:
#line 612 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 64:
#line 614 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 65:
#line 616 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 66:
#line 618 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 67:
#line 620 "gram.y"
    { yyval.stmt = yyvsp[0].stmt; }
    break;

  case 68:
#line 624 "gram.y"
    {
						PLpgSQL_stmt_perform *new;

						new = palloc0(sizeof(PLpgSQL_stmt_perform));
						new->cmd_type = PLPGSQL_STMT_PERFORM;
						new->lineno   = yyvsp[-1].ival;
						new->expr  = yyvsp[0].expr;

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 69:
#line 637 "gram.y"
    {
						PLpgSQL_stmt_assign *new;

						new = palloc0(sizeof(PLpgSQL_stmt_assign));
						new->cmd_type = PLPGSQL_STMT_ASSIGN;
						new->lineno   = yyvsp[-2].ival;
						new->varno = yyvsp[-3].ival;
						new->expr  = yyvsp[0].expr;

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 70:
#line 651 "gram.y"
    {
						PLpgSQL_stmt_getdiag	 *new;

						new = palloc0(sizeof(PLpgSQL_stmt_getdiag));
						new->cmd_type = PLPGSQL_STMT_GETDIAG;
						new->lineno   = yyvsp[-2].ival;
						new->diag_items  = yyvsp[-1].list;

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 71:
#line 664 "gram.y"
    {
						yyval.list = lappend(yyvsp[-2].list, yyvsp[0].diagitem);
					}
    break;

  case 72:
#line 668 "gram.y"
    {
						yyval.list = list_make1(yyvsp[0].diagitem);
					}
    break;

  case 73:
#line 674 "gram.y"
    {
						PLpgSQL_diag_item *new;

						new = palloc(sizeof(PLpgSQL_diag_item));
						new->target = yyvsp[-2].ival;
						new->kind = yyvsp[0].ival;

						yyval.diagitem = new;
					}
    break;

  case 74:
#line 686 "gram.y"
    {
						yyval.ival = PLPGSQL_GETDIAG_ROW_COUNT;
					}
    break;

  case 75:
#line 690 "gram.y"
    {
						yyval.ival = PLPGSQL_GETDIAG_RESULT_OID;
					}
    break;

  case 76:
#line 696 "gram.y"
    {
						check_assignable(yylval.scalar);
						yyval.ival = yylval.scalar->dno;
					}
    break;

  case 77:
#line 704 "gram.y"
    {
						check_assignable(yylval.scalar);
						yyval.ival = yylval.scalar->dno;
					}
    break;

  case 78:
#line 709 "gram.y"
    {
						check_assignable((PLpgSQL_datum *) yylval.row);
						yyval.ival = yylval.row->rowno;
					}
    break;

  case 79:
#line 714 "gram.y"
    {
						check_assignable((PLpgSQL_datum *) yylval.rec);
						yyval.ival = yylval.rec->recno;
					}
    break;

  case 80:
#line 719 "gram.y"
    {
						PLpgSQL_arrayelem	*new;

						new = palloc0(sizeof(PLpgSQL_arrayelem));
						new->dtype		= PLPGSQL_DTYPE_ARRAYELEM;
						new->subscript	= yyvsp[0].expr;
						new->arrayparentno = yyvsp[-2].ival;

						plpgsql_adddatum((PLpgSQL_datum *)new);

						yyval.ival = new->dno;
					}
    break;

  case 81:
#line 734 "gram.y"
    {
						PLpgSQL_stmt_if *new;

						new = palloc0(sizeof(PLpgSQL_stmt_if));
						new->cmd_type	= PLPGSQL_STMT_IF;
						new->lineno		= yyvsp[-6].ival;
						new->cond		= yyvsp[-5].expr;
						new->true_body	= yyvsp[-4].list;
						new->false_body = yyvsp[-3].list;

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 82:
#line 749 "gram.y"
    {
						yyval.list = NIL;
					}
    break;

  case 83:
#line 753 "gram.y"
    {
						/*
						 * Translate the structure:	   into:
						 *
						 * IF c1 THEN				   IF c1 THEN
						 *	 ...						   ...
						 * ELSIF c2 THEN			   ELSE
						 *								   IF c2 THEN
						 *	 ...							   ...
						 * ELSE							   ELSE
						 *	 ...							   ...
						 * END IF						   END IF
						 *							   END IF
						 */
						PLpgSQL_stmt_if *new_if;

						/* first create a new if-statement */
						new_if = palloc0(sizeof(PLpgSQL_stmt_if));
						new_if->cmd_type	= PLPGSQL_STMT_IF;
						new_if->lineno		= yyvsp[-3].ival;
						new_if->cond		= yyvsp[-2].expr;
						new_if->true_body	= yyvsp[-1].list;
						new_if->false_body	= yyvsp[0].list;

						/* wrap the if-statement in a "container" list */
						yyval.list = list_make1(new_if);
					}
    break;

  case 84:
#line 782 "gram.y"
    {
						yyval.list = yyvsp[0].list;
					}
    break;

  case 85:
#line 788 "gram.y"
    {
						PLpgSQL_stmt_loop *new;

						new = palloc0(sizeof(PLpgSQL_stmt_loop));
						new->cmd_type = PLPGSQL_STMT_LOOP;
						new->lineno   = yyvsp[-1].ival;
						new->label	  = yyvsp[-3].str;
						new->body	  = yyvsp[0].loop_body.stmts;

						check_labels(yyvsp[-3].str, yyvsp[0].loop_body.end_label);
						plpgsql_ns_pop();

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 86:
#line 805 "gram.y"
    {
						PLpgSQL_stmt_while *new;

						new = palloc0(sizeof(PLpgSQL_stmt_while));
						new->cmd_type = PLPGSQL_STMT_WHILE;
						new->lineno   = yyvsp[-2].ival;
						new->label	  = yyvsp[-4].str;
						new->cond	  = yyvsp[-1].expr;
						new->body	  = yyvsp[0].loop_body.stmts;

						check_labels(yyvsp[-4].str, yyvsp[0].loop_body.end_label);
						plpgsql_ns_pop();

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 87:
#line 823 "gram.y"
    {
						/* This runs after we've scanned the loop body */
						if (yyvsp[-1].stmt->cmd_type == PLPGSQL_STMT_FORI)
						{
							PLpgSQL_stmt_fori		*new;

							new = (PLpgSQL_stmt_fori *) yyvsp[-1].stmt;
							new->label	  = yyvsp[-3].str;
							new->body	  = yyvsp[0].loop_body.stmts;
							yyval.stmt = (PLpgSQL_stmt *) new;
						}
						else if (yyvsp[-1].stmt->cmd_type == PLPGSQL_STMT_FORS)
						{
							PLpgSQL_stmt_fors		*new;

							new = (PLpgSQL_stmt_fors *) yyvsp[-1].stmt;
							new->label	  = yyvsp[-3].str;
							new->body	  = yyvsp[0].loop_body.stmts;
							yyval.stmt = (PLpgSQL_stmt *) new;
						}
						else
						{
							PLpgSQL_stmt_dynfors	*new;

							Assert(yyvsp[-1].stmt->cmd_type == PLPGSQL_STMT_DYNFORS);
							new = (PLpgSQL_stmt_dynfors *) yyvsp[-1].stmt;
							new->label	  = yyvsp[-3].str;
							new->body	  = yyvsp[0].loop_body.stmts;
							yyval.stmt = (PLpgSQL_stmt *) new;
						}

						check_labels(yyvsp[-3].str, yyvsp[0].loop_body.end_label);
						/* close namespace started in opt_label */
						plpgsql_ns_pop();
					}
    break;

  case 88:
#line 862 "gram.y"
    {
						int			tok = yylex();

						/* Simple case: EXECUTE is a dynamic FOR loop */
						if (tok == K_EXECUTE)
						{
							PLpgSQL_stmt_dynfors	*new;
							PLpgSQL_expr			*expr;

							expr = plpgsql_read_expression(K_LOOP, "LOOP");

							new = palloc0(sizeof(PLpgSQL_stmt_dynfors));
							new->cmd_type = PLPGSQL_STMT_DYNFORS;
							new->lineno   = yyvsp[-2].ival;
							if (yyvsp[-1].forvariable.rec)
							{
								new->rec = yyvsp[-1].forvariable.rec;
								check_assignable((PLpgSQL_datum *) new->rec);
							}
							else if (yyvsp[-1].forvariable.row)
							{
								new->row = yyvsp[-1].forvariable.row;
								check_assignable((PLpgSQL_datum *) new->row);
							}
							else if (yyvsp[-1].forvariable.scalar)
							{
								/* convert single scalar to list */
								new->row = make_scalar_list1(yyvsp[-1].forvariable.name, yyvsp[-1].forvariable.scalar, yyvsp[-1].forvariable.lineno);
								/* no need for check_assignable */
							}
							else
							{
								plpgsql_error_lineno = yyvsp[-1].forvariable.lineno;
								yyerror("loop variable of loop over rows must be a record or row variable or list of scalar variables");
							}
							new->query = expr;

							yyval.stmt = (PLpgSQL_stmt *) new;
						}
						else
						{
							PLpgSQL_expr	*expr1;
							bool			 reverse = false;

							/*
							 * We have to distinguish between two
							 * alternatives: FOR var IN a .. b and FOR
							 * var IN query. Unfortunately this is
							 * tricky, since the query in the second
							 * form needn't start with a SELECT
							 * keyword.  We use the ugly hack of
							 * looking for two periods after the first
							 * token. We also check for the REVERSE
							 * keyword, which means it must be an
							 * integer loop.
							 */
							if (tok == K_REVERSE)
								reverse = true;
							else
								plpgsql_push_back_token(tok);

							/*
							 * Read tokens until we see either a ".."
							 * or a LOOP. The text we read may not
							 * necessarily be a well-formed SQL
							 * statement, so we need to invoke
							 * read_sql_construct directly.
							 */
							expr1 = read_sql_construct(K_DOTDOT,
													   K_LOOP,
													   "LOOP",
													   "SELECT ",
													   true,
													   false,
													   &tok);

							if (tok == K_DOTDOT)
							{
								/* Saw "..", so it must be an integer loop */
								PLpgSQL_expr		*expr2;
								PLpgSQL_expr		*expr_by;
								PLpgSQL_var			*fvar;
								PLpgSQL_stmt_fori	*new;
								char				*varname;

								/* First expression is well-formed */
								check_sql_expr(expr1->query);


								expr2 = read_sql_construct(K_BY,
														   K_LOOP,
														   "LOOP",
														   "SELECT ",
														   true,
														   false,
														   &tok);

								if (tok == K_BY) 
									expr_by = plpgsql_read_expression(K_LOOP, "LOOP");
								else
								{
									/*
									 * If there is no BY clause we will assume 1
									 */
									char buf[1024];
									PLpgSQL_dstring		ds;

									plpgsql_dstring_init(&ds);

									expr_by = palloc0(sizeof(PLpgSQL_expr));
									expr_by->dtype      		= PLPGSQL_DTYPE_EXPR;
									strcpy(buf, "SELECT 1");
									plpgsql_dstring_append(&ds, buf);
									expr_by->query			    = pstrdup(plpgsql_dstring_get(&ds));
									expr_by->plan				= NULL;
								}

								/* should have had a single variable name */
								plpgsql_error_lineno = yyvsp[-1].forvariable.lineno;
								if (yyvsp[-1].forvariable.scalar && yyvsp[-1].forvariable.row)
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("integer FOR loop must have just one target variable")));

								/* create loop's private variable */
								plpgsql_convert_ident(yyvsp[-1].forvariable.name, &varname, 1);
								fvar = (PLpgSQL_var *)
									plpgsql_build_variable(varname,
														   yyvsp[-1].forvariable.lineno,
														   plpgsql_build_datatype(INT4OID,
																				  -1),
														   true);

								new = palloc0(sizeof(PLpgSQL_stmt_fori));
								new->cmd_type = PLPGSQL_STMT_FORI;
								new->lineno   = yyvsp[-2].ival;
								new->var	  = fvar;
								new->reverse  = reverse;
								new->lower	  = expr1;
								new->upper	  = expr2;
								new->by		  = expr_by;

								yyval.stmt = (PLpgSQL_stmt *) new;
							}
							else
							{
								/*
								 * No "..", so it must be a query loop. We've prefixed an
								 * extra SELECT to the query text, so we need to remove that
								 * before performing syntax checking.
								 */
								char				*tmp_query;
								PLpgSQL_stmt_fors	*new;

								if (reverse)
									yyerror("cannot specify REVERSE in query FOR loop");

								Assert(strncmp(expr1->query, "SELECT ", 7) == 0);
								tmp_query = pstrdup(expr1->query + 7);
								pfree(expr1->query);
								expr1->query = tmp_query;

								check_sql_expr(expr1->query);

								new = palloc0(sizeof(PLpgSQL_stmt_fors));
								new->cmd_type = PLPGSQL_STMT_FORS;
								new->lineno   = yyvsp[-2].ival;
								if (yyvsp[-1].forvariable.rec)
								{
									new->rec = yyvsp[-1].forvariable.rec;
									check_assignable((PLpgSQL_datum *) new->rec);
								}
								else if (yyvsp[-1].forvariable.row)
								{
									new->row = yyvsp[-1].forvariable.row;
									check_assignable((PLpgSQL_datum *) new->row);
								}
								else if (yyvsp[-1].forvariable.scalar)
								{
									/* convert single scalar to list */
									new->row = make_scalar_list1(yyvsp[-1].forvariable.name, yyvsp[-1].forvariable.scalar, yyvsp[-1].forvariable.lineno);
									/* no need for check_assignable */
								}
								else
								{
									plpgsql_error_lineno = yyvsp[-1].forvariable.lineno;
									yyerror("loop variable of loop over rows must be a record or row variable or list of scalar variables");
								}

								new->query = expr1;
								yyval.stmt = (PLpgSQL_stmt *) new;
							}
						}
					}
    break;

  case 89:
#line 1077 "gram.y"
    {
						int			tok;

						yyval.forvariable.name = pstrdup(yytext);
						yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						yyval.forvariable.scalar = yylval.scalar;
						yyval.forvariable.rec = NULL;
						yyval.forvariable.row = NULL;
						/* check for comma-separated list */
						tok = yylex();
						plpgsql_push_back_token(tok);
						if (tok == ',')
							yyval.forvariable.row = read_into_scalar_list(yyval.forvariable.name, yyval.forvariable.scalar);
					}
    break;

  case 90:
#line 1092 "gram.y"
    {
						int			tok;

						yyval.forvariable.name = pstrdup(yytext);
						yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						yyval.forvariable.scalar = NULL;
						yyval.forvariable.rec = NULL;
						yyval.forvariable.row = NULL;
						/* check for comma-separated list */
						tok = yylex();
						plpgsql_push_back_token(tok);
						if (tok == ',')
						{
							plpgsql_error_lineno = yyval.forvariable.lineno;
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("\"%s\" is not a scalar variable",
											yyval.forvariable.name)));
						}
					}
    break;

  case 91:
#line 1113 "gram.y"
    {
						yyval.forvariable.name = pstrdup(yytext);
						yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						yyval.forvariable.scalar = NULL;
						yyval.forvariable.rec = yylval.rec;
						yyval.forvariable.row = NULL;
					}
    break;

  case 92:
#line 1121 "gram.y"
    {
						yyval.forvariable.name = pstrdup(yytext);
						yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						yyval.forvariable.scalar = NULL;
						yyval.forvariable.row = yylval.row;
						yyval.forvariable.rec = NULL;
					}
    break;

  case 93:
#line 1131 "gram.y"
    {
						PLpgSQL_stmt_exit *new;

						new = palloc0(sizeof(PLpgSQL_stmt_exit));
						new->cmd_type = PLPGSQL_STMT_EXIT;
						new->is_exit  = yyvsp[-3].boolean;
						new->lineno	  = yyvsp[-2].ival;
						new->label	  = yyvsp[-1].str;
						new->cond	  = yyvsp[0].expr;

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 94:
#line 1146 "gram.y"
    {
						yyval.boolean = true;
					}
    break;

  case 95:
#line 1150 "gram.y"
    {
						yyval.boolean = false;
					}
    break;

  case 96:
#line 1156 "gram.y"
    {
						int	tok;

						tok = yylex();
						if (tok == K_NEXT)
						{
							yyval.stmt = make_return_next_stmt(yyvsp[0].ival);
						}
						else
						{
							plpgsql_push_back_token(tok);
							yyval.stmt = make_return_stmt(yyvsp[0].ival);
						}
					}
    break;

  case 97:
#line 1173 "gram.y"
    {
						PLpgSQL_stmt_raise		*new;
						int	tok;

						new = palloc(sizeof(PLpgSQL_stmt_raise));

						new->cmd_type	= PLPGSQL_STMT_RAISE;
						new->lineno		= yyvsp[-2].ival;
						new->elog_level = yyvsp[-1].ival;
						new->message	= yyvsp[0].str;
						new->params		= NIL;

						tok = yylex();

						/*
						 * We expect either a semi-colon, which
						 * indicates no parameters, or a comma that
						 * begins the list of parameter expressions
						 */
						if (tok != ',' && tok != ';')
							yyerror("syntax error");

						if (tok == ',')
						{
							PLpgSQL_expr *expr;
							int term;

							for (;;)
							{
								expr = read_sql_construct(',', ';', ", or ;",
														  "SELECT ",
														  true, true, &term);
								new->params = lappend(new->params, expr);
								if (term == ';')
									break;
							}
						}

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 98:
#line 1216 "gram.y"
    {
						yyval.str = plpgsql_get_string_value();
					}
    break;

  case 99:
#line 1222 "gram.y"
    {
						yyval.ival = ERROR;
					}
    break;

  case 100:
#line 1226 "gram.y"
    {
						yyval.ival = WARNING;
					}
    break;

  case 101:
#line 1230 "gram.y"
    {
						yyval.ival = NOTICE;
					}
    break;

  case 102:
#line 1234 "gram.y"
    {
						yyval.ival = INFO;
					}
    break;

  case 103:
#line 1238 "gram.y"
    {
						yyval.ival = LOG;
					}
    break;

  case 104:
#line 1242 "gram.y"
    {
						yyval.ival = DEBUG1;
					}
    break;

  case 105:
#line 1248 "gram.y"
    {
						yyval.loop_body.stmts = yyvsp[-4].list;
						yyval.loop_body.end_label = yyvsp[-1].str;
					}
    break;

  case 106:
#line 1255 "gram.y"
    {
						yyval.stmt = make_execsql_stmt(yyvsp[-1].str, yyvsp[0].ival);
					}
    break;

  case 107:
#line 1262 "gram.y"
    { yyval.str = pstrdup(yytext); }
    break;

  case 108:
#line 1264 "gram.y"
    { yyval.str = pstrdup(yytext); }
    break;

  case 109:
#line 1268 "gram.y"
    {
						/*
						 * We have to special-case INSERT so that its INTO
						 * won't be treated as an INTO-variables clause.
						 *
						 * Fortunately, this is the only valid use of INTO
						 * in a pl/pgsql SQL command, and INTO is already
						 * a fully reserved word in the main grammar.
						 */
						yyval.stmt = make_execsql_stmt("INSERT INTO", yyvsp[-1].ival);
					}
    break;

  case 110:
#line 1282 "gram.y"
    {
						PLpgSQL_stmt_dynexecute *new;
						PLpgSQL_expr *expr;
						int endtoken;

						expr = read_sql_construct(K_INTO, ';', "INTO|;",
												  "SELECT ",
												  true, true, &endtoken);

						new = palloc(sizeof(PLpgSQL_stmt_dynexecute));
						new->cmd_type = PLPGSQL_STMT_DYNEXECUTE;
						new->lineno = yyvsp[0].ival;
						new->query = expr;
						new->into = false;
						new->strict = false;
						new->rec = NULL;
						new->row = NULL;

						/* If we found "INTO", collect the argument */
						if (endtoken == K_INTO)
						{
							new->into = true;
							read_into_target(&new->rec, &new->row, &new->strict);
							if (yylex() != ';')
								yyerror("syntax error");
						}

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 111:
#line 1315 "gram.y"
    {
						PLpgSQL_stmt_open *new;
						int				  tok;

						new = palloc0(sizeof(PLpgSQL_stmt_open));
						new->cmd_type = PLPGSQL_STMT_OPEN;
						new->lineno = yyvsp[-1].ival;
						new->curvar = yyvsp[0].var->varno;

						if (yyvsp[0].var->cursor_explicit_expr == NULL)
						{
						    tok = yylex();
							if (tok != K_FOR)
							{
								plpgsql_error_lineno = yyvsp[-1].ival;
								ereport(ERROR,
										(errcode(ERRCODE_SYNTAX_ERROR),
										 errmsg("syntax error at \"%s\"",
												yytext),
										 errdetail("Expected FOR to open a reference cursor.")));
							}

							tok = yylex();
							if (tok == K_EXECUTE)
							{
								new->dynquery = read_sql_stmt("SELECT ");
							}
							else
							{
								plpgsql_push_back_token(tok);
								new->query = read_sql_stmt("");
							}
						}
						else
						{
							if (yyvsp[0].var->cursor_explicit_argrow >= 0)
							{
								char   *cp;

								tok = yylex();
								if (tok != '(')
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("cursor \"%s\" has arguments",
													yyvsp[0].var->refname)));
								}

								/*
								 * Push back the '(', else read_sql_stmt
								 * will complain about unbalanced parens.
								 */
								plpgsql_push_back_token(tok);

								new->argquery = read_sql_stmt("SELECT ");

								/*
								 * Now remove the leading and trailing parens,
								 * because we want "select 1, 2", not
								 * "select (1, 2)".
								 */
								cp = new->argquery->query;

								if (strncmp(cp, "SELECT", 6) != 0)
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									/* internal error */
									elog(ERROR, "expected \"SELECT (\", got \"%s\"",
										 new->argquery->query);
								}
								cp += 6;
								while (*cp == ' ') /* could be more than 1 space here */
									cp++;
								if (*cp != '(')
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									/* internal error */
									elog(ERROR, "expected \"SELECT (\", got \"%s\"",
										 new->argquery->query);
								}
								*cp = ' ';

								cp += strlen(cp) - 1;

								if (*cp != ')')
									yyerror("expected \")\"");
								*cp = '\0';
							}
							else
							{
								tok = yylex();
								if (tok == '(')
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("cursor \"%s\" has no arguments",
													yyvsp[0].var->refname)));
								}

								if (tok != ';')
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("syntax error at \"%s\"",
													yytext)));
								}
							}
						}

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 112:
#line 1432 "gram.y"
    {
						yyval.stmt = make_fetch_stmt(yyvsp[-2].ival, yyvsp[-1].ival);
					}
    break;

  case 113:
#line 1438 "gram.y"
    {
						PLpgSQL_stmt_close *new;

						new = palloc(sizeof(PLpgSQL_stmt_close));
						new->cmd_type = PLPGSQL_STMT_CLOSE;
						new->lineno = yyvsp[-2].ival;
						new->curvar = yyvsp[-1].ival;

						yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 114:
#line 1451 "gram.y"
    {
						/* We do not bother building a node for NULL */
						yyval.stmt = NULL;
					}
    break;

  case 115:
#line 1458 "gram.y"
    {
						if (yylval.scalar->dtype != PLPGSQL_DTYPE_VAR)
							yyerror("cursor variable must be a simple variable");

						if (((PLpgSQL_var *) yylval.scalar)->datatype->typoid != REFCURSOROID)
						{
							plpgsql_error_lineno = plpgsql_scanner_lineno();
							ereport(ERROR,
									(errcode(ERRCODE_DATATYPE_MISMATCH),
									 errmsg("\"%s\" must be of type cursor or refcursor",
											((PLpgSQL_var *) yylval.scalar)->refname)));
						}
						yyval.var = (PLpgSQL_var *) yylval.scalar;
					}
    break;

  case 116:
#line 1475 "gram.y"
    {
						if (yylval.scalar->dtype != PLPGSQL_DTYPE_VAR)
							yyerror("cursor variable must be a simple variable");

						if (((PLpgSQL_var *) yylval.scalar)->datatype->typoid != REFCURSOROID)
						{
							plpgsql_error_lineno = plpgsql_scanner_lineno();
							ereport(ERROR,
									(errcode(ERRCODE_DATATYPE_MISMATCH),
									 errmsg("\"%s\" must be of type refcursor",
											((PLpgSQL_var *) yylval.scalar)->refname)));
						}
						yyval.ival = yylval.scalar->dno;
					}
    break;

  case 117:
#line 1492 "gram.y"
    { yyval.exception_block = NULL; }
    break;

  case 118:
#line 1494 "gram.y"
    {
						/*
						 * We use a mid-rule action to add these
						 * special variables to the namespace before
						 * parsing the WHEN clauses themselves.
						 */
						PLpgSQL_exception_block *new = palloc(sizeof(PLpgSQL_exception_block));
						PLpgSQL_variable *var;

						var = plpgsql_build_variable("sqlstate", yyvsp[0].ival,
													 plpgsql_build_datatype(TEXTOID, -1),
													 true);
						((PLpgSQL_var *) var)->isconst = true;
						new->sqlstate_varno = var->dno;

						var = plpgsql_build_variable("sqlerrm", yyvsp[0].ival,
													 plpgsql_build_datatype(TEXTOID, -1),
													 true);
						((PLpgSQL_var *) var)->isconst = true;
						new->sqlerrm_varno = var->dno;

						yyval.exception_block = new;
					}
    break;

  case 119:
#line 1518 "gram.y"
    {
						PLpgSQL_exception_block *new = yyvsp[-1].exception_block;
						new->exc_list = yyvsp[0].list;

						yyval.exception_block = new;
					}
    break;

  case 120:
#line 1527 "gram.y"
    {
							yyval.list = lappend(yyvsp[-1].list, yyvsp[0].exception);
						}
    break;

  case 121:
#line 1531 "gram.y"
    {
							yyval.list = list_make1(yyvsp[0].exception);
						}
    break;

  case 122:
#line 1537 "gram.y"
    {
						PLpgSQL_exception *new;

						new = palloc0(sizeof(PLpgSQL_exception));
						new->lineno     = yyvsp[-3].ival;
						new->conditions = yyvsp[-2].condition;
						new->action	    = yyvsp[0].list;

						yyval.exception = new;
					}
    break;

  case 123:
#line 1550 "gram.y"
    {
							PLpgSQL_condition	*old;

							for (old = yyvsp[-2].condition; old->next != NULL; old = old->next)
								/* skip */ ;
							old->next = plpgsql_parse_err_condition(yyvsp[0].str);

							yyval.condition = yyvsp[-2].condition;
						}
    break;

  case 124:
#line 1560 "gram.y"
    {
							yyval.condition = plpgsql_parse_err_condition(yyvsp[0].str);
						}
    break;

  case 125:
#line 1566 "gram.y"
    { yyval.expr = plpgsql_read_expression(';', ";"); }
    break;

  case 126:
#line 1570 "gram.y"
    { yyval.expr = plpgsql_read_expression(']', "]"); }
    break;

  case 127:
#line 1574 "gram.y"
    { yyval.expr = plpgsql_read_expression(K_THEN, "THEN"); }
    break;

  case 128:
#line 1578 "gram.y"
    { yyval.expr = plpgsql_read_expression(K_LOOP, "LOOP"); }
    break;

  case 129:
#line 1582 "gram.y"
    {
						plpgsql_ns_push(NULL);
						yyval.str = NULL;
					}
    break;

  case 130:
#line 1587 "gram.y"
    {
						plpgsql_ns_push(yyvsp[-2].str);
						yyval.str = yyvsp[-2].str;
					}
    break;

  case 131:
#line 1594 "gram.y"
    {
						yyval.str = NULL;
					}
    break;

  case 132:
#line 1598 "gram.y"
    {
						char *label_name;
						plpgsql_convert_ident(yytext, &label_name, 1);
						yyval.str = label_name;
					}
    break;

  case 133:
#line 1604 "gram.y"
    {
						/* just to give a better error than "syntax error" */
						yyerror("no such label");
					}
    break;

  case 134:
#line 1611 "gram.y"
    { yyval.expr = NULL; }
    break;

  case 135:
#line 1613 "gram.y"
    { yyval.expr = yyvsp[0].expr; }
    break;

  case 136:
#line 1617 "gram.y"
    {
						char	*name;

						plpgsql_convert_ident(yytext, &name, 1);
						yyval.str = name;
					}
    break;

  case 137:
#line 1626 "gram.y"
    {
						yyval.ival = plpgsql_error_lineno = plpgsql_scanner_lineno();
					}
    break;


    }

/* Line 991 of yacc.c.  */
#line 3073 "y.tab.c"

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


#line 1631 "gram.y"



#define MAX_EXPR_PARAMS  1024

/*
 * determine the expression parameter position to use for a plpgsql datum
 *
 * It is important that any given plpgsql datum map to just one parameter.
 * We used to be sloppy and assign a separate parameter for each occurrence
 * of a datum reference, but that fails for situations such as "select DATUM
 * from ... group by DATUM".
 *
 * The params[] array must be of size MAX_EXPR_PARAMS.
 */
static int
assign_expr_param(int dno, int *params, int *nparams)
{
	int		i;

	/* already have an instance of this dno? */
	for (i = 0; i < *nparams; i++)
	{
		if (params[i] == dno)
			return i+1;
	}
	/* check for array overflow */
	if (*nparams >= MAX_EXPR_PARAMS)
	{
		plpgsql_error_lineno = plpgsql_scanner_lineno();
		ereport(ERROR,
				(errcode(ERRCODE_PROGRAM_LIMIT_EXCEEDED),
				 errmsg("too many variables specified in SQL statement")));
	}
	/* add new parameter dno to array */
	params[*nparams] = dno;
	(*nparams)++;
	return *nparams;
}


PLpgSQL_expr *
plpgsql_read_expression(int until, const char *expected)
{
	return read_sql_construct(until, 0, expected, "SELECT ", true, true, NULL);
}

static PLpgSQL_expr *
read_sql_stmt(const char *sqlstart)
{
	return read_sql_construct(';', 0, ";", sqlstart, false, true, NULL);
}

/*
 * Read a SQL construct and build a PLpgSQL_expr for it.
 *
 * until:		token code for expected terminator
 * until2:		token code for alternate terminator (pass 0 if none)
 * expected:	text to use in complaining that terminator was not found
 * sqlstart:	text to prefix to the accumulated SQL text
 * isexpression: whether to say we're reading an "expression" or a "statement"
 * valid_sql:   whether to check the syntax of the expr (prefixed with sqlstart)
 * endtoken:	if not NULL, ending token is stored at *endtoken
 *				(this is only interesting if until2 isn't zero)
 */
static PLpgSQL_expr *
read_sql_construct(int until,
				   int until2,
				   const char *expected,
				   const char *sqlstart,
				   bool isexpression,
				   bool valid_sql,
				   int *endtoken)
{
	int					tok;
	int					lno;
	PLpgSQL_dstring		ds;
	int					parenlevel = 0;
	int					nparams = 0;
	int					params[MAX_EXPR_PARAMS];
	char				buf[32];
	PLpgSQL_expr		*expr;

	lno = plpgsql_scanner_lineno();
	plpgsql_dstring_init(&ds);
	plpgsql_dstring_append(&ds, sqlstart);

	for (;;)
	{
		tok = yylex();
		if (tok == until && parenlevel == 0)
			break;
		if (tok == until2 && parenlevel == 0)
			break;
		if (tok == '(' || tok == '[')
			parenlevel++;
		else if (tok == ')' || tok == ']')
		{
			parenlevel--;
			if (parenlevel < 0)
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
						 errmsg("mismatched parentheses")));
		}
		/*
		 * End of function definition is an error, and we don't expect to
		 * hit a semicolon either (unless it's the until symbol, in which
		 * case we should have fallen out above).
		 */
		if (tok == 0 || tok == ';')
		{
			plpgsql_error_lineno = lno;
			if (parenlevel != 0)
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
						 errmsg("mismatched parentheses")));
			if (isexpression)
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
						 errmsg("missing \"%s\" at end of SQL expression",
								expected)));
			else
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
						 errmsg("missing \"%s\" at end of SQL statement",
								expected)));
		}

		if (plpgsql_SpaceScanned)
			plpgsql_dstring_append(&ds, " ");

		switch (tok)
		{
			case T_SCALAR:
				snprintf(buf, sizeof(buf), " $%d ",
						 assign_expr_param(yylval.scalar->dno,
										   params, &nparams));
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_ROW:
				snprintf(buf, sizeof(buf), " $%d ",
						 assign_expr_param(yylval.row->rowno,
										   params, &nparams));
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_RECORD:
				snprintf(buf, sizeof(buf), " $%d ",
						 assign_expr_param(yylval.rec->recno,
										   params, &nparams));
				plpgsql_dstring_append(&ds, buf);
				break;

			default:
				plpgsql_dstring_append(&ds, yytext);
				break;
		}
	}

	if (endtoken)
		*endtoken = tok;

	expr = palloc(sizeof(PLpgSQL_expr) + sizeof(int) * nparams - sizeof(int));
	expr->dtype			= PLPGSQL_DTYPE_EXPR;
	expr->query			= pstrdup(plpgsql_dstring_get(&ds));
	expr->plan			= NULL;
	expr->nparams		= nparams;
	while(nparams-- > 0)
		expr->params[nparams] = params[nparams];
	plpgsql_dstring_free(&ds);

	if (valid_sql)
		check_sql_expr(expr->query);

	return expr;
}

static PLpgSQL_type *
read_datatype(int tok)
{
	int					lno;
	PLpgSQL_dstring		ds;
	PLpgSQL_type		*result;
	bool				needspace = false;
	int					parenlevel = 0;

	lno = plpgsql_scanner_lineno();

	/* Often there will be a lookahead token, but if not, get one */
	if (tok == YYEMPTY)
		tok = yylex();

	if (tok == T_DTYPE)
	{
		/* lexer found word%TYPE and did its thing already */
		return yylval.dtype;
	}

	plpgsql_dstring_init(&ds);

	while (tok != ';')
	{
		if (tok == 0)
		{
			plpgsql_error_lineno = lno;
			if (parenlevel != 0)
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
						 errmsg("mismatched parentheses")));
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("incomplete datatype declaration")));
		}
		/* Possible followers for datatype in a declaration */
		if (tok == K_NOT || tok == K_ASSIGN || tok == K_DEFAULT)
			break;
		/* Possible followers for datatype in a cursor_arg list */
		if ((tok == ',' || tok == ')') && parenlevel == 0)
			break;
		if (tok == '(')
			parenlevel++;
		else if (tok == ')')
			parenlevel--;
		if (needspace)
			plpgsql_dstring_append(&ds, " ");
		needspace = true;
		plpgsql_dstring_append(&ds, yytext);

		tok = yylex();
	}

	plpgsql_push_back_token(tok);

	plpgsql_error_lineno = lno;	/* in case of error in parse_datatype */

	result = plpgsql_parse_datatype(plpgsql_dstring_get(&ds));

	plpgsql_dstring_free(&ds);

	return result;
}

static PLpgSQL_stmt *
make_execsql_stmt(const char *sqlstart, int lineno)
{
	PLpgSQL_dstring		ds;
	int					nparams = 0;
	int					params[MAX_EXPR_PARAMS];
	char				buf[32];
	PLpgSQL_stmt_execsql *execsql;
	PLpgSQL_expr		*expr;
	PLpgSQL_row			*row = NULL;
	PLpgSQL_rec			*rec = NULL;
	int					tok;
	bool				have_into = false;
	bool				have_strict = false;

	plpgsql_dstring_init(&ds);
	plpgsql_dstring_append(&ds, sqlstart);

	for (;;)
	{
		tok = yylex();
		if (tok == ';')
			break;
		if (tok == 0)
		{
			plpgsql_error_lineno = plpgsql_scanner_lineno();
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("unexpected end of function definition")));
		}
		if (tok == K_INTO)
		{
			if (have_into)
			{
				plpgsql_error_lineno = plpgsql_scanner_lineno();
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
						 errmsg("INTO specified more than once")));
			}
			have_into = true;
			read_into_target(&rec, &row, &have_strict);
			continue;
		}

		if (plpgsql_SpaceScanned)
			plpgsql_dstring_append(&ds, " ");

		switch (tok)
		{
			case T_SCALAR:
				snprintf(buf, sizeof(buf), " $%d ",
						 assign_expr_param(yylval.scalar->dno,
										   params, &nparams));
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_ROW:
				snprintf(buf, sizeof(buf), " $%d ",
						 assign_expr_param(yylval.row->rowno,
										   params, &nparams));
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_RECORD:
				snprintf(buf, sizeof(buf), " $%d ",
						 assign_expr_param(yylval.rec->recno,
										   params, &nparams));
				plpgsql_dstring_append(&ds, buf);
				break;

			default:
				plpgsql_dstring_append(&ds, yytext);
				break;
		}
	}

	expr = palloc(sizeof(PLpgSQL_expr) + sizeof(int) * nparams - sizeof(int));
	expr->dtype			= PLPGSQL_DTYPE_EXPR;
	expr->query			= pstrdup(plpgsql_dstring_get(&ds));
	expr->plan			= NULL;
	expr->nparams		= nparams;
	while(nparams-- > 0)
		expr->params[nparams] = params[nparams];
	plpgsql_dstring_free(&ds);

	check_sql_expr(expr->query);

	execsql = palloc(sizeof(PLpgSQL_stmt_execsql));
	execsql->cmd_type = PLPGSQL_STMT_EXECSQL;
	execsql->lineno  = lineno;
	execsql->sqlstmt = expr;
	execsql->into	 = have_into;
	execsql->strict	 = have_strict;
	execsql->rec	 = rec;
	execsql->row	 = row;

	return (PLpgSQL_stmt *) execsql;
}


static PLpgSQL_stmt *
make_fetch_stmt(int lineno, int curvar)
{
	int					tok;
	PLpgSQL_rec		   *rec;
	PLpgSQL_row		   *row;
	PLpgSQL_stmt_fetch *fetch;

	/* We have already parsed everything through the INTO keyword */
	read_into_target(&rec, &row, NULL);
	tok = yylex();
	if (tok != ';')
		yyerror("syntax error");

	fetch = palloc0(sizeof(PLpgSQL_stmt_fetch));
	fetch->cmd_type = PLPGSQL_STMT_FETCH;
	fetch->lineno	= lineno;
	fetch->rec		= rec;
	fetch->row		= row;
	fetch->curvar	= curvar;

	return (PLpgSQL_stmt *) fetch;
}


static PLpgSQL_stmt *
make_return_stmt(int lineno)
{
	PLpgSQL_stmt_return *new;

	new = palloc0(sizeof(PLpgSQL_stmt_return));
	new->cmd_type = PLPGSQL_STMT_RETURN;
	new->lineno   = lineno;
	new->expr	  = NULL;
	new->retvarno = -1;

	if (plpgsql_curr_compile->fn_retset)
	{
		if (yylex() != ';')
			yyerror("RETURN cannot have a parameter in function returning set; use RETURN NEXT");
	}
	else if (plpgsql_curr_compile->out_param_varno >= 0)
	{
		if (yylex() != ';')
			yyerror("RETURN cannot have a parameter in function with OUT parameters");
		new->retvarno = plpgsql_curr_compile->out_param_varno;
	}
	else if (plpgsql_curr_compile->fn_rettype == VOIDOID)
	{
		if (yylex() != ';')
			yyerror("RETURN cannot have a parameter in function returning void");
	}
	else if (plpgsql_curr_compile->fn_retistuple)
	{
		switch (yylex())
		{
			case K_NULL:
				/* we allow this to support RETURN NULL in triggers */
				break;

			case T_ROW:
				new->retvarno = yylval.row->rowno;
				break;

			case T_RECORD:
				new->retvarno = yylval.rec->recno;
				break;

			default:
				yyerror("RETURN must specify a record or row variable in function returning tuple");
				break;
		}
		if (yylex() != ';')
			yyerror("RETURN must specify a record or row variable in function returning tuple");
	}
	else
	{
		/*
		 * Note that a well-formed expression is
		 * _required_ here; anything else is a
		 * compile-time error.
		 */
		new->expr = plpgsql_read_expression(';', ";");
	}

	return (PLpgSQL_stmt *) new;
}


static PLpgSQL_stmt *
make_return_next_stmt(int lineno)
{
	PLpgSQL_stmt_return_next *new;

	if (!plpgsql_curr_compile->fn_retset)
		yyerror("cannot use RETURN NEXT in a non-SETOF function");

	new = palloc0(sizeof(PLpgSQL_stmt_return_next));
	new->cmd_type	= PLPGSQL_STMT_RETURN_NEXT;
	new->lineno		= lineno;
	new->expr		= NULL;
	new->retvarno	= -1;

	if (plpgsql_curr_compile->out_param_varno >= 0)
	{
		if (yylex() != ';')
			yyerror("RETURN NEXT cannot have a parameter in function with OUT parameters");
		new->retvarno = plpgsql_curr_compile->out_param_varno;
	}
	else if (plpgsql_curr_compile->fn_retistuple)
	{
		switch (yylex())
		{
			case T_ROW:
				new->retvarno = yylval.row->rowno;
				break;

			case T_RECORD:
				new->retvarno = yylval.rec->recno;
				break;

			default:
				yyerror("RETURN NEXT must specify a record or row variable in function returning tuple");
				break;
		}
		if (yylex() != ';')
			yyerror("RETURN NEXT must specify a record or row variable in function returning tuple");
	}
	else
		new->expr = plpgsql_read_expression(';', ";");

	return (PLpgSQL_stmt *) new;
}


static void
check_assignable(PLpgSQL_datum *datum)
{
	switch (datum->dtype)
	{
		case PLPGSQL_DTYPE_VAR:
			if (((PLpgSQL_var *) datum)->isconst)
			{
				plpgsql_error_lineno = plpgsql_scanner_lineno();
				ereport(ERROR,
						(errcode(ERRCODE_ERROR_IN_ASSIGNMENT),
						 errmsg("\"%s\" is declared CONSTANT",
								((PLpgSQL_var *) datum)->refname)));
			}
			break;
		case PLPGSQL_DTYPE_ROW:
			/* always assignable? */
			break;
		case PLPGSQL_DTYPE_REC:
			/* always assignable?  What about NEW/OLD? */
			break;
		case PLPGSQL_DTYPE_RECFIELD:
			/* always assignable? */
			break;
		case PLPGSQL_DTYPE_ARRAYELEM:
			/* always assignable? */
			break;
		case PLPGSQL_DTYPE_TRIGARG:
			yyerror("cannot assign to tg_argv");
			break;
		default:
			elog(ERROR, "unrecognized dtype: %d", datum->dtype);
			break;
	}
}

/*
 * Read the argument of an INTO clause.  On entry, we have just read the
 * INTO keyword.
 */
static void
read_into_target(PLpgSQL_rec **rec, PLpgSQL_row **row, bool *strict)
{
	int			tok;

	/* Set default results */
	*rec = NULL;
	*row = NULL;
	if (strict)
		*strict = false;

	tok = yylex();
	if (strict && tok == K_STRICT)
	{
		*strict = true;
		tok = yylex();
	}

	switch (tok)
	{
		case T_ROW:
			*row = yylval.row;
			check_assignable((PLpgSQL_datum *) *row);
			break;

		case T_RECORD:
			*rec = yylval.rec;
			check_assignable((PLpgSQL_datum *) *rec);
			break;

		case T_SCALAR:
			*row = read_into_scalar_list(yytext, yylval.scalar);
			break;

		default:
			plpgsql_error_lineno = plpgsql_scanner_lineno();
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("syntax error at \"%s\"", yytext),
					 errdetail("Expected record variable, row variable, "
							   "or list of scalar variables following INTO.")));
	}
}

/*
 * Given the first datum and name in the INTO list, continue to read
 * comma-separated scalar variables until we run out. Then construct
 * and return a fake "row" variable that represents the list of
 * scalars.
 */
static PLpgSQL_row *
read_into_scalar_list(const char *initial_name,
					  PLpgSQL_datum *initial_datum)
{
	int				 nfields;
	char			*fieldnames[1024];
	int				 varnos[1024];
	PLpgSQL_row		*row;
	int				 tok;

	check_assignable(initial_datum);
	fieldnames[0] = pstrdup(initial_name);
	varnos[0]	  = initial_datum->dno;
	nfields		  = 1;

	while ((tok = yylex()) == ',')
	{
		/* Check for array overflow */
		if (nfields >= 1024)
		{
			plpgsql_error_lineno = plpgsql_scanner_lineno();
			ereport(ERROR,
					(errcode(ERRCODE_PROGRAM_LIMIT_EXCEEDED),
					 errmsg("too many INTO variables specified")));
		}

		tok = yylex();
		switch(tok)
		{
			case T_SCALAR:
				check_assignable(yylval.scalar);
				fieldnames[nfields] = pstrdup(yytext);
				varnos[nfields++]	= yylval.scalar->dno;
				break;

			default:
				plpgsql_error_lineno = plpgsql_scanner_lineno();
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
						 errmsg("\"%s\" is not a scalar variable",
								yytext)));
		}
	}

	/*
	 * We read an extra, non-comma token from yylex(), so push it
	 * back onto the input stream
	 */
	plpgsql_push_back_token(tok);

	row = palloc(sizeof(PLpgSQL_row));
	row->dtype = PLPGSQL_DTYPE_ROW;
	row->refname = pstrdup("*internal*");
	row->lineno = plpgsql_scanner_lineno();
	row->rowtupdesc = NULL;
	row->nfields = nfields;
	row->fieldnames = palloc(sizeof(char *) * nfields);
	row->varnos = palloc(sizeof(int) * nfields);
	while (--nfields >= 0)
	{
		row->fieldnames[nfields] = fieldnames[nfields];
		row->varnos[nfields] = varnos[nfields];
	}

	plpgsql_adddatum((PLpgSQL_datum *)row);

	return row;
}

/*
 * Convert a single scalar into a "row" list.  This is exactly
 * like read_into_scalar_list except we never consume any input.
 * In fact, since this can be invoked long after the source
 * input was actually read, the lineno has to be passed in.
 */
static PLpgSQL_row *
make_scalar_list1(const char *initial_name,
				  PLpgSQL_datum *initial_datum,
				  int lineno)
{
	PLpgSQL_row		*row;

	check_assignable(initial_datum);

	row = palloc(sizeof(PLpgSQL_row));
	row->dtype = PLPGSQL_DTYPE_ROW;
	row->refname = pstrdup("*internal*");
	row->lineno = lineno;
	row->rowtupdesc = NULL;
	row->nfields = 1;
	row->fieldnames = palloc(sizeof(char *));
	row->varnos = palloc(sizeof(int));
	row->fieldnames[0] = pstrdup(initial_name);
	row->varnos[0] = initial_datum->dno;

	plpgsql_adddatum((PLpgSQL_datum *)row);

	return row;
}

/*
 * When the PL/PgSQL parser expects to see a SQL statement, it is very
 * liberal in what it accepts; for example, we often assume an
 * unrecognized keyword is the beginning of a SQL statement. This
 * avoids the need to duplicate parts of the SQL grammar in the
 * PL/PgSQL grammar, but it means we can accept wildly malformed
 * input. To try and catch some of the more obviously invalid input,
 * we run the strings we expect to be SQL statements through the main
 * SQL parser.
 *
 * We only invoke the raw parser (not the analyzer); this doesn't do
 * any database access and does not check any semantic rules, it just
 * checks for basic syntactic correctness. We do this here, rather
 * than after parsing has finished, because a malformed SQL statement
 * may cause the PL/PgSQL parser to become confused about statement
 * borders. So it is best to bail out as early as we can.
 */
static void
check_sql_expr(const char *stmt)
{
	ErrorContextCallback  syntax_errcontext;
	ErrorContextCallback *previous_errcontext;
	MemoryContext oldCxt;

	if (!plpgsql_check_syntax)
		return;

	/*
	 * Setup error traceback support for ereport(). The previous
	 * ereport callback is installed by pl_comp.c, but we don't want
	 * that to be invoked (since it will try to transpose the syntax
	 * error to be relative to the CREATE FUNCTION), so temporarily
	 * remove it from the list of callbacks.
	 */
	Assert(error_context_stack->callback == plpgsql_compile_error_callback);

	previous_errcontext = error_context_stack;
	syntax_errcontext.callback = plpgsql_sql_error_callback;
	syntax_errcontext.arg = (char *) stmt;
	syntax_errcontext.previous = error_context_stack->previous;
	error_context_stack = &syntax_errcontext;

	oldCxt = MemoryContextSwitchTo(compile_tmp_cxt);
	(void) raw_parser(stmt);
	MemoryContextSwitchTo(oldCxt);

	/* Restore former ereport callback */
	error_context_stack = previous_errcontext;
}

static void
plpgsql_sql_error_callback(void *arg)
{
	char *sql_stmt = (char *) arg;

	Assert(plpgsql_error_funcname);

	errcontext("SQL statement in PL/PgSQL function \"%s\" near line %d",
			   plpgsql_error_funcname, plpgsql_error_lineno);
	internalerrquery(sql_stmt);
	internalerrposition(geterrposition());
	errposition(0);
}

static void
check_labels(const char *start_label, const char *end_label)
{
	if (end_label)
	{
		if (!start_label)
		{
			plpgsql_error_lineno = plpgsql_scanner_lineno();
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("end label \"%s\" specified for unlabelled block",
							end_label)));
		}

		if (strcmp(start_label, end_label) != 0)
		{
			plpgsql_error_lineno = plpgsql_scanner_lineno();
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("end label \"%s\" differs from block's label \"%s\"",
							end_label, start_label)));
		}
	}
}

/* Needed to avoid conflict between different prefix settings: */
#undef yylex

#include "pl_scan.c"

