#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

struct LISTA_DE_INFORMACOES {

    char nome[100];
    int idade;
    float n_telefonico;

} ;
int main () {
    int quantidade_contatos,i;
    struct LISTA_DE_INFORMACOES informacoes[N];
    char sem_idade [20];
    char fim[20];
    char termino[20]="fim";
    char nulo[20] = "nulo";


    for(quantidade_contatos=0;quantidade_contatos<100;quantidade_contatos++){

    printf (" me da o seu nome \n");
    gets(informacoes[quantidade_contatos].nome);

    for(i=0;i<20;i++)
    {
        sem_idade[i]=0;
    }
    printf("Gostaria de saber qual a idade do contato.Caso nao querira informar ,digite 'nulo', caso nao tenha problema, digite 'ok' ");
    gets(sem_idade);

    if(strcmp(sem_idade,nulo)==0){
        informacoes[quantidade_contatos].idade=-1;

        }else{
            printf (" me da o sua idade \n");
        scanf ("%d",informacoes[quantidade_contatos].idade);
        }

    printf (" me da o seu numero de celular  ");
    scanf ("%f",informacoes[quantidade_contatos].n_telefonico);

    for(i=0;i<20;i++)
    {
        fim[i]=0;
    }
    printf("caso nao acha nome haja mais nenhum contato, digite 'fim'\n");
    gets(fim);

    if(strcmp(fim,termino)==0){
        break;
    }else{ printf("me da mais uma contato \n");}
}


return 0;
}
