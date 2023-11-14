#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int numero;
    printf("Informe um numero inteiro:");
    scanf("%d", &numero);
    int resto = numero%2;
    if (resto==0){
        printf("O numero informado eh par.");
    }
    else
        printf("O numero informado eh impar.");
        getch();
    
}