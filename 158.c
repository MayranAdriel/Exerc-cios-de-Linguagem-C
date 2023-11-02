#include<stdio.h>
#include<conio.h>
const int TAMANHO = 10;
void main(){
     int vet[TAMANHO];
     int k, soma;
     for(k=0;k<TAMANHO;k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
        soma += vet[k];
     }
     float media = (float)soma/TAMANHO;
     printf("Numeros maiores do que %.1f: ", media);
     for(k=0;k<TAMANHO;k++){
        if(media<vet[k]){
            printf("%d " , vet[k]);
        }
     }
     getch();
}
