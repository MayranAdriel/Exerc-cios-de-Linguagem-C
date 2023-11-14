#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    int aleatorio,numero;
    int cont = 0;
    srand(time(NULL));
    aleatorio = rand() % 100;                      //Algoritimo para lançar um numero aleatorio no sistema.
    printf("%d \n", aleatorio);
    printf("*********************************\nBem-vindo ao jogo do arrochado!\n\n*********************************\n\n\n");
    while(cont!=2){
         printf("Informe um numero entre 0 e 100: ");       //Armazena o valor informado.
        scanf("%d", &numero);
        if(numero>aleatorio){
            printf("O numero eh menor que %d.\n", numero);      //Informa que o numero do sistema é menor que o do usuario.
        }
        if(numero<aleatorio){
            printf("O numero eh maior que %d.\n", numero);      ////Informa que o numero do sistema é menor que o do usuario.
        }
       if(numero==aleatorio){
            printf("VOCE PERDEU!\nO numero era %d", aleatorio);                          //Caso o valor informado seja igual o numero aleatorio, o programa encerra.
            return 0;
        }
        if(numero==aleatorio-1){
            cont++;
        }
        if(numero==aleatorio+1){          //Contadores que se chegarem ao numero 2, o usuario ganha.
            cont++;
        }
        numero = 0;
    }
    printf("VOCE VENCEU!!!\nO numero era %d", aleatorio);
    getch();
}