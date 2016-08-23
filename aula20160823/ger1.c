
#include<stdio.h>


int main(){
    int i, numero;
    printf("me da um numero\n");
    scanf("%d",&numero);
    for(i=2;i<numero;i++){
        if(numero%i==0){
            printf("nao eh primo\n");
            break;
        }}
        if(i==numero)
        {
            printf("eh primo\n");
        }
        return 0;

    }
