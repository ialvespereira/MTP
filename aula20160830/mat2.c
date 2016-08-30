
#include <stdio.h>
#include <math.h>
int main () {
    double lado1,lado2,lado3,angulo;

    printf("informe 2 lados e o angulo,em radianos\n ");
    printf("lado 1 \n ");
    scanf("%lf",&lado1);
     printf("lado 2 \n ");
    scanf("%lf",&lado2);
     printf("angulo \n ");
    scanf("%lf",&angulo);
    lado3= sqrt(pow(lado1,2.0)+pow(lado2,2.0)-2*lado1*lado2* cos(angulo));
    printf("lado 3 = %lf \n",lado3);

    return 0; }
