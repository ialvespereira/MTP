#include<stdio.h>
#include<stdlib.h>

int main(){
int b,p,i,multbase=1;
printf("me da uma base e uma potencia\n\n");
scanf ("%d",&b);
scanf("%d",&p);
for(i=1;i<=p;i++){
    multbase=multbase*b;
}
printf("resultado da potencia foi %d\n\n",multbase);
system ("pause");
return 0;
}
