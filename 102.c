#include<stdio.h>
#include<conio.h>
void main(){
    int N,k;
    printf("Informe um numero inteiro positivo:");
    scanf("%d", &N);
    for(k=1;k<=N;k++){
        int resto = k%2;
        if(resto==0){
          printf("%d ", k);
        }
    }
    getch();
}