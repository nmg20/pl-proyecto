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
#line 9 "proyecto.y" /* yacc.c:1909  */

  char * str;
  char * atom;
  int i;
  float real;

#line 163 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
