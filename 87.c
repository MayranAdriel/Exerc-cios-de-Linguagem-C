#include<stdio.h>
#include<conio.h>
void main(){
    char estadoCivil;
    printf("Informe o seu estado civil: C Casado S Solteiro D Divorciado V Viuvo:");
    estadoCivil = getchar();
    if(estadoCivil == 'C'){
        printf("Casado");
    }
    else
    if(estadoCivil == 'S'){
        printf("Solteiro");
    }
    else
    if(estadoCivil == 'D'){
        printf("Divorciado");
    }
    else
    if(estadoCivil == 'V'){
        printf("Viuvo");
    }
    else
    printf("Voce informou um caractere errado");
    getch();
}