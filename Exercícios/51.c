#include<stdio.h>
#include<conio.h>
void main(){
    int posicao;
    printf("Informe a sua posicao na fila:");
    scanf("%d", &posicao);
    int guiche = ((posicao-1)%5)+1;
    int tempo = ((posicao-1)/5)*10;
    printf("Guiche:%d  Tempo:%dminutos", guiche, tempo);
    getch();
}