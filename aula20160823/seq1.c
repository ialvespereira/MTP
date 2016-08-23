#include <stdio.h>
int main() {
float lado_quadrado,area;
printf("Digite o lado do quadrado ");
scanf("%f",&lado_quadrado);
fflush(stdin);
area=lado_quadrado*lado_quadrado;
printf("A area eh %f\n\n",area);
return 0;
}
