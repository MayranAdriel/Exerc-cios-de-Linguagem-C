#include<stdio.h>
#include<conio.h>
void main(){
    int ano;
    printf("Informe o ano:");
    scanf("%d", &ano);
    int calculo = ano%4;
    int calculo2 = ano%400;
    if(calculo==0 && calculo2==0){
        printf("O ano eh bissexto");
    }
    else
    printf("O ano nao eh bissexto");
    getch();

}