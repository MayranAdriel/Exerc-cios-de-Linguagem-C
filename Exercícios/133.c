#include<stdio.h>
#include<conio.h>
void main(){
    int N,k,i;
    printf("Informe um numero inteiro positivo:");
    scanf("%d", &N);
    for(k=1;k<=N;k++){
        for(i=1;i<=k;i++){
           printf("*");
        }
        printf("\n");
    }
    getch();
}