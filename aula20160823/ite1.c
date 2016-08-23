#include<stdio.h>
#include<stdlib.h>
int main (){
int numero, fatorial=1,i;
printf("me da um numero\n");
scanf("%d",&numero);
for(i = 2; i<= numero; i++){
    fatorial = fatorial *i;}
printf("o fatorial do numero escolhido eh %d\n",fatorial);
return 0;
}
