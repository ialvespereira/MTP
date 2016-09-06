
#include <stdio.h>

int main () {
    int contagem=0;
    int vetor[]={0,1,2,4,8};
    int tamanho= sizeof(vetor)/sizeof(int);
    unsigned char *ponteiro=NULL; //o ponteiro nao aponta para nenhuma locaçao de memoria
    ponteiro=(unsigned char*) vetor;// ponteiro recebe a informacao do primeiro byte do vetor, ou seja , escrever vetor eh o mesmo que escrever &(vetor[0])
    for(;ponteiro<vetor+tamanho;ponteiro++){
            printf("%p : %X\n",ponteiro,*ponteiro);
    if( *ponteiro==0 ){//se o conteudo do ponteiro for igual a 0 , adicionar 1 ao contagem
            contagem++;}
    }
    printf("sao %d os bytres de memoria com apenas 0's.,\n",contagem);
    return 0;

    }
