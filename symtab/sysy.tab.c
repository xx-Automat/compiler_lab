
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "sysy.y"

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
extern void yyerror(const char* fmt, ...);
extern void display(struct node*,int);
extern int yylex();
extern char filename[50];



/* Line 189 of yacc.c  */
#line 89 "sysy.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     ID = 259,
     RELOP = 260,
     TYPE = 261,
     VOID = 262,
     FLOAT = 263,
     CONST = 264,
     RETURN = 265,
     IF = 266,
     ELSE = 267,
     FOR = 268,
     WHILE = 269,
     DO = 270,
     BREAK = 271,
     CONTINUE = 272,
     LP = 273,
     RP = 274,
     LB = 275,
     RB = 276,
     LC = 277,
     RC = 278,
     COMMA = 279,
     SEMICOLON = 280,
     QUESTION = 281,
     COLON = 282,
     NOT = 283,
     ASSIGN = 284,
     MINUS = 285,
     ADD = 286,
     MUL = 287,
     DIV = 288,
     MOD = 289,
     AND = 290,
     OR = 291,
     UMINUS = 292,
     SELF_ADD = 293,
     SELF_MINUS = 294,
     LOWER_THEN_ELSE = 295
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "sysy.y"

  int    type_int;
  float  type_float;
  char   type_id[32];
  struct node *ptr;



