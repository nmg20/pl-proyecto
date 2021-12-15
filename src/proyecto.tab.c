/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "proyecto.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yylex();
extern int yylineno;
void yyerror(char const *message);

#line 75 "proyecto.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "proyecto.tab.h".  */
#ifndef YY_YY_PROYECTO_TAB_H_INCLUDED
# define YY_YY_PROYECTO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOT = 258,
    SLASH = 259,
    CM = 260,
    PO = 261,
    PC = 262,
    BO = 263,
    BC = 264,
    TO = 265,
    TC = 266,
    EQ = 267,
    PIPE = 268,
    AR = 269,
    L_SEP = 270,
    WC = 271,
    PLUS = 272,
    MINUS = 273,
    MULT = 274,
    DIV1 = 275,
    DIV2 = 276,
    REM = 277,
    MOD_CALL = 278,
    ALIAS = 279,
    IF = 280,
    ELSE = 281,
    COND = 282,
    CASE = 283,
    GUARD = 284,
    IF1 = 285,
    IF2 = 286,
    STR = 287,
    MOD = 288,
    NAME = 289,
    EXP = 290,
    ATOM = 291,
    INT = 292,
    TRUE = 293,
    FALSE = 294,
    REAL = 295,
    DM = 296,
    DEF = 297,
    DEFP = 298,
    DO = 299,
    DO2 = 300,
    END = 301,
    MDOC = 302,
    DOC = 303,
    DOCCONT = 304,
    ENDDOC = 305,
    NIL = 306
  };
#endif
/* Tokens.  */
#define DOT 258
#define SLASH 259
#define CM 260
#define PO 261
#define PC 262
#define BO 263
#define BC 264
#define TO 265
#define TC 266
#define EQ 267
#define PIPE 268
#define AR 269
#define L_SEP 270
#define WC 271
#define PLUS 272
#define MINUS 273
#define MULT 274
#define DIV1 275
#define DIV2 276
#define REM 277
#define MOD_CALL 278
#define ALIAS 279
#define IF 280
#define ELSE 281
#define COND 282
#define CASE 283
#define GUARD 284
#define IF1 285
#define IF2 286
#define STR 287
#define MOD 288
#define NAME 289
#define EXP 290
#define ATOM 291
#define INT 292
#define TRUE 293
#define FALSE 294
#define REAL 295
#define DM 296
#define DEF 297
#define DEFP 298
#define DO 299
#define DO2 300
#define END 301
#define MDOC 302
#define DOC 303
#define DOCCONT 304
#define ENDDOC 305
#define NIL 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "proyecto.y" /* yacc.c:355  */

  char * str;
  char * atom;
  int i;
  float real;

#line 224 "proyecto.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "proyecto.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    33,    36,    39,    40,    43,    44,    47,
      48,    51,    52,    55,    56,    59,    60,    63,    64,    67,
      68,    71,    72,    75,    78,    79,    80,    81,    84,    87,
      88,    89,    90,    91,    92,    93,    94,    97,    98,    99,
     102,   103,   104,   105,   106,   107,   108,   109,   112,   113,
     116,   117,   118,   121,   122,   125,   126,   129,   130,   133,
     134,   135,   138,   139,   142,   145,   146,   149,   152,   153
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOT", "SLASH", "CM", "PO", "PC", "BO",
  "BC", "TO", "TC", "EQ", "PIPE", "AR", "L_SEP", "WC", "PLUS", "MINUS",
  "MULT", "DIV1", "DIV2", "REM", "MOD_CALL", "ALIAS", "IF", "ELSE", "COND",
  "CASE", "GUARD", "IF1", "IF2", "STR", "MOD", "NAME", "EXP", "ATOM",
  "INT", "TRUE", "FALSE", "REAL", "DM", "DEF", "DEFP", "DO", "DO2", "END",
  "MDOC", "DOC", "DOCCONT", "ENDDOC", "NIL", "$accept", "Program",
  "modulo", "mod_cab", "mod", "def", "moddoc", "fdoc", "docs", "funciones",
  "funcion", "parametros", "params", "param", "expr", "op", "op_ar", "num",
  "value", "bool", "lista", "listcont", "tupla", "tcont", "condicion",
  "if", "cond", "conds", "case", "cuerpo", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -39

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-39)))

