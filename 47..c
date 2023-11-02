#include<stdio.h>
#include<conio.h>
void main(){
     float financiamento;
     printf("Informe o valor a ser finaciado");
     scanf("%f", &financiamento);
     float juros1 = (20*financiamento)/100;
     float primeiraP = financiamento+juros1;
     float juros2 = (7*primeiraP)/100;
     float segundaP = primeiraP+juros2;
     float juros3 = (7*segundaP)/100;
     float terceiraP = segundaP+juros3;
     float juros4 = (7*terceiraP)/100;
     float quartaP = terceiraP+juros4;
     float juros5 = (7*quartaP)/100;
     float quintaP = quartaP+juros5;
     float valorTotal = primeiraP+segundaP+terceiraP+quartaP+quintaP;
     float valorJuros = juros1+juros2+juros3+juros4+juros5;
     printf("O valor da primeira parcela:R$%.2f\n segunda parcela:R$%.2f\n terceira parcela:R$%.2f\n quarta parcela:R$%.2f\n quinta parcela:R$%.2f\n", primeiraP, segundaP, terceiraP, quartaP, quintaP);
     printf("O valor total ehR$%.2f\n", valorTotal);
     printf("O valor total dos juros eh R$%.2f", valorJuros);
     getch();
}