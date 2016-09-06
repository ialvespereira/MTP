#include <stdio.h>

int main () {
    int vetor[10];
    int vetor_inverso[10];
    int i,j;
    printf("me da 10 numeros\n ");

    for(i=0;i<10;i++){

        scanf("%d",&vetor[i]);

    }
printf("este eh sua sequencia invertida \n");
for(j=0,i=9;j<10;j++,i--){
vetor_inverso[j]=vetor[i];
printf("%d\n",vetor_inverso[j]);

}


     return 0;}

