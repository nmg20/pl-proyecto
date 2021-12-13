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
    MOD_CALL = 272,
    ALIAS = 273,
    IF = 274,
    ELSE = 275,
    COND = 276,
    CASE = 277,
    GUARD = 278,
    IF1 = 279,
    IF2 = 280,
    STR = 281,
    MOD = 282,
    NAME = 283,
    EXP = 284,
    ATOM = 285,
    INT = 286,
    TRUE = 287,
    FALSE = 288,
    REAL = 289,
    DM = 290,
    DEF = 291,
    DEFP = 292,
    DO = 293,
    DO2 = 294,
    END = 295,
    MDOC = 296,
    DOC = 297,
    DOCCONT = 298,
    ENDDOC = 299,
    NIL = 300
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
#define MOD_CALL 272
#define ALIAS 273
#define IF 274
#define ELSE 275
#define COND 276
#define CASE 277
#define GUARD 278
#define IF1 279
#define IF2 280
#define STR 281
#define MOD 282
#define NAME 283
#define EXP 284
#define ATOM 285
#define INT 286
#define TRUE 287
#define FALSE 288
#define REAL 289
#define DM 290
#define DEF 291
#define DEFP 292
#define DO 293
#define DO2 294
#define END 295
#define MDOC 296
#define DOC 297
#define DOCCONT 298
#define ENDDOC 299
#define NIL 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "proyecto.y" /* yacc.c:1909  */

  char * str;
  char * atom;
  int i;
  float real;

#line 151 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
