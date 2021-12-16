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
    MAP = 272,
    PLUS = 273,
    MINUS = 274,
    MULT = 275,
    DIV1 = 276,
    DIV2 = 277,
    REM = 278,
    AND = 279,
    AND2 = 280,
    OR = 281,
    OR2 = 282,
    NOT = 283,
    NOT2 = 284,
    EQ = 285,
    EQ2 = 286,
    LT = 287,
    GT = 288,
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
    KEY = 303,
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
#define MAP 272
#define PLUS 273
#define MINUS 274
#define MULT 275
#define DIV1 276
#define DIV2 277
#define REM 278
#define AND 279
#define AND2 280
#define OR 281
#define OR2 282
#define NOT 283
#define NOT2 284
#define EQ 285
#define EQ2 286
#define LT 287
#define GT 288
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
#define KEY 303
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
