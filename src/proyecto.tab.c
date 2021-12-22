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
#define MAX 30
int yylex();
extern int yylineno;
void yyerror(char const *message);
char **funs;
int *ars;

int check(char *fname, int arity){
  for(int i=0;i<MAX;i++){
    if(funs[i]!=NULL){
      if(strcmp(funs[i],fname)==0){
        if(ars[i]==arity){
          return 0;
        }
      }
    }
  }
  return 1;
}

int add(char *fname, int arity){
  for(int i=0;i<MAX;i++){
    if(funs[i]==NULL){
      funs[i]=fname;
      ars[i]=arity;
      break;
    }
  }
}

static void error(int l){
  printf("Error en linea %i: ",l-1);
}


#line 106 "proyecto.tab.c" /* yacc.c:339  */

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
    DOTS = 259,
    SLASH = 260,
    FN = 261,
    CM = 262,
    PO = 263,
    PC = 264,
    BO = 265,
    BC = 266,
    TO = 267,
    TC = 268,
    PIPE = 269,
    AR = 270,
    L_SEP = 271,
    WC = 272,
    MAP = 273,
    APND = 274,
    PLUS = 275,
    MINUS = 276,
    MULT = 277,
    DIV1 = 278,
    DIV2 = 279,
    REM = 280,
    AND = 281,
    AND2 = 282,
    OR = 283,
    OR2 = 284,
    NOT = 285,
    NOT2 = 286,
    EQ = 287,
    EQ2 = 288,
    LT = 289,
    GT = 290,
    MOD_CALL = 291,
    FOR = 292,
    ALIAS = 293,
    AS = 294,
    IF = 295,
    ELSE = 296,
    COND = 297,
    CASE = 298,
    GUARD = 299,
    IF1 = 300,
    IF2 = 301,
    STR = 302,
    MOD = 303,
    NAME = 304,
    EXP = 305,
    CHRL = 306,
    KEY = 307,
    ATOM = 308,
    INT = 309,
    TRUE = 310,
    FALSE = 311,
    REAL = 312,
    DM = 313,
    DEF = 314,
    DEFP = 315,
    DO = 316,
    DO2 = 317,
    END = 318,
    MDOC = 319,
    DOC = 320,
    DOCCONT = 321,
    ENDDOC = 322,
    NIL = 323
  };
#endif
/* Tokens.  */
#define DOT 258
#define DOTS 259
#define SLASH 260
#define FN 261
#define CM 262
#define PO 263
#define PC 264
#define BO 265
#define BC 266
#define TO 267
#define TC 268
#define PIPE 269
#define AR 270
#define L_SEP 271
#define WC 272
#define MAP 273
#define APND 274
#define PLUS 275
#define MINUS 276
#define MULT 277
#define DIV1 278
#define DIV2 279
#define REM 280
#define AND 281
#define AND2 282
#define OR 283
#define OR2 284
#define NOT 285
#define NOT2 286
#define EQ 287
#define EQ2 288
#define LT 289
#define GT 290
#define MOD_CALL 291
#define FOR 292
#define ALIAS 293
#define AS 294
#define IF 295
#define ELSE 296
#define COND 297
#define CASE 298
#define GUARD 299
#define IF1 300
#define IF2 301
#define STR 302
#define MOD 303
#define NAME 304
#define EXP 305
#define CHRL 306
#define KEY 307
#define ATOM 308
#define INT 309
#define TRUE 310
#define FALSE 311
#define REAL 312
#define DM 313
#define DEF 314
#define DEFP 315
#define DO 316
#define DO2 317
#define END 318
#define MDOC 319
#define DOC 320
#define DOCCONT 321
#define ENDDOC 322
#define NIL 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "proyecto.y" /* yacc.c:355  */

  char * str;
  char * atom;
  int i;
  int bool;
  float real;

