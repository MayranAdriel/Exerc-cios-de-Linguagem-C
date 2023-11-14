#include<stdio.h>
#include<conio.h>
const int TAMANHO = 10;
void main(){
    int vet[TAMANHO];
    int k;
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
    }
    for(k=TAMANHO; k>0 ;k--){
        printf("%d ", vet[k]);
    }
    getch();
}
