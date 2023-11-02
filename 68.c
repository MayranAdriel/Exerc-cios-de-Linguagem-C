#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float salario;
    printf("Informe o valor do salario:");
    scanf("%f", &salario);
    float porcentagem = (11*salario)/100;
    float salarioDescontado = salario-porcentagem;
    if(salarioDescontado>=4664.69){
         porcentagem = (27.5*salarioDescontado)/100;
         float salarioLiquido = salarioDescontado-porcentagem;
         printf("O salario liquido eh R$%.2f", salarioLiquido);
    }
    else if(salarioDescontado>=3751.06){
        porcentagem = (22.5*salarioDescontado)/100;
         float salarioLiquido = salarioDescontado-porcentagem;
         printf("O salario liquido eh R$%.2f", salarioLiquido);
    }
    else if(salarioDescontado>=2826.66){
        porcentagem = (15*salarioDescontado)/100;
         float salarioLiquido = salarioDescontado-porcentagem;
         printf("O salario liquido eh R$%.2f", salarioLiquido);
    }
    else if(salarioDescontado>=1903.99){
        porcentagem = (7.5*salarioDescontado)/100;
         float salarioLiquido = salarioDescontado-porcentagem;
         printf("O salario liquido eh R$%.2f", salarioLiquido);
    }
    else
    printf("O salario liquido eh: R$%.2f", salarioDescontado);
    getch();



}