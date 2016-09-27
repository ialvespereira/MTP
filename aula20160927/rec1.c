#include <stdio.h>
#include<string.h>
#include<ctype.h>
void inverter(char*frase,int n);
int main(){
   char frase[256];
   printf("entre com uma frase ");
   gets(frase);
   inverter(frase,0);
   printf("\n");
   return 0;
}

void inverter(char*frase,int n){

    if(frase[n] !='\0'){
    inverter(frase,n+1);//o pc vai caminhar na frase inteira ate achar o '\0' .Achado o '\0', a condicao do if eh invalida e a funcao  "inverter " esta resolvida e o if segue para o printf.
    printf("%c",frase[n]);
    }
}
