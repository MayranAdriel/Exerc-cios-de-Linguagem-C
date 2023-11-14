#include<stdio.h>
#include<conio.h>
void main(){
    float atual,anterior;
    printf("Informe o valor atual da acao:");
    scanf("%f", &atual);
    printf("Informe o valor anterior:");
    scanf("%f", &anterior);
    float porcentagem = (atual/anterior-1)*100;
    printf("A variacao foi de %.2f%%", porcentagem);
    getch();

}