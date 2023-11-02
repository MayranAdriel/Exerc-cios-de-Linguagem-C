#include<stdio.h>
#include<conio.h>
void main(){
    int N,k,i,j;
    printf("Informe o valor: ");
    scanf("%d", &N);
    for(k=1;k<=N;k++){
        for(j=2;j<=k;j++)
        printf(" ");
        for(i=N;i>=k;i--){
            printf("*");
        }
        printf("\n");
    }
}