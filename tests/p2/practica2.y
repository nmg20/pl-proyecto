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
  char * valStr;
  float valFloat;
}
%token <valStr> TAG_O TAG_C COM ERROR
%token VERSION ENCODING CONT
%type <valStr> entradas cabecera tag tags tag_o tag_c contenido
%start S
%%

S : cabecera entradas {printf("Sintaxis XML correcta.\n");}
  ;

cabecera : VERSION ENCODING {}
  | VERSION {error(yylineno+1);
      printf("Cabecera del documento incompleta.\n");
      return 0;}
  | ENCODING {error(yylineno+1);
      printf("Cabecera del documento incompleta.\n");
      return 0;}
  | {error(yylineno+1);
      printf("Documento XML sin cabecera.\n");
      return 0;}
  ;

entradas : entradas COM {}
  | entradas tags {}
  | COM {}
  | tags {}
  | ERROR {error(yylineno);
        printf("Formato de entrada no válido.\n");
        return 0;}
;

tags : tags tag {}
  | tags COM {}
  | tag {}
  ;

tag : tag_o contenido tag_c {int eq=strcmp(tag($1),tag($3)); if(eq!=0){
        error(yylineno);
        printf("Encontrado \"%s\" y se esperaba \"%s\".\n",$3,$1);
        return 0;
      }
    }
  | tag_o tags tag_c {int eq=strcmp(tag($1),tag($3)); if(eq!=0){ 
        error(yylineno);
        printf("Encontrado \"%s>\" y se esperaba \"%s>\".\n",$3,$1);
        return 0;
      }
    }
  | ERROR {error(yylineno);
        printf("Formato de etiqueta no válido.\n");
        return 0;}
  ;

tag_o : TAG_O {$$=$1;}
  | ERROR {error(yylineno+1);
          printf("Nombre de etiqueta no válido.\n"); return 0;}
  ;

tag_c : TAG_C {$$=$1;}
  | ERROR {error(yylineno+1);
          printf("Nombre de etiqueta no válido.\n"); return 0;}
  ;

contenido : CONT {}
  | {error(yylineno+1);
    printf("Contenido de la etiqueta no válido.\n"); return 0;}
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
