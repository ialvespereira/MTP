#include<stdio.h>
void comparar (int*A,int tamanho_A,int *B,int tamanho_B);
int main () {
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
int tamanho_A = sizeof(A)/sizeof(int);
int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
int tamanho_B = sizeof(B)/sizeof(int);
comparar(A,tamanho_A,B,tamanho_B);

return 0;
}
void comparar (int*A,int tamanho_A,int *B,int tamanho_B){
  int i,j;
  for(i=0;i<tamanho_A;i++){
    for(j=0;j<tamanho_B;j++){
        if(A[i]==B[j]){
            printf("%d,",B[j]);
            break;
        }
    }
    }


}