#line 290 "proyecto.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 307 "proyecto.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1367

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    68,    71,    72,    73,    76,    77,    79,
      82,    83,    84,    85,    88,    89,    92,    93,    94,    97,
      98,   101,   102,   103,   104,   107,   108,   111,   112,   115,
     116,   117,   118,   119,   122,   123,   126,   127,   128,   129,
     130,   133,   134,   135,   136,   137,   138,   145,   146,   147,
     148,   151,   152,   153,   156,   157,   160,   161,   162,   163,
     164,   167,   169,   170,   173,   174,   175,   176,   177,   178,
     179,   180,   183,   184,   185,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   201,   202,   203,   204,
     205,   206,   207,   210,   211,   212,   213,   214,   215,   218,
     221,   222,   223,   226,   227,   230,   231,   232,   233,   234,
     235,   236,   237,   240,   241,   242,   243,   246,   247,   250,
     251,   252,   253,   254,   255,   258,   259,   262,   263,   266,
     269,   270,   271,   272,   275,   276,   279,   280,   281,   282,
     285,   286,   287,   290,   291,   294,   297,   298,   301,   304,
     305,   308,   309,   312,   313,   314,   315,   318,   319
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOT", "DOTS", "SLASH", "FN", "CM", "PO",
  "PC", "BO", "BC", "TO", "TC", "PIPE", "AR", "L_SEP", "WC", "MAP", "APND",
  "PLUS", "MINUS", "MULT", "DIV1", "DIV2", "REM", "AND", "AND2", "OR",
  "OR2", "NOT", "NOT2", "EQ", "EQ2", "LT", "GT", "MOD_CALL", "FOR",
  "ALIAS", "AS", "IF", "ELSE", "COND", "CASE", "GUARD", "IF1", "IF2",
  "STR", "MOD", "NAME", "EXP", "CHRL", "KEY", "ATOM", "INT", "TRUE",
  "FALSE", "REAL", "DM", "DEF", "DEFP", "DO", "DO2", "END", "MDOC", "DOC",
  "DOCCONT", "ENDDOC", "NIL", "$accept", "Program", "modulo", "mod_cab",
  "mod", "mcall", "modcall", "docs", "def", "fdoc", "funciones", "funcion",
  "parametros", "params", "par", "expr", "var_abs", "var", "var_l",
  "var_t", "var_col_cont", "asig", "op", "op_ar", "op_log", "comp",
  "op_comp", "val_abs", "num", "val", "string", "bool", "lista",
  "listcont", "tupla", "keyword", "kw_cont", "map", "map_cont",
  "condicion", "if", "cond", "conds", "case", "enum", "fcall", "fanon",
  "cuerpo", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -154

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-154)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   212,   105,  -154,   125,   126,    47,  -154,    80,  -154,
     163,   163,   110,   110,  -154,   190,   185,     9,   163,  -154,
    -154,  -154,  -154,   164,  -154,   220,   323,  -154,   217,   185,
     185,   150,  -154,   185,  -154,   146,  -154,   255,  -154,  -154,
    -154,  -154,    19,  -154,   163,   190,   130,   241,  -154,    23,
    -154,   239,  -154,   293,  -154,  1231,  -154,   345,   605,  -154,
     204,   219,   226,  1231,  1231,  1231,   191,  1231,  -154,   262,
     305,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   319,  -154,
     512,   238,   311,    91,   274,  -154,   461,   674,   338,  -154,
     260,   187,   242,   247,   296,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   315,  -154,   657,   298,  -154,  -154,  1231,
     241,  -154,   314,   115,   397,   709,   370,   401,   304,   353,
     211,   351,  -154,  -154,   356,   141,   449,  1231,   504,   360,
       7,   348,  -154,   127,   136,   155,  -154,   512,  -154,   304,
     143,   152,   501,  1299,  1299,   708,  1331,   207,  1231,   297,
     330,  1231,  -154,   761,  -154,   352,  -154,   359,   363,  1231,
     273,   181,   381,   407,    15,   406,  1231,  1231,  1299,  1299,
    1299,  1299,  1231,  1231,   420,   394,    15,  -154,   512,  -154,
    -154,   813,   865,  -154,  -154,  -154,   553,  -154,  -154,  -154,
    1231,   512,  1231,  -154,    50,    90,  -154,  1231,  -154,     5,
    -154,  -154,  -154,  -154,  1231,   651,   167,  1299,   565,   570,
    1231,   391,   917,  1231,   422,   512,  -154,   351,  -154,   310,
    1283,  -154,  -154,  -154,  -154,   512,   422,  -154,   134,    90,
      37,   400,  -154,  -154,  -154,    45,   348,   971,   296,  -154,
    -154,   708,   708,   674,   674,   674,   674,  1331,  1331,    -8,
      45,   296,  1231,  -154,  -154,  1023,  1075,   339,   408,  -154,
     436,  -154,  -154,   512,   404,  1231,   512,   399,  1127,  -154,
     211,  1299,  1299,   244,  1231,  -154,   495,  1179,  -154,  -154,
    -154,   442,   242,  -154,   304,   242,  -154,  -154,  -154,  -154,
    -154,  1231,   512,  1231,  1231,   755,   618,   669,  1231,  -154,
     512,  1231,  -154,   451,   512,   512,   425,  -154,  -154,    18,
     512,  -154,  1231,  -154,   512
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,    18,    11,     0,     8,     0,     1,
       0,     0,     0,     0,    17,    26,     0,    26,    12,     9,
       7,    13,    14,     0,    20,     0,     0,    16,    26,    21,
      22,     0,    28,     0,    10,     0,    19,    18,    25,     4,
      23,    24,     0,    27,     0,    26,     0,     0,   158,     0,
      15,    26,   158,     0,    39,     0,    35,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
      76,   122,   106,   103,   117,   118,   104,   107,     0,    37,
       0,     0,    41,     0,     0,    42,    48,    72,    73,    74,
      75,    85,   105,    86,   149,   109,   110,   111,    47,   140,
     141,   142,   108,    77,    50,     0,     0,   158,     6,    32,
       0,   158,     0,     0,     0,     0,    76,     0,     0,    48,
      72,    75,    85,    86,    50,   119,     0,     0,   126,    63,
      51,    52,    53,     0,     0,     0,   127,   126,    63,    51,
       0,     0,     0,     0,     0,    91,    92,     0,     0,     0,
       0,     0,   152,    40,    34,     0,    93,    95,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,   157,    31,
     158,     0,     0,   158,   158,   119,     0,    49,    84,   153,
       0,   132,     0,    57,     0,     0,    58,     0,   120,     0,
     129,    61,   128,   135,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    64,    75,    85,   108,
       0,    36,    94,    96,    98,    99,     0,    71,     0,     0,
       0,     0,    68,    67,    66,     0,    60,     0,    69,   124,
      70,    88,    90,    78,    79,    80,    82,    87,    89,     0,
       0,   123,    30,    29,   156,     0,     0,     0,     0,    54,
       0,    62,    51,   125,     0,     0,   139,     0,     0,   134,
       0,     0,     0,     0,     0,   145,     0,     0,   151,    38,
      56,    51,   115,   150,   116,   114,   154,   155,   133,   121,
      59,     0,   130,     0,     0,     0,     0,     0,     0,   144,
     147,     0,   148,     0,   138,   137,     0,    81,    83,     0,
     146,   131,     0,   143,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,    29,    43,   426,   456,   382,    14,
      68,   438,   -35,   424,  -145,   -55,   -20,   -25,   -23,   -14,
     -51,   312,   -34,   -54,   -48,  -154,  -154,  -154,   -42,   -33,
    -153,   -32,   -78,   -53,   313,  -154,  -154,  -154,  -154,   321,
    -154,  -154,   270,  -154,   324,   465,   -31,   -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    14,    15,    25,    31,    16,
      17,    32,   152,    78,    79,    80,    81,   118,    83,    84,
     140,    85,   119,    87,    88,   159,    89,   216,   121,   122,
      92,   123,    94,   141,    95,    96,   135,    97,   206,    98,
      99,   100,   212,   101,   102,   103,   104,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     117,   120,   128,   137,   134,    90,   133,    49,   221,    -5,
     147,    90,   149,    86,    91,    93,   146,   264,   112,    86,
      91,    93,    82,   194,   124,   237,    46,    47,    82,   145,
     106,    33,   130,   139,   131,   131,   109,   129,   138,    22,
      23,   162,    33,   132,   132,    47,    73,    34,   155,    76,
     178,   156,   157,   158,   178,   117,   120,   265,    27,   128,
     137,   134,    59,    69,   226,    33,    71,    59,    90,   151,
       1,   137,   191,    50,    13,   279,    86,    91,    93,   124,
      48,   313,   282,    28,   107,    82,   238,   205,    27,   208,
     209,   181,    68,   211,   259,   182,   215,   285,   251,   259,
     228,   139,   229,   131,   225,     9,   138,    59,    19,   217,
     163,    90,   132,    51,   243,   244,   245,   246,   218,    86,
      91,    93,   153,   164,   247,   248,   178,   178,    82,    18,
     184,   137,   241,   242,   195,   257,   231,   258,   196,   259,
     236,    20,   263,   197,   228,   280,   229,   198,   -56,   266,
     195,    59,   -56,   270,   -56,   273,   201,   276,   211,   197,
     -56,    10,   199,    11,   252,   202,   200,   255,   256,   260,
     262,    35,   131,   -56,   268,   261,    24,   133,    90,   278,
     269,   132,   128,   259,   134,    44,    86,    91,    93,    12,
      13,   228,    52,   229,   -44,    82,   -44,   178,    59,    42,
     178,   178,   -44,   281,   262,   131,   131,   283,   129,   138,
     292,     5,    21,   295,   132,   132,   142,   296,   297,   300,
     188,    65,   276,    66,    67,   284,    10,   143,    11,    69,
     230,   168,   169,   170,   144,   171,   303,   155,   304,   305,
     156,   157,   158,   309,    29,    30,   310,    53,    54,    55,
      56,    57,   148,    58,   -45,    13,   -45,   314,    59,    60,
       5,     6,   -45,   174,    61,   150,    62,   -43,   210,   -43,
     160,    63,    64,     7,   155,   -43,   175,   156,   157,   158,
      39,    65,    13,    66,    67,   298,    36,    37,    68,    69,
      70,    10,    71,    11,    72,    73,    74,    75,    76,    53,
      54,   110,   108,    57,    13,    58,   165,   299,   111,    77,
      59,    60,   -54,    47,   -54,   176,    61,  -102,    62,  -102,
     -54,    69,   226,    63,    64,  -102,   153,   155,   154,   183,
     156,   157,   158,    65,  -124,    66,    67,   151,   162,   -54,
      68,    69,    70,   161,    71,   162,    72,    73,    74,    75,
      76,    53,   288,    55,   174,    57,   125,   126,   213,   179,
     180,    77,    59,    60,   172,   189,   173,   163,    61,   155,
      62,   193,   156,   157,   158,    63,    64,   -54,    47,   214,
     166,   -54,   167,   -54,   222,    65,   -54,    66,    67,    36,
      38,   223,    68,    69,   116,   224,    71,   127,    72,    73,
      74,    75,    76,    53,   -54,    55,   274,   114,   185,   186,
     187,    40,    41,    77,    59,    60,   235,   228,   115,   289,
      61,   155,    62,   249,   156,   157,   158,    63,    64,   250,
      47,   155,   161,   293,   156,   157,   158,    65,   155,    66,
      67,   156,   157,   158,    68,    69,   116,   290,    71,   127,
      72,    73,    74,    75,    76,    53,   291,    55,   194,    57,
     312,    58,   136,    45,   311,    77,    59,    60,   -46,    26,
     -46,    43,    61,   232,    62,   219,   -46,   113,   240,    63,
      64,   155,   233,   277,   156,   157,   158,     0,   166,    65,
     167,    66,    67,     0,     0,     0,    68,    69,   116,     0,
      71,   190,    72,    73,    74,    75,    76,    53,     0,    55,
     301,   114,     0,   115,   203,     0,     0,    77,    59,    60,
     192,     0,     0,     0,    61,   155,    62,     0,   156,   157,
     158,    63,    64,     0,   155,     0,     0,   156,   157,   158,
       0,    65,   155,    66,    67,   156,   157,   158,    68,    69,
     116,     0,    71,   204,    72,    73,    74,    75,    76,    53,
       0,    55,     0,   114,     0,   115,   136,     0,     0,    77,
      59,    60,   271,     0,     0,     0,    61,   272,    62,     0,
       0,     0,     0,    63,    64,   168,   169,   170,     0,   171,
     168,   169,   170,    65,   171,    66,    67,     0,     0,     0,
      68,    69,   116,     0,    71,   190,    72,    73,    74,    75,
      76,    53,     0,    55,     0,    57,     0,    58,   136,     0,
       0,    77,    59,    60,     0,   227,   234,   307,    61,   239,
      62,     0,     0,     0,     0,    63,    64,     0,   168,   169,
     170,   239,   171,     0,     0,    65,     0,    66,    67,     0,
       0,     0,    68,    69,   116,     0,    71,     0,    72,    73,
      74,    75,    76,    53,     0,    55,     0,   114,     0,   115,
       0,     0,     0,    77,    59,    60,     0,     0,   308,     0,
      61,   155,    62,   267,   156,   157,   158,    63,    64,   168,
     169,   170,     0,   171,   168,   169,   170,    65,   171,    66,
      67,     0,     0,     0,    68,    69,   116,     0,    71,     0,
      72,    73,    74,    75,    76,    53,     0,    55,     0,   114,
     177,   115,   136,     0,     0,    77,    59,    60,     0,     0,
       0,     0,    61,     0,    62,   166,     0,   167,   -48,    63,
      64,   -48,   -48,   -48,     0,     0,     0,     0,     0,    65,
       0,    66,    67,     0,     0,     0,    68,    69,   116,     0,
      71,     0,    72,    73,    74,    75,    76,    53,   220,    55,
       0,    57,     0,    58,     0,     0,     0,    77,    59,    60,
       0,     0,     0,     0,    61,   155,    62,   306,   156,   157,
     158,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    66,    67,     0,     0,     0,    68,    69,
      70,     0,    71,     0,    72,    73,    74,    75,    76,    53,
       0,    55,     0,   114,     0,   115,     0,     0,     0,    77,
      59,    60,     0,     0,     0,     0,    61,     0,    62,     0,
       0,     0,     0,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,    66,    67,     0,     0,     0,
      68,    69,   116,     0,    71,     0,    72,    73,    74,    75,
      76,    53,     0,    55,     0,   114,   253,   115,     0,     0,
       0,    77,    59,    60,     0,     0,     0,     0,    61,     0,
      62,     0,     0,     0,     0,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,    66,    67,     0,
       0,     0,    68,    69,   116,     0,    71,     0,    72,    73,
      74,    75,    76,    53,     0,    55,     0,   114,   254,   115,
       0,     0,     0,    77,    59,    60,     0,     0,     0,     0,
      61,     0,    62,     0,     0,     0,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,    66,
      67,     0,     0,     0,    68,    69,   116,     0,    71,     0,
      72,    73,    74,    75,    76,     0,     0,    53,     0,    55,
     275,   114,   185,   115,     0,    77,     0,     0,    59,    60,
       0,     0,     0,     0,    61,     0,    62,     0,     0,     0,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    66,    67,     0,     0,     0,    68,    69,
     116,     0,    71,     0,    72,    73,    74,    75,    76,    53,
       0,    55,     0,   114,     0,   115,     0,     0,     0,    77,
      59,    60,     0,     0,     0,     0,    61,     0,    62,     0,
       0,     0,     0,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,    66,    67,     0,     0,     0,
      68,    69,   116,     0,    71,     0,    72,    73,    74,    75,
      76,    53,     0,    55,     0,   114,   286,   115,     0,     0,
       0,    77,    59,    60,     0,     0,     0,     0,    61,     0,
      62,     0,     0,     0,     0,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,    66,    67,     0,
       0,     0,    68,    69,   116,     0,    71,     0,    72,    73,
      74,    75,    76,    53,     0,    55,     0,   114,   287,   115,
       0,     0,     0,    77,    59,    60,     0,     0,     0,     0,
      61,     0,    62,     0,     0,     0,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,    66,
      67,     0,     0,     0,    68,    69,   116,     0,    71,   294,
      72,    73,    74,    75,    76,    53,     0,    55,     0,   114,
       0,   115,     0,     0,     0,    77,    59,    60,     0,     0,
       0,     0,    61,     0,    62,     0,     0,     0,     0,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,    65,
       0,    66,    67,     0,     0,     0,    68,    69,   116,     0,
      71,     0,    72,    73,    74,    75,    76,    53,     0,    55,
       0,   114,   302,   115,     0,     0,     0,    77,    59,    60,
       0,     0,     0,     0,    61,     0,    62,     0,     0,     0,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    66,    67,     0,     0,     0,    68,    69,
     116,     0,    71,     0,    72,    73,    74,    75,    76,    53,
       0,    55,     0,    57,     0,    58,     0,     0,     0,    77,
      59,    60,     0,     0,     0,     0,    61,   207,    62,   114,
       0,   115,     0,    63,    64,     0,    59,    60,     0,     0,
       0,     0,    61,    65,    62,    66,    67,     0,     0,     0,
      68,    69,    70,     0,    71,     0,    72,    73,    74,    75,
      76,     0,     0,     0,     0,     0,    68,    69,   116,     0,
      71,    77,    72,    73,     0,     0,    76,   172,   -73,   173,
     -73,   -73,     0,     0,   -73,   -73,   -73,    77
};

