#include <stdio.h>
#include <complex.h>
int main () {
double imaginario,real;
double complex z,resposta;
printf(" me da a parte real de um numero complexo ");
scanf("%lf",&real);
printf(" me da a parte imaginaria de um numero complexo ");
scanf("%lf",&imaginario);
z=real+imaginario * I;
resposta= z * conj(z);
printf(" a multiplicacao deste numero e seu conjugado eh %lf + %lf*I \n",creal(resposta),cimag(resposta));
return 0;
}
