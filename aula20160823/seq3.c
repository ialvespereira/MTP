#include <stdio.h>
int main (){
float a,b,c,media;
printf("digite as notas do aluno \n");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
fflush(stdin);
media=(a*2+b*3+c*5)/(2.0+3.0+5.0);
printf ("a media eh %f\n",media);
return 0;

}
