#include<stdio.h>
#define NCHAR 256
#include<time.h>
void recuperarDados();
int main() {

   receberDados();
   return 0;
}

void receberDados(){
   FILE * arquivo;
   int dados[NCHAR];
   char nome[256];
   int quantidadeDeDados,i;
    printf("entre com o nome do arquivo: ");
    scanf("%s",nome);
   printf("entre com a quantidade de dados aleatorios ");
   fscanf(stdin,"%d",&quantidadeDeDados);
   for(i=0;i<quantidadeDeDados;i++)
    {
        printf("entre os dados: ");
        scanf("%d",&dados[i]);
   }

   arquivo= fopen(nome,"w");//cria o arquivo
    if(arquivo == NULL)
     fprintf(stderr,"Arquivo nao existe!!\n");
   else{
   for (i=0;i<quantidadeDeDados;i++)
        fprintf(arquivo, "%d\n",dados[i]);// grava o dado no arquivo
   fclose(arquivo);// para de salvar o arquivo
   }}
