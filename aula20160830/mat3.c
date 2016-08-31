#include <stdio.h>
#include <math.h>
int main() {
    double base,numero,resposta;
    printf("me da uma base: ");
    scanf("%lf",&base);
    printf("me da um numero: ");
    scanf("%lf",&numero);
    resposta=log10(numero)/log10(base);
printf("a resposta do log eh %lf \n",resposta);
return 0;



}
