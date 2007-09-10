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

/* All symbols defined below should begin with plpgsql_yy or PLPGSQL_YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define PLPGSQL_YYBISON 1

/* Skeleton name.  */
#define PLPGSQL_YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define PLPGSQL_YYPURE 0

/* Using locations.  */
#define PLPGSQL_YYLSP_NEEDED 0



/* Tokens.  */
#ifndef PLPGSQL_YYTOKENTYPE
# define PLPGSQL_YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum plpgsql_yytokentype {
     K_ALIAS = 258,
     K_ASSIGN = 259,
     K_BEGIN = 260,
     K_CLOSE = 261,
     K_CONSTANT = 262,
     K_CURSOR = 263,
     K_DEBUG = 264,
     K_DECLARE = 265,
     K_DEFAULT = 266,
     K_DIAGNOSTICS = 267,
     K_DOTDOT = 268,
     K_ELSE = 269,
     K_ELSIF = 270,
     K_END = 271,
     K_EXCEPTION = 272,
     K_EXECUTE = 273,
     K_EXIT = 274,
     K_FOR = 275,
     K_FETCH = 276,
     K_FROM = 277,
     K_GET = 278,
     K_IF = 279,
     K_IN = 280,
     K_INFO = 281,
     K_INTO = 282,
     K_IS = 283,
     K_LOG = 284,
     K_LOOP = 285,
     K_NEXT = 286,
     K_NOT = 287,
     K_NOTICE = 288,
     K_NULL = 289,
     K_OPEN = 290,
     K_OR = 291,
     K_PERFORM = 292,
     K_ROW_COUNT = 293,
     K_RAISE = 294,
     K_RENAME = 295,
     K_RESULT_OID = 296,
     K_RETURN = 297,
     K_RETURN_NEXT = 298,
     K_REVERSE = 299,
     K_SELECT = 300,
     K_THEN = 301,
     K_TO = 302,
     K_TYPE = 303,
     K_WARNING = 304,
     K_WHEN = 305,
     K_WHILE = 306,
     T_FUNCTION = 307,
     T_TRIGGER = 308,
     T_STRING = 309,
     T_NUMBER = 310,
     T_SCALAR = 311,
     T_ROW = 312,
     T_RECORD = 313,
     T_DTYPE = 314,
     T_LABEL = 315,
     T_WORD = 316,
     T_ERROR = 317,
     O_OPTION = 318,
     O_DUMP = 319
   };
#endif
#define K_ALIAS 258
#define K_ASSIGN 259
#define K_BEGIN 260
#define K_CLOSE 261
#define K_CONSTANT 262
#define K_CURSOR 263
#define K_DEBUG 264
#define K_DECLARE 265
#define K_DEFAULT 266
#define K_DIAGNOSTICS 267
#define K_DOTDOT 268
#define K_ELSE 269
#define K_ELSIF 270
#define K_END 271
#define K_EXCEPTION 272
#define K_EXECUTE 273
#define K_EXIT 274
#define K_FOR 275
#define K_FETCH 276
#define K_FROM 277
#define K_GET 278
#define K_IF 279
#define K_IN 280
#define K_INFO 281
#define K_INTO 282
#define K_IS 283
#define K_LOG 284
#define K_LOOP 285
#define K_NEXT 286
#define K_NOT 287
#define K_NOTICE 288
#define K_NULL 289
#define K_OPEN 290
#define K_OR 291
#define K_PERFORM 292
#define K_ROW_COUNT 293
#define K_RAISE 294
#define K_RENAME 295
#define K_RESULT_OID 296
#define K_RETURN 297
#define K_RETURN_NEXT 298
#define K_REVERSE 299
#define K_SELECT 300
#define K_THEN 301
#define K_TO 302
#define K_TYPE 303
#define K_WARNING 304
#define K_WHEN 305
#define K_WHILE 306
#define T_FUNCTION 307
#define T_TRIGGER 308
#define T_STRING 309
#define T_NUMBER 310
#define T_SCALAR 311
#define T_ROW 312
#define T_RECORD 313
#define T_DTYPE 314
#define T_LABEL 315
#define T_WORD 316
#define T_ERROR 317
#define O_OPTION 318
#define O_DUMP 319




/* Copy the first part of user declarations.  */
#line 1 "gram.y"

/**********************************************************************
 * gram.y				- Parser for the PL/pgSQL
 *						  procedural language
 *
 * IDENTIFICATION
 *	  $PostgreSQL: pgsql/src/pl/plpgsql/src/gram.y,v 1.64.4.3 2005/02/08 18:21:59 tgl Exp $
 *
 *	  This software is copyrighted by Jan Wieck - Hamburg.
 *
 *	  The author hereby grants permission  to  use,  copy,	modify,
 *	  distribute,  and	license this software and its documentation
 *	  for any purpose, provided that existing copyright notices are
 *	  retained	in	all  copies  and  that	this notice is included
 *	  verbatim in any distributions. No written agreement, license,
 *	  or  royalty  fee	is required for any of the authorized uses.
 *	  Modifications to this software may be  copyrighted  by  their
 *	  author  and  need  not  follow  the licensing terms described
 *	  here, provided that the new terms are  clearly  indicated  on
 *	  the first page of each file where they apply.
 *
 *	  IN NO EVENT SHALL THE AUTHOR OR DISTRIBUTORS BE LIABLE TO ANY
 *	  PARTY  FOR  DIRECT,	INDIRECT,	SPECIAL,   INCIDENTAL,	 OR
 *	  CONSEQUENTIAL   DAMAGES  ARISING	OUT  OF  THE  USE  OF  THIS
 *	  SOFTWARE, ITS DOCUMENTATION, OR ANY DERIVATIVES THEREOF, EVEN
 *	  IF  THE  AUTHOR  HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH
 *	  DAMAGE.
 *
 *	  THE  AUTHOR  AND	DISTRIBUTORS  SPECIFICALLY	 DISCLAIM	ANY
 *	  WARRANTIES,  INCLUDING,  BUT	NOT  LIMITED  TO,  THE	IMPLIED
 *	  WARRANTIES  OF  MERCHANTABILITY,	FITNESS  FOR  A  PARTICULAR
 *	  PURPOSE,	AND NON-INFRINGEMENT.  THIS SOFTWARE IS PROVIDED ON
 *	  AN "AS IS" BASIS, AND THE AUTHOR	AND  DISTRIBUTORS  HAVE  NO
 *	  OBLIGATION   TO	PROVIDE   MAINTENANCE,	 SUPPORT,  UPDATES,
 *	  ENHANCEMENTS, OR MODIFICATIONS.
 *
 **********************************************************************/

#include "plpgsql.h"


static	PLpgSQL_expr	*read_sql_construct(int until,
											int until2,
											const char *expected,
											bool isexpression,
											const char *sqlstart,
											int *endtoken);
static	PLpgSQL_expr	*read_sql_stmt(const char *sqlstart);
static	PLpgSQL_type	*read_datatype(int tok);
static	PLpgSQL_stmt	*make_select_stmt(void);
static	PLpgSQL_stmt	*make_fetch_stmt(void);
static	void check_assignable(PLpgSQL_datum *datum);



/* Enabling traces.  */
#ifndef PLPGSQL_YYDEBUG
# define PLPGSQL_YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef PLPGSQL_YYERROR_VERBOSE
# undef PLPGSQL_YYERROR_VERBOSE
# define PLPGSQL_YYERROR_VERBOSE 1
#else
# define PLPGSQL_YYERROR_VERBOSE 0
#endif

#if ! defined (PLPGSQL_YYSTYPE) && ! defined (PLPGSQL_YYSTYPE_IS_DECLARED)
#line 56 "gram.y"
typedef union PLPGSQL_YYSTYPE {
		int32					ival;
		char					*str;
		struct
		{
			char *name;
			int  lineno;
		}						varname;
		struct
		{
			int  nalloc;
			int  nused;
			int	 *nums;
		}						intlist;
		struct
		{
			int  nalloc;
			int  nused;
			PLpgSQL_diag_item *dtitems;
		}						dtlist;
		struct
		{
			char *name;
			int  lineno;
			PLpgSQL_rec	*rec;
			PLpgSQL_row	*row;
		}						forvariable;
		struct
		{
			char *label;
			int  n_initvars;
			int  *initvarnos;
		}						declhdr;
		PLpgSQL_type			*dtype;
		PLpgSQL_datum			*scalar;	/* a VAR, RECFIELD, or TRIGARG */
		PLpgSQL_variable		*variable;	/* a VAR, REC, or ROW */
		PLpgSQL_var				*var;
		PLpgSQL_row				*row;
		PLpgSQL_rec				*rec;
		PLpgSQL_expr			*expr;
		PLpgSQL_stmt			*stmt;
		PLpgSQL_stmts			*stmts;
		PLpgSQL_stmt_block		*program;
		PLpgSQL_condition		*condition;
		PLpgSQL_exception		*exception;
		PLpgSQL_exceptions		*exceptions;
		PLpgSQL_nsitem			*nsitem;
} PLPGSQL_YYSTYPE;
/* Line 191 of yacc.c.  */
#line 307 "y.tab.c"
# define plpgsql_yystype PLPGSQL_YYSTYPE /* obsolescent; will be withdrawn */
# define PLPGSQL_YYSTYPE_IS_DECLARED 1
# define PLPGSQL_YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 319 "y.tab.c"

#if ! defined (plpgsql_yyoverflow) || PLPGSQL_YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if PLPGSQL_YYSTACK_USE_ALLOCA
#  define PLPGSQL_YYSTACK_ALLOC alloca
# else
#  ifndef PLPGSQL_YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define PLPGSQL_YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define PLPGSQL_YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef PLPGSQL_YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define PLPGSQL_YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define PLPGSQL_YYSIZE_T size_t
#  endif
#  define PLPGSQL_YYSTACK_ALLOC malloc
#  define PLPGSQL_YYSTACK_FREE free
# endif
#endif /* ! defined (plpgsql_yyoverflow) || PLPGSQL_YYERROR_VERBOSE */


