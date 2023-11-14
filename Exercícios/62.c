#include<stdio.h>
#include<conio.h>
void main(){
    int M,N;
    printf("Informe os valores de M e N:");
    scanf("%d%d", &M,&N);
    int multiplo = N%M;
    if (multiplo==0)
    {
        printf("N eh multiplo de M");
    }
    else
    printf("N nao eh multiplo de M");
    getch();
    
}