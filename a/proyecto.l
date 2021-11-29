%option yylineno
%{
#include <stdlib.h>
#include "proyecto.tab.h"
%}

ws        [ \t\n\r]
de        "def"
dm        "defmodule"
d         "do"
en        "end"
F         "false"
T         "true"
N         "nil"
W         "when"
A         "and"
O         "or"
n         "not"
f         "fn"
ar        "->"
po        [(]
pc        [)]
INT       [0-9]+
ATOM      :[a-z_]+
mod       [A-Z]([A-Z]|[a-z])*
name      [a-z_]+

%s FUN

%%
<INITIAL>{ws}   {}
<INITIAL>{dm}   {return DM;}
<INITIAL>{mod}  {yylval.s=strdup(yytext);return MOD;}
%%

