
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char  mostra_carta(int c);
int pega_carta();
void limpa_buffer();

int main (){
  srand(time(0));

  int i,carta1,carta2,soma_comp=0;
  int carta_user,ncartas,soma_user=0;

  carta1 = pega_carta();
  carta2 = pega_carta();
  printf("quantas cartas vc quer \n");
  scanf("%d",&ncartas);

  for( i=0; i < ncartas; i++){
    carta_user = pega_carta();
    printf("%c ",mostra_carta(carta_user));
    soma_user = soma_user + carta_user;
  }

  if (soma_user>21)
    printf("\n Perdeu , playboy!\n");

  else{

       if(soma_user > carta1+carta2)
          printf("\n vc ganhou,  ");

       else
        printf("vc perdeu \n");
        printf("minhas cartas: %c %c \n",mostra_carta(carta1),mostra_carta(carta2));


  }
  return 0;
}
void limpa_buffer(){
 int c;
  while((c = getchar()) != EOF && c != '\n');
}






int pega_carta(){
    return rand()%13+1;

}

char mostra_carta(int c) {

   char carta;

   switch(c){
   case 1: carta = 'A';break;
   case 10: carta ='D';break;
   case 11: carta ='J';break;
   case 12: carta ='Q';break;
   case 13: carta ='K';break;
   default:
       carta = 48 + c;


   }
   return carta;


}
