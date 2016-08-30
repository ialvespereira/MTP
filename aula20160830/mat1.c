#include <stdio.h>
#include <math.h>
int main () {
float p1_x,p1_y,p2_x,p2_y, distancia;
printf("Escreva a coordenada x do ponto 1: ");
scanf("%f",&p1_x);
printf("Escreva a coordenada y do ponto 1: ");
scanf("%f",&p1_y);
printf("Escreva a coordenada x do ponto 2: ");
scanf("%f",&p2_x);
printf("Escreva a coordenada y do ponto 2: ");
scanf("%f",&p2_y);
distancia= sqrt(pow(p2_x-p1_x,2.0)+pow(p2_y-p1_y,2.0));
printf(" a distancia entre os pontos eh %f\n",distancia);
}
