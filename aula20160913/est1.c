#include <stdio.h>
#include <math.h>

#define RECEBEPONTO(c, pontoA)\
    ({printf("Entre coord x de %c: ",c);\
    scanf("%f",&pontoA.x);\
    printf("Entre coord y de %c: ",c);\
    scanf("%f",&pontoA.y);})

#define MOSTRAPONTO(ponto)\
({printf("(%g ; %g)\n",ponto.x,ponto.y );  })

#define SOMA(ptA,ptB,soma)\
 ({ soma.x = ptA.x + ptB.x;\
    soma.y = ptA.y + ptB.y;})
#define DISTANCIA(ptA,ptB,d)\
({ d = sqrt(pow(ptA.x - ptB.x, 2.0) + pow(ptA.y - ptB.y,   2.0)); }); //o 2.f da aos valores de ptA e ptf como float

 struct Ponto {
 float x;
 float y;
 };// faz os pontos A , B , S terem duas coordenadas atribuidas a elas

 int main() {
   struct Ponto A,B,S; // agota ponto A,B,S tem duas coordenadas
   float distancia;
    RECEBEPONTO('A',A);// vai ocupar o espaco de c no printf para mostra para o usuario que ele estra preenxendo o ponto A
    RECEBEPONTO('B',B);// vai ocupar o espaco de c no printf para mostra para o usuario que ele estra preenxendo o ponto B
    SOMA(A,B,S);// deve manter a ordem que foi usado a definicao da funcao soma S recebe soma , A recebe ponto ptA ,B recebe ptB
    MOSTRAPONTO(S);
    DISTANCIA(A,B,distancia);
   printf("a distancia entre eles : %g" , distancia);

 return 0;
 }