static const yytype_int16 yycheck[] =
{
      55,    55,    57,    58,    57,    47,    57,    42,   153,     0,
      65,    53,    67,    47,    47,    47,    64,    12,    53,    53,
      53,    53,    47,    16,    55,    10,     7,     8,    53,    63,
       7,    17,    57,    58,    57,    58,    52,    57,    58,    10,
      11,    34,    28,    57,    58,     8,    54,    18,    30,    57,
     105,    33,    34,    35,   109,   110,   110,    52,    15,   114,
     115,   114,    17,    48,    49,    51,    51,    17,   110,    32,
      58,   126,   127,    44,    65,   220,   110,   110,   110,   110,
      61,    63,   235,    15,    61,   110,   164,   142,    45,   143,
     144,   107,    47,   148,    49,   111,   151,   250,   176,    49,
      10,   126,    12,   126,   159,     0,   126,    17,    61,   151,
      19,   153,   126,    45,   168,   169,   170,   171,   151,   153,
     153,   153,     7,    32,   172,   173,   181,   182,   153,     3,
      15,   186,   166,   167,     7,   190,   161,   192,    11,    49,
     163,    61,   197,     7,    10,    11,    12,    11,     7,   204,
       7,    17,    11,   207,    13,   210,    13,   212,   213,     7,
      19,    36,     7,    38,   180,    13,    11,   183,   184,   194,
     195,     7,   195,    32,     7,   195,    66,   228,   220,   214,
      13,   195,   237,    49,   237,    39,   220,   220,   220,    64,
      65,    10,    62,    12,     7,   220,     9,   252,    17,    49,
     255,   256,    15,   228,   229,   228,   229,   249,   228,   229,
     265,    48,    49,   268,   228,   229,    12,   271,   272,   274,
       9,    40,   277,    42,    43,   250,    36,     8,    38,    48,
      49,    20,    21,    22,     8,    24,   291,    30,   293,   294,
      33,    34,    35,   298,    59,    60,   301,     6,     7,     8,
       9,    10,    61,    12,     7,    65,     9,   312,    17,    18,
      48,    49,    15,     3,    23,     3,    25,     7,    61,     9,
      32,    30,    31,    61,    30,    15,    34,    33,    34,    35,
      63,    40,    65,    42,    43,    41,    66,    67,    47,    48,
      49,    36,    51,    38,    53,    54,    55,    56,    57,     6,
       7,     8,    63,    10,    65,    12,    32,    63,    15,    68,
      17,    18,     7,     8,     9,    19,    23,     7,    25,     9,
      15,    48,    49,    30,    31,    15,     7,    30,     9,    15,
      33,    34,    35,    40,    19,    42,    43,    32,    34,    34,
      47,    48,    49,    32,    51,    34,    53,    54,    55,    56,
      57,     6,    13,     8,     3,    10,    11,    12,    61,    61,
      62,    68,    17,    18,    26,     9,    28,    19,    23,    30,
      25,    11,    33,    34,    35,    30,    31,     7,     8,    49,
      27,    11,    29,    13,    32,    40,    16,    42,    43,    66,
      67,    32,    47,    48,    49,    32,    51,    52,    53,    54,
      55,    56,    57,     6,    34,     8,    15,    10,    11,    12,
       9,    29,    30,    68,    17,    18,    35,    10,    12,    11,
      23,    30,    25,     3,    33,    34,    35,    30,    31,    35,
       8,    30,    32,    34,    33,    34,    35,    40,    30,    42,
      43,    33,    34,    35,    47,    48,    49,    11,    51,    52,
      53,    54,    55,    56,    57,     6,    52,     8,    16,    10,
      35,    12,    13,    37,    13,    68,    17,    18,     7,    13,
       9,    33,    23,   161,    25,   151,    15,    53,   165,    30,
      31,    30,   161,   213,    33,    34,    35,    -1,    27,    40,
      29,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,     6,    -1,     8,
      15,    10,    -1,    12,    13,    -1,    -1,    68,    17,    18,
      16,    -1,    -1,    -1,    23,    30,    25,    -1,    33,    34,
      35,    30,    31,    -1,    30,    -1,    -1,    33,    34,    35,
      -1,    40,    30,    42,    43,    33,    34,    35,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,     6,
      -1,     8,    -1,    10,    -1,    12,    13,    -1,    -1,    68,
      17,    18,     7,    -1,    -1,    -1,    23,     7,    25,    -1,
      -1,    -1,    -1,    30,    31,    20,    21,    22,    -1,    24,
      20,    21,    22,    40,    24,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,     6,    -1,     8,    -1,    10,    -1,    12,    13,    -1,
      -1,    68,    17,    18,    -1,   160,   161,     9,    23,   164,
      25,    -1,    -1,    -1,    -1,    30,    31,    -1,    20,    21,
      22,   176,    24,    -1,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    -1,    53,    54,
      55,    56,    57,     6,    -1,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    68,    17,    18,    -1,    -1,     9,    -1,
      23,    30,    25,    32,    33,    34,    35,    30,    31,    20,
      21,    22,    -1,    24,    20,    21,    22,    40,    24,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    -1,
      53,    54,    55,    56,    57,     6,    -1,     8,    -1,    10,
      63,    12,    13,    -1,    -1,    68,    17,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    27,    -1,    29,    30,    30,
      31,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    -1,    53,    54,    55,    56,    57,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    68,    17,    18,
      -1,    -1,    -1,    -1,    23,    30,    25,    32,    33,    34,
      35,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    -1,    53,    54,    55,    56,    57,     6,
      -1,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    68,
      17,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    -1,    53,    54,    55,    56,
      57,     6,    -1,     8,    -1,    10,    63,    12,    -1,    -1,
      -1,    68,    17,    18,    -1,    -1,    -1,    -1,    23,    -1,
      25,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    -1,    53,    54,
      55,    56,    57,     6,    -1,     8,    -1,    10,    63,    12,
      -1,    -1,    -1,    68,    17,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    -1,
      53,    54,    55,    56,    57,    -1,    -1,     6,    -1,     8,
      63,    10,    11,    12,    -1,    68,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    -1,    53,    54,    55,    56,    57,     6,
      -1,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    68,
      17,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    -1,    53,    54,    55,    56,
      57,     6,    -1,     8,    -1,    10,    63,    12,    -1,    -1,
      -1,    68,    17,    18,    -1,    -1,    -1,    -1,    23,    -1,
      25,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    -1,    53,    54,
      55,    56,    57,     6,    -1,     8,    -1,    10,    63,    12,
      -1,    -1,    -1,    68,    17,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,     6,    -1,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    68,    17,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    -1,    53,    54,    55,    56,    57,     6,    -1,     8,
      -1,    10,    63,    12,    -1,    -1,    -1,    68,    17,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    -1,    53,    54,    55,    56,    57,     6,
      -1,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    68,
      17,    18,    -1,    -1,    -1,    -1,    23,     8,    25,    10,
      -1,    12,    -1,    30,    31,    -1,    17,    18,    -1,    -1,
      -1,    -1,    23,    40,    25,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    -1,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    68,    53,    54,    -1,    -1,    57,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    70,    71,    72,    48,    49,    61,    73,     0,
      36,    38,    64,    65,    74,    75,    78,    79,     3,    61,
      61,    49,    73,    73,    66,    76,    76,    74,    79,    59,
      60,    77,    80,    78,    73,     7,    66,    67,    67,    63,
      77,    77,    49,    80,    39,    75,     7,     8,    61,    81,
      73,    79,    62,     6,     7,     8,     9,    10,    12,    17,
      18,    23,    25,    30,    31,    40,    42,    43,    47,    48,
      49,    51,    53,    54,    55,    56,    57,    68,    82,    83,
      84,    85,    86,    87,    88,    90,    91,    92,    93,    95,
      97,    98,    99,   100,   101,   103,   104,   106,   108,   109,
     110,   112,   113,   114,   115,   116,     7,    61,    63,   116,
       8,    15,    81,    82,    10,    12,    49,    84,    86,    91,
      92,    97,    98,   100,   115,    11,    12,    52,    84,    85,
      86,    87,    88,    89,   102,   105,    13,    84,    85,    86,
      89,   102,    12,     8,     8,    91,    93,    84,    61,    84,
       3,    32,    81,     7,     9,    30,    33,    34,    35,    94,
      32,    32,    34,    19,    32,    32,    27,    29,    20,    21,
      22,    24,    26,    28,     3,    34,    19,    63,    84,    61,
      62,   116,   116,    15,    15,    11,    12,     9,     9,     9,
      52,    84,    16,    11,    16,     7,    11,     7,    11,     7,
      11,    13,    13,    13,    52,    84,   107,     8,    92,    92,
      61,    84,   111,    61,    49,    84,    96,    97,    98,   113,
       7,    83,    32,    32,    32,    84,    49,   114,    10,    12,
      49,    86,    90,   108,   114,    35,    87,    10,   101,   114,
     103,    91,    91,    92,    92,    92,    92,    93,    93,     3,
      35,   101,   116,    63,    63,   116,   116,    84,    84,    49,
      86,    85,    86,    84,    12,    52,    84,    32,     7,    13,
      92,     7,     7,    84,    15,    63,    84,   111,    81,    83,
      11,    86,    99,    97,    86,    99,    63,    63,    13,    11,
      11,    52,    84,    34,    52,    84,    92,    92,    41,    63,
      84,    15,    63,    84,    84,    84,    32,     9,     9,    84,
      84,    13,    35,    63,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    72,    72,    72,
      73,    73,    73,    73,    74,    74,    75,    75,    75,    76,
      76,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    81,    81,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    85,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    94,    94,    95,
      96,    96,    96,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   104,
     105,   105,   105,   105,   106,   106,   107,   107,   107,   107,
     108,   108,   108,   109,   109,   110,   111,   111,   112,   113,
     113,   114,   114,   115,   115,   115,   115,   116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     4,     2,     7,     3,     2,     3,
       3,     1,     2,     1,     2,     5,     2,     1,     0,     2,
       1,     1,     1,     2,     2,     3,     0,     3,     2,     6,
       6,     5,     5,     5,     3,     2,     3,     1,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     5,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     6,     3,     6,     3,     1,     1,     3,     3,     3,
       3,     2,     2,     1,     2,     1,     2,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     1,     1,     2,
       3,     5,     1,     3,     1,     3,     1,     2,     3,     3,
       4,     6,     2,     4,     4,     3,     6,     4,     4,     2,
       1,     1,     1,     7,     5,     4,     4,     3,     5,     1,
       4,     4,     2,     3,     5,     5,     4,     2,     0
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
#line 67 "proyecto.y" /* yacc.c:1646  */
    {printf("Formato correcto!\n");}
#line 1816 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "proyecto.y" /* yacc.c:1646  */
    {printf("Fichero vacío.\n");return 0;}
#line 1822 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1828 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 72 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno); printf("La definición del módulo debe incluir la cláusula 'end'.\n"); return 0;}
#line 1834 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 73 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1840 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 76 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1846 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno);
    printf("La definición del módulo no puede ser vacía.\n"); return 0;}
