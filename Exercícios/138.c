#include<stdio.h>
#include<conio.h>
void main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    if(numero<1){
        printf("Por favor informe um numero inteiro positivo: ");
    }
    int digito, soma = 0;
    do
    {
        digito = numero % 10;
        numero = numero / 10;
        soma = soma + digito;

    } while (numero != 0);
    printf(" A soma eh: %d", soma);
    
    getch();
}