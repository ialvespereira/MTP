#include <stdio.h>
#include <complex.h>
#include <math.h>
int main(){
double real,imaginario,seno_de_teta,cos_de_teta,teta;
double complex z,raiz_de_z;

printf(" me da a parte real de um numero complexo ");

scanf("%lf",&real);

printf(" me da a parte imaginaria de um numero complexo ");

scanf("%lf",&imaginario);

z=real + imaginario*I;

seno_de_teta=imaginario/cabs(z);

cos_de_teta=real/cabs(z);

teta=asin(1-cos_de_teta);

raiz_de_z=sqrt(cabs(z))*(cos(teta/2.0)+sin(teta/2.0)*I);

printf(" a raiz deste numero eh  %lf + %lf*I \n",creal(raiz_de_z),cimag(raiz_de_z));
return 0;
}
