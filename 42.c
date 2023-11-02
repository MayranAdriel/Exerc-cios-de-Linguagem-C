#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float peso, altura;
    printf("Informe o seu peso:");
    scanf("%f", &peso);
    printf("Informe a sua altura:");
    scanf("%f", &altura);
    float indice = peso/pow(altura,2);
    printf("O seu indice de massa corporal eh: %.2f", indice);
    getch();
}