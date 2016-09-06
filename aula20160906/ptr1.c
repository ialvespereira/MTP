#include <stdio.h>

int main () {
unsigned int numero = 0xFACA8421;//os dados relacionados a FACA8421 foram atribuidos ao local de memoria "numero"
unsigned char *ponteiro = NULL;// ponteiro que nao aponta para nenhum local de memoria ainda. O pontoteiro foi inicializado
printf("%p : %u \n",&numero,numero);//%p eh o identificador para ponteiro(indica o nome do local da memoria ou ponteiro) e %u(indica o que tem na memoria) eh o identificador para o unsigned
ponteiro= (unsigned char*) &numero;// numero , que eh dio

for (;ponteiro<&numero +1;ponteiro++)
{
    printf("%p : %X \n",ponteiro,*ponteiro);

}







return 0;
}
