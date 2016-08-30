#include <stdio.h>
#include <ctype.h>

int main () {
int indice =0;
char frase [256];
char investigador;
printf("Escreva uma frase: ");
gets(frase);
investigador = frase[indice]; // investigador vai receber a primeira letra da frase
while (investigador != '\0') { // NULL = ao ultimo caracter de toda frase em c o famoso '\0'
        frase[indice]= tolower(investigador); // o caracter que esta  no investigador se trona minusculo e a letra da frase q esta na posicao do indice recebe as informacoes do investigado , nesse caso , a mesma letra , so que minuscula
        indice ++;
        investigador = frase[indice];
}
printf("%s\n",frase);
return 0;


}




