#include <stdio.h>
#include <stdlib.h>
float media(float* vetor,int tamanho);
 float *recebeNumero(float*vetor,int*enderecoDoTamanho);
float maior(float * vetor,int tamanho);
float menor(float * vetor,int tamanho);
 int main(){
    float *vetor = NULL;
    int tamanho=0,opc,i;
    do{
        vetor = recebeNumero(vetor,&tamanho);
        printf("media: %g\n",media(vetor,tamanho));
        printf("maior: %g\n",maior(vetor,tamanho));
        printf("menor: %g\n",menor(vetor,tamanho));
        printf("deseja entrar com outro?(0 - nao; 1 - sim): ");
        scanf("%d",&opc);
    }while(opc!=0);
    for(i=0;i<tamanho;i++)
        printf("%f\n",vetor[i]);
    free(vetor);

 return 0;
 }

 float *recebeNumero(float*vetor,int*enderecoDoTamanho){
     (*enderecoDoTamanho)++;
      if(vetor == NULL)
        vetor = (float*) malloc(sizeof(float));
      else
        vetor= (float*) realloc(vetor,(*enderecoDoTamanho)*sizeof(float));
     printf("Entre com um numero:");
     scanf("%f",&vetor[(*enderecoDoTamanho)-1]);
     return vetor;
 }
 float media(float* vetor,int tamanho){
     float soma= 0.0;
     int i;
     for(i=0;i<tamanho;i++)
        soma=soma+vetor[i];
     return soma/tamanho;

 }
 float maior(float * vetor,int tamanho){
     int maior=vetor[0],i;
     for(i=1;i<tamanho;i++){
        if(maior<vetor[i]){
            maior=vetor[i];

        }

     }
return maior;
 }
 float menor(float * vetor,int tamanho){
     int menor=vetor[0],i;
     for(i=1;i<tamanho;i++){
        if(menor>vetor[i]){
            menor=vetor[i];
        }


     }
return menor;
 }

