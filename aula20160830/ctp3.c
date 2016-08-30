#include <stdio.h>
#include <ctype.h>
int main() {
int indice=0,n_de_letras=0;
char frase[256];
char investigador;
printf("Escreva uma frase: ");
gets(frase);
investigador=frase[indice];

while (investigador!='\0'){// toda frase em c termina com o caracter '\o'
    if(isalpha(investigador)){// isalpha  a variavel investigador eh uma letra, assim , quando a variavel for uma letra, o if eh iniciado e somamos +1 na variavel n_de_letras
            n_de_letras++;}
    indice++;
    investigador=frase[indice];}

printf("numero de letras da frase %d\n",n_de_letras);
return 0;
}