#define YYTABLE_NINF -38

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,   -20,    40,   -39,   -25,   -39,    -1,   -39,     3,    -6,
      21,   -39,   -39,    -3,     3,    36,   -36,   -39,   -39,   -39,
      32,   -39,   -39,    23,   -39,   -39,    36,   -39,    57,   -39,
      91,     6,    11,   -39,   127,    -2,   -39,    64,    66,   227,
      42,   227,   -39,    85,   -39,   -39,   -39,   -39,   -39,   -39,
      22,   -39,   -39,   -39,   273,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,    31,   -39,   -39,   255,   -39,   -39,
      73,    19,   -39,   -39,    10,    11,    11,    45,   227,    61,
     227,   -39,    11,    11,    11,    11,   -39,   152,   -39,   227,
     227,   -39,   227,   -39,    56,   239,   227,    86,   177,   227,
     -39,   273,   273,   273,   273,   227,   -39,   -39,    99,   -39,
     -39,    11,    11,    -7,   227,   -39,    95,   202,   -39,   262,
     268,   227,   -39,   -39,   227,   -39,   -39,   -39,    68,   -39,
     -39
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,    10,     6,     0,     1,     0,    12,
       0,     4,    14,     0,     0,     0,    12,     5,    13,     9,
       0,     7,     8,     0,    16,     3,     0,    11,     0,    15,
       0,     0,     0,    20,     0,     0,    47,     0,     0,     0,
       0,     0,    41,    24,    42,    38,    48,    49,    39,    44,
       0,    22,    23,    27,    28,    29,    25,    43,    45,    46,
      26,    59,    60,    61,     0,    69,    37,     0,    29,    50,
      54,     0,    55,    58,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,    69,     0,    36,     0,
       0,    51,     0,    56,     0,     0,     0,     0,     0,     0,
      21,    30,    31,    32,    34,    18,    17,    68,     0,    53,
      57,     0,     0,     0,     0,    64,     0,     0,    52,     0,
       0,     0,    63,    66,     0,    67,    33,    35,     0,    65,
      62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -39,   -39,   -39,   -39,   -39,    94,    98,   -39,
      89,   -39,   -39,    37,   -34,   -39,   -16,     9,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,    25,   -39,    46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     6,    23,     9,    15,    13,    16,
      24,    31,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    71,    59,    74,    60,    61,    62,    98,    63,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    73,    10,     1,    32,    77,    34,    79,    35,    72,
      25,    64,    14,     5,    36,    92,    67,    32,    37,   121,
      38,    93,     8,    39,    90,    40,    41,    80,    91,    81,
      42,    37,    43,    38,    44,    45,    46,    47,    48,   122,
       7,    68,    14,    11,    97,    66,    18,    19,    45,    49,
      65,    48,    12,   107,    17,   108,   109,    28,   110,    94,
      95,   111,   113,    30,   116,    97,   101,   102,   103,   104,
      75,   107,    76,    82,    83,    84,    86,    85,    21,    22,
     123,    18,    27,   116,    68,    68,    78,   128,    89,    96,
     129,    68,    68,    68,    68,   119,   120,    32,    33,    34,
     114,    35,   -37,   -37,   -37,    99,   -37,    36,   118,   124,
      26,    37,    20,    38,   130,    29,    39,   100,    40,    41,
      68,    68,     0,    42,   117,    43,     0,    44,    45,    46,
      47,    48,   105,    32,     0,    34,    69,    35,     0,     0,
       0,     0,    49,    36,     0,     0,     0,    37,     0,    38,
       0,     0,    39,     0,    40,    41,     0,     0,    32,    42,
      34,    43,    35,    44,    45,    46,    47,    48,    36,     0,
       0,     0,    37,     0,    38,     0,     0,    39,    49,    40,
      41,     0,     0,    32,    42,    34,    43,    35,    44,    45,
      46,    47,    48,    36,     0,     0,     0,    37,   106,    38,
       0,     0,    39,    49,    40,    41,     0,     0,    32,    42,
      34,    43,    35,    44,    45,    46,    47,    48,    36,     0,
       0,     0,    37,   115,    38,     0,     0,    39,    49,    40,
      41,     0,     0,    32,    42,    34,    43,    35,    44,    45,
      46,    47,    48,    36,   112,     0,     0,    37,   125,    38,
       0,     0,    39,    49,    40,    41,    82,    83,    84,    42,
      85,    43,    88,    44,    45,    46,    47,    48,     0,   126,
       0,     0,    82,    83,    84,   127,    85,     0,    49,    82,
      83,    84,     0,    85,     0,    82,    83,    84,     0,    85,
      82,    83,    84,     0,    85
};

