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
%token <str> MOD NAME
%token <i> INT
%token <real> REAL
%token DM DEF DO END CM
%type <str> modulos modulo funciones funcion
%start Prog 
%%

Prog : modulos {printf("Formato correcto!\n");}

modulos : modulos modulo {}
  | modulo {}
  ;

modulo : DM funciones END {}
  |
  ;

funciones : funciones funcion {}
  | funcion {}
  ;

funcion : DEF NAME DO END {}
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
