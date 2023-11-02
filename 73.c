#include<stdio.h>
#include<conio.h>
void main(){
    int numero1,numero2,numero3;
    printf("Informe os tres numeros:");
    scanf("%f%f%f", &numero1,&numero2,&numero3);
    if(numero1>numero2&&numero1>numero3){
       printf("O numero 1 eh o maior\n");
    }
    else if(numero2>numero1&&numero2>numero3){
       printf("O numero 2 eh o maior\n");
    }
    else 
    printf("O numero 3 eh o maior\n");
    if(numero1<numero2&&numero1<numero3){
       printf("O numero 1 eh o menor\n");
    }
    else if(numero2<numero1&&numero2<numero3){
       printf("O numero 2 eh o menor\n");
    }
    else 
    printf("O numero 3 eh o menor\n");
    getch();


}