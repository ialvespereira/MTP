#include<stdio.h>
#define NCHAR 256
void receberDados();
void recuperarDados();
int main() {
   int opcao;
   do{
    printf ("1-Receber dados \n");
    printf ("2-Recuperar dados \n");
    printf ("0-sair\n");
    printf ("Entre com a opcao: ");
    fscanf(stdin,"%d",&opcao);
    getchar();
    if(opcao ==1) receberDados();
    if(opcao ==2) recuperarDados();
   }while(opcao);
   return 0;
}

void receberDados(){
   FILE * arquivo;
   char nome[NCHAR];
   int idade;
   float altura_m;
   printf("entre com seu nome: ");
   fgets(nome,NCHAR,stdin);
   printf("entre com seu idade: ");
   fscanf(stdin,"%d",&idade);
   printf("entre com sua altura: ");
   fscanf(stdin,"%f",&altura_m);
   arquivo= fopen("info.txt","w");
    if(arquivo == NULL)
     fprintf(stderr,"Arquivo nao existe!!\n");
   else{
   fprintf(arquivo, "%s\n%d\n%f\n",nome,idade,altura_m);
   fclose(arquivo);
   }

}

void recuperarDados(){
   FILE * arquivo;
   char nome[NCHAR];
   int idade;
   float altura_m;
   arquivo= fopen("info.txt","r");
   if(arquivo == NULL)
     fprintf(stderr,"Arquivo nao existe!!\n");
   else{
       fgets(nome,NCHAR,stdin);
       fscanf(arquivo, "%d\n%f\n",&idade,&altura_m);
       fclose(arquivo);
       fprintf(stdout, "Nome: %s\n",nome);
       fprintf(stdout, "Idade: %d\n",idade);
       fprintf(stdout, "Altura: %f\n",altura_m);
   }}
