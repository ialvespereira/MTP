#include<stdio.h>
#include<stdlib.h>
int main (){
int aleatorio,chute,i;
srand (time(0));
aleatorio=rand()%100;
for ( i=1;i<=100;i++){
    printf("Escolha um numero para tentar acertar qual numero eu esoolhi.Escolha um numero de 0 ate 99\n\n");
    scanf("%d",&chute);
    if(aleatorio==chute){
        break;
    }
    if(aleatorio<chute){
        printf("O meu numero eh menor\n");
    }else{
    printf(" o meu numero eh maior\n");}

}
printf("Vc acertou e usou %d tentativas\n",i);
return 0;


}
