#include<stdio.h>
#include<conio.h>
void main(){
    int M,N;
    printf("Informe o valor de M e N: ");
    scanf("%d%d", &M, &N);
    int cosciente = 0;
    int resto = M;
    while(resto>=N){
          resto -= N;
          cosciente++;
    }
    printf("Quociente: %d\nResto: %d", cosciente, resto);
    getch();
}