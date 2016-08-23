#include<stdio.h>
#include<stdlib.h>
int main(){
int escolha,i,divisores=0;
printf("Escolha um numero\n\n");
scanf("%d",&escolha);
for(i=1;i<=escolha;i++){
    if(escolha%i==0){
        divisores=divisores+i;
    }if (divisores==escolha){
    printf("O numero escohido eh perfeito\n\n");
    break;
    }

    }
    printf ("fim do programa\n");
    system("pause");
    return 0;


}
