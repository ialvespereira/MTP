
#include <stdio.h>

int main () {
    unsigned int numero1,numero2,soma;
    unsigned char *ponteiro=NULL;
    printf("me da 2 numeros\n");
    scanf("%d %d",&numero1,&numero2);
    printf(" o endereco do numero1 eh %p e o numero1 %u \n",&numero1,numero1);
    printf(" o endereco do numero2 eh %p e o numero2 %u \n",&numero2,numero2);
    soma=numero1+numero2;
     printf(" o endereco do numero2 eh %p e o numero2 %u \n",&soma,soma);
    return 0;}
