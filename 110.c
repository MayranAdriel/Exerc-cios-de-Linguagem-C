#include<stdio.h>
#include<conio.h>
const int numeros = 10;
void main(){
    int N,k,i;

    for(k=1;k<=numeros;k++){
        printf("Informe um inteiro positivo: \n");
        scanf("%d", &N);
        int fatorial = 1;
    
        for(i=1;i<=N;i++){

            fatorial *= i;
        }
            
            printf("O fatorial de %d eh: %d\n", N, fatorial);
        
    }
    getch();
}
