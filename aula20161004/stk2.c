#include<stdio.h>
#include<math.h>

#define M 4

int main (){

    return 0;
}

float media(float * dados,int ndados){
   float soma = 0.f;
   int i;
   for(i=0;i<ndados;i++)
    soma+=dados[i];
    return soma/ndados;

