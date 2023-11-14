#include<stdio.h>
#include<conio.h>
void main(){
    int M,N,k;
    int cont = 0;
    printf("Informe o valor de M e N: ");
    scanf("%d%d", &M,&N);
    for(k=M;k<=N;k++){
        cont = cont+k;
        }
        printf("A soma dos numeros do intervalo eh %d", cont);
        getch();
    }
