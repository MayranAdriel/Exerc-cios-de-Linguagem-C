#include<stdio.h>
#include<conio.h>
void main(){
     int golsCasa,golsFora;
     printf("Informe o numero de gols marcado pelo time da casa");
     scanf("%d", &golsCasa);
     printf("Informe o numero de gols marcado pelo time de fora");
     scanf("%d", &golsFora);
     if(golsCasa>golsFora){
        printf("O time da casa ganhou");
     }
     else if(golsFora>golsCasa){
        printf("O time de fora ganhou");
     }
     else
     printf("O jogo terminou em empate");
     getch();
}
