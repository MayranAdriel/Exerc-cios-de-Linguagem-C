#include<stdio.h>
#include<conio.h>
const float diarias = 180;
void main(){
    float pedreiros,ajudantes;
    float valorDiaria;
    printf("Informe o numero de pedreiros:");
    scanf("%f", &pedreiros);
    printf("Informe o numero de ajudantes:");
    scanf("%f", &ajudantes);
    printf("Informe o valor da diaria do pedreiro:");
    scanf("%f", &valorDiaria);
    float valor = valorDiaria*diarias;
    float calculoAjudantes = (valor/2)*ajudantes;
    float calculoPedreiros = valor*pedreiros;
    float custoTotal = calculoPedreiros+calculoAjudantes;
    printf("A obra custou R$%.2f", custoTotal);
    getch();

    
}