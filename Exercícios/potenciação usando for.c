#include<stdio.h>
#include<conio.h>
void main(){
    int M,N,k;
    printf("Informe o valor de M e N: ");
    scanf("%d%d", &M,&N);
    long long potencia = M;
    for(k=1;k<N;k++){
        potencia *= M;
    }
     printf("O resultado eh: %3d", potencia);
    getch();
}