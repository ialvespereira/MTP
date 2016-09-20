
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int face_aleatoria ();

int main (){
  srand(time(0));
  int soma=0,i;
  char resposta[3];
  for(i=0;i<3;i++){

    soma= soma +face_aleatoria()+ face_aleatoria()+ face_aleatoria()+face_aleatoria()+face_aleatoria();

    if(soma>21){
    printf("vc perdeu, soma eh %d \n",soma);
    break;}

    printf("o seu valor eh %d .Deseja jogar novamente??(responda sim ou nao) ",soma);
    gets(resposta);
    printf("soma eh %d \n",soma);

    if((strncmp(resposta,"nao",5) == 0)){
       break;

  }}
if(soma==21){
    printf("vc ganhou \n");
};

  return 0;

}

int face_aleatoria (int lado) {



    return (rand()%6)+1;
}


