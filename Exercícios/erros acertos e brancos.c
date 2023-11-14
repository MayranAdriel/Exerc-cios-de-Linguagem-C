#include<stdio.h>
#include<conio.h>
void main(){
    int acertos,erros,brancos;
    printf("Informe o numero de acertos:");
    scanf("%d", &acertos);
    printf("Informe o numero de erros:");
    scanf("%d", &erros);
    printf("Informe o numero de questoes em branco:");
    scanf("%d", &brancos);
    int  calculoErros = erros*3;
    int calculoAcertos = acertos*5;
    int pontuacao = calculoAcertos-calculoErros;
    if(pontuacao<0){
      pontuacao = pontuacao*-1;
    }
    printf("A pontuacao do candidato foi de %d", pontuacao);
    getch();

}