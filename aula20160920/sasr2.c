#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void impares ();
void impares ();

int main (){
   char msg[256];
   printf("** Oi,escolha entre pares e impares\n");
  fgets(msg,sizeof(msg),stdin);
  if(strncmp(msg,"impares",7) == 0){
    impares ();
  }
  if(strncmp(msg,"pares",5) == 0){
    pares();
  }
   return 0;
}

void impares () {

    printf(" os imparares sao 1 3 5 7 9 \n");

    }

void pares () {
     printf(" os pares sao 2 4 6 8 \n");
}


