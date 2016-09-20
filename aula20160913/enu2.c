#include <stdio.h>

union Uniao {
int i;
float f;
};
int main() {
union Uniao numero;
char opcao;
do{
    printf ("voce quer entrar com (i)nt ou (f)loat ?");


    scanf("%c",&opcao);
    fflush(stdin);
}
while (opcao != 'i' &&opcao != 'I' && opcao != 'f' && opcao !='F');
if(opcao == 'i' || opcao == 'I'){
    printf("entre com o int : ");
    scanf("%d", &numero.i);
        printf("como float %e\n",numero.f);

}
else {
    printf ("entre com o float:");
     scanf("%f", &numero.f);

     printf ("como int: %d\n",numero.i);


}
return 0;
}