#line 1853 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 79 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno); printf("Nombre de módulo no válido.\n"); return 0;}
#line 1859 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 82 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1865 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 83 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1871 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 84 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno); printf("Nombre de módulo no válido.\n"); return 0;}
#line 1877 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno+1); printf("Nombre de módulo no válido.\n"); return 0;}
#line 1883 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1889 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1895 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1901 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1907 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 94 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1913 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1919 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 98 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1925 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 101 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1931 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 102 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1937 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 103 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno+1); printf("La definición de funciones no anónimas debe contener la expresión 'do' o 'do:'.\n"); return 0;}
#line 1943 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 104 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno+1); printf("La definición de funciones no anónimas debe contener la expresión 'do' o 'do:'.\n"); return 0;}
#line 1949 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 107 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1955 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 108 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1961 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1967 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 112 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1973 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "proyecto.y" /* yacc.c:1646  */
    {/*check_fun($2,$3);*/}
#line 1979 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "proyecto.y" /* yacc.c:1646  */
    {/*check_fun($2,$3);*/}
#line 1985 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 117 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno+1);printf("La palabra reservada 'do' no puede ir precedida de una coma.\n");return 0;}
#line 1991 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "proyecto.y" /* yacc.c:1646  */
    {}
#line 1997 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2003 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 122 "proyecto.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-1].i);}
#line 2009 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 123 "proyecto.y" /* yacc.c:1646  */
    {(yyval.i)=0;}
