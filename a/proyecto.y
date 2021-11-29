%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yylex();
extern int yylineno;
void yyerror(char const *message);
static char* tag(char *s){
  char * r = strdup(s);
  r=strtok(s,"<");
  r=strtok(r,"/");
  r=strtok(r,">");
  return r;
}
static void error(int l){
  printf("Sintaxis XML incorrecta. Error en linea %i: ",l-1);
}

%}
%union{
  char * str;
  float valFloat;
}
%token <str> 
%token DM DE DO END 
%type <str> mods mod
%start Prog 
%%

Prog : mods

mods : mods mod {}
  | mod {}
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
