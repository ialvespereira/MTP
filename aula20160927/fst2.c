
#include<stdio.h>

struct numeros_racionais{
int num;
int den;
};

struct numeros_racionais SOMA(int x1,int y1,int x2,int y2);

int main(){
    struct numeros_racionais numero1,numero2,soma;
    printf("me da um numero racional no formato numerador/divisor : ");
    scanf("%d/%d",&numero1.num,&numero1.den);
    printf("me da um numero racional no formato numerador/divisor : ");
    scanf("%d/%d",&numero2.num,&numero2.den);

    soma=SOMA(numero1.num,numero1.den,numero2.num,numero2.den);
    printf("a soma sera %d/%d",soma.num,soma.den);

    return 0;
}
  struct numeros_racionais SOMA(int x1,int y1,int x2,int y2){
  struct numeros_racionais soma_do_struct;
  soma_do_struct.num =(y2*x1 + y1*x2);
  soma_do_struct.den =( y1*y2 );
  return soma_do_struct;
  }


