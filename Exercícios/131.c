#include<stdio.h>
#include<conio.h>
const float quantidade = 10;
void main(){
    float maior, segundo_maior, numero;
    int k;
    printf("Informe o 1 numero: ");
    scanf("%f", &numero);
    maior = numero;
    for(k = 2; k <= quantidade; k++){
        printf("Informe o %d numero: ", k);
        scanf("%f", &numero);
        if(numero > segundo_maior){
            segundo_maior = numero;
        }
        if(numero > maior){
            segundo_maior = maior;
            maior = numero;
        }
    }
    printf("Maior = %.2f\nSegundo maior = %.2f", maior, segundo_maior);
    getch();
}