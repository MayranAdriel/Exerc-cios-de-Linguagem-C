#include<conio.h>
#include<stdio.h>
const int TAMANHO = 10;
void main(){
    int vet[TAMANHO],k;
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
    }
    for(k=0;k<TAMANHO;k++){
        printf("%d ", vet[k]);
    }
    getch();
}