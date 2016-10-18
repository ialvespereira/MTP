
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * iniciaTexto();
char * recebeTexto();
char *leTexto();
void gravaTexto(char*texto, int nchar);
int main() {
    char * texto;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = recebeTexto();
    printf("\n::: Na memoria :::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    free(texto);
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;char *leTexto()
}
char * recebeTexto() {
    char * texto = leTexto();
    char * aux;
    int c, tamanho = 0;
    printf("%s",texto);
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    gravaTexto(texto,strlen(texto));
    return texto;
}
char *leTexto(){
    FILE * arquivo;
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    arquivo = fopen("meutexto.txt","r");
    if(arquivo == NULL){

        fprintf(stderr,"erro na criacao do arquivo!!\n");}
    else{
        do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    fclose(arquivo);
    return texto;
    }
}
void gravaTexto(char*texto, int nchar){
    FILE*arquivo;
    int i;
    arquivo = fopen("meutexto.txt","a");
    if(arquivo == NULL)
        fprintf(stderr,"erro na criacao do arquivo!!\n");
    else{
        for(i=0;i < nchar;i++)
            fputc(texto[i],arquivo);
        fclose(arquivo);
    }
}
