#include <stdio.h>
#include <math.h>
int main () {
double numero,fatorial=1;
int i;
printf("me da um numero ");
scanf("%lf",&numero);
for (i=1;i<=numero;i++){
    fatorial=fatorial*i;
}
printf("o fatorial deste numero sera %lf \n",fatorial);
return 0;

}
