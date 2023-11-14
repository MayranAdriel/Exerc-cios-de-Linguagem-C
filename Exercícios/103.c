#include<stdio.h>
#include<conio.h>
void main(){
    int N,k;
    int contador = 0;
    printf("Informe um numero inteiro:");
    scanf("%d", &N);
    for(k=1;k<=10;k++){
        int resto = N%k;
        if(resto==0){
            contador++;
        }
    }
    if(contador==2){
        printf("Ele eh um numero primo");
    }
    else
    printf("Ele nao eh um numero primo");
    getch();
}