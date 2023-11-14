#include<stdio.h>
#include<conio.h>
void main(){
   float M,N,k;
   float cont = 0;
   float contNumeros = 0;
    printf("Informe o valor de M e N: ");
    scanf("%f%f", &M, &N);
    for(k=M;k<=N;k++){
        cont = cont+k;
        contNumeros++;
    }
   float media = cont/contNumeros;
    printf("A soma de todos os numeros do intervalo: %.0f\n", cont);
    printf("A media dos numeros do intervalo: %.1f", media);
    getch();
}