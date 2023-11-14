#include<stdio.h>
#include<conio.h>
void main(){
    float numero;
    printf("Informe um numero real:");
    scanf("%f", &numero);
    if(numero>0){
        printf("O numero eh positivo");
    }
    else if(numero<0){
        printf("O numero eh negativo");
    }
    else
    printf("O numero eh neutro");
    getch();
}