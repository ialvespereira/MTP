#include<stdio.h>
#include<time.h>
int main(){
int numero,aleatorio,soma;
srand(time(0));
printf("me da um numero e escolha entre o resultado par ou impar \n");
scanf("%d",&numero);
aleatorio= rand()%2;

if(numero>0){
        soma=numero+aleatorio;
        if(soma%2==0){
            printf(" resultado eh par\n");
        }else{
        printf("resultado eh impar\n");
        }
}else{
    numero=numero*(-1);
    soma=numero+aleatorio;
    if(soma%2==0){
        printf (" resultado eh par\n");

    }else{
    printf("resultado eh impar\n");
    }}
    return 0;
}





