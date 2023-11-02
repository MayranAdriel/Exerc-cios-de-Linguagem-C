#include<stdio.h>
#include<conio.h>
void main(){
    float consumo;
    printf("Informe o valor do seu consumo:");
    scanf("%f", &consumo);
    float taxas = (10*consumo/100+consumo)+10;
    printf("O valor final foi de R$%.2f", taxas);
    getch();
}