/* Line 214 of yacc.c  */
#line 174 "sysy.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "sysy.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    18,    22,    26,
      29,    31,    33,    35,    39,    42,    43,    48,    50,    54,
      59,    63,    65,    69,    72,    76,    77,    80,    83,    86,
      88,    92,    95,   101,   109,   115,   118,   121,   125,   133,
     134,   136,   140,   142,   146,   150,   154,   158,   162,   166,
     170,   174,   178,   182,   185,   188,   192,   195,   198,   203,
     207,   209,   211,   213,   217
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    43,    -1,    -1,    44,    43,    -1,    45,
      47,    25,    -1,     9,    45,    47,    25,    -1,    45,    51,
      54,    -1,    46,    51,    54,    -1,     1,    25,    -1,     6,
      -1,     7,    -1,    50,    -1,    50,    24,    47,    -1,     4,
      49,    -1,    -1,    20,    61,    21,    49,    -1,    48,    -1,
       4,    29,    61,    -1,     4,    18,    52,    19,    -1,     4,
      18,    19,    -1,    53,    -1,    53,    24,    52,    -1,    45,
      50,    -1,    22,    55,    23,    -1,    -1,    56,    55,    -1,
      59,    55,    -1,    61,    25,    -1,    54,    -1,    10,    61,
      25,    -1,    10,    25,    -1,    11,    18,    61,    19,    56,
      -1,    11,    18,    61,    19,    56,    12,    56,    -1,    14,
      18,    61,    19,    56,    -1,    17,    25,    -1,    16,    25,
      -1,    13,    57,    56,    -1,    18,    58,    25,    58,    25,
      58,    19,    -1,    -1,    61,    -1,    45,    60,    25,    -1,
      50,    -1,    50,    24,    60,    -1,    61,    29,    61,    -1,
      61,    35,    61,    -1,    61,    36,    61,    -1,    61,     5,
      61,    -1,    61,    31,    61,    -1,    61,    30,    61,    -1,
      61,    32,    61,    -1,    61,    33,    61,    -1,    61,    34,
      61,    -1,    48,    38,    -1,    48,    39,    -1,    18,    61,
      19,    -1,    30,    61,    -1,    28,    61,    -1,     4,    18,
      62,    19,    -1,     4,    18,    19,    -1,    48,    -1,     3,
      -1,     8,    -1,    61,    24,    62,    -1,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    54,    55,    58,    59,    60,    61,    62,
      65,    68,    70,    71,    74,    77,    78,    81,    82,    85,
      86,    88,    89,    91,    94,    96,    97,    98,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   112,   115,
     116,   119,   121,   122,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   146,   147
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "RELOP", "TYPE", "VOID",
  "FLOAT", "CONST", "RETURN", "IF", "ELSE", "FOR", "WHILE", "DO", "BREAK",
  "CONTINUE", "LP", "RP", "LB", "RB", "LC", "RC", "COMMA", "SEMICOLON",
  "QUESTION", "COLON", "NOT", "ASSIGN", "MINUS", "ADD", "MUL", "DIV",
  "MOD", "AND", "OR", "UMINUS", "SELF_ADD", "SELF_MINUS",
  "LOWER_THEN_ELSE", "$accept", "program", "ExtDefList", "ExtDef",
  "Specifier", "VoidType", "ExtDecList", "Term", "Arrays", "VarDec",
  "FuncDec", "VarList", "ParamDec", "CompSt", "StmDefList", "Stmt",
  "ForArgs", "ForArg", "Def", "DecList", "Exp", "Args", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    46,    47,    47,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    54,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    58,
      58,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     4,     3,     3,     2,
       1,     1,     1,     3,     2,     0,     4,     1,     3,     4,
       3,     1,     3,     2,     3,     0,     2,     2,     2,     1,
       3,     2,     5,     7,     5,     2,     2,     3,     7,     0,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     2,     2,     4,     3,
       1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    10,    11,     0,     0,     2,     0,     0,     0,
       9,     0,     1,     4,    15,     0,    17,    12,     0,     0,
       0,    15,     0,     0,     0,     0,    14,     5,     0,    25,
       7,     8,     6,    20,     0,     0,    21,    61,    15,    62,
       0,     0,     0,    60,     0,    18,    13,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    25,    25,     0,    23,
      19,     0,     0,     0,    57,    56,    53,    54,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,    39,     0,     0,    36,    35,    42,     0,    24,    26,
      27,    28,    22,    59,    64,     0,    55,    47,    16,    44,
      49,    48,    50,    51,    52,    45,    46,    30,     0,     0,
      40,    37,     0,     0,    41,     0,    58,     0,    39,     0,
      43,    63,    32,     0,    34,     0,    39,    33,     0,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,    53,     9,    15,    43,    26,    17,
      18,    35,    36,    54,    55,    56,    82,   109,    57,    87,
      58,    95
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -90
static const yytype_int16 yypact[] =
{
      33,   -15,   -90,   -90,     6,    16,   -90,    33,    21,    31,
     -90,    37,   -90,   -90,    -5,    25,   -90,    61,    44,    68,
      44,   -11,    63,    -2,   269,   269,   -90,   -90,    37,   216,
     -90,   -90,   -90,   -90,    37,    70,    66,   -90,    28,   -90,
     269,   269,   269,    -7,    42,    96,   -90,   253,    73,    75,
      76,    72,    77,    37,   -90,    80,   216,   216,    79,   -90,
     -90,     6,   266,    87,   -90,    96,   -90,   -90,   269,    78,
     269,   269,   269,   269,   269,   269,   269,   269,   -90,   119,
     269,   269,   237,   269,   -90,   -90,    71,   108,   -90,   -90,
     -90,   -90,   -90,   -90,   132,    81,   -90,    49,   -90,   152,
      27,    27,   -90,   -90,    27,   184,   184,   -90,   140,   109,
      96,   -90,   172,    37,   -90,   269,   -90,   237,   269,   237,
     -90,   -90,   123,   111,   -90,   237,   269,   -90,   120,   -90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   131,   -90,     7,   -90,    -9,    -8,    74,   -26,
     133,    85,   -90,    47,    13,   -81,   -90,   -89,   -90,    34,
     -19,    26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      16,   111,    22,    16,     2,    44,    45,     8,    59,    24,
      10,    11,     2,    23,     8,    24,    12,    33,    25,    46,
      16,    63,    64,    65,    25,    14,    16,    86,    79,   123,
      34,    66,    67,    -3,     1,    19,   122,   128,   124,     2,
       3,    21,     4,    94,   127,    16,    62,    68,    24,    97,
      27,    99,   100,   101,   102,   103,   104,   105,   106,    73,
      74,   108,   110,    69,   112,    30,    29,    31,    34,    89,
      90,    70,    71,    72,    73,    74,    75,    76,    77,    71,
      72,    73,    74,    75,    68,    28,    23,    86,    32,    60,
      61,    80,    68,    81,    83,   113,    94,    84,    24,   110,
     116,    68,    85,    88,    91,    16,    96,   110,    70,    71,
      72,    73,    74,    75,    76,    77,    70,    71,    72,    73,
      74,    75,    76,    77,    68,    70,    71,    72,    73,    74,
      75,    76,    77,   114,   118,   125,   126,    68,    13,   129,
       0,   121,    20,    98,   107,    68,    92,   120,    70,    71,
      72,    73,    74,    75,    76,    77,   115,    68,     0,   117,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    70,
      71,    72,    73,    74,    75,    76,    77,    68,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    68,
       0,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    37,
      38,     0,     2,     0,    39,     0,    47,    48,     0,    49,
      50,     0,    51,    52,    40,     0,     0,     0,    29,     0,
      37,    38,     0,     0,    41,    39,    42,    47,    48,     0,
      49,    50,     0,    51,    52,    40,    37,    38,     0,    29,
       0,    39,     0,     0,     0,    41,     0,    42,     0,    37,
      38,    40,    37,    38,    39,     0,     0,    39,    78,     0,
       0,    41,     0,    42,    40,    93,     0,    40,     0,     0,
       0,     0,     0,     0,    41,     0,    42,    41,     0,    42
};

