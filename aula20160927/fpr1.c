#include<stdio.h>
int divisao(int dividendo,int divisor,int*ponteiro_quociente, int *ponteiro_resto);
int main(){
    int dividendo,divisor;
    int quociente, resto;
    printf ("entre com o dividendo: ");
    scanf("%d",&dividendo);
    printf ("entre com o divisor: ");
    scanf("%d",&divisor);
    if(divisao(dividendo,divisor,&quociente,&resto))
printf ("quociente:%d , resto: %d \n",quociente,resto);
else printf("*erro*\n");


return 0;

}
int divisao(int dividendo,int divisor,int*ponteiro_quociente, int *ponteiro_resto){
    if(divisor !=0){
    *ponteiro_quociente = dividendo/divisor;
    *ponteiro_resto = dividendo%divisor;
    return 1;}else{ return 0;};
}
