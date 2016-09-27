#include <stdio.h>
#include<string.h>
#include<ctype.h>
void soletras(char *frase,int numero_de_caracteres_da_frase,char*nova_frase);
int main(){
   char frase[256],nova_frase[256];
   printf("entre com uma frase ");
   gets(frase);
   soletras(frase,strlen(frase),nova_frase);// como nova_frase e frase sao vetores, nao precisa colocar &
   printf("%s \n",nova_frase);
   return 0;
}

void soletras(char *frase,int numero_de_caracteres_da_frase,char*nova_frase){
     int i,j = 0;
     for(i=0; i<numero_de_caracteres_da_frase; i++)
        if(isalpha(frase[i])){
           nova_frase[j] = frase[i];
           j++;
       }
       nova_frase[j]='\0';
       }