static const yytype_int8 yycheck[] =
{
      34,    35,     3,    41,     6,    39,     8,    41,    10,    11,
      46,     5,    48,    33,    16,     5,    32,     6,    20,    26,
      22,    11,    47,    25,     5,    27,    28,     5,     9,     7,
      32,    20,    34,    22,    36,    37,    38,    39,    40,    46,
       0,    32,    48,    44,    78,    34,    49,    50,    37,    51,
      44,    40,    49,    87,    33,    89,    90,    34,    92,    75,
      76,     5,    96,     6,    98,    99,    82,    83,    84,    85,
       6,   105,     6,    17,    18,    19,    45,    21,    42,    43,
     114,    49,    50,   117,    75,    76,    44,   121,    15,    44,
     124,    82,    83,    84,    85,   111,   112,     6,     7,     8,
      14,    10,    17,    18,    19,    44,    21,    16,     9,    14,
      16,    20,    14,    22,    46,    26,    25,    80,    27,    28,
     111,   112,    -1,    32,    99,    34,    -1,    36,    37,    38,
      39,    40,    86,     6,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    51,    16,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    27,    28,    -1,    -1,     6,    32,
       8,    34,    10,    36,    37,    38,    39,    40,    16,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    25,    51,    27,
      28,    -1,    -1,     6,    32,     8,    34,    10,    36,    37,
      38,    39,    40,    16,    -1,    -1,    -1,    20,    46,    22,
      -1,    -1,    25,    51,    27,    28,    -1,    -1,     6,    32,
       8,    34,    10,    36,    37,    38,    39,    40,    16,    -1,
      -1,    -1,    20,    46,    22,    -1,    -1,    25,    51,    27,
      28,    -1,    -1,     6,    32,     8,    34,    10,    36,    37,
      38,    39,    40,    16,     5,    -1,    -1,    20,    46,    22,
      -1,    -1,    25,    51,    27,    28,    17,    18,    19,    32,
      21,    34,     7,    36,    37,    38,    39,    40,    -1,     7,
      -1,    -1,    17,    18,    19,     7,    21,    -1,    51,    17,
      18,    19,    -1,    21,    -1,    17,    18,    19,    -1,    21,
      17,    18,    19,    -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    53,    54,    55,    33,    56,     0,    47,    58,
       3,    44,    49,    60,    48,    59,    61,    33,    49,    50,
      60,    42,    43,    57,    62,    46,    59,    50,    34,    62,
       6,    63,     6,     7,     8,    10,    16,    20,    22,    25,
      27,    28,    32,    34,    36,    37,    38,    39,    40,    51,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    74,
      76,    77,    78,    80,     5,    44,    34,    68,    69,     9,
      66,    73,    11,    66,    75,     6,     6,    66,    44,    66,
       5,     7,    17,    18,    19,    21,    45,    81,     7,    15,
       5,     9,     5,    11,    68,    68,    44,    66,    79,    44,
      65,    68,    68,    68,    68,    81,    46,    66,    66,    66,
      66,     5,     5,    66,    14,    46,    66,    79,     9,    68,
      68,    26,    46,    66,    14,    46,     7,     7,    66,    66,
      46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    66,    66,    66,    66,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    77,    77,    78,    79,    79,    80,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     3,     3,     1,     1,     1,     3,
       0,     3,     0,     2,     1,     3,     2,     6,     6,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     6,     3,     6,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     5,     3,     1,     2,     3,     3,     1,     1,
       1,     1,     7,     5,     4,     4,     3,     5,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 31 "proyecto.y" /* yacc.c:1646  */
    {printf("Formato correcto!\n");}
#line 1443 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1449 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1455 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 39 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1461 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1467 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 43 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1473 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 44 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1479 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 47 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1485 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1491 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 55 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1497 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 56 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1503 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1509 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 60 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1515 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1521 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1527 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1533 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1539 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1545 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1551 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 75 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1557 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 78 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1563 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1569 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 80 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1575 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 81 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1581 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1587 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 87 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1593 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 88 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1599 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 89 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1605 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 90 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1611 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 91 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1617 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 92 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1623 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 93 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1629 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 94 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1635 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 97 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1641 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 98 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1647 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 99 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1653 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 102 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1659 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 103 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1665 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 104 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1671 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 105 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1677 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 106 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1683 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 107 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1689 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 108 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1695 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 109 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1701 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 112 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1707 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 113 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1713 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 116 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1719 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 117 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1725 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 118 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1731 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 121 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1737 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 122 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1743 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 125 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1749 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 126 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1755 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 129 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1761 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 130 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1767 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 133 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1773 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 134 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1779 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 135 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1785 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 138 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1791 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 139 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1797 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 142 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1803 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 145 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1809 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 146 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1815 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 149 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1821 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1827 "proyecto.tab.c" /* yacc.c:1646  */
    break;


#line 1831 "proyecto.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
  return yyresult;
}
#line 159 "proyecto.y" /* yacc.c:1906  */


int main(int argc, char *argv[]) {
extern FILE *yyin;
  switch (argc) {
    case 1: yyin=stdin;
      yyparse();
      break;
    case 2: yyin = fopen(argv[1], "r");
      if (yyin == NULL) {
        printf("ERROR: No se ha podido abrir el fichero.\n");
      }
      else {
        yyparse();
        fclose(yyin);
      }
      break;
    default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
  }
  return 0;
}
