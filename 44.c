#include<stdio.h>
#include<conio.h>
void main(){
    int binario1,binario2,binario3,binario4;
    printf("Informe o primeiro numero em binario:");
    scanf("%d", &binario1);
    printf("Informe o primeiro segundo em binario:");
    scanf("%d", &binario2);
    printf("Informe o primeiro terceiro em binario:");
    scanf("%d", &binario3);
    printf("Informe o primeiro quarto em binario:");
    scanf("%d", &binario4);
    int calculo = (binario1*pow(2,3))+(binario2*pow(2,2))+(binario3*pow(2,1))+(binario4*pow(2,0));
    if(binario1>1||binario2>1||binario3>1||binario4>1){
        printf("Voce digitou um numero diferente de 0 ou 1");
    }
    else 
    printf("O numero binario equivale a %d", calculo);
    getch();
}