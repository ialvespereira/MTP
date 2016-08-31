#include<stdio.h>
int main (){
int numero,i;
double inversao_tipo_float=0,tipo_double;
float inversao_tipo_double=0,tipo_float;
printf("me da um numero ");
scanf("%d",&numero);
tipo_double=1.0/numero;
tipo_float=1.0/numero;
for(i=1;i<=729;i++){

    inversao_tipo_double=inversao_tipo_double+tipo_double;
}
printf("o numero com o double eh %.15g \n",inversao_tipo_double);
for(i=1;i<=729;i++){
         inversao_tipo_float=inversao_tipo_float+tipo_float;
}
printf("o numero com o double eh %.15g \n",inversao_tipo_float);
return 0;


}