#line 2015 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "proyecto.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-2].i)+1;}
#line 2021 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 127 "proyecto.y" /* yacc.c:1646  */
    {(yyval.i)=1;}
#line 2027 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno+1);printf("Los parámetros en las cabeceras de las funciones no pueden ser vacíos.\n");return 0;}
#line 2033 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno+1);printf("Los parámetros en las cabeceras de las funciones no pueden ser vacíos.\n");return 0;}
#line 2039 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 130 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno+1);printf("Los parámetros en las cabeceras de las funciones no pueden ser vacíos.\n");return 0;}
#line 2045 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 133 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2051 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 134 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2057 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2063 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 136 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2069 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 137 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2075 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 138 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2081 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 145 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2087 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 146 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2093 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 147 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2099 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 148 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2105 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 151 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2111 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 152 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2117 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 153 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2123 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 156 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2129 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 157 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2135 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 160 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2141 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 161 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2147 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 162 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2153 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 163 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2159 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 164 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2165 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 167 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2171 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 169 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2177 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2183 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2189 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 174 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2195 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 175 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2201 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 176 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2207 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 177 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2213 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 178 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2219 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 179 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2225 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 180 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2231 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 183 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2237 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 184 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2243 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 185 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2249 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 188 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2255 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 189 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2261 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 190 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2267 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 191 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2273 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 192 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2279 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 193 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2285 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 194 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2291 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 195 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2297 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 196 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2303 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 197 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2309 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 198 "proyecto.y" /* yacc.c:1646  */
    {error(yylineno);printf("Operación aritmética no permitida para %s",(yyvsp[0].str)); return 0;}
