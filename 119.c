#include<stdio.h>
#include<conio.h>
void main(){
    int numero;
    int primeiro = 0;
    int segundo = 1;
    int proximo;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);
    while(primeiro<=numero){
        printf("%d ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
    getch();
}