static const yytype_int8 yycheck[] =
{
       8,    82,    11,    11,     6,    24,    25,     0,    34,    20,
      25,     4,     6,    18,     7,    20,     0,    19,    29,    28,
      28,    40,    41,    42,    29,     4,    34,    53,    47,   118,
      23,    38,    39,     0,     1,     4,   117,   126,   119,     6,
       7,     4,     9,    62,   125,    53,    18,     5,    20,    68,
      25,    70,    71,    72,    73,    74,    75,    76,    77,    32,
      33,    80,    81,    21,    83,    18,    22,    20,    61,    56,
      57,    29,    30,    31,    32,    33,    34,    35,    36,    30,
      31,    32,    33,    34,     5,    24,    18,   113,    25,    19,
      24,    18,     5,    18,    18,    24,   115,    25,    20,   118,
      19,     5,    25,    23,    25,   113,    19,   126,    29,    30,
      31,    32,    33,    34,    35,    36,    29,    30,    31,    32,
      33,    34,    35,    36,     5,    29,    30,    31,    32,    33,
      34,    35,    36,    25,    25,    12,    25,     5,     7,    19,
      -1,   115,     9,    69,    25,     5,    61,   113,    29,    30,
      31,    32,    33,    34,    35,    36,    24,     5,    -1,    19,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    29,
      30,    31,    32,    33,    34,    35,    36,     5,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,     5,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,     3,
       4,    -1,     6,    -1,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    -1,
       3,     4,    -1,    -1,    28,     8,    30,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,     3,     4,    -1,    22,
      -1,     8,    -1,    -1,    -1,    28,    -1,    30,    -1,     3,
       4,    18,     3,     4,     8,    -1,    -1,     8,    25,    -1,
      -1,    28,    -1,    30,    18,    19,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    28,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,     7,     9,    42,    43,    44,    45,    46,
      25,    45,     0,    43,     4,    47,    48,    50,    51,     4,
      51,     4,    47,    18,    20,    29,    49,    25,    24,    22,
      54,    54,    25,    19,    45,    52,    53,     3,     4,     8,
      18,    28,    30,    48,    61,    61,    47,    10,    11,    13,
      14,    16,    17,    45,    54,    55,    56,    59,    61,    50,
      19,    24,    18,    61,    61,    61,    38,    39,     5,    21,
      29,    30,    31,    32,    33,    34,    35,    36,    25,    61,
      18,    18,    57,    18,    25,    25,    50,    60,    23,    55,
      55,    25,    52,    19,    61,    62,    19,    61,    49,    61,
      61,    61,    61,    61,    61,    61,    61,    25,    61,    58,
      61,    56,    61,    24,    25,    24,    19,    19,    25,    19,
      60,    62,    56,    58,    56,    12,    25,    56,    58,    19
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

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
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 51 "sysy.y"
    {/*printf("CompUnit\n"); display($1,3);*/ ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 54 "sysy.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 55 "sysy.y"
    {(yyval.ptr)=mknode(EXT_DEF_LIST,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 58 "sysy.y"
    {(yyval.ptr)=mknode(EXT_VAR_DEF,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),NULL,yylineno);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 59 "sysy.y"
    {(yyval.ptr)=mknode(EXT_CONST_VAR_DEF,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr),NULL,yylineno);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 60 "sysy.y"
    {(yyval.ptr)=mknode(FUNC_DEF,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].ptr),yylineno);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 61 "sysy.y"
    {(yyval.ptr)=mknode(FUNC_DEF,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].ptr),yylineno);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 62 "sysy.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 65 "sysy.y"
    {(yyval.ptr)=mknode(TYPE,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));(yyval.ptr)->type=!strcmp((yyvsp[(1) - (1)].type_id),"int")?INT:FLOAT;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 68 "sysy.y"
    {(yyval.ptr)=mknode(TYPE,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));(yyval.ptr)->type=VOID;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 70 "sysy.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 71 "sysy.y"
    {(yyval.ptr)=mknode(EXT_DEC_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 74 "sysy.y"
    {(yyval.ptr)=mknode(TERM,(yyvsp[(2) - (2)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (2)].type_id));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 77 "sysy.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 78 "sysy.y"
    {(yyval.ptr)=mknode(ARRAYS,(yyvsp[(2) - (4)].ptr),(yyvsp[(4) - (4)].ptr),NULL,yylineno);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 81 "sysy.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 82 "sysy.y"
    {(yyval.ptr)=mknode(VAR_DEC,(yyvsp[(3) - (3)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 85 "sysy.y"
    {(yyval.ptr)=mknode(FUNC_DEC,(yyvsp[(3) - (4)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 86 "sysy.y"
    {(yyval.ptr)=mknode(FUNC_DEC,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 88 "sysy.y"
    {(yyval.ptr)=mknode(PARAM_LIST,(yyvsp[(1) - (1)].ptr),NULL,NULL,yylineno);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 89 "sysy.y"
    {(yyval.ptr)=mknode(PARAM_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 91 "sysy.y"
    {(yyval.ptr)=mknode(PARAM_DEC,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 94 "sysy.y"
    {(yyval.ptr)=mknode(COMP_STM,(yyvsp[(2) - (3)].ptr),NULL,NULL,yylineno);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 96 "sysy.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 97 "sysy.y"
    {(yyval.ptr)=mknode(STM_DEF_LIST,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 98 "sysy.y"
    {(yyval.ptr)=mknode(STM_DEF_LIST,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 100 "sysy.y"
    {(yyval.ptr)=mknode(EXP_STMT,(yyvsp[(1) - (2)].ptr),NULL,NULL,yylineno);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 101 "sysy.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 102 "sysy.y"
    {(yyval.ptr)=mknode(RETURN,(yyvsp[(2) - (3)].ptr),NULL,NULL,yylineno);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 103 "sysy.y"
    {(yyval.ptr)=mknode(RETURN,NULL,NULL,NULL,yylineno);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 104 "sysy.y"
    {(yyval.ptr)=mknode(IF_THEN,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr),NULL,yylineno);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 105 "sysy.y"
    {(yyval.ptr)=mknode(IF_THEN_ELSE,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr),yylineno);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 106 "sysy.y"
    {(yyval.ptr)=mknode(WHILE,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr),NULL,yylineno);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 107 "sysy.y"
    {(yyval.ptr)=mknode(CONTINUE_STMT,NULL,NULL,NULL,yylineno);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 108 "sysy.y"
    {(yyval.ptr)=mknode(BREAK_STMT,NULL,NULL,NULL,yylineno);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 109 "sysy.y"
    {(yyval.ptr)=mknode(FOR_STMT,(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 112 "sysy.y"
    {(yyval.ptr)=mknode(FOR_ARGS,(yyvsp[(2) - (7)].ptr),(yyvsp[(4) - (7)].ptr),(yyvsp[(6) - (7)].ptr),yylineno);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 115 "sysy.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 116 "sysy.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 119 "sysy.y"
    {(yyval.ptr)=mknode(VAR_DEF,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),NULL,yylineno);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 121 "sysy.y"
    {(yyval.ptr)=mknode(DEC_LIST,(yyvsp[(1) - (1)].ptr),NULL,NULL,yylineno);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 122 "sysy.y"
    {(yyval.ptr)=mknode(DEC_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 125 "sysy.y"
    {(yyval.ptr)=mknode(ASSIGN,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"=");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 126 "sysy.y"
    {(yyval.ptr)=mknode(AND,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"&&");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 127 "sysy.y"
    {(yyval.ptr)=mknode(OR,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"||");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 128 "sysy.y"
    {(yyval.ptr)=mknode(RELOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (3)].type_id));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 129 "sysy.y"
    {(yyval.ptr)=mknode(ADD,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"+");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 130 "sysy.y"
    {(yyval.ptr)=mknode(MINUS,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"-");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 131 "sysy.y"
    {(yyval.ptr)=mknode(MUL,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"*");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 132 "sysy.y"
    {(yyval.ptr)=mknode(DIV,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"/");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 133 "sysy.y"
    {(yyval.ptr)=mknode(MOD,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"%");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 134 "sysy.y"
    {(yyval.ptr)=mknode(SELF_ADD_EXP,(yyvsp[(1) - (2)].ptr),NULL,NULL,yylineno);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 135 "sysy.y"
    {(yyval.ptr)=mknode(SELF_MINUS_EXP,(yyvsp[(1) - (2)].ptr),NULL,NULL,yylineno);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 136 "sysy.y"
    {(yyval.ptr)=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 137 "sysy.y"
    {(yyval.ptr)=mknode(UMINUS,(yyvsp[(2) - (2)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"-");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 138 "sysy.y"
    {(yyval.ptr)=mknode(NOT,(yyvsp[(2) - (2)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"!");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 139 "sysy.y"
    {(yyval.ptr)=mknode(FUNC_CALL,(yyvsp[(3) - (4)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 140 "sysy.y"
    {(yyval.ptr)=mknode(FUNC_CALL,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 141 "sysy.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 142 "sysy.y"
    {(yyval.ptr)=mknode(INT,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 143 "sysy.y"
    {(yyval.ptr)=mknode(FLOAT,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 146 "sysy.y"
    {(yyval.ptr)=mknode(ARGS,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 147 "sysy.y"
    {(yyval.ptr)=mknode(ARGS,(yyvsp[(1) - (1)].ptr),NULL,NULL,yylineno);;}
    break;



/* Line 1455 of yacc.c  */
#line 2012 "sysy.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 150 "sysy.y"


int main(int argc, char *argv[]) {
  yyin = fopen(argv[1],"r");
  if (!yyin) return 0;
  yylineno = 1;
  strcpy(filename,strrchr(argv[1],'/')+1);
  yyparse();
  return 0;
}

#include<stdarg.h>

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "%s:%d:%d ", filename,yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}	