#line 2315 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 201 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2321 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 202 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2327 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 203 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2333 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 204 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2339 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 205 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2345 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 206 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2351 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 207 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2357 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 210 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2363 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 211 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2369 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 212 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2375 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 213 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2381 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 214 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2387 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 215 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2393 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 218 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2399 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 221 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2405 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 222 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2411 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 223 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2417 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 226 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2423 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 227 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2429 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 230 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2435 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 231 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2441 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 232 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2447 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 233 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2453 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 234 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2459 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 235 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2465 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 236 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2471 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 237 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2477 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 240 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2483 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 241 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2489 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 242 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2495 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 243 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2501 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 246 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2507 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 247 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2513 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 250 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2519 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 251 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2525 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 252 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2531 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 253 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2537 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 254 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2543 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 255 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2549 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 258 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2555 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 259 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2561 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 262 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2567 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 263 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2573 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 266 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2579 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 269 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2585 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 270 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2591 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 271 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2597 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 272 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2603 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 275 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2609 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 276 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2615 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 279 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2621 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 280 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2627 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 281 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2633 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 282 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2639 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 285 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2645 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 286 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2651 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 287 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2657 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 290 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2663 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 291 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2669 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 294 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2675 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 297 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2681 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 298 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2687 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 301 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2693 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 304 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2699 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 305 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2705 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 308 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2711 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 309 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2717 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 312 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2723 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 313 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2729 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 314 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2735 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 315 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2741 "proyecto.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 319 "proyecto.y" /* yacc.c:1646  */
    {}
#line 2747 "proyecto.tab.c" /* yacc.c:1646  */
    break;


#line 2751 "proyecto.tab.c" /* yacc.c:1646  */
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
#line 324 "proyecto.y" /* yacc.c:1906  */


int main(int argc, char *argv[]) {
funs=malloc(sizeof(char *)*MAX);
ars=malloc(sizeof(int)*MAX);
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
