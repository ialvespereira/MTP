#include <stdio.h>
# define N 10000
#include <time.h>
int main () {
    int i,numero;
    srand (time(0));
    float soma=0.0f;
    int vetor[N];
    printf("entre com um numero nao negativo ");
    scanf("%d",&numero);
    for (i =0;i<N;i++){
        vetor[i]=rand()%numero +1;}
        for(i=0; i<N; i++){
            soma= soma +vetor [i];
        }
        printf("a media dos numeros e: %g\n",soma/N);
        return 0;}
