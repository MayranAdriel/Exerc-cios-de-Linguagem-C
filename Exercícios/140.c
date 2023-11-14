#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    int contador_pares = 0;
    int contador_impares = 0;
    int soma_pares;
    int soma_impares;
    int k;
    printf("Informe a quantidade de numeros que deseja imprimir: ");
    scanf("%d", &num);
    if(num==0){
        printf("Numero invalido!");
        return 0;
    }
    printf("Numeros pares: ");
    for(k = 1; k <= num; k++){
        if(k % 2 == 0){
            printf("%d ", k);
            contador_pares++;
            soma_pares = soma_pares + k;
        }
    }
    printf("Numeros impares: ");
    for(k = 1; k <= num; k++){
        if(k % 2 != 0){
            printf("%d ", k);
            contador_impares++;
            soma_impares = soma_impares + k;
        }
    }
    int media_pares = soma_pares / contador_pares;
    int media_impares = soma_impares / contador_impares;
    printf("\nMedia dos numeros pares: %d\nMedia dos numeros impares: %d", media_pares, media_impares);
    getch();
}