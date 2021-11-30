%option yylineno
%{
#include <stdlib.h>
#include "proyecto.tab.h"
%}

ws         [ \t\n\r]
def        "def"
dm         "defmodule"
d1         "do"
d2         "do:"
end        "end"
F          "false"
T          "true"
N          "nil"
W          "when"
A          "and"
O          "or"
n          "not"
f          "fn"
ar         "->"
eq         "="
po         [(]
pc         [)]
INT        [0-9]+
REAL       "-"?[0-9]+"."[0-9]+
ATOM       :[a-z_]+
mod        [A-Z]([A-Z]|[a-z])*
name       [a-z_]+
STR        ([^"]|"\""])+

%s FUN

%%

{ws}      {}
{dm}      {printf("DM\n");return DM;}
{def}     {printf("DEF\n");return DEF;}
{d1}      {printf("DO\n");return DO;}
{d2}      {printf("DO:\n");return DO2;}
{end}     {printf("END\n");return END;}
","       {printf("COMMA\n");return CM;}
{mod}     {printf("Módulo: %s\n",strdup(yytext));yylval.str=strdup(yytext);return MOD;}
{name}    {printf("Función: %s\n",strdup(yytext));yylval.str=strdup(yytext);return NAME;}
{INT}     {printf("Entero: %i\n",atoi(yytext));yylval.i=atoi(yytext);return INT;}
{REAL}    {printf("Real: %f\n",atof(yytext));yylval.real=atof(yytext);return REAL;}
{ATOM}    {printf("Átomo: %s\n",strdup(yytext));yylval.atom=strdup(yytext);return ATOM;}
\"{STR}\" {printf("String: %s\n",strdup(yytext));yylval.str=strdup(yytext);return STR;}
.         {printf("[ERROR: %s]\n",strdup(yytext));}
%%

