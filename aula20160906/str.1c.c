#include <ctype.h>
#include <string.h>
#define N 256
int main() {
int i;
char frase[N];
printf ("Entre com uma frase: ");
gets(frase);
for (i=0;frase[i]!='\0';i++){
    frase[i]= toupper(frase[i]);

}
printf("tamanho da frase: 5\n",strlen(frase));
if(strncmp(frase,"BOM DIA",7)==0){
        printf("bom dia pra vc tb!\n");

}else{
printf("vc quis dizer: %s ? \n",frase);}

return 0;
}
