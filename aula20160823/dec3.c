#include<stdio.h>
#include<time.h>

int main(){
    int aleatorio1,aleatorio2,aleatorio3,soma;
srand(time(0));
aleatorio1= rand()%10;
aleatorio2= rand()%10;
aleatorio3= rand()%10;
soma=aleatorio1+aleatorio2+aleatorio3;
if (soma==7|| soma==11){
    printf("Vc ganhou soma=%d\n",soma);
}else{
printf("vc perdeu soma=%d\n",soma);}



        return 0;

    }
