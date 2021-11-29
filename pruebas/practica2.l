%option yylineno
%{
#include <stdlib.h>
#include "practica2.tab.h"
%}

ws        [ \t\n\r]
def        "def"
dm        "defmodule"
do         "do"
end        "end"
F         "false"
T         "true"
N         "nil"
W         "when"
A         "and"
O         "or"
n         "not"
f         "fn"
ar        "->"
eq        "="
po        [(]
pc        [)]
INT       [0-9]+
REAL      "-"?[0-9]+"."[0-9]+
ATOM      :[a-z_]+
mod       [A-Z]([A-Z]|[a-z])*
name      [a-z_]+
%%
{ws}    {}
{dm}    {printf("DM\n");}
{def}   {printf("DEF\n");}
{end}   {printf("END\n");}
{mod}   {printf("Módulo: %s\n",strdup(yytext));}
{name}  {printf("Función: %s\n",strdup(yytext));}
{INT}   {printf("Entero: %i\n",atoi(yytext));}
{REAL}  {printf("Real: %f\n",atof(yytext));}
.       {printf("[ERROR: %s]\n",strdup(yytext));}
%%

