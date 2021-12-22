#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 30
#define FNAME_LIM 20

struct func {
  char name[20];
  int arity;
} func;

//func *funs;
char ** funs;
int *ars;

/*int search(struct func *funs){
  int i;
  for(i=0;i<1;i++){
    //if((funs[i].name!=NULL)&&(funs[i].name[0]!='\0')){
    printf("Función: %s/%i\n",funs[i].name,funs[i].arity);
    //}
  }
}

struct func * add(char *fun, int ar){
  int i;
  struct func * aux=malloc(sizeof(struct func)*16);
  for(i=0;i<sizeof(funs);i++){
    strcpy(aux[i].name,funs[i].name);
    aux[i].arity=funs[i].arity;
  }
  strcpy(aux[i].name,fun);
  aux[i].arity=ar;
  aux;
}*/

int check(char *name, int ar){
  for(int i=0;i<MAX;i++){
    if(funs[i]!=NULL){
      if(strcmp(funs[i],name)==0){
        if(ars[i]==ar)
          return 0;        
      }
    }
  }
  return 1;
}

/*int check(char **funs,char *name,int max){
  int i;
  for(i=0;i<max;i++){
    if(strcmp(funs[i],name)==0){
      return 0;
    }
  }
  return 1;
}*/

void add(char *name, int ar){
  for(int i=0;i<MAX;i++){
    if(funs[i]==NULL){
      funs[i]=name;
      ars[i]=ar;
      break;
    }
  }
}

int main(int argc, char *argv[]){
  funs=malloc(sizeof(char *)*MAX);
  ars=malloc(sizeof(int)*MAX);
  //int a=check(funs,arity,argv[1],atoi(argv[2]),max);
  if(check(argv[1],atoi(argv[2]))!=0){
    add(argv[1],atoi(argv[2]));
  }
  /*if(check(argv[3],atoi(argv[4]))){
    add(argv[3],atoi(argv[4]));
  }
  if(check(argv[5],atoi(argv[6]))){
    add(argv[5],atoi(argv[6]));
  }*/
  //add(argv[1],atoi(argv[2]));
  //add(argv[3],atoi(argv[4]),max);
  //add(argv[5],atoi(argv[6]),max);
  //search(funs);
  //add(funs,arity,argv[2],atoi(argv[3]));
  //printf("Check: %i\n",a);
  //printf("Función: %s/%i\n",funs[atoi(argv[1])],arity[atoi(argv[1])]);
  printf("Función: %s/%i\n",funs[0],ars[0]);
  //printf("Función: %s/%i\n",funs[1],ars[1]);
  //printf("Función: %s/%i\n",funs[2],ars[2]);
}