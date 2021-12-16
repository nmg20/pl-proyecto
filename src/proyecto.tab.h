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
    AND = 278,
    AND2 = 279,
    OR = 280,
    OR2 = 281,
    NOT = 282,
    NOT2 = 283,
    EQ = 284,
    EQ2 = 285,
    LT = 286,
    GT = 287,
    MOD_CALL = 288,
    ALIAS = 289,
    IF = 290,
    ELSE = 291,
    COND = 292,
    CASE = 293,
    GUARD = 294,
    IF1 = 295,
    IF2 = 296,
    STR = 297,
    MOD = 298,
    NAME = 299,
    EXP = 300,
    CHRL = 301,
    KEY = 302,
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
#define AND 278
#define AND2 279
#define OR 280
#define OR2 281
#define NOT 282
#define NOT2 283
#define EQ 284
#define EQ2 285
#define LT 286
#define GT 287
#define MOD_CALL 288
#define ALIAS 289
#define IF 290
#define ELSE 291
#define COND 292
#define CASE 293
#define GUARD 294
#define IF1 295
#define IF2 296
#define STR 297
#define MOD 298
#define NAME 299
#define EXP 300
#define CHRL 301
#define KEY 302
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
