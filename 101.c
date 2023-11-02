#include<stdio.h>
#include<conio.h>
void main(){
    int N, k;
    printf("Informe um numero inteiro positivo:");
    scanf("%d", &N);
    int divisores = 1;
    int quantidade = 0;
    do
    {
        if(divisores % 2 != 0){
          printf("%d ", divisores);
          quantidade++;
        }
        divisores++;
    } while (quantidade < N);
    getch();
}