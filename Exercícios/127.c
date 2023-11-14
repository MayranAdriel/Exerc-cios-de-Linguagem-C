#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main(){
    char palavra[50];
    int contador = 0;
    int k;
    while(contador!=2){
        printf("Informe uma palavra: ");
        gets(palavra);
        if(strlen(palavra)==5){
            contador++;
        }
        
        printf("A palavra tem %d letras\n\n", strlen(palavra));
    }
    printf("Voce digitou duas palavras com cinco letras");
    getch();
}