#if (! defined (plpgsql_yyoverflow) \
     && (! defined (__cplusplus) \
	 || (PLPGSQL_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union plpgsql_yyalloc
{
  short plpgsql_yyss;
  PLPGSQL_YYSTYPE plpgsql_yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define PLPGSQL_YYSTACK_GAP_MAXIMUM (sizeof (union plpgsql_yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define PLPGSQL_YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (PLPGSQL_YYSTYPE))				\
      + PLPGSQL_YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef PLPGSQL_YYCOPY
#  if 1 < __GNUC__
#   define PLPGSQL_YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define PLPGSQL_YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register PLPGSQL_YYSIZE_T plpgsql_yyi;		\
	  for (plpgsql_yyi = 0; plpgsql_yyi < (Count); plpgsql_yyi++)	\
	    (To)[plpgsql_yyi] = (From)[plpgsql_yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables PLPGSQL_YYSIZE and PLPGSQL_YYSTACKSIZE give the old and new number of
   elements in the stack, and PLPGSQL_YYPTR gives the new location of the
   stack.  Advance PLPGSQL_YYPTR to a properly aligned location for the next
   stack.  */
# define PLPGSQL_YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	PLPGSQL_YYSIZE_T plpgsql_yynewbytes;						\
	PLPGSQL_YYCOPY (&plpgsql_yyptr->Stack, Stack, plpgsql_yysize);				\
	Stack = &plpgsql_yyptr->Stack;						\
	plpgsql_yynewbytes = plpgsql_yystacksize * sizeof (*Stack) + PLPGSQL_YYSTACK_GAP_MAXIMUM; \
	plpgsql_yyptr += plpgsql_yynewbytes / sizeof (*plpgsql_yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char plpgsql_yysigned_char;
#else
   typedef short plpgsql_yysigned_char;
#endif

/* PLPGSQL_YYFINAL -- State number of the termination state. */
#define PLPGSQL_YYFINAL  9
/* PLPGSQL_YYLAST -- Last index in PLPGSQL_YYTABLE.  */
#define PLPGSQL_YYLAST   275

/* PLPGSQL_YYNTOKENS -- Number of terminals. */
#define PLPGSQL_YYNTOKENS  72
/* PLPGSQL_YYNNTS -- Number of nonterminals. */
#define PLPGSQL_YYNNTS  75
/* PLPGSQL_YYNRULES -- Number of rules. */
#define PLPGSQL_YYNRULES  139
/* PLPGSQL_YYNRULES -- Number of states. */
#define PLPGSQL_YYNSTATES  235

/* PLPGSQL_YYTRANSLATE(PLPGSQL_YYLEX) -- Bison symbol number corresponding to PLPGSQL_YYLEX.  */
#define PLPGSQL_YYUNDEFTOK  2
#define PLPGSQL_YYMAXUTOK   319

#define PLPGSQL_YYTRANSLATE(PLPGSQL_YYX) 						\
  ((unsigned int) (PLPGSQL_YYX) <= PLPGSQL_YYMAXUTOK ? plpgsql_yytranslate[PLPGSQL_YYX] : PLPGSQL_YYUNDEFTOK)

/* PLPGSQL_YYTRANSLATE[PLPGSQL_YYLEX] -- Bison symbol number corresponding to PLPGSQL_YYLEX.  */
static const unsigned char plpgsql_yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      68,    69,     2,     2,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
      66,     2,    67,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if PLPGSQL_YYDEBUG
/* PLPGSQL_YYPRHS[PLPGSQL_YYN] -- Index of the first RHS symbol of rule number PLPGSQL_YYN in
   PLPGSQL_YYRHS.  */
static const unsigned short plpgsql_yyprhs[] =
{
       0,     0,     3,     8,    13,    14,    16,    19,    21,    24,
      25,    27,    34,    36,    39,    43,    45,    48,    50,    56,
      58,    60,    66,    72,    78,    79,    86,    87,    88,    92,
      94,    98,   101,   103,   105,   107,   109,   111,   112,   114,
     115,   116,   119,   121,   123,   125,   127,   128,   130,   133,
     135,   138,   140,   142,   144,   146,   148,   150,   152,   154,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   174,
     178,   183,   189,   195,   199,   201,   203,   205,   207,   209,
     211,   215,   224,   225,   231,   234,   239,   245,   250,   254,
     256,   258,   260,   262,   265,   270,   273,   276,   283,   289,
     291,   293,   295,   297,   299,   301,   303,   306,   308,   311,
     316,   319,   323,   327,   332,   337,   340,   342,   344,   346,
     348,   349,   352,   355,   357,   363,   367,   369,   370,   371,
     372,   373,   374,   380,   381,   383,   385,   387,   390,   392
};

/* PLPGSQL_YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short plpgsql_yyrhs[] =
{
      73,     0,    -1,    52,    74,    78,    77,    -1,    53,    74,
      78,    77,    -1,    -1,    75,    -1,    75,    76,    -1,    76,
      -1,    63,    64,    -1,    -1,    65,    -1,    79,     5,   146,
      98,   134,    16,    -1,   142,    -1,   142,    80,    -1,   142,
      80,    81,    -1,    10,    -1,    81,    82,    -1,    82,    -1,
      66,    66,   145,    67,    67,    -1,    10,    -1,    83,    -1,
      91,    93,    94,    95,    96,    -1,    91,     3,    20,    90,
      65,    -1,    40,    92,    47,    92,    65,    -1,    -1,    91,
       8,    84,    86,    89,    85,    -1,    -1,    -1,    68,    87,
      69,    -1,    88,    -1,    87,    70,    88,    -1,    91,    94,
      -1,    28,    -1,    20,    -1,    61,    -1,    61,    -1,    61,
      -1,    -1,     7,    -1,    -1,    -1,    32,    34,    -1,    65,
      -1,    97,    -1,     4,    -1,    11,    -1,    -1,    99,    -1,
      99,   100,    -1,   100,    -1,    78,    65,    -1,   102,    -1,
     108,    -1,   110,    -1,   111,    -1,   112,    -1,   115,    -1,
     116,    -1,   117,    -1,   118,    -1,   119,    -1,   125,    -1,
     126,    -1,   101,    -1,   103,    -1,   127,    -1,   128,    -1,
     129,    -1,   130,    -1,    37,   146,   138,    -1,   107,   146,
       4,   138,    -1,    23,    12,   146,   104,    65,    -1,   104,
      70,   106,     4,   105,    -1,   106,     4,   105,    -1,    38,
      -1,    41,    -1,    56,    -1,    56,    -1,    57,    -1,    58,
      -1,   107,    71,   139,    -1,    24,   146,   140,    98,   109,
      16,    24,    65,    -1,    -1,    15,   146,   140,    98,   109,
      -1,    14,    98,    -1,   142,    30,   146,   124,    -1,   142,
      51,   146,   141,   124,    -1,   142,    20,   113,   124,    -1,
     146,   114,    25,    -1,    56,    -1,    61,    -1,    58,    -1,
      57,    -1,    45,   146,    -1,    19,   146,   143,   144,    -1,
      42,   146,    -1,    43,   146,    -1,    39,   146,   121,   120,
     122,    65,    -1,    39,   146,   121,   120,    65,    -1,    54,
      -1,    17,    -1,    49,    -1,    33,    -1,    26,    -1,    29,
      -1,     9,    -1,   122,   123,    -1,   123,    -1,    70,    56,
      -1,    98,    16,    30,    65,    -1,   133,   146,    -1,    18,
     146,   138,    -1,    35,   146,   131,    -1,    21,   146,   132,
      27,    -1,     6,   146,   132,    65,    -1,    34,    65,    -1,
      56,    -1,    56,    -1,    61,    -1,    62,    -1,    -1,    17,
     135,    -1,   135,   136,    -1,   136,    -1,    50,   146,   137,
      46,    98,    -1,   137,    36,   145,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    66,   145,    67,    67,    -1,
      -1,    60,    -1,    61,    -1,    65,    -1,    50,   138,    -1,
      61,    -1,    -1
};

/* PLPGSQL_YYRLINE[PLPGSQL_YYN] -- source line where rule number PLPGSQL_YYN was defined.  */
static const unsigned short plpgsql_yyrline[] =
{
       0,   223,   223,   227,   233,   234,   237,   238,   241,   247,
     248,   251,   273,   281,   289,   300,   306,   308,   312,   314,
     316,   320,   354,   359,   364,   363,   408,   420,   423,   447,
     473,   488,   495,   496,   498,   526,   538,   549,   550,   555,
     566,   567,   571,   573,   581,   582,   586,   593,   597,   610,
     627,   629,   631,   633,   635,   637,   639,   641,   643,   645,
     647,   649,   651,   653,   655,   657,   659,   661,   663,   667,
     682,   698,   715,   730,   740,   744,   750,   758,   763,   768,
     773,   790,   808,   815,   858,   864,   882,   901,   938,  1074,
    1084,  1094,  1104,  1116,  1123,  1139,  1189,  1223,  1239,  1256,
    1262,  1266,  1270,  1274,  1278,  1282,  1288,  1301,  1310,  1316,
    1320,  1333,  1346,  1479,  1491,  1504,  1511,  1528,  1545,  1547,
    1552,  1553,  1557,  1568,  1584,  1599,  1609,  1616,  1620,  1624,
    1628,  1632,  1636,  1644,  1645,  1653,  1660,  1662,  1666,  1677
};
#endif

#if PLPGSQL_YYDEBUG || PLPGSQL_YYERROR_VERBOSE
/* PLPGSQL_YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at PLPGSQL_YYNTOKENS, nonterminals. */
static const char *const plpgsql_yytname[] =
{
  "$end", "error", "$undefined", "K_ALIAS", "K_ASSIGN", "K_BEGIN", 
  "K_CLOSE", "K_CONSTANT", "K_CURSOR", "K_DEBUG", "K_DECLARE", 
  "K_DEFAULT", "K_DIAGNOSTICS", "K_DOTDOT", "K_ELSE", "K_ELSIF", "K_END", 
  "K_EXCEPTION", "K_EXECUTE", "K_EXIT", "K_FOR", "K_FETCH", "K_FROM", 
  "K_GET", "K_IF", "K_IN", "K_INFO", "K_INTO", "K_IS", "K_LOG", "K_LOOP", 
  "K_NEXT", "K_NOT", "K_NOTICE", "K_NULL", "K_OPEN", "K_OR", "K_PERFORM", 
  "K_ROW_COUNT", "K_RAISE", "K_RENAME", "K_RESULT_OID", "K_RETURN", 
  "K_RETURN_NEXT", "K_REVERSE", "K_SELECT", "K_THEN", "K_TO", "K_TYPE", 
  "K_WARNING", "K_WHEN", "K_WHILE", "T_FUNCTION", "T_TRIGGER", "T_STRING", 
  "T_NUMBER", "T_SCALAR", "T_ROW", "T_RECORD", "T_DTYPE", "T_LABEL", 
  "T_WORD", "T_ERROR", "O_OPTION", "O_DUMP", "';'", "'<'", "'>'", "'('", 
  "')'", "','", "'['", "$accept", "pl_function", "comp_optsect", 
  "comp_options", "comp_option", "opt_semi", "pl_block", "decl_sect", 
  "decl_start", "decl_stmts", "decl_stmt", "decl_statement", "@1", 
  "decl_cursor_query", "decl_cursor_args", "decl_cursor_arglist", 
  "decl_cursor_arg", "decl_is_from", "decl_aliasitem", "decl_varname", 
  "decl_renname", "decl_const", "decl_datatype", "decl_notnull", 
  "decl_defval", "decl_defkey", "proc_sect", "proc_stmts", "proc_stmt", 
  "stmt_perform", "stmt_assign", "stmt_getdiag", "getdiag_list", 
  "getdiag_item", "getdiag_target", "assign_var", "stmt_if", "stmt_else", 
  "stmt_loop", "stmt_while", "stmt_for", "for_control", "for_variable", 
  "stmt_select", "stmt_exit", "stmt_return", "stmt_return_next", 
  "stmt_raise", "raise_msg", "raise_level", "raise_params", "raise_param", 
  "loop_body", "stmt_execsql", "stmt_dynexecute", "stmt_open", 
  "stmt_fetch", "stmt_close", "stmt_null", "cursor_varptr", 
  "cursor_variable", "execsql_start", "exception_sect", "proc_exceptions", 
  "proc_exception", "proc_conditions", "expr_until_semi", 
  "expr_until_rightbracket", "expr_until_then", "expr_until_loop", 
  "opt_label", "opt_exitlabel", "opt_exitcond", "opt_lblname", "lno", 0
};
#endif

# ifdef PLPGSQL_YYPRINT
/* PLPGSQL_YYTOKNUM[PLPGSQL_YYLEX-NUM] -- Internal token number corresponding to
   token PLPGSQL_YYLEX-NUM.  */
static const unsigned short plpgsql_yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    59,    60,    62,    40,    41,
      44,    91
};
# endif

/* PLPGSQL_YYR1[PLPGSQL_YYN] -- Symbol number of symbol that rule PLPGSQL_YYN derives.  */
static const unsigned char plpgsql_yyr1[] =
{
       0,    72,    73,    73,    74,    74,    75,    75,    76,    77,
      77,    78,    79,    79,    79,    80,    81,    81,    82,    82,
      82,    83,    83,    83,    84,    83,    85,    86,    86,    87,
      87,    88,    89,    89,    90,    91,    92,    93,    93,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     102,   103,   104,   104,   105,   105,   106,   107,   107,   107,
     107,   108,   109,   109,   109,   110,   111,   112,   113,   114,
     114,   114,   114,   115,   116,   117,   118,   119,   119,   120,
     121,   121,   121,   121,   121,   121,   122,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   133,
     134,   134,   135,   135,   136,   137,   137,   138,   139,   140,
     141,   142,   142,   143,   143,   143,   144,   144,   145,   146
};

/* PLPGSQL_YYR2[PLPGSQL_YYN] -- Number of symbols composing right hand side of rule PLPGSQL_YYN.  */
static const unsigned char plpgsql_yyr2[] =
{
       0,     2,     4,     4,     0,     1,     2,     1,     2,     0,
       1,     6,     1,     2,     3,     1,     2,     1,     5,     1,
       1,     5,     5,     5,     0,     6,     0,     0,     3,     1,
       3,     2,     1,     1,     1,     1,     1,     0,     1,     0,
       0,     2,     1,     1,     1,     1,     0,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     5,     5,     3,     1,     1,     1,     1,     1,     1,
       3,     8,     0,     5,     2,     4,     5,     4,     3,     1,
       1,     1,     1,     2,     4,     2,     2,     6,     5,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     4,
       2,     3,     3,     4,     4,     2,     1,     1,     1,     1,
       0,     2,     2,     1,     5,     3,     1,     0,     0,     0,
       0,     0,     5,     0,     1,     1,     1,     2,     1,     0
};

/* PLPGSQL_YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when PLPGSQL_YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char plpgsql_yydefact[] =
{
       0,     4,     4,     0,     0,   131,     5,     7,   131,     1,
       8,     0,     9,     0,    12,     6,     9,     0,    10,     2,
     139,    15,    13,     3,   138,     0,   131,    19,     0,    35,
       0,    14,    17,    20,    37,     0,   139,   139,   139,   139,
       0,   139,     0,   139,   139,   139,   139,   139,   139,    77,
      78,    79,   118,   119,     0,   120,    47,    49,    63,    51,
      64,   139,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    65,    66,    67,    68,   139,    12,    36,
       0,     0,    16,     0,    38,    24,    39,   132,     0,   127,
     133,     0,   139,   129,   115,     0,   127,     0,    95,    96,
      93,    50,     0,     0,    48,   128,     0,   110,   139,   139,
     139,     0,     0,     0,    27,    40,   117,     0,   111,   134,
     135,     0,     0,     0,   131,   116,   112,    69,   105,   100,
     103,   104,   102,   101,     0,   139,   121,   123,    11,    80,
     127,   131,     0,   131,   130,     0,     0,    34,     0,     0,
       0,     0,     0,   114,   127,   136,    94,   113,    76,     0,
       0,    82,    99,     0,     0,   122,    70,     0,    87,    89,
      92,    91,    90,     0,    85,   131,    23,    18,    22,     0,
      29,    39,    33,    32,    26,    41,    44,    45,    42,    21,
      43,   137,    71,     0,     0,   131,   139,     0,    98,     0,
       0,   107,     0,   126,     0,    88,    86,    28,     0,    31,
      25,     0,    74,    75,    73,    84,   129,     0,   108,    97,
     106,     0,   131,     0,    30,     0,   131,     0,   125,   124,
     109,    72,    82,    81,    83
};

/* PLPGSQL_YYDEFGOTO[NTERM-NUM]. */
static const short plpgsql_yydefgoto[] =
{
      -1,     3,     5,     6,     7,    19,    54,    13,    22,    31,
      32,    33,   114,   210,   150,   179,   180,   184,   148,    34,
      80,    86,   115,   152,   189,   190,   167,    56,    57,    58,
      59,    60,   159,   214,   160,    61,    62,   197,    63,    64,
      65,   141,   173,    66,    67,    68,    69,    70,   163,   134,
     200,   201,   168,    71,    72,    73,    74,    75,    76,   126,
     117,    77,   103,   136,   137,   202,   118,   139,   124,   175,
      78,   121,   156,    25,    26
};

/* PLPGSQL_YYPACT[STATE-NUM] -- Index in PLPGSQL_YYTABLE of the portion describing
   STATE-NUM.  */
#define PLPGSQL_YYPACT_NINF -130
static const short plpgsql_yypact[] =
{
      17,   -31,   -31,    39,   -21,   -16,   -31,  -130,   -16,  -130,
    -130,   -12,    -9,    55,    52,  -130,    -9,    32,  -130,  -130,
    -130,  -130,    81,  -130,  -130,    30,   101,  -130,    50,  -130,
      49,    81,  -130,  -130,    56,    59,  -130,  -130,  -130,  -130,
     111,  -130,    65,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,    69,   124,    10,  -130,  -130,  -130,
    -130,    82,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,    28,  -130,
     105,    32,  -130,   134,  -130,  -130,  -130,  -130,   100,  -130,
      22,   100,  -130,  -130,  -130,   108,  -130,   122,  -130,  -130,
    -130,  -130,   110,   149,  -130,  -130,   164,  -130,  -130,  -130,
    -130,    50,   103,   114,   112,   150,  -130,   120,  -130,  -130,
    -130,   -28,   159,   131,    71,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,   135,  -130,   110,  -130,  -130,  -130,
    -130,   209,   116,   209,  -130,   123,   125,  -130,   126,   129,
      -1,   167,    13,  -130,  -130,  -130,  -130,  -130,  -130,   -47,
     189,    89,  -130,   -29,    32,  -130,  -130,   182,  -130,  -130,
    -130,  -130,  -130,   179,  -130,   209,  -130,  -130,  -130,    80,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,   131,    43,   209,  -130,   190,  -130,   151,
      31,  -130,   -11,  -130,   178,  -130,  -130,  -130,   129,  -130,
    -130,   205,  -130,  -130,  -130,  -130,  -130,   187,  -130,  -130,
    -130,    32,   160,   147,  -130,    43,    71,   148,  -130,  -130,
    -130,  -130,    89,  -130,  -130
};

/* PLPGSQL_YYPGOTO[NTERM-NUM].  */
static const short plpgsql_yypgoto[] =
{
    -130,  -130,   212,  -130,   213,   204,    94,  -130,  -130,  -130,
     192,  -130,  -130,  -130,  -130,  -130,    16,  -130,  -130,  -128,
     118,  -130,    53,  -130,  -130,  -130,   -26,  -130,   175,  -130,
    -130,  -130,  -130,    11,    42,  -130,  -130,     5,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,    38,  -129,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
     154,  -130,  -130,  -130,   106,  -130,   -89,  -130,    23,  -130,
     104,  -130,  -130,   -76,   -35
};

/* PLPGSQL_YYTABLE[PLPGSQL_YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what PLPGSQL_YYDEFACT says.
   If PLPGSQL_YYTABLE_NINF, syntax error.  */
#define PLPGSQL_YYTABLE_NINF -132
static const short plpgsql_yytable[] =
{
      55,    88,    89,    90,    91,   112,    93,   127,    95,    96,
      97,    98,    99,   100,   174,  -131,    36,   186,   192,   182,
    -131,   181,   154,   193,   187,   221,   106,   183,    37,    38,
    -131,    39,     4,    40,    41,   222,   198,   155,    21,     9,
    -131,   199,   107,    10,    42,    43,   206,    44,   108,    45,
      11,   166,    46,    47,    17,    48,    18,   123,   109,    83,
      20,  -131,    21,    84,    85,   191,    49,    50,    51,     1,
       2,    52,    53,   142,   143,   144,    11,    36,   188,   110,
     181,   212,   119,   120,   213,   -46,   -46,   -46,   203,    37,
      38,    27,    39,    24,    40,    41,   219,    35,   161,    12,
     164,   199,    16,   195,   196,    42,    43,    36,    44,    14,
      45,    79,    14,    46,    47,    81,    48,   -46,   -46,    37,
      38,    28,    39,    92,    40,    41,    87,    49,    50,    51,
      94,   128,    52,    53,   101,    42,    43,    11,    44,   129,
      45,   102,    29,    46,    47,   228,    48,    30,   130,   207,
     208,   131,   111,   105,   113,   132,   116,    49,    50,    51,
     135,   216,    52,    53,   125,   138,    36,    11,   140,   215,
     146,   133,   169,   170,   171,   147,   -46,   172,    37,    38,
     149,    39,   151,    40,    41,   153,   157,   158,   176,   162,
      29,   178,   177,   194,    42,    43,   229,    44,   204,    45,
     232,   185,    46,    47,   205,    48,   217,   218,   223,   225,
     -46,   227,   230,   233,     8,    36,    49,    50,    51,    15,
      23,    52,    53,    82,   224,   -46,    11,    37,    38,   145,
      39,   104,    40,    41,   209,   211,   231,   234,   220,   226,
       0,     0,   165,    42,    43,   122,    44,     0,    45,     0,
       0,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,     0,     0,
      52,    53,     0,     0,     0,    11
};

static const short plpgsql_yycheck[] =
{
      26,    36,    37,    38,    39,    81,    41,    96,    43,    44,
      45,    46,    47,    48,   143,     5,     6,     4,    65,    20,
      10,   149,    50,    70,    11,    36,    61,    28,    18,    19,
      20,    21,    63,    23,    24,    46,    65,    65,    10,     0,
      30,    70,    77,    64,    34,    35,   175,    37,    20,    39,
      66,   140,    42,    43,    66,    45,    65,    92,    30,     3,
       5,    51,    10,     7,     8,   154,    56,    57,    58,    52,
      53,    61,    62,   108,   109,   110,    66,     6,    65,    51,
     208,    38,    60,    61,    41,    14,    15,    16,   164,    18,
      19,    10,    21,    61,    23,    24,    65,    67,   124,     5,
     135,    70,     8,    14,    15,    34,    35,     6,    37,     5,
      39,    61,     8,    42,    43,    66,    45,    16,    17,    18,
      19,    40,    21,    12,    23,    24,    67,    56,    57,    58,
      65,     9,    61,    62,    65,    34,    35,    66,    37,    17,
      39,    17,    61,    42,    43,   221,    45,    66,    26,    69,
      70,    29,    47,    71,    20,    33,    56,    56,    57,    58,
      50,   196,    61,    62,    56,    16,     6,    66,     4,   195,
      67,    49,    56,    57,    58,    61,    16,    61,    18,    19,
      68,    21,    32,    23,    24,    65,    27,    56,    65,    54,
      61,    65,    67,     4,    34,    35,   222,    37,    16,    39,
     226,    34,    42,    43,    25,    45,    16,    56,    30,     4,
      50,    24,    65,    65,     2,     6,    56,    57,    58,     6,
      16,    61,    62,    31,   208,    16,    66,    18,    19,   111,
      21,    56,    23,    24,   181,   193,   225,   232,   200,   216,
      -1,    -1,   136,    34,    35,    91,    37,    -1,    39,    -1,
      -1,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    66
};

/* PLPGSQL_YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char plpgsql_yystos[] =
{
       0,    52,    53,    73,    63,    74,    75,    76,    74,     0,
      64,    66,    78,    79,   142,    76,    78,    66,    65,    77,
       5,    10,    80,    77,    61,   145,   146,    10,    40,    61,
      66,    81,    82,    83,    91,    67,     6,    18,    19,    21,
      23,    24,    34,    35,    37,    39,    42,    43,    45,    56,
      57,    58,    61,    62,    78,    98,    99,   100,   101,   102,
     103,   107,   108,   110,   111,   112,   115,   116,   117,   118,
     119,   125,   126,   127,   128,   129,   130,   133,   142,    61,
      92,    66,    82,     3,     7,     8,    93,    67,   146,   146,
     146,   146,    12,   146,    65,   146,   146,   146,   146,   146,
     146,    65,    17,   134,   100,    71,   146,   146,    20,    30,
      51,    47,   145,    20,    84,    94,    56,   132,   138,    60,
      61,   143,   132,   146,   140,    56,   131,   138,     9,    17,
      26,    29,    33,    49,   121,    50,   135,   136,    16,   139,
       4,   113,   146,   146,   146,    92,    67,    61,    90,    68,
      86,    32,    95,    65,    50,    65,   144,    27,    56,   104,
     106,    98,    54,   120,   146,   136,   138,    98,   124,    56,
      57,    58,    61,   114,   124,   141,    65,    67,    65,    87,
      88,    91,    20,    28,    89,    34,     4,    11,    65,    96,
      97,   138,    65,    70,     4,    14,    15,   109,    65,    70,
     122,   123,   137,   145,    16,    25,   124,    69,    70,    94,
      85,   106,    38,    41,   105,    98,   146,    16,    56,    65,
     123,    36,    46,    30,    88,     4,   140,    24,   145,    98,
      65,   105,    98,    65,   109
};

#if ! defined (PLPGSQL_YYSIZE_T) && defined (__SIZE_TYPE__)
# define PLPGSQL_YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (PLPGSQL_YYSIZE_T) && defined (size_t)
# define PLPGSQL_YYSIZE_T size_t
#endif
#if ! defined (PLPGSQL_YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define PLPGSQL_YYSIZE_T size_t
# endif
#endif
#if ! defined (PLPGSQL_YYSIZE_T)
# define PLPGSQL_YYSIZE_T unsigned int
#endif

#define plpgsql_yyerrok		(plpgsql_yyerrstatus = 0)
#define plpgsql_yyclearin	(plpgsql_yychar = PLPGSQL_YYEMPTY)
#define PLPGSQL_YYEMPTY		(-2)
#define PLPGSQL_YYEOF		0

#define PLPGSQL_YYACCEPT	goto plpgsql_yyacceptlab
#define PLPGSQL_YYABORT		goto plpgsql_yyabortlab
#define PLPGSQL_YYERROR		goto plpgsql_yyerrlab1

/* Like PLPGSQL_YYERROR except do call plpgsql_yyerror.  This remains here temporarily
   to ease the transition to the new meaning of PLPGSQL_YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define PLPGSQL_YYFAIL		goto plpgsql_yyerrlab

#define PLPGSQL_YYRECOVERING()  (!!plpgsql_yyerrstatus)

#define PLPGSQL_YYBACKUP(Token, Value)					\
do								\
  if (plpgsql_yychar == PLPGSQL_YYEMPTY && plpgsql_yylen == 1)				\
    {								\
      plpgsql_yychar = (Token);						\
      plpgsql_yylval = (Value);						\
      plpgsql_yytoken = PLPGSQL_YYTRANSLATE (plpgsql_yychar);				\
      PLPGSQL_YYPOPSTACK;						\
      goto plpgsql_yybackup;						\
    }								\
  else								\
    { 								\
      plpgsql_yyerror ("syntax error: cannot back up");\
      PLPGSQL_YYERROR;							\
    }								\
while (0)

#define PLPGSQL_YYTERROR	1
#define PLPGSQL_YYERRCODE	256

/* PLPGSQL_YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef PLPGSQL_YYLLOC_DEFAULT
# define PLPGSQL_YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* PLPGSQL_YYLEX -- calling `plpgsql_yylex' with the right arguments.  */

#ifdef PLPGSQL_YYLEX_PARAM
# define PLPGSQL_YYLEX plpgsql_yylex (PLPGSQL_YYLEX_PARAM)
#else
# define PLPGSQL_YYLEX plpgsql_yylex ()
#endif

/* Enable debugging if requested.  */
#if PLPGSQL_YYDEBUG

# ifndef PLPGSQL_YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define PLPGSQL_YYFPRINTF fprintf
# endif

# define PLPGSQL_YYDPRINTF(Args)			\
do {						\
  if (plpgsql_yydebug)					\
    PLPGSQL_YYFPRINTF Args;				\
} while (0)

# define PLPGSQL_YYDSYMPRINT(Args)			\
do {						\
  if (plpgsql_yydebug)					\
    plpgsql_yysymprint Args;				\
} while (0)

# define PLPGSQL_YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (plpgsql_yydebug)							\
    {								\
      PLPGSQL_YYFPRINTF (stderr, "%s ", Title);				\
      plpgsql_yysymprint (stderr, 					\
                  Token, Value);	\
      PLPGSQL_YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| plpgsql_yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
plpgsql_yy_stack_print (short *bottom, short *top)
#else
static void
plpgsql_yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  PLPGSQL_YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    PLPGSQL_YYFPRINTF (stderr, " %d", *bottom);
  PLPGSQL_YYFPRINTF (stderr, "\n");
}

# define PLPGSQL_YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (plpgsql_yydebug)							\
    plpgsql_yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the PLPGSQL_YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
plpgsql_yy_reduce_print (int plpgsql_yyrule)
#else
static void
plpgsql_yy_reduce_print (plpgsql_yyrule)
    int plpgsql_yyrule;
#endif
{
  int plpgsql_yyi;
  unsigned int plpgsql_yylineno = plpgsql_yyrline[plpgsql_yyrule];
  PLPGSQL_YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             plpgsql_yyrule - 1, plpgsql_yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (plpgsql_yyi = plpgsql_yyprhs[plpgsql_yyrule]; 0 <= plpgsql_yyrhs[plpgsql_yyi]; plpgsql_yyi++)
    PLPGSQL_YYFPRINTF (stderr, "%s ", plpgsql_yytname [plpgsql_yyrhs[plpgsql_yyi]]);
  PLPGSQL_YYFPRINTF (stderr, "-> %s\n", plpgsql_yytname [plpgsql_yyr1[plpgsql_yyrule]]);
}

# define PLPGSQL_YY_REDUCE_PRINT(Rule)		\
do {					\
  if (plpgsql_yydebug)				\
    plpgsql_yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int plpgsql_yydebug;
#else /* !PLPGSQL_YYDEBUG */
# define PLPGSQL_YYDPRINTF(Args)
# define PLPGSQL_YYDSYMPRINT(Args)
# define PLPGSQL_YYDSYMPRINTF(Title, Token, Value, Location)
# define PLPGSQL_YY_STACK_PRINT(Bottom, Top)
# define PLPGSQL_YY_REDUCE_PRINT(Rule)
#endif /* !PLPGSQL_YYDEBUG */


/* PLPGSQL_YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	PLPGSQL_YYINITDEPTH
# define PLPGSQL_YYINITDEPTH 200
#endif

/* PLPGSQL_YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < PLPGSQL_YYSTACK_BYTES (PLPGSQL_YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if PLPGSQL_YYMAXDEPTH == 0
# undef PLPGSQL_YYMAXDEPTH
#endif

#ifndef PLPGSQL_YYMAXDEPTH
# define PLPGSQL_YYMAXDEPTH 10000
#endif



#if PLPGSQL_YYERROR_VERBOSE

# ifndef plpgsql_yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define plpgsql_yystrlen strlen
#  else
/* Return the length of PLPGSQL_YYSTR.  */
static PLPGSQL_YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
plpgsql_yystrlen (const char *plpgsql_yystr)
#   else
plpgsql_yystrlen (plpgsql_yystr)
     const char *plpgsql_yystr;
#   endif
{
  register const char *plpgsql_yys = plpgsql_yystr;

  while (*plpgsql_yys++ != '\0')
    continue;

  return plpgsql_yys - plpgsql_yystr - 1;
}
#  endif
# endif

# ifndef plpgsql_yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define plpgsql_yystpcpy stpcpy
#  else
/* Copy PLPGSQL_YYSRC to PLPGSQL_YYDEST, returning the address of the terminating '\0' in
   PLPGSQL_YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
plpgsql_yystpcpy (char *plpgsql_yydest, const char *plpgsql_yysrc)
#   else
plpgsql_yystpcpy (plpgsql_yydest, plpgsql_yysrc)
     char *plpgsql_yydest;
     const char *plpgsql_yysrc;
#   endif
{
  register char *plpgsql_yyd = plpgsql_yydest;
  register const char *plpgsql_yys = plpgsql_yysrc;

  while ((*plpgsql_yyd++ = *plpgsql_yys++) != '\0')
    continue;

  return plpgsql_yyd - 1;
}
#  endif
# endif

#endif /* !PLPGSQL_YYERROR_VERBOSE */



#if PLPGSQL_YYDEBUG
/*--------------------------------.
| Print this symbol on PLPGSQL_YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
plpgsql_yysymprint (FILE *plpgsql_yyoutput, int plpgsql_yytype, PLPGSQL_YYSTYPE *plpgsql_yyvaluep)
#else
static void
plpgsql_yysymprint (plpgsql_yyoutput, plpgsql_yytype, plpgsql_yyvaluep)
    FILE *plpgsql_yyoutput;
    int plpgsql_yytype;
    PLPGSQL_YYSTYPE *plpgsql_yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) plpgsql_yyvaluep;

  if (plpgsql_yytype < PLPGSQL_YYNTOKENS)
    {
      PLPGSQL_YYFPRINTF (plpgsql_yyoutput, "token %s (", plpgsql_yytname[plpgsql_yytype]);
# ifdef PLPGSQL_YYPRINT
      PLPGSQL_YYPRINT (plpgsql_yyoutput, plpgsql_yytoknum[plpgsql_yytype], *plpgsql_yyvaluep);
# endif
    }
  else
    PLPGSQL_YYFPRINTF (plpgsql_yyoutput, "nterm %s (", plpgsql_yytname[plpgsql_yytype]);

  switch (plpgsql_yytype)
    {
      default:
        break;
    }
  PLPGSQL_YYFPRINTF (plpgsql_yyoutput, ")");
}

#endif /* ! PLPGSQL_YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
plpgsql_yydestruct (int plpgsql_yytype, PLPGSQL_YYSTYPE *plpgsql_yyvaluep)
#else
static void
plpgsql_yydestruct (plpgsql_yytype, plpgsql_yyvaluep)
    int plpgsql_yytype;
    PLPGSQL_YYSTYPE *plpgsql_yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) plpgsql_yyvaluep;

  switch (plpgsql_yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef PLPGSQL_YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int plpgsql_yyparse (void *PLPGSQL_YYPARSE_PARAM);
# else
int plpgsql_yyparse ();
# endif
#else /* ! PLPGSQL_YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int plpgsql_yyparse (void);
#else
int plpgsql_yyparse ();
#endif
#endif /* ! PLPGSQL_YYPARSE_PARAM */



/* The lookahead symbol.  */
int plpgsql_yychar;

/* The semantic value of the lookahead symbol.  */
PLPGSQL_YYSTYPE plpgsql_yylval;

/* Number of syntax errors so far.  */
int plpgsql_yynerrs;



/*----------.
| plpgsql_yyparse.  |
`----------*/

#ifdef PLPGSQL_YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int plpgsql_yyparse (void *PLPGSQL_YYPARSE_PARAM)
# else
int plpgsql_yyparse (PLPGSQL_YYPARSE_PARAM)
  void *PLPGSQL_YYPARSE_PARAM;
# endif
#else /* ! PLPGSQL_YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
plpgsql_yyparse (void)
#else
int
plpgsql_yyparse ()

#endif
#endif
{
  
  register int plpgsql_yystate;
  register int plpgsql_yyn;
  int plpgsql_yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int plpgsql_yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int plpgsql_yytoken = 0;

  /* Three stacks and their tools:
     `plpgsql_yyss': related to states,
     `plpgsql_yyvs': related to semantic values,
     `plpgsql_yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow plpgsql_yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	plpgsql_yyssa[PLPGSQL_YYINITDEPTH];
  short *plpgsql_yyss = plpgsql_yyssa;
  register short *plpgsql_yyssp;

  /* The semantic value stack.  */
  PLPGSQL_YYSTYPE plpgsql_yyvsa[PLPGSQL_YYINITDEPTH];
  PLPGSQL_YYSTYPE *plpgsql_yyvs = plpgsql_yyvsa;
  register PLPGSQL_YYSTYPE *plpgsql_yyvsp;



#define PLPGSQL_YYPOPSTACK   (plpgsql_yyvsp--, plpgsql_yyssp--)

  PLPGSQL_YYSIZE_T plpgsql_yystacksize = PLPGSQL_YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  PLPGSQL_YYSTYPE plpgsql_yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int plpgsql_yylen;

  PLPGSQL_YYDPRINTF ((stderr, "Starting parse\n"));

  plpgsql_yystate = 0;
  plpgsql_yyerrstatus = 0;
  plpgsql_yynerrs = 0;
  plpgsql_yychar = PLPGSQL_YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  plpgsql_yyssp = plpgsql_yyss;
  plpgsql_yyvsp = plpgsql_yyvs;

  goto plpgsql_yysetstate;

/*------------------------------------------------------------.
| plpgsql_yynewstate -- Push a new state, which is found in plpgsql_yystate.  |
`------------------------------------------------------------*/
 plpgsql_yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  plpgsql_yyssp++;

 plpgsql_yysetstate:
  *plpgsql_yyssp = plpgsql_yystate;

  if (plpgsql_yyss + plpgsql_yystacksize - 1 <= plpgsql_yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      PLPGSQL_YYSIZE_T plpgsql_yysize = plpgsql_yyssp - plpgsql_yyss + 1;

#ifdef plpgsql_yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	PLPGSQL_YYSTYPE *plpgsql_yyvs1 = plpgsql_yyvs;
	short *plpgsql_yyss1 = plpgsql_yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if plpgsql_yyoverflow is a macro.  */
	plpgsql_yyoverflow ("parser stack overflow",
		    &plpgsql_yyss1, plpgsql_yysize * sizeof (*plpgsql_yyssp),
		    &plpgsql_yyvs1, plpgsql_yysize * sizeof (*plpgsql_yyvsp),

		    &plpgsql_yystacksize);

	plpgsql_yyss = plpgsql_yyss1;
	plpgsql_yyvs = plpgsql_yyvs1;
      }
#else /* no plpgsql_yyoverflow */
# ifndef PLPGSQL_YYSTACK_RELOCATE
      goto plpgsql_yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (PLPGSQL_YYMAXDEPTH <= plpgsql_yystacksize)
	goto plpgsql_yyoverflowlab;
      plpgsql_yystacksize *= 2;
      if (PLPGSQL_YYMAXDEPTH < plpgsql_yystacksize)
	plpgsql_yystacksize = PLPGSQL_YYMAXDEPTH;

      {
	short *plpgsql_yyss1 = plpgsql_yyss;
	union plpgsql_yyalloc *plpgsql_yyptr =
	  (union plpgsql_yyalloc *) PLPGSQL_YYSTACK_ALLOC (PLPGSQL_YYSTACK_BYTES (plpgsql_yystacksize));
	if (! plpgsql_yyptr)
	  goto plpgsql_yyoverflowlab;
	PLPGSQL_YYSTACK_RELOCATE (plpgsql_yyss);
	PLPGSQL_YYSTACK_RELOCATE (plpgsql_yyvs);

#  undef PLPGSQL_YYSTACK_RELOCATE
	if (plpgsql_yyss1 != plpgsql_yyssa)
	  PLPGSQL_YYSTACK_FREE (plpgsql_yyss1);
      }
# endif
#endif /* no plpgsql_yyoverflow */

      plpgsql_yyssp = plpgsql_yyss + plpgsql_yysize - 1;
      plpgsql_yyvsp = plpgsql_yyvs + plpgsql_yysize - 1;


      PLPGSQL_YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) plpgsql_yystacksize));

      if (plpgsql_yyss + plpgsql_yystacksize - 1 <= plpgsql_yyssp)
	PLPGSQL_YYABORT;
    }

  PLPGSQL_YYDPRINTF ((stderr, "Entering state %d\n", plpgsql_yystate));

  goto plpgsql_yybackup;

/*-----------.
| plpgsql_yybackup.  |
`-----------*/
plpgsql_yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* plpgsql_yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  plpgsql_yyn = plpgsql_yypact[plpgsql_yystate];
  if (plpgsql_yyn == PLPGSQL_YYPACT_NINF)
    goto plpgsql_yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* PLPGSQL_YYCHAR is either PLPGSQL_YYEMPTY or PLPGSQL_YYEOF or a valid lookahead symbol.  */
  if (plpgsql_yychar == PLPGSQL_YYEMPTY)
    {
      PLPGSQL_YYDPRINTF ((stderr, "Reading a token: "));
      plpgsql_yychar = PLPGSQL_YYLEX;
    }

  if (plpgsql_yychar <= PLPGSQL_YYEOF)
    {
      plpgsql_yychar = plpgsql_yytoken = PLPGSQL_YYEOF;
      PLPGSQL_YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      plpgsql_yytoken = PLPGSQL_YYTRANSLATE (plpgsql_yychar);
      PLPGSQL_YYDSYMPRINTF ("Next token is", plpgsql_yytoken, &plpgsql_yylval, &plpgsql_yylloc);
    }

  /* If the proper action on seeing token PLPGSQL_YYTOKEN is to reduce or to
     detect an error, take that action.  */
  plpgsql_yyn += plpgsql_yytoken;
  if (plpgsql_yyn < 0 || PLPGSQL_YYLAST < plpgsql_yyn || plpgsql_yycheck[plpgsql_yyn] != plpgsql_yytoken)
    goto plpgsql_yydefault;
  plpgsql_yyn = plpgsql_yytable[plpgsql_yyn];
  if (plpgsql_yyn <= 0)
    {
      if (plpgsql_yyn == 0 || plpgsql_yyn == PLPGSQL_YYTABLE_NINF)
	goto plpgsql_yyerrlab;
      plpgsql_yyn = -plpgsql_yyn;
      goto plpgsql_yyreduce;
    }

  if (plpgsql_yyn == PLPGSQL_YYFINAL)
    PLPGSQL_YYACCEPT;

  /* Shift the lookahead token.  */
  PLPGSQL_YYDPRINTF ((stderr, "Shifting token %s, ", plpgsql_yytname[plpgsql_yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (plpgsql_yychar != PLPGSQL_YYEOF)
    plpgsql_yychar = PLPGSQL_YYEMPTY;

  *++plpgsql_yyvsp = plpgsql_yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (plpgsql_yyerrstatus)
    plpgsql_yyerrstatus--;

  plpgsql_yystate = plpgsql_yyn;
  goto plpgsql_yynewstate;


/*-----------------------------------------------------------.
| plpgsql_yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
plpgsql_yydefault:
  plpgsql_yyn = plpgsql_yydefact[plpgsql_yystate];
  if (plpgsql_yyn == 0)
    goto plpgsql_yyerrlab;
  goto plpgsql_yyreduce;


/*-----------------------------.
| plpgsql_yyreduce -- Do a reduction.  |
`-----------------------------*/
plpgsql_yyreduce:
  /* plpgsql_yyn is the number of a rule to reduce with.  */
  plpgsql_yylen = plpgsql_yyr2[plpgsql_yyn];

  /* If PLPGSQL_YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets PLPGSQL_YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to PLPGSQL_YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that PLPGSQL_YYVAL may be used uninitialized.  */
  plpgsql_yyval = plpgsql_yyvsp[1-plpgsql_yylen];


  PLPGSQL_YY_REDUCE_PRINT (plpgsql_yyn);
  switch (plpgsql_yyn)
    {
        case 2:
#line 224 "gram.y"
    {
						plpgsql_yylval.program = (PLpgSQL_stmt_block *)plpgsql_yyvsp[-1].stmt;
					}
    break;

  case 3:
#line 228 "gram.y"
    {
						plpgsql_yylval.program = (PLpgSQL_stmt_block *)plpgsql_yyvsp[-1].stmt;
					}
    break;

  case 8:
#line 242 "gram.y"
    {
						plpgsql_DumpExecTree = 1;
					}
    break;

  case 11:
#line 252 "gram.y"
    {
						PLpgSQL_stmt_block *new;

						new = malloc(sizeof(PLpgSQL_stmt_block));
						memset(new, 0, sizeof(PLpgSQL_stmt_block));

						new->cmd_type	= PLPGSQL_STMT_BLOCK;
						new->lineno		= plpgsql_yyvsp[-3].ival;
						new->label		= plpgsql_yyvsp[-5].declhdr.label;
						new->n_initvars = plpgsql_yyvsp[-5].declhdr.n_initvars;
						new->initvarnos = plpgsql_yyvsp[-5].declhdr.initvarnos;
						new->body		= plpgsql_yyvsp[-2].stmts;
						new->exceptions	= plpgsql_yyvsp[-1].exceptions;

						plpgsql_ns_pop();

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 12:
#line 274 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						plpgsql_yyval.declhdr.label	  = plpgsql_yyvsp[0].str;
						plpgsql_yyval.declhdr.n_initvars = 0;
						plpgsql_yyval.declhdr.initvarnos = NULL;
						plpgsql_add_initdatums(NULL);
					}
    break;

  case 13:
#line 282 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						plpgsql_yyval.declhdr.label	  = plpgsql_yyvsp[-1].str;
						plpgsql_yyval.declhdr.n_initvars = 0;
						plpgsql_yyval.declhdr.initvarnos = NULL;
						plpgsql_add_initdatums(NULL);
					}
    break;

  case 14:
#line 290 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						if (plpgsql_yyvsp[0].str != NULL)
							plpgsql_yyval.declhdr.label = plpgsql_yyvsp[0].str;
						else
							plpgsql_yyval.declhdr.label = plpgsql_yyvsp[-2].str;
						plpgsql_yyval.declhdr.n_initvars = plpgsql_add_initdatums(&(plpgsql_yyval.declhdr.initvarnos));
					}
    break;

  case 15:
#line 301 "gram.y"
    {
						plpgsql_ns_setlocal(true);
					}
    break;

  case 16:
#line 307 "gram.y"
    {	plpgsql_yyval.str = plpgsql_yyvsp[0].str;	}
    break;

  case 17:
#line 309 "gram.y"
    {	plpgsql_yyval.str = plpgsql_yyvsp[0].str;	}
    break;

  case 18:
#line 313 "gram.y"
    {	plpgsql_yyval.str = plpgsql_yyvsp[-2].str;	}
    break;

  case 19:
#line 315 "gram.y"
    {	plpgsql_yyval.str = NULL;	}
    break;

  case 20:
#line 317 "gram.y"
    {	plpgsql_yyval.str = NULL;	}
    break;

  case 21:
#line 321 "gram.y"
    {
						PLpgSQL_variable	*var;

						var = plpgsql_build_variable(plpgsql_yyvsp[-4].varname.name, plpgsql_yyvsp[-4].varname.lineno,
													 plpgsql_yyvsp[-2].dtype, true);
						if (plpgsql_yyvsp[-3].ival)
						{
							if (var->dtype == PLPGSQL_DTYPE_VAR)
								((PLpgSQL_var *) var)->isconst = plpgsql_yyvsp[-3].ival;
							else
								ereport(ERROR,
										(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
										 errmsg("row or record variable cannot be CONSTANT")));
						}
						if (plpgsql_yyvsp[-1].ival)
						{
							if (var->dtype == PLPGSQL_DTYPE_VAR)
								((PLpgSQL_var *) var)->notnull = plpgsql_yyvsp[-1].ival;
							else
								ereport(ERROR,
										(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
										 errmsg("row or record variable cannot be NOT NULL")));
						}
						if (plpgsql_yyvsp[0].expr != NULL)
						{
							if (var->dtype == PLPGSQL_DTYPE_VAR)
								((PLpgSQL_var *) var)->default_val = plpgsql_yyvsp[0].expr;
							else
								ereport(ERROR,
										(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
										 errmsg("default value for row or record variable is not supported")));
						}
					}
    break;

  case 22:
#line 355 "gram.y"
    {
						plpgsql_ns_additem(plpgsql_yyvsp[-1].nsitem->itemtype,
										   plpgsql_yyvsp[-1].nsitem->itemno, plpgsql_yyvsp[-4].varname.name);
					}
    break;

  case 23:
#line 360 "gram.y"
    {
						plpgsql_ns_rename(plpgsql_yyvsp[-3].str, plpgsql_yyvsp[-1].str);
					}
    break;

  case 24:
#line 364 "gram.y"
    { plpgsql_ns_push(NULL); }
    break;

  case 25:
#line 366 "gram.y"
    {
						PLpgSQL_var *new;
						PLpgSQL_expr *curname_def;
						char		buf[1024];
						char		*cp1;
						char		*cp2;

						/* pop local namespace for cursor args */
						plpgsql_ns_pop();

						new = (PLpgSQL_var *)
							plpgsql_build_variable(plpgsql_yyvsp[-5].varname.name, plpgsql_yyvsp[-5].varname.lineno,
												   plpgsql_build_datatype(REFCURSOROID,
																		  -1),
												   true);

						curname_def = malloc(sizeof(PLpgSQL_expr));
						memset(curname_def, 0, sizeof(PLpgSQL_expr));

						curname_def->dtype = PLPGSQL_DTYPE_EXPR;
						strcpy(buf, "SELECT '");
						cp1 = new->refname;
						cp2 = buf + strlen(buf);
						while (*cp1 != '\0')
						{
							if (*cp1 == '\\' || *cp1 == '\'')
								*cp2++ = '\\';
							*cp2++ = *cp1++;
						}
						strcpy(cp2, "'::refcursor");
						curname_def->query = strdup(buf);
						new->default_val = curname_def;

						new->cursor_explicit_expr = plpgsql_yyvsp[0].expr;
						if (plpgsql_yyvsp[-2].row == NULL)
							new->cursor_explicit_argrow = -1;
						else
							new->cursor_explicit_argrow = plpgsql_yyvsp[-2].row->rowno;
					}
    break;

  case 26:
#line 408 "gram.y"
    {
						PLpgSQL_expr *query;

						plpgsql_ns_setlocal(false);
						query = read_sql_stmt("");
						plpgsql_ns_setlocal(true);
						
						plpgsql_yyval.expr = query;
					}
    break;

  case 27:
#line 420 "gram.y"
    {
						plpgsql_yyval.row = NULL;
					}
    break;

  case 28:
#line 424 "gram.y"
    {
						/* Copy the temp arrays to malloc'd storage */
						int nfields = plpgsql_yyvsp[-1].row->nfields;
						char **ftmp;
						int *vtmp;

						ftmp = malloc(nfields * sizeof(char *));
						vtmp = malloc(nfields * sizeof(int));
						memcpy(ftmp, plpgsql_yyvsp[-1].row->fieldnames, nfields * sizeof(char *));
						memcpy(vtmp, plpgsql_yyvsp[-1].row->varnos, nfields * sizeof(int));

						pfree(plpgsql_yyvsp[-1].row->fieldnames);
						pfree(plpgsql_yyvsp[-1].row->varnos);

						plpgsql_yyvsp[-1].row->fieldnames = ftmp;
						plpgsql_yyvsp[-1].row->varnos = vtmp;

						plpgsql_adddatum((PLpgSQL_datum *)plpgsql_yyvsp[-1].row);

						plpgsql_yyval.row = plpgsql_yyvsp[-1].row;
					}
    break;

  case 29:
#line 448 "gram.y"
    {
						PLpgSQL_row *new;

						new = malloc(sizeof(PLpgSQL_row));
						memset(new, 0, sizeof(PLpgSQL_row));

						new->dtype = PLPGSQL_DTYPE_ROW;
						new->refname = strdup("*internal*");
						new->lineno = plpgsql_scanner_lineno();
						new->rowtupdesc = NULL;
						/*
						 * We make temporary fieldnames/varnos arrays that
						 * are much bigger than necessary.  We will resize
						 * them to just the needed size in the
						 * decl_cursor_args production.
						 */
						new->fieldnames = palloc(1024 * sizeof(char *));
						new->varnos = palloc(1024 * sizeof(int));
						new->nfields = 1;

						new->fieldnames[0] = plpgsql_yyvsp[0].variable->refname;
						new->varnos[0] = plpgsql_yyvsp[0].variable->dno;

						plpgsql_yyval.row = new;
					}
    break;

  case 30:
#line 474 "gram.y"
    {
						int i = plpgsql_yyvsp[-2].row->nfields++;

						/* Guard against overflowing the array on malicious input */
						if (i >= 1024)
							plpgsql_yyerror("too many parameters specified for refcursor");

						plpgsql_yyvsp[-2].row->fieldnames[i] = plpgsql_yyvsp[0].variable->refname;
						plpgsql_yyvsp[-2].row->varnos[i] = plpgsql_yyvsp[0].variable->dno;

						plpgsql_yyval.row = plpgsql_yyvsp[-2].row;
					}
    break;

  case 31:
#line 489 "gram.y"
    {
						plpgsql_yyval.variable = plpgsql_build_variable(plpgsql_yyvsp[-1].varname.name, plpgsql_yyvsp[-1].varname.lineno,
													plpgsql_yyvsp[0].dtype, true);
					}
    break;

  case 34:
#line 499 "gram.y"
    {
						char	*name;
						PLpgSQL_nsitem *nsi;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						if (name[0] != '$')
							plpgsql_yyerror("only positional parameters may be aliased");

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

						plpgsql_yyval.nsitem = nsi;
					}
    break;

  case 35:
#line 527 "gram.y"
    {
						char	*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						/* name should be malloc'd for use as varname */
						plpgsql_yyval.varname.name = strdup(name);
						plpgsql_yyval.varname.lineno  = plpgsql_scanner_lineno();
						pfree(name);
					}
    break;

  case 36:
#line 539 "gram.y"
    {
						char	*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						/* the result must be palloc'd, see plpgsql_ns_rename */
						plpgsql_yyval.str = name;
					}
    break;

  case 37:
#line 549 "gram.y"
    { plpgsql_yyval.ival = 0; }
    break;

  case 38:
#line 551 "gram.y"
    { plpgsql_yyval.ival = 1; }
    break;

  case 39:
#line 555 "gram.y"
    {
						/*
						 * If there's a lookahead token, read_datatype
						 * should consume it.
						 */
						plpgsql_yyval.dtype = read_datatype(plpgsql_yychar);
						plpgsql_yyclearin;
					}
    break;

  case 40:
#line 566 "gram.y"
    { plpgsql_yyval.ival = 0; }
    break;

  case 41:
#line 568 "gram.y"
    { plpgsql_yyval.ival = 1; }
    break;

  case 42:
#line 572 "gram.y"
    { plpgsql_yyval.expr = NULL; }
    break;

  case 43:
#line 574 "gram.y"
    {
						plpgsql_ns_setlocal(false);
						plpgsql_yyval.expr = plpgsql_read_expression(';', ";");
						plpgsql_ns_setlocal(true);
					}
    break;

  case 46:
#line 586 "gram.y"
    {
							PLpgSQL_stmts	*new;

							new = malloc(sizeof(PLpgSQL_stmts));
							memset(new, 0, sizeof(PLpgSQL_stmts));
							plpgsql_yyval.stmts = new;
					}
    break;

  case 47:
#line 594 "gram.y"
    { plpgsql_yyval.stmts = plpgsql_yyvsp[0].stmts; }
    break;

  case 48:
#line 598 "gram.y"
    {
							if (plpgsql_yyvsp[0].stmt != NULL)
							{
								if (plpgsql_yyvsp[-1].stmts->stmts_used == plpgsql_yyvsp[-1].stmts->stmts_alloc)
								{
									plpgsql_yyvsp[-1].stmts->stmts_alloc *= 2;
									plpgsql_yyvsp[-1].stmts->stmts = realloc(plpgsql_yyvsp[-1].stmts->stmts, sizeof(PLpgSQL_stmt *) * plpgsql_yyvsp[-1].stmts->stmts_alloc);
								}
								plpgsql_yyvsp[-1].stmts->stmts[plpgsql_yyvsp[-1].stmts->stmts_used++] = plpgsql_yyvsp[0].stmt;
							}
							plpgsql_yyval.stmts = plpgsql_yyvsp[-1].stmts;
						}
    break;

  case 49:
#line 611 "gram.y"
    {
							PLpgSQL_stmts	*new;

							new = malloc(sizeof(PLpgSQL_stmts));
							memset(new, 0, sizeof(PLpgSQL_stmts));

							new->stmts_alloc = 32;
							new->stmts = malloc(sizeof(PLpgSQL_stmt *) * new->stmts_alloc);

							if (plpgsql_yyvsp[0].stmt != NULL)
								new->stmts[new->stmts_used++] = plpgsql_yyvsp[0].stmt;

							plpgsql_yyval.stmts = new;
						}
    break;

  case 50:
#line 628 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[-1].stmt; }
    break;

  case 51:
#line 630 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 52:
#line 632 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 53:
#line 634 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 54:
#line 636 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 55:
#line 638 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 56:
#line 640 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 57:
#line 642 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 58:
#line 644 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 59:
#line 646 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 60:
#line 648 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 61:
#line 650 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 62:
#line 652 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 63:
#line 654 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 64:
#line 656 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 65:
#line 658 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 66:
#line 660 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 67:
#line 662 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 68:
#line 664 "gram.y"
    { plpgsql_yyval.stmt = plpgsql_yyvsp[0].stmt; }
    break;

  case 69:
#line 668 "gram.y"
    {
						PLpgSQL_stmt_perform *new;

						new = malloc(sizeof(PLpgSQL_stmt_perform));
						memset(new, 0, sizeof(PLpgSQL_stmt_perform));

						new->cmd_type = PLPGSQL_STMT_PERFORM;
						new->lineno   = plpgsql_yyvsp[-1].ival;
						new->expr  = plpgsql_yyvsp[0].expr;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 70:
#line 683 "gram.y"
    {
						PLpgSQL_stmt_assign *new;

						new = malloc(sizeof(PLpgSQL_stmt_assign));
						memset(new, 0, sizeof(PLpgSQL_stmt_assign));

						new->cmd_type = PLPGSQL_STMT_ASSIGN;
						new->lineno   = plpgsql_yyvsp[-2].ival;
						new->varno = plpgsql_yyvsp[-3].ival;
						new->expr  = plpgsql_yyvsp[0].expr;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 71:
#line 699 "gram.y"
    {
						PLpgSQL_stmt_getdiag	 *new;

						new = malloc(sizeof(PLpgSQL_stmt_getdiag));
						memset(new, 0, sizeof(PLpgSQL_stmt_getdiag));

						new->cmd_type = PLPGSQL_STMT_GETDIAG;
						new->lineno   = plpgsql_yyvsp[-2].ival;
						new->ndtitems = plpgsql_yyvsp[-1].dtlist.nused;
						new->dtitems  = malloc(sizeof(PLpgSQL_diag_item) * plpgsql_yyvsp[-1].dtlist.nused);
						memcpy(new->dtitems, plpgsql_yyvsp[-1].dtlist.dtitems, sizeof(PLpgSQL_diag_item) * plpgsql_yyvsp[-1].dtlist.nused);

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 72:
#line 716 "gram.y"
    {
						if (plpgsql_yyvsp[-4].dtlist.nused == plpgsql_yyvsp[-4].dtlist.nalloc)
						{
							plpgsql_yyvsp[-4].dtlist.nalloc *= 2;
							plpgsql_yyvsp[-4].dtlist.dtitems = repalloc(plpgsql_yyvsp[-4].dtlist.dtitems, sizeof(PLpgSQL_diag_item) * plpgsql_yyvsp[-4].dtlist.nalloc);
						}
						plpgsql_yyvsp[-4].dtlist.dtitems[plpgsql_yyvsp[-4].dtlist.nused].target = plpgsql_yyvsp[-2].ival;
						plpgsql_yyvsp[-4].dtlist.dtitems[plpgsql_yyvsp[-4].dtlist.nused].item   = plpgsql_yyvsp[0].ival;
						plpgsql_yyvsp[-4].dtlist.nused++;

						plpgsql_yyval.dtlist.nalloc = plpgsql_yyvsp[-4].dtlist.nalloc;
						plpgsql_yyval.dtlist.nused  = plpgsql_yyvsp[-4].dtlist.nused;
						plpgsql_yyval.dtlist.dtitems = plpgsql_yyvsp[-4].dtlist.dtitems;
					}
    break;

  case 73:
#line 731 "gram.y"
    {
						plpgsql_yyval.dtlist.nalloc = 1;
						plpgsql_yyval.dtlist.nused  = 1;
						plpgsql_yyval.dtlist.dtitems = palloc(sizeof(PLpgSQL_diag_item) * plpgsql_yyval.dtlist.nalloc);
						plpgsql_yyval.dtlist.dtitems[0].target = plpgsql_yyvsp[-2].ival;
						plpgsql_yyval.dtlist.dtitems[0].item   = plpgsql_yyvsp[0].ival;
					}
    break;

  case 74:
#line 741 "gram.y"
    {
						plpgsql_yyval.ival = PLPGSQL_GETDIAG_ROW_COUNT;
					}
    break;

  case 75:
#line 745 "gram.y"
    {
						plpgsql_yyval.ival = PLPGSQL_GETDIAG_RESULT_OID;
					}
    break;

  case 76:
#line 751 "gram.y"
    {
						check_assignable(plpgsql_yylval.scalar);
						plpgsql_yyval.ival = plpgsql_yylval.scalar->dno;
					}
    break;

  case 77:
#line 759 "gram.y"
    {
						check_assignable(plpgsql_yylval.scalar);
						plpgsql_yyval.ival = plpgsql_yylval.scalar->dno;
					}
    break;

  case 78:
#line 764 "gram.y"
    {
						check_assignable((PLpgSQL_datum *) plpgsql_yylval.row);
						plpgsql_yyval.ival = plpgsql_yylval.row->rowno;
					}
    break;

  case 79:
#line 769 "gram.y"
    {
						check_assignable((PLpgSQL_datum *) plpgsql_yylval.rec);
						plpgsql_yyval.ival = plpgsql_yylval.rec->recno;
					}
    break;

  case 80:
#line 774 "gram.y"
    {
						PLpgSQL_arrayelem	*new;

						new = malloc(sizeof(PLpgSQL_arrayelem));
						memset(new, 0, sizeof(PLpgSQL_arrayelem));

						new->dtype		= PLPGSQL_DTYPE_ARRAYELEM;
						new->subscript	= plpgsql_yyvsp[0].expr;
						new->arrayparentno = plpgsql_yyvsp[-2].ival;

						plpgsql_adddatum((PLpgSQL_datum *)new);

						plpgsql_yyval.ival = new->dno;
					}
    break;

  case 81:
#line 791 "gram.y"
    {
						PLpgSQL_stmt_if *new;

						new = malloc(sizeof(PLpgSQL_stmt_if));
						memset(new, 0, sizeof(PLpgSQL_stmt_if));

						new->cmd_type	= PLPGSQL_STMT_IF;
						new->lineno		= plpgsql_yyvsp[-6].ival;
						new->cond		= plpgsql_yyvsp[-5].expr;
						new->true_body	= plpgsql_yyvsp[-4].stmts;
						new->false_body = plpgsql_yyvsp[-3].stmts;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 82:
#line 808 "gram.y"
    {
							PLpgSQL_stmts	*new;

							new = malloc(sizeof(PLpgSQL_stmts));
							memset(new, 0, sizeof(PLpgSQL_stmts));
							plpgsql_yyval.stmts = new;
					}
    break;

  case 83:
#line 816 "gram.y"
    {
					  /*
					   * Translate the structure:	   into:
					   *
					   * IF c1 THEN					   IF c1 THEN		 
					   *	 ...						   ...				 
					   * ELSIF c2 THEN				   ELSE 
					   *								   IF c2 THEN	
					   *	 ...							   ...				 
					   * ELSE							   ELSE				 
					   *	 ...							   ...				 
					   * END IF							   END IF			 
					   *							   END IF
					   * 
					   */

						PLpgSQL_stmts	*new;
						PLpgSQL_stmt_if *new_if;

						/* first create a new if-statement */
						new_if = malloc(sizeof(PLpgSQL_stmt_if));
						memset(new_if, 0, sizeof(PLpgSQL_stmt_if));

						new_if->cmd_type	= PLPGSQL_STMT_IF;
						new_if->lineno		= plpgsql_yyvsp[-3].ival;
						new_if->cond		= plpgsql_yyvsp[-2].expr;
						new_if->true_body	= plpgsql_yyvsp[-1].stmts;
						new_if->false_body	= plpgsql_yyvsp[0].stmts;
						
						/* this is a 'container' for the if-statement */
						new = malloc(sizeof(PLpgSQL_stmts));
						memset(new, 0, sizeof(PLpgSQL_stmts));
						
						new->stmts_alloc = 64;
						new->stmts_used	 = 1;
						new->stmts = malloc(sizeof(PLpgSQL_stmt *) * new->stmts_alloc);
						new->stmts[0] = (PLpgSQL_stmt *) new_if;

						plpgsql_yyval.stmts = new;
						
					}
    break;

  case 84:
#line 859 "gram.y"
    {
						plpgsql_yyval.stmts = plpgsql_yyvsp[0].stmts;				
					}
    break;

  case 85:
#line 865 "gram.y"
    {
						PLpgSQL_stmt_loop *new;

						new = malloc(sizeof(PLpgSQL_stmt_loop));
						memset(new, 0, sizeof(PLpgSQL_stmt_loop));

						new->cmd_type = PLPGSQL_STMT_LOOP;
						new->lineno   = plpgsql_yyvsp[-1].ival;
						new->label	  = plpgsql_yyvsp[-3].str;
						new->body	  = plpgsql_yyvsp[0].stmts;

						plpgsql_ns_pop();

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 86:
#line 883 "gram.y"
    {
						PLpgSQL_stmt_while *new;

						new = malloc(sizeof(PLpgSQL_stmt_while));
						memset(new, 0, sizeof(PLpgSQL_stmt_while));

						new->cmd_type = PLPGSQL_STMT_WHILE;
						new->lineno   = plpgsql_yyvsp[-2].ival;
						new->label	  = plpgsql_yyvsp[-4].str;
						new->cond	  = plpgsql_yyvsp[-1].expr;
						new->body	  = plpgsql_yyvsp[0].stmts;

						plpgsql_ns_pop();

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 87:
#line 902 "gram.y"
    {
						/* This runs after we've scanned the loop body */
						if (plpgsql_yyvsp[-1].stmt->cmd_type == PLPGSQL_STMT_FORI)
						{
							PLpgSQL_stmt_fori		*new;

							new = (PLpgSQL_stmt_fori *) plpgsql_yyvsp[-1].stmt;
							new->label	  = plpgsql_yyvsp[-3].str;
							new->body	  = plpgsql_yyvsp[0].stmts;
							plpgsql_yyval.stmt = (PLpgSQL_stmt *) new;
						}
						else if (plpgsql_yyvsp[-1].stmt->cmd_type == PLPGSQL_STMT_FORS)
						{
							PLpgSQL_stmt_fors		*new;

							new = (PLpgSQL_stmt_fors *) plpgsql_yyvsp[-1].stmt;
							new->label	  = plpgsql_yyvsp[-3].str;
							new->body	  = plpgsql_yyvsp[0].stmts;
							plpgsql_yyval.stmt = (PLpgSQL_stmt *) new;
						}
						else
						{
							PLpgSQL_stmt_dynfors	*new;

							Assert(plpgsql_yyvsp[-1].stmt->cmd_type == PLPGSQL_STMT_DYNFORS);
							new = (PLpgSQL_stmt_dynfors *) plpgsql_yyvsp[-1].stmt;
							new->label	  = plpgsql_yyvsp[-3].str;
							new->body	  = plpgsql_yyvsp[0].stmts;
							plpgsql_yyval.stmt = (PLpgSQL_stmt *) new;
						}

						/* close namespace started in opt_label */
						plpgsql_ns_pop();
					}
    break;

  case 88:
#line 939 "gram.y"
    {
						int			tok;
						bool		reverse = false;
						bool		execute = false;
						PLpgSQL_expr *expr1;

						/* check for REVERSE and EXECUTE */
						tok = plpgsql_yylex();
						if (tok == K_REVERSE)
						{
							reverse = true;
							tok = plpgsql_yylex();
						}

						if (tok == K_EXECUTE)
							execute = true;
						else
							plpgsql_push_back_token(tok);

						/* Collect one or two expressions */
						expr1 = read_sql_construct(K_DOTDOT,
												   K_LOOP,
												   "LOOP",
												   true,
												   "SELECT ",
												   &tok);

						if (tok == K_DOTDOT)
						{
							/* Found .., so it must be an integer loop */
							PLpgSQL_stmt_fori	*new;
							PLpgSQL_expr		*expr2;
							PLpgSQL_var			*fvar;

							expr2 = plpgsql_read_expression(K_LOOP, "LOOP");

							if (execute)
							{
								plpgsql_error_lineno = plpgsql_yyvsp[-2].ival;
								plpgsql_yyerror("cannot specify EXECUTE in integer for-loop");
							}

							/* name should be malloc'd for use as varname */
							fvar = (PLpgSQL_var *)
								plpgsql_build_variable(strdup(plpgsql_yyvsp[-1].forvariable.name),
													   plpgsql_yyvsp[-1].forvariable.lineno,
													   plpgsql_build_datatype(INT4OID,
																			  -1),
													   true);

							/* put the for-variable into the local block */
							plpgsql_add_initdatums(NULL);

							new = malloc(sizeof(PLpgSQL_stmt_fori));
							memset(new, 0, sizeof(PLpgSQL_stmt_fori));

							new->cmd_type = PLPGSQL_STMT_FORI;
							new->lineno   = plpgsql_yyvsp[-2].ival;
							new->var	  = fvar;
							new->reverse  = reverse;
							new->lower	  = expr1;
							new->upper	  = expr2;

							plpgsql_yyval.stmt = (PLpgSQL_stmt *) new;
						}
						else if (execute)
						{
							/* No .., so it must be a loop over rows */
							PLpgSQL_stmt_dynfors	*new;

							if (reverse)
							{
								plpgsql_error_lineno = plpgsql_yyvsp[-2].ival;
								plpgsql_yyerror("cannot specify REVERSE in loop over rows");
							}

							new = malloc(sizeof(PLpgSQL_stmt_dynfors));
							memset(new, 0, sizeof(PLpgSQL_stmt_dynfors));

							new->cmd_type = PLPGSQL_STMT_DYNFORS;
							new->lineno   = plpgsql_yyvsp[-2].ival;
							if (plpgsql_yyvsp[-1].forvariable.rec)
								new->rec = plpgsql_yyvsp[-1].forvariable.rec;
							else if (plpgsql_yyvsp[-1].forvariable.row)
								new->row = plpgsql_yyvsp[-1].forvariable.row;
							else
							{
								plpgsql_error_lineno = plpgsql_yyvsp[-2].ival;
								plpgsql_yyerror("loop variable of loop over rows must be a record or row variable");
							}
							new->query = expr1;

							plpgsql_yyval.stmt = (PLpgSQL_stmt *) new;
						}
						else
						{
							/* No .., so it must be a loop over rows */
							PLpgSQL_stmt_fors		*new;
							char					*newquery;

							if (reverse)
							{
								plpgsql_error_lineno = plpgsql_yyvsp[-2].ival;
								plpgsql_yyerror("cannot specify REVERSE in loop over rows");
							}

							new = malloc(sizeof(PLpgSQL_stmt_fors));
							memset(new, 0, sizeof(PLpgSQL_stmt_fors));

							new->cmd_type = PLPGSQL_STMT_FORS;
							new->lineno   = plpgsql_yyvsp[-2].ival;
							if (plpgsql_yyvsp[-1].forvariable.rec)
								new->rec = plpgsql_yyvsp[-1].forvariable.rec;
							else if (plpgsql_yyvsp[-1].forvariable.row)
								new->row = plpgsql_yyvsp[-1].forvariable.row;
							else
							{
								plpgsql_error_lineno = plpgsql_yyvsp[-2].ival;
								plpgsql_yyerror("loop variable of loop over rows must be a record or row variable");
							}
							/*
							 * Must get rid of the "SELECT " we prepended
							 * to expr1's text
							 */
							newquery = strdup(expr1->query + 7);
							free(expr1->query);
							expr1->query = newquery;

							new->query = expr1;

							plpgsql_yyval.stmt = (PLpgSQL_stmt *) new;
						}
					}
    break;

  case 89:
#line 1075 "gram.y"
    {
						char		*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						plpgsql_yyval.forvariable.name = name;
						plpgsql_yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						plpgsql_yyval.forvariable.rec = NULL;
						plpgsql_yyval.forvariable.row = NULL;
					}
    break;

  case 90:
#line 1085 "gram.y"
    {
						char		*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						plpgsql_yyval.forvariable.name = name;
						plpgsql_yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						plpgsql_yyval.forvariable.rec = NULL;
						plpgsql_yyval.forvariable.row = NULL;
					}
    break;

  case 91:
#line 1095 "gram.y"
    {
						char		*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						plpgsql_yyval.forvariable.name = name;
						plpgsql_yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						plpgsql_yyval.forvariable.rec = plpgsql_yylval.rec;
						plpgsql_yyval.forvariable.row = NULL;
					}
    break;

  case 92:
#line 1105 "gram.y"
    {
						char		*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						plpgsql_yyval.forvariable.name = name;
						plpgsql_yyval.forvariable.lineno  = plpgsql_scanner_lineno();
						plpgsql_yyval.forvariable.row = plpgsql_yylval.row;
						plpgsql_yyval.forvariable.rec = NULL;
					}
    break;

  case 93:
#line 1117 "gram.y"
    {
						plpgsql_yyval.stmt = make_select_stmt();
						plpgsql_yyval.stmt->lineno = plpgsql_yyvsp[0].ival;
					}
    break;

  case 94:
#line 1124 "gram.y"
    {
						PLpgSQL_stmt_exit *new;

						new = malloc(sizeof(PLpgSQL_stmt_exit));
						memset(new, 0, sizeof(PLpgSQL_stmt_exit));

						new->cmd_type = PLPGSQL_STMT_EXIT;
						new->lineno   = plpgsql_yyvsp[-2].ival;
						new->label	  = plpgsql_yyvsp[-1].str;
						new->cond	  = plpgsql_yyvsp[0].expr;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 95:
#line 1140 "gram.y"
    {
						PLpgSQL_stmt_return *new;

						new = malloc(sizeof(PLpgSQL_stmt_return));
						memset(new, 0, sizeof(PLpgSQL_stmt_return));
						new->expr = NULL;
						new->retrecno	= -1;
						new->retrowno	= -1;

						if (plpgsql_curr_compile->fn_retset)
						{
							if (plpgsql_yylex() != ';')
								plpgsql_yyerror("RETURN cannot have a parameter in function returning set; use RETURN NEXT");
						}
						else if (plpgsql_curr_compile->fn_retistuple)
						{
							switch (plpgsql_yylex())
							{
								case K_NULL:
									break;

								case T_ROW:
									new->retrowno = plpgsql_yylval.row->rowno;
									break;

								case T_RECORD:
									new->retrecno = plpgsql_yylval.rec->recno;
									break;

								default:
									plpgsql_yyerror("RETURN must specify a record or row variable in function returning tuple");
									break;
							}
							if (plpgsql_yylex() != ';')
								plpgsql_yyerror("RETURN must specify a record or row variable in function returning tuple");
						}
						else
						{
							/* ordinary expression case */
							new->expr = plpgsql_read_expression(';', ";");
						}

						new->cmd_type = PLPGSQL_STMT_RETURN;
						new->lineno   = plpgsql_yyvsp[0].ival;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 96:
#line 1190 "gram.y"
    {
						PLpgSQL_stmt_return_next *new;

						if (!plpgsql_curr_compile->fn_retset)
							plpgsql_yyerror("cannot use RETURN NEXT in a non-SETOF function");

						new = malloc(sizeof(PLpgSQL_stmt_return_next));
						memset(new, 0, sizeof(PLpgSQL_stmt_return_next));

						new->cmd_type	= PLPGSQL_STMT_RETURN_NEXT;
						new->lineno		= plpgsql_yyvsp[0].ival;

						if (plpgsql_curr_compile->fn_retistuple)
						{
							int tok = plpgsql_yylex();

							if (tok == T_RECORD)
								new->rec = plpgsql_yylval.rec;
							else if (tok == T_ROW)
								new->row = plpgsql_yylval.row;
							else
								plpgsql_yyerror("RETURN NEXT must specify a record or row variable in function returning tuple");

							if (plpgsql_yylex() != ';')
								plpgsql_yyerror("RETURN NEXT must specify a record or row variable in function returning tuple");
						}
						else
							new->expr = plpgsql_read_expression(';', ";");

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 97:
#line 1224 "gram.y"
    {
						PLpgSQL_stmt_raise		*new;

						new = malloc(sizeof(PLpgSQL_stmt_raise));

						new->cmd_type	= PLPGSQL_STMT_RAISE;
						new->lineno		= plpgsql_yyvsp[-4].ival;
						new->elog_level = plpgsql_yyvsp[-3].ival;
						new->message	= plpgsql_yyvsp[-2].str;
						new->nparams	= plpgsql_yyvsp[-1].intlist.nused;
						new->params		= malloc(sizeof(int) * plpgsql_yyvsp[-1].intlist.nused);
						memcpy(new->params, plpgsql_yyvsp[-1].intlist.nums, sizeof(int) * plpgsql_yyvsp[-1].intlist.nused);

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 98:
#line 1240 "gram.y"
    {
						PLpgSQL_stmt_raise		*new;

						new = malloc(sizeof(PLpgSQL_stmt_raise));

						new->cmd_type	= PLPGSQL_STMT_RAISE;
						new->lineno		= plpgsql_yyvsp[-3].ival;
						new->elog_level = plpgsql_yyvsp[-2].ival;
						new->message	= plpgsql_yyvsp[-1].str;
						new->nparams	= 0;
						new->params		= NULL;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 99:
#line 1257 "gram.y"
    {
						plpgsql_yyval.str = plpgsql_get_string_value();
					}
    break;

  case 100:
#line 1263 "gram.y"
    {
						plpgsql_yyval.ival = ERROR;
					}
    break;

  case 101:
#line 1267 "gram.y"
    {
						plpgsql_yyval.ival = WARNING;
					}
    break;

  case 102:
#line 1271 "gram.y"
    {
						plpgsql_yyval.ival = NOTICE;
					}
    break;

  case 103:
#line 1275 "gram.y"
    {
						plpgsql_yyval.ival = INFO;
					}
    break;

  case 104:
#line 1279 "gram.y"
    {
						plpgsql_yyval.ival = LOG;
					}
    break;

  case 105:
#line 1283 "gram.y"
    {
						plpgsql_yyval.ival = DEBUG2;
					}
    break;

  case 106:
#line 1289 "gram.y"
    {
						if (plpgsql_yyvsp[-1].intlist.nused == plpgsql_yyvsp[-1].intlist.nalloc)
						{
							plpgsql_yyvsp[-1].intlist.nalloc *= 2;
							plpgsql_yyvsp[-1].intlist.nums = repalloc(plpgsql_yyvsp[-1].intlist.nums, sizeof(int) * plpgsql_yyvsp[-1].intlist.nalloc);
						}
						plpgsql_yyvsp[-1].intlist.nums[plpgsql_yyvsp[-1].intlist.nused++] = plpgsql_yyvsp[0].ival;

						plpgsql_yyval.intlist.nalloc = plpgsql_yyvsp[-1].intlist.nalloc;
						plpgsql_yyval.intlist.nused  = plpgsql_yyvsp[-1].intlist.nused;
						plpgsql_yyval.intlist.nums   = plpgsql_yyvsp[-1].intlist.nums;
					}
    break;

  case 107:
#line 1302 "gram.y"
    {
						plpgsql_yyval.intlist.nalloc = 1;
						plpgsql_yyval.intlist.nused  = 1;
						plpgsql_yyval.intlist.nums   = palloc(sizeof(int) * plpgsql_yyval.intlist.nalloc);
						plpgsql_yyval.intlist.nums[0] = plpgsql_yyvsp[0].ival;
					}
    break;

  case 108:
#line 1311 "gram.y"
    {
						plpgsql_yyval.ival = plpgsql_yylval.scalar->dno;
					}
    break;

  case 109:
#line 1317 "gram.y"
    { plpgsql_yyval.stmts = plpgsql_yyvsp[-3].stmts; }
    break;

  case 110:
#line 1321 "gram.y"
    {
						PLpgSQL_stmt_execsql	*new;

						new = malloc(sizeof(PLpgSQL_stmt_execsql));
						new->cmd_type = PLPGSQL_STMT_EXECSQL;
						new->lineno   = plpgsql_yyvsp[0].ival;
						new->sqlstmt  = read_sql_stmt(plpgsql_yyvsp[-1].str);

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 111:
#line 1334 "gram.y"
    {
							PLpgSQL_stmt_dynexecute *new;

							new = malloc(sizeof(PLpgSQL_stmt_dynexecute));
							new->cmd_type = PLPGSQL_STMT_DYNEXECUTE;
							new->lineno   = plpgsql_yyvsp[-1].ival;
							new->query	  = plpgsql_yyvsp[0].expr;

							plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
						}
    break;

  case 112:
#line 1347 "gram.y"
    {
						PLpgSQL_stmt_open *new;
						int				  tok;

						new = malloc(sizeof(PLpgSQL_stmt_open));
						memset(new, 0, sizeof(PLpgSQL_stmt_open));

						new->cmd_type = PLPGSQL_STMT_OPEN;
						new->lineno = plpgsql_yyvsp[-1].ival;
						new->curvar = plpgsql_yyvsp[0].var->varno;

						if (plpgsql_yyvsp[0].var->cursor_explicit_expr == NULL)
						{
						    tok = plpgsql_yylex();

							if (tok != K_FOR)
							{
								plpgsql_error_lineno = plpgsql_yyvsp[-1].ival;
								ereport(ERROR,
										(errcode(ERRCODE_SYNTAX_ERROR),
										 errmsg("syntax error at \"%s\"",
												plpgsql_yytext),
										 errdetail("Expected FOR to open a reference cursor.")));
							}

							tok = plpgsql_yylex();
							switch (tok)
							{
								case K_SELECT:
								case '(':
									plpgsql_push_back_token(tok);
									new->query = read_sql_stmt("");
									break;

								case K_EXECUTE:
									new->dynquery = read_sql_stmt("SELECT ");
									break;

								default:
									plpgsql_error_lineno = plpgsql_yyvsp[-1].ival;
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("syntax error at \"%s\"",
													plpgsql_yytext)));
							}

						}
						else
						{
							if (plpgsql_yyvsp[0].var->cursor_explicit_argrow >= 0)
							{
								char   *cp;

								tok = plpgsql_yylex();

								if (tok != '(')
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("cursor \"%s\" has arguments",
													plpgsql_yyvsp[0].var->refname)));
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
									plpgsql_yyerror("expected \")\"");
								*cp = '\0';
							}
							else
							{
								tok = plpgsql_yylex();

								if (tok == '(')
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("cursor \"%s\" has no arguments",
													plpgsql_yyvsp[0].var->refname)));
								}
								
								if (tok != ';')
								{
									plpgsql_error_lineno = plpgsql_scanner_lineno();
									ereport(ERROR,
											(errcode(ERRCODE_SYNTAX_ERROR),
											 errmsg("syntax error at \"%s\"",
													plpgsql_yytext)));
								}
							}
						}

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 113:
#line 1480 "gram.y"
    {
						PLpgSQL_stmt_fetch *new;

						new = (PLpgSQL_stmt_fetch *)make_fetch_stmt();
						new->curvar = plpgsql_yyvsp[-1].ival;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
						plpgsql_yyval.stmt->lineno = plpgsql_yyvsp[-2].ival;
					}
    break;

  case 114:
#line 1492 "gram.y"
    {
						PLpgSQL_stmt_close *new;

						new = malloc(sizeof(PLpgSQL_stmt_close));
						new->cmd_type = PLPGSQL_STMT_CLOSE;
						new->lineno = plpgsql_yyvsp[-2].ival;
						new->curvar = plpgsql_yyvsp[-1].ival;

						plpgsql_yyval.stmt = (PLpgSQL_stmt *)new;
					}
    break;

  case 115:
#line 1505 "gram.y"
    {
						/* We do not bother building a node for NULL */
						plpgsql_yyval.stmt = NULL;
					}
    break;

  case 116:
#line 1512 "gram.y"
    {
						if (plpgsql_yylval.scalar->dtype != PLPGSQL_DTYPE_VAR)
							plpgsql_yyerror("cursor variable must be a simple variable");

						if (((PLpgSQL_var *) plpgsql_yylval.scalar)->datatype->typoid != REFCURSOROID)
						{
							plpgsql_error_lineno = plpgsql_scanner_lineno();
							ereport(ERROR,
									(errcode(ERRCODE_DATATYPE_MISMATCH),
									 errmsg("\"%s\" must be of type cursor or refcursor",
											((PLpgSQL_var *) plpgsql_yylval.scalar)->refname)));
						}
						plpgsql_yyval.var = (PLpgSQL_var *) plpgsql_yylval.scalar;
					}
    break;

  case 117:
#line 1529 "gram.y"
    {
						if (plpgsql_yylval.scalar->dtype != PLPGSQL_DTYPE_VAR)
							plpgsql_yyerror("cursor variable must be a simple variable");

						if (((PLpgSQL_var *) plpgsql_yylval.scalar)->datatype->typoid != REFCURSOROID)
						{
							plpgsql_error_lineno = plpgsql_scanner_lineno();
							ereport(ERROR,
									(errcode(ERRCODE_DATATYPE_MISMATCH),
									 errmsg("\"%s\" must be of type refcursor",
											((PLpgSQL_var *) plpgsql_yylval.scalar)->refname)));
						}
						plpgsql_yyval.ival = plpgsql_yylval.scalar->dno;
					}
    break;

  case 118:
#line 1546 "gram.y"
    { plpgsql_yyval.str = strdup(plpgsql_yytext); }
    break;

  case 119:
#line 1548 "gram.y"
    { plpgsql_yyval.str = strdup(plpgsql_yytext); }
    break;

  case 120:
#line 1552 "gram.y"
    { plpgsql_yyval.exceptions = NULL; }
    break;

  case 121:
#line 1554 "gram.y"
    { plpgsql_yyval.exceptions = plpgsql_yyvsp[0].exceptions; }
    break;

  case 122:
#line 1558 "gram.y"
    {
								if (plpgsql_yyvsp[-1].exceptions->exceptions_used == plpgsql_yyvsp[-1].exceptions->exceptions_alloc)
								{
									plpgsql_yyvsp[-1].exceptions->exceptions_alloc *= 2;
									plpgsql_yyvsp[-1].exceptions->exceptions = realloc(plpgsql_yyvsp[-1].exceptions->exceptions, sizeof(PLpgSQL_exception *) * plpgsql_yyvsp[-1].exceptions->exceptions_alloc);
								}
								plpgsql_yyvsp[-1].exceptions->exceptions[plpgsql_yyvsp[-1].exceptions->exceptions_used++] = plpgsql_yyvsp[0].exception;

								plpgsql_yyval.exceptions = plpgsql_yyvsp[-1].exceptions;
						}
    break;

  case 123:
#line 1569 "gram.y"
    {
								PLpgSQL_exceptions	*new;

								new = malloc(sizeof(PLpgSQL_exceptions));
								memset(new, 0, sizeof(PLpgSQL_exceptions));

								new->exceptions_alloc = 16;
								new->exceptions_used  = 1;
								new->exceptions = malloc(sizeof(PLpgSQL_exception *) * new->exceptions_alloc);
								new->exceptions[0] = plpgsql_yyvsp[0].exception;

								plpgsql_yyval.exceptions = new;
						}
    break;

  case 124:
#line 1585 "gram.y"
    {
						PLpgSQL_exception *new;

						new = malloc(sizeof(PLpgSQL_exception));
						memset(new, 0, sizeof(PLpgSQL_exception));

						new->lineno     = plpgsql_yyvsp[-3].ival;
						new->conditions = plpgsql_yyvsp[-2].condition;
						new->action	    = plpgsql_yyvsp[0].stmts;

						plpgsql_yyval.exception = new;
					}
    break;

  case 125:
#line 1600 "gram.y"
    {
							PLpgSQL_condition	*old;

							for (old = plpgsql_yyvsp[-2].condition; old->next != NULL; old = old->next)
								/* skip */ ;
							old->next = plpgsql_parse_err_condition(plpgsql_yyvsp[0].str);

							plpgsql_yyval.condition = plpgsql_yyvsp[-2].condition;
						}
    break;

  case 126:
#line 1610 "gram.y"
    {
							plpgsql_yyval.condition = plpgsql_parse_err_condition(plpgsql_yyvsp[0].str);
						}
    break;

  case 127:
#line 1616 "gram.y"
    { plpgsql_yyval.expr = plpgsql_read_expression(';', ";"); }
    break;

  case 128:
#line 1620 "gram.y"
    { plpgsql_yyval.expr = plpgsql_read_expression(']', "]"); }
    break;

  case 129:
#line 1624 "gram.y"
    { plpgsql_yyval.expr = plpgsql_read_expression(K_THEN, "THEN"); }
    break;

  case 130:
#line 1628 "gram.y"
    { plpgsql_yyval.expr = plpgsql_read_expression(K_LOOP, "LOOP"); }
    break;

  case 131:
#line 1632 "gram.y"
    {
						plpgsql_ns_push(NULL);
						plpgsql_yyval.str = NULL;
					}
    break;

  case 132:
#line 1637 "gram.y"
    {
						plpgsql_ns_push(plpgsql_yyvsp[-2].str);
						plpgsql_yyval.str = plpgsql_yyvsp[-2].str;
					}
    break;

  case 133:
#line 1644 "gram.y"
    { plpgsql_yyval.str = NULL; }
    break;

  case 134:
#line 1646 "gram.y"
    {
						char	*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						plpgsql_yyval.str = strdup(name);
						pfree(name);
					}
    break;

  case 135:
#line 1654 "gram.y"
    {
						/* just to give a better error than "syntax error" */
						plpgsql_yyerror("no such label");
					}
    break;

  case 136:
#line 1661 "gram.y"
    { plpgsql_yyval.expr = NULL; }
    break;

  case 137:
#line 1663 "gram.y"
    { plpgsql_yyval.expr = plpgsql_yyvsp[0].expr; }
    break;

  case 138:
#line 1667 "gram.y"
    {
						char	*name;

						plpgsql_convert_ident(plpgsql_yytext, &name, 1);
						plpgsql_yyval.str = strdup(name);
						pfree(name);
					}
    break;

  case 139:
#line 1677 "gram.y"
    {
						plpgsql_yyval.ival = plpgsql_error_lineno = plpgsql_scanner_lineno();
					}
    break;


    }

/* Line 991 of yacc.c.  */
#line 3132 "y.tab.c"

  plpgsql_yyvsp -= plpgsql_yylen;
  plpgsql_yyssp -= plpgsql_yylen;


  PLPGSQL_YY_STACK_PRINT (plpgsql_yyss, plpgsql_yyssp);

  *++plpgsql_yyvsp = plpgsql_yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  plpgsql_yyn = plpgsql_yyr1[plpgsql_yyn];

  plpgsql_yystate = plpgsql_yypgoto[plpgsql_yyn - PLPGSQL_YYNTOKENS] + *plpgsql_yyssp;
  if (0 <= plpgsql_yystate && plpgsql_yystate <= PLPGSQL_YYLAST && plpgsql_yycheck[plpgsql_yystate] == *plpgsql_yyssp)
    plpgsql_yystate = plpgsql_yytable[plpgsql_yystate];
  else
    plpgsql_yystate = plpgsql_yydefgoto[plpgsql_yyn - PLPGSQL_YYNTOKENS];

  goto plpgsql_yynewstate;


/*------------------------------------.
| plpgsql_yyerrlab -- here on detecting error |
`------------------------------------*/
plpgsql_yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!plpgsql_yyerrstatus)
    {
      ++plpgsql_yynerrs;
#if PLPGSQL_YYERROR_VERBOSE
      plpgsql_yyn = plpgsql_yypact[plpgsql_yystate];

      if (PLPGSQL_YYPACT_NINF < plpgsql_yyn && plpgsql_yyn < PLPGSQL_YYLAST)
	{
	  PLPGSQL_YYSIZE_T plpgsql_yysize = 0;
	  int plpgsql_yytype = PLPGSQL_YYTRANSLATE (plpgsql_yychar);
	  char *plpgsql_yymsg;
	  int plpgsql_yyx, plpgsql_yycount;

	  plpgsql_yycount = 0;
	  /* Start PLPGSQL_YYX at -PLPGSQL_YYN if negative to avoid negative indexes in
	     PLPGSQL_YYCHECK.  */
	  for (plpgsql_yyx = plpgsql_yyn < 0 ? -plpgsql_yyn : 0;
	       plpgsql_yyx < (int) (sizeof (plpgsql_yytname) / sizeof (char *)); plpgsql_yyx++)
	    if (plpgsql_yycheck[plpgsql_yyx + plpgsql_yyn] == plpgsql_yyx && plpgsql_yyx != PLPGSQL_YYTERROR)
	      plpgsql_yysize += plpgsql_yystrlen (plpgsql_yytname[plpgsql_yyx]) + 15, plpgsql_yycount++;
	  plpgsql_yysize += plpgsql_yystrlen ("syntax error, unexpected ") + 1;
	  plpgsql_yysize += plpgsql_yystrlen (plpgsql_yytname[plpgsql_yytype]);
	  plpgsql_yymsg = (char *) PLPGSQL_YYSTACK_ALLOC (plpgsql_yysize);
	  if (plpgsql_yymsg != 0)
	    {
	      char *plpgsql_yyp = plpgsql_yystpcpy (plpgsql_yymsg, "syntax error, unexpected ");
	      plpgsql_yyp = plpgsql_yystpcpy (plpgsql_yyp, plpgsql_yytname[plpgsql_yytype]);

	      if (plpgsql_yycount < 5)
		{
		  plpgsql_yycount = 0;
		  for (plpgsql_yyx = plpgsql_yyn < 0 ? -plpgsql_yyn : 0;
		       plpgsql_yyx < (int) (sizeof (plpgsql_yytname) / sizeof (char *));
		       plpgsql_yyx++)
		    if (plpgsql_yycheck[plpgsql_yyx + plpgsql_yyn] == plpgsql_yyx && plpgsql_yyx != PLPGSQL_YYTERROR)
		      {
			const char *plpgsql_yyq = ! plpgsql_yycount ? ", expecting " : " or ";
			plpgsql_yyp = plpgsql_yystpcpy (plpgsql_yyp, plpgsql_yyq);
			plpgsql_yyp = plpgsql_yystpcpy (plpgsql_yyp, plpgsql_yytname[plpgsql_yyx]);
			plpgsql_yycount++;
		      }
		}
	      plpgsql_yyerror (plpgsql_yymsg);
	      PLPGSQL_YYSTACK_FREE (plpgsql_yymsg);
	    }
	  else
	    plpgsql_yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* PLPGSQL_YYERROR_VERBOSE */
	plpgsql_yyerror ("syntax error");
    }



  if (plpgsql_yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (plpgsql_yychar == PLPGSQL_YYEOF)
        {
	  /* Pop the error token.  */
          PLPGSQL_YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (plpgsql_yyss < plpgsql_yyssp)
	    {
	      PLPGSQL_YYDSYMPRINTF ("Error: popping", plpgsql_yystos[*plpgsql_yyssp], plpgsql_yyvsp, plpgsql_yylsp);
	      plpgsql_yydestruct (plpgsql_yystos[*plpgsql_yyssp], plpgsql_yyvsp);
	      PLPGSQL_YYPOPSTACK;
	    }
	  PLPGSQL_YYABORT;
        }

      PLPGSQL_YYDSYMPRINTF ("Error: discarding", plpgsql_yytoken, &plpgsql_yylval, &plpgsql_yylloc);
      plpgsql_yydestruct (plpgsql_yytoken, &plpgsql_yylval);
      plpgsql_yychar = PLPGSQL_YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto plpgsql_yyerrlab2;


/*----------------------------------------------------.
| plpgsql_yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
plpgsql_yyerrlab1:

  /* Suppress GCC warning that plpgsql_yyerrlab1 is unused when no action
     invokes PLPGSQL_YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
  __attribute__ ((__unused__))
#endif


  goto plpgsql_yyerrlab2;


/*---------------------------------------------------------------.
| plpgsql_yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
plpgsql_yyerrlab2:
  plpgsql_yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      plpgsql_yyn = plpgsql_yypact[plpgsql_yystate];
      if (plpgsql_yyn != PLPGSQL_YYPACT_NINF)
	{
	  plpgsql_yyn += PLPGSQL_YYTERROR;
	  if (0 <= plpgsql_yyn && plpgsql_yyn <= PLPGSQL_YYLAST && plpgsql_yycheck[plpgsql_yyn] == PLPGSQL_YYTERROR)
	    {
	      plpgsql_yyn = plpgsql_yytable[plpgsql_yyn];
	      if (0 < plpgsql_yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (plpgsql_yyssp == plpgsql_yyss)
	PLPGSQL_YYABORT;

      PLPGSQL_YYDSYMPRINTF ("Error: popping", plpgsql_yystos[*plpgsql_yyssp], plpgsql_yyvsp, plpgsql_yylsp);
      plpgsql_yydestruct (plpgsql_yystos[plpgsql_yystate], plpgsql_yyvsp);
      plpgsql_yyvsp--;
      plpgsql_yystate = *--plpgsql_yyssp;

      PLPGSQL_YY_STACK_PRINT (plpgsql_yyss, plpgsql_yyssp);
    }

  if (plpgsql_yyn == PLPGSQL_YYFINAL)
    PLPGSQL_YYACCEPT;

  PLPGSQL_YYDPRINTF ((stderr, "Shifting error token, "));

  *++plpgsql_yyvsp = plpgsql_yylval;


  plpgsql_yystate = plpgsql_yyn;
  goto plpgsql_yynewstate;


/*-------------------------------------.
| plpgsql_yyacceptlab -- PLPGSQL_YYACCEPT comes here.  |
`-------------------------------------*/
plpgsql_yyacceptlab:
  plpgsql_yyresult = 0;
  goto plpgsql_yyreturn;

/*-----------------------------------.
| plpgsql_yyabortlab -- PLPGSQL_YYABORT comes here.  |
`-----------------------------------*/
plpgsql_yyabortlab:
  plpgsql_yyresult = 1;
  goto plpgsql_yyreturn;

#ifndef plpgsql_yyoverflow
/*----------------------------------------------.
| plpgsql_yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
plpgsql_yyoverflowlab:
  plpgsql_yyerror ("parser stack overflow");
  plpgsql_yyresult = 2;
  /* Fall through.  */
#endif

plpgsql_yyreturn:
#ifndef plpgsql_yyoverflow
  if (plpgsql_yyss != plpgsql_yyssa)
    PLPGSQL_YYSTACK_FREE (plpgsql_yyss);
#endif
  return plpgsql_yyresult;
}


#line 1682 "gram.y"



PLpgSQL_expr *
plpgsql_read_expression(int until, const char *expected)
{
	return read_sql_construct(until, 0, expected, true, "SELECT ", NULL);
}

static PLpgSQL_expr *
read_sql_stmt(const char *sqlstart)
{
	return read_sql_construct(';', 0, ";", false, sqlstart, NULL);
}

/*
 * Read a SQL construct and build a PLpgSQL_expr for it.
 *
 * until:		token code for expected terminator
 * until2:		token code for alternate terminator (pass 0 if none)
 * expected:	text to use in complaining that terminator was not found
 * isexpression: whether to say we're reading an "expression" or a "statement"
 * sqlstart:	text to prefix to the accumulated SQL text
 * endtoken:	if not NULL, ending token is stored at *endtoken
 *				(this is only interesting if until2 isn't zero)
 */
static PLpgSQL_expr *
read_sql_construct(int until,
				   int until2,
				   const char *expected,
				   bool isexpression,
				   const char *sqlstart,
				   int *endtoken)
{
	int					tok;
	int					lno;
	PLpgSQL_dstring		ds;
	int					parenlevel = 0;
	int					nparams = 0;
	int					params[1024];
	char				buf[32];
	PLpgSQL_expr		*expr;

	lno = plpgsql_scanner_lineno();
	plpgsql_dstring_init(&ds);
	plpgsql_dstring_append(&ds, sqlstart);

	for (;;)
	{
		tok = plpgsql_yylex();
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

		/* Check for array overflow */
		if (nparams >= 1024)
		{
			plpgsql_error_lineno = lno;
			ereport(ERROR,
					(errcode(ERRCODE_PROGRAM_LIMIT_EXCEEDED),
					 errmsg("too many variables specified in SQL statement")));
		}

		switch (tok)
		{
			case T_SCALAR:
				params[nparams] = plpgsql_yylval.scalar->dno;
				snprintf(buf, sizeof(buf), " $%d ", ++nparams);
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_ROW:
				params[nparams] = plpgsql_yylval.row->rowno;
				snprintf(buf, sizeof(buf), " $%d ", ++nparams);
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_RECORD:
				params[nparams] = plpgsql_yylval.rec->recno;
				snprintf(buf, sizeof(buf), " $%d ", ++nparams);
				plpgsql_dstring_append(&ds, buf);
				break;

			default:
				plpgsql_dstring_append(&ds, plpgsql_yytext);
				break;
		}
	}

	if (endtoken)
		*endtoken = tok;

	expr = malloc(sizeof(PLpgSQL_expr) + sizeof(int) * nparams - sizeof(int));
	expr->dtype			= PLPGSQL_DTYPE_EXPR;
	expr->query			= strdup(plpgsql_dstring_get(&ds));
	expr->plan			= NULL;
	expr->nparams		= nparams;
	while(nparams-- > 0)
		expr->params[nparams] = params[nparams];
	plpgsql_dstring_free(&ds);

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
	if (tok == PLPGSQL_YYEMPTY)
		tok = plpgsql_yylex();

	if (tok == T_DTYPE)
	{
		/* lexer found word%TYPE and did its thing already */
		return plpgsql_yylval.dtype;
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
		plpgsql_dstring_append(&ds, plpgsql_yytext);

		tok = plpgsql_yylex();
	}

	plpgsql_push_back_token(tok);

	plpgsql_error_lineno = lno;	/* in case of error in parse_datatype */

	result = plpgsql_parse_datatype(plpgsql_dstring_get(&ds));

	plpgsql_dstring_free(&ds);

	return result;
}


static PLpgSQL_stmt *
make_select_stmt(void)
{
	PLpgSQL_dstring		ds;
	int					nparams = 0;
	int					params[1024];
	char				buf[32];
	PLpgSQL_expr		*expr;
	PLpgSQL_row			*row = NULL;
	PLpgSQL_rec			*rec = NULL;
	int					tok = 0;
	int					have_nexttok = 0;
	int					have_into = 0;

	plpgsql_dstring_init(&ds);
	plpgsql_dstring_append(&ds, "SELECT ");

	while(1)
	{
		if (!have_nexttok)
			tok = plpgsql_yylex();
		have_nexttok = 0;
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
			tok = plpgsql_yylex();
			switch (tok)
			{
				case T_ROW:
					row = plpgsql_yylval.row;
					have_into = 1;
					break;

				case T_RECORD:
					rec = plpgsql_yylval.rec;
					have_into = 1;
					break;

				case T_SCALAR:
				{
					int				nfields = 1;
					char			*fieldnames[1024];
					int				varnos[1024];

					check_assignable(plpgsql_yylval.scalar);
					fieldnames[0] = strdup(plpgsql_yytext);
					varnos[0]	  = plpgsql_yylval.scalar->dno;

					while ((tok = plpgsql_yylex()) == ',')
					{
						/* Check for array overflow */
						if (nfields >= 1024)
						{
							plpgsql_error_lineno = plpgsql_scanner_lineno();
							ereport(ERROR,
									(errcode(ERRCODE_PROGRAM_LIMIT_EXCEEDED),
									 errmsg("too many INTO variables specified")));
						}

						tok = plpgsql_yylex();
						switch(tok)
						{
							case T_SCALAR:
								check_assignable(plpgsql_yylval.scalar);
								fieldnames[nfields] = strdup(plpgsql_yytext);
								varnos[nfields++]	= plpgsql_yylval.scalar->dno;
								break;

							default:
								plpgsql_error_lineno = plpgsql_scanner_lineno();
								ereport(ERROR,
										(errcode(ERRCODE_SYNTAX_ERROR),
										 errmsg("\"%s\" is not a variable",
												plpgsql_yytext)));
						}
					}
					have_nexttok = 1;

					row = malloc(sizeof(PLpgSQL_row));
					row->dtype = PLPGSQL_DTYPE_ROW;
					row->refname = strdup("*internal*");
					row->lineno = plpgsql_scanner_lineno();
					row->rowtupdesc = NULL;
					row->nfields = nfields;
					row->fieldnames = malloc(sizeof(char *) * nfields);
					row->varnos = malloc(sizeof(int) * nfields);
					while (--nfields >= 0)
					{
						row->fieldnames[nfields] = fieldnames[nfields];
						row->varnos[nfields] = varnos[nfields];
					}

					plpgsql_adddatum((PLpgSQL_datum *)row);

					have_into = 1;
				}
				break;

				default:
					/* Treat the INTO as non-special */
					plpgsql_dstring_append(&ds, " INTO ");
					have_nexttok = 1;
					break;
			}
			continue;
		}

		if (plpgsql_SpaceScanned)
			plpgsql_dstring_append(&ds, " ");

		/* Check for array overflow */
		if (nparams >= 1024)
		{
			plpgsql_error_lineno = plpgsql_scanner_lineno();
			ereport(ERROR,
					(errcode(ERRCODE_PROGRAM_LIMIT_EXCEEDED),
					 errmsg("too many variables specified in SQL statement")));
		}

		switch (tok)
		{
			case T_SCALAR:
				params[nparams] = plpgsql_yylval.scalar->dno;
				snprintf(buf, sizeof(buf), " $%d ", ++nparams);
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_ROW:
				params[nparams] = plpgsql_yylval.row->rowno;
				snprintf(buf, sizeof(buf), " $%d ", ++nparams);
				plpgsql_dstring_append(&ds, buf);
				break;

			case T_RECORD:
				params[nparams] = plpgsql_yylval.rec->recno;
				snprintf(buf, sizeof(buf), " $%d ", ++nparams);
				plpgsql_dstring_append(&ds, buf);
				break;

			default:
				plpgsql_dstring_append(&ds, plpgsql_yytext);
				break;
		}
	}

	expr = malloc(sizeof(PLpgSQL_expr) + sizeof(int) * nparams - sizeof(int));
	expr->dtype			= PLPGSQL_DTYPE_EXPR;
	expr->query			= strdup(plpgsql_dstring_get(&ds));
	expr->plan			= NULL;
	expr->nparams		= nparams;
	while(nparams-- > 0)
		expr->params[nparams] = params[nparams];
	plpgsql_dstring_free(&ds);

	if (have_into)
	{
		PLpgSQL_stmt_select *select;

		select = malloc(sizeof(PLpgSQL_stmt_select));
		memset(select, 0, sizeof(PLpgSQL_stmt_select));
		select->cmd_type = PLPGSQL_STMT_SELECT;
		select->rec		 = rec;
		select->row		 = row;
		select->query	 = expr;

		return (PLpgSQL_stmt *)select;
	}
	else
	{
		PLpgSQL_stmt_execsql *execsql;

		execsql = malloc(sizeof(PLpgSQL_stmt_execsql));
		execsql->cmd_type = PLPGSQL_STMT_EXECSQL;
		execsql->sqlstmt  = expr;

		return (PLpgSQL_stmt *)execsql;
	}
}


static PLpgSQL_stmt *
make_fetch_stmt(void)
{
	int					tok;
	PLpgSQL_row		   *row = NULL;
	PLpgSQL_rec		   *rec = NULL;
	PLpgSQL_stmt_fetch *fetch;
	int					have_nexttok = 0;

	/* We have already parsed everything through the INTO keyword */

	tok = plpgsql_yylex();
	switch (tok)
	{
		case T_ROW:
			row = plpgsql_yylval.row;
			break;

		case T_RECORD:
			rec = plpgsql_yylval.rec;
			break;

		case T_SCALAR:
			{
				int				nfields = 1;
				char			*fieldnames[1024];
				int				varnos[1024];

				check_assignable(plpgsql_yylval.scalar);
				fieldnames[0] = strdup(plpgsql_yytext);
				varnos[0]	  = plpgsql_yylval.scalar->dno;

				while ((tok = plpgsql_yylex()) == ',')
				{
					/* Check for array overflow */
					if (nfields >= 1024)
					{
						plpgsql_error_lineno = plpgsql_scanner_lineno();
						ereport(ERROR,
								(errcode(ERRCODE_PROGRAM_LIMIT_EXCEEDED),
								 errmsg("too many INTO variables specified")));
					}

					tok = plpgsql_yylex();
					switch(tok)
					{
						case T_SCALAR:
							check_assignable(plpgsql_yylval.scalar);
							fieldnames[nfields] = strdup(plpgsql_yytext);
							varnos[nfields++]	= plpgsql_yylval.scalar->dno;
							break;

						default:
							plpgsql_error_lineno = plpgsql_scanner_lineno();
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("\"%s\" is not a variable",
											plpgsql_yytext)));
					}
				}
				have_nexttok = 1;

				row = malloc(sizeof(PLpgSQL_row));
				row->dtype = PLPGSQL_DTYPE_ROW;
				row->refname = strdup("*internal*");
				row->lineno = plpgsql_scanner_lineno();
				row->rowtupdesc = NULL;
				row->nfields = nfields;
				row->fieldnames = malloc(sizeof(char *) * nfields);
				row->varnos = malloc(sizeof(int) * nfields);
				while (--nfields >= 0)
				{
					row->fieldnames[nfields] = fieldnames[nfields];
					row->varnos[nfields] = varnos[nfields];
				}

				plpgsql_adddatum((PLpgSQL_datum *)row);
			}
			break;

		default:
			plpgsql_yyerror("syntax error");
	}

	if (!have_nexttok)
		tok = plpgsql_yylex();

	if (tok != ';')
		plpgsql_yyerror("syntax error");

	fetch = malloc(sizeof(PLpgSQL_stmt_select));
	memset(fetch, 0, sizeof(PLpgSQL_stmt_fetch));
	fetch->cmd_type = PLPGSQL_STMT_FETCH;
	fetch->rec		 = rec;
	fetch->row		 = row;

	return (PLpgSQL_stmt *)fetch;
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
			plpgsql_yyerror("cannot assign to tg_argv");
			break;
		default:
			elog(ERROR, "unrecognized dtype: %d", datum->dtype);
			break;
	}
}

#include "pl_scan.c"

