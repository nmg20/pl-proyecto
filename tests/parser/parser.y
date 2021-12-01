%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yylex();
extern int yylineno;
void yyerror(char const *message);
%}
%union{
  char * str;
  char * atom;
  int i;
  float real;
}
%token DOT SLASH CM BO BC EQ PIPE
%token <str> STR MOD NAME
%token <atom> ATOM
%token <i> INT TRUE FALSE
%token <real> REAL
%token DM DEF DEFP DO DO2 END NIL
%type <str> def modulos modulo mod_cab funciones fun_cab funcion
%type <str> parametros param params
%type <str> body fcall pipe
%type <i> bool
%start p
%%

p : NAME PIPE MOD DOT NAME BO BC {printf("Alright!\n");}
  ;

def : DEF {}
  | DEFP {}
  ;

funciones : funciones funcion {}
  | funcion {}
  ;

funcion : fun_cab END {}
  ;

fun_cab : def NAME parametros DO {}
  | def NAME parametros CM DO2 {}
  ;

parametros : BO params BC {}
  | BO BC {}
  ;

params : params CM param {}
  | param {}
  ;

param : NAME {}
  ;

value : INT {}
  | REAL {}
  | STR {}
  | ATOM {}
  | bool {}
  | NIL {}
  ;

bool : TRUE {}
  | FALSE {}
  ;

body : fcall {}
  | pipe {}
  ;

fcall : MOD DOT NAME parametros {} 
  | MOD DOT NAME BO BC {}
  | MOD DOT NAME {}
  | NAME parametros {}
  ;

pipes : fcall PIPE pipes {}
  | fcall {}
  ;

pipe : NAME PIPE pipes {}
  ;




%%

int main(int argc, char *argv[]) {
extern FILE *yyin;
  switch (argc) {
    case 1: yyin=stdin;
      yyparse();
      break;
    case 2: yyin = fopen(argv[1], "r");
      if (yyin == NULL) {
        printf("ERROR: No se ha podido abrir el fichero.\n");
      }
      else {
        yyparse();
        fclose(yyin);
      }
      break;
    default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
  }
  return 0;
}
