#include <stdio.h>
#include <ctype.h>
int main () {
int indice =0;
char frase [256];
char investigador;
printf("Escreva uma frase: ");
gets(frase);
investigador=frase[indice];
while (investigador!='\0'){
    frase[indice]= toupper(investigador);
    indice++;
    investigador=frase[indice];}
    printf("%s\n",frase);
    return 0;
}
