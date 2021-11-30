%option yylineno
%{
#include <stdlib.h>
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
STR       ([^"]|"\""])+

%s FUN

%%

{ws}        {}
{dm}        {printf("DM\n");}
{def}       {printf("DEF\n");}
{do}        {printf("DO\n");}
{end}       {printf("END\n");}
{mod}       {printf("Módulo: %s\n",strdup(yytext));}
{name}      {printf("Función: %s\n",strdup(yytext));}
{INT}       {printf("Entero: %i\n",atoi(yytext));}
{REAL}      {printf("Real: %f\n",atof(yytext));}
 {ATOM}     {printf("Átomo: %s\n",strdup(yytext));}
\"{STR}\"   {printf("String: %s\n",strdup(yytext));}
.           {printf("[ERROR: %s]\n",strdup(yytext));}

%%

int main(){
    yylex();
}