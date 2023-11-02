#include<stdio.h>
#include<conio.h>
const float ICMS = 17;
const float KWh = 0.35;
const float iluminacao = 15.00;
void main(){
     float valor1, valor2;
     printf("Informe os dois ultimos valores do medidor de energia:");
     scanf("%f%f", &valor1,&valor2);
     float conversao = (valor1+valor2)*KWh;
     float taxas = (ICMS*conversao)/100;
     float valorFinal = conversao-taxas+iluminacao;
     printf("O valor da conta de energia eh R$%.2f", valorFinal);
     getch();
}