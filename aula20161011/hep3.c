#include <stdio.h>
#include <stdlib.h>
char * inicializaTexto();
char * recebeTexto(char * textoDoRecebe);

int main(){
    char * texto;// essa eh a variavel que vai segurar o endereco da variavel que vai conter o texto
    texto = inicializaTexto();
    printf("::: Entre com seu texto (entre com '#'+ENTER para sair):::::\n");
    texto = recebeTexto(texto);
    printf("\n:::: o que tem na HEAP  ::::\n");
    printf("%s\n",texto);
    free(texto);
    return 0;
}

char * inicializaTexto(){ // criando a variavel que vai armazenar o texto
    char * textoDoInicializa;// variavel que vai conter o texto
    textoDoInicializa = (char*)malloc(sizeof(char));
    textoDoInicializa[0]='\0';
    return textoDoInicializa;


}
char * recebeTexto(char * textoDoRecebe){
   int c,tamanho=0;
   do{
        c=getchar();
        if(c!='#'){
            tamanho++;

            textoDoRecebe= (char *)realloc(textoDoRecebe, (tamanho+1)*sizeof(char));//auentando a variavel que vai conter o texto .Sizeof me da o numero de byetes necessario pra armazenar um unico tipo de char, logo a memoria necessaria para armazenar o vetor vai ser o numero de bytes vezes o tamnaho
            textoDoRecebe[tamanho]='\0';
            textoDoRecebe[tamanho-1]=c;
   }
   }while(c!='#');
    return textoDoRecebe;
}
