#include<stdio.h>
#include<conio.h>
#include<string.h>
const int TAMANHO = 10;
void main(){
     char gabarito[TAMANHO], resposta[TAMANHO], nome[50];
     int k, cont = 0, candidatos = 0, soma = 0;
     for(k=0;k<TAMANHO;k++){
        printf("Informe a questao %d do gabarito: ", k+1);
        scanf("%c", &gabarito[k]);
        fflush(stdin);
     }
      printf("Informe o seu nome: ");
        scanf("%s", &nome);
        while(strcmp(nome,"fim") != 0){
        fflush(stdin);
        for(k=0;k<TAMANHO;k++){
            printf("Informe a sua %d resposta: ", k+1);
            scanf("%c", &resposta[k]);
            fflush(stdin);
            if(gabarito[k]==resposta[k]){
               cont++;
            }
        }
        int percentual = (cont*100)/10;
        soma += percentual;
        printf("\nO percentual de acertos foi: %d%%\n", percentual);
        candidatos++;
        cont = 0;
        fflush(stdin);
        printf("Informe o seu nome: ");
        scanf("%s", &nome);
     }
     float percentual_candidatos = (float)soma/candidatos;
     printf("pontuacao media dos candidatos: %.2f%%", percentual_candidatos);
     getch();
}
