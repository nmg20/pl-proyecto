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
%token <str> STR MOD NAME
%token <atom> ATOM
%token <i> INT
%token <real> REAL
%token DM DEF DO DO2 END CM
%type <str> modulos modulo mod_cab funciones fun_cab funcion
%start Prog 
%%

Prog : modulos {printf("Formato correcto!\n");}

modulos : modulos modulo {}
  | modulo {}
  ;

modulo : mod_cab funciones END {}
  ;

mod_cab : DM MOD DO {}
  ;

funciones : funciones funcion {}
  | funcion {}
  ;

funcion : fun_cab END {}
  ;

fun_cab : DEF NAME DO {}
  | DEF NAME CM DO2 {}
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
