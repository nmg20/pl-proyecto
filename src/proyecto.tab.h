/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 40 "proyecto.y" /* yacc.c:1909  */

  char * str;
  char * atom;
  int i;
  int bool;
  float real;

#line 198 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
