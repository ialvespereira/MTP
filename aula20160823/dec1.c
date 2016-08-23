#include<stdio.h>
#include<time.h>

int main (){
int numero;
printf ("me da um numero\n");
scanf("%d",&numero);
if (numero%2==0){
    printf("eh um numero par\n");
}else{
printf("eh impar\n");}

if(numero%3==0){
         printf("eh divisivel por 3\n");
}

if(numero%5==0){
         printf("eh divisivel por 5\n");
}
if(numero%7==0){
         printf("eh divisivel por 7\n");
}
return 0;
}
