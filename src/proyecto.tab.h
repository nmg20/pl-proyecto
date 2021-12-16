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
    SLASH = 259,
    FN = 260,
    CM = 261,
    PO = 262,
    PC = 263,
    BO = 264,
    BC = 265,
    TO = 266,
    TC = 267,
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
    AND1 = 278,
    AND2 = 279,
    OR1 = 280,
    OR2 = 281,
    NOT1 = 282,
    NOT2 = 283,
    EQ = 284,
    NEQ = 285,
    LT = 286,
    LTE = 287,
    GT = 288,
    GTE = 289,
    MOD_CALL = 290,
    ALIAS = 291,
    IF = 292,
    ELSE = 293,
    COND = 294,
    CASE = 295,
    GUARD = 296,
    IF1 = 297,
    IF2 = 298,
    STR = 299,
    MOD = 300,
    NAME = 301,
    EXP = 302,
    CHRL = 303,
    ATOM = 304,
    INT = 305,
    TRUE = 306,
    FALSE = 307,
    REAL = 308,
    DM = 309,
    DEF = 310,
    DEFP = 311,
    DO = 312,
    DO2 = 313,
    END = 314,
    MDOC = 315,
    DOC = 316,
    DOCCONT = 317,
    ENDDOC = 318,
    NIL = 319
  };
#endif
/* Tokens.  */
#define DOT 258
#define SLASH 259
#define FN 260
#define CM 261
#define PO 262
#define PC 263
#define BO 264
#define BC 265
#define TO 266
#define TC 267
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
#define AND1 278
#define AND2 279
#define OR1 280
#define OR2 281
#define NOT1 282
#define NOT2 283
#define EQ 284
#define NEQ 285
#define LT 286
#define LTE 287
#define GT 288
#define GTE 289
#define MOD_CALL 290
#define ALIAS 291
#define IF 292
#define ELSE 293
#define COND 294
#define CASE 295
#define GUARD 296
#define IF1 297
#define IF2 298
#define STR 299
#define MOD 300
#define NAME 301
#define EXP 302
#define CHRL 303
#define ATOM 304
#define INT 305
#define TRUE 306
#define FALSE 307
#define REAL 308
#define DM 309
#define DEF 310
#define DEFP 311
#define DO 312
#define DO2 313
#define END 314
#define MDOC 315
#define DOC 316
#define DOCCONT 317
#define ENDDOC 318
#define NIL 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "proyecto.y" /* yacc.c:1909  */

  char * str;
  char * atom;
  int i;
  int bool;
  float real;

#line 190 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
