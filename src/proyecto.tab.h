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
    CM = 260,
    PO = 261,
    PC = 262,
    BO = 263,
    BC = 264,
    TO = 265,
    TC = 266,
    PIPE = 267,
    AR = 268,
    L_SEP = 269,
    WC = 270,
    PLUS = 271,
    MINUS = 272,
    MULT = 273,
    DIV1 = 274,
    DIV2 = 275,
    REM = 276,
    AND1 = 277,
    AND2 = 278,
    OR1 = 279,
    OR2 = 280,
    NOT1 = 281,
    NOT2 = 282,
    EQ = 283,
    NEQ = 284,
    LT = 285,
    LTE = 286,
    GT = 287,
    GTE = 288,
    MOD_CALL = 289,
    ALIAS = 290,
    IF = 291,
    ELSE = 292,
    COND = 293,
    CASE = 294,
    GUARD = 295,
    IF1 = 296,
    IF2 = 297,
    STR = 298,
    MOD = 299,
    NAME = 300,
    EXP = 301,
    CHRL = 302,
    ATOM = 303,
    INT = 304,
    TRUE = 305,
    FALSE = 306,
    REAL = 307,
    DM = 308,
    DEF = 309,
    DEFP = 310,
    DO = 311,
    DO2 = 312,
    END = 313,
    MDOC = 314,
    DOC = 315,
    DOCCONT = 316,
    ENDDOC = 317,
    NIL = 318
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
#define PIPE 267
#define AR 268
#define L_SEP 269
#define WC 270
#define PLUS 271
#define MINUS 272
#define MULT 273
#define DIV1 274
#define DIV2 275
#define REM 276
#define AND1 277
#define AND2 278
#define OR1 279
#define OR2 280
#define NOT1 281
#define NOT2 282
#define EQ 283
#define NEQ 284
#define LT 285
#define LTE 286
#define GT 287
#define GTE 288
#define MOD_CALL 289
#define ALIAS 290
#define IF 291
#define ELSE 292
#define COND 293
#define CASE 294
#define GUARD 295
#define IF1 296
#define IF2 297
#define STR 298
#define MOD 299
#define NAME 300
#define EXP 301
#define CHRL 302
#define ATOM 303
#define INT 304
#define TRUE 305
#define FALSE 306
#define REAL 307
#define DM 308
#define DEF 309
#define DEFP 310
#define DO 311
#define DO2 312
#define END 313
#define MDOC 314
#define DOC 315
#define DOCCONT 316
#define ENDDOC 317
#define NIL 318

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

#line 188 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
