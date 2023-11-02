#include<stdio.h>
#include<conio.h> 
#include<math.h>
int main(){ //

    float lucro;
    float despesa;
    printf("Informe a despesa em R$:");
    scanf("%f", &despesa);
    printf("Informe a margem de lucro em porcentagem:");
    scanf("%f", &lucro);
    float calculo = (lucro*despesa)/100;
    float valor = calculo+despesa;
    printf("O preco de venda devera ser de R$%.2f", valor);
    getch();
    
}

