#include<stdio.h>
#include<conio.h>
void main(){
    float lado1,lado2,lado3;
    printf("Informe o valor do primeiro lado:");
    scanf("%f", &lado1);
    printf("Informe o valor do segundo lado:");
    scanf("%f", &lado2);
    printf("Informe o valor do terceiro lado:");
    scanf("%f", &lado3);
        if(lado1==lado2&&lado1==lado3){
            printf("O triangulo eh equilatero");
        }
        else
        if(lado1==lado2||lado2==lado3||lado3==lado1){
            printf("O triangulo eh isoceles ");
        }
        else
        printf("O triangulo eh escaleno");
        getch();
}