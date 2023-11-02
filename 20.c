#include<stdio.h>
#include<conio.h>

int main(){

    int comprimento;
    int largura;
    printf("Informe o comprimento do terreno em metros: ");
    scanf("%d", &comprimento);
    printf("Informe a largura do terreno em metros: ");
    scanf("%d", &largura);
    int metrosQ = comprimento*largura;
    int valor = metrosQ*300;
    printf("O terreno esta avaliado em R$%d", valor);
    getch();
}
