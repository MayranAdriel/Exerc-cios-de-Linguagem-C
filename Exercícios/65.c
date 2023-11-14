#include<stdio.h>
#include<conio.h>
void main(){
    int idade;
    printf("Informe a idade:");
    scanf("%d", &idade);
    if(idade>=60){
        printf("Voce eh idoso");
    }
    else if(idade>=18){
        printf("Voce eh adulto");
    }
    else if(idade>=13){
        printf("Voce eh adolescente");
    }
    else
        printf("Voce eh crianca");
        getch();
}