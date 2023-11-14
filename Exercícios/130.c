#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char nome[100];
    int bilhete,contador = 0;
    do
    {
        contador++;
        printf("Informe o seu nome: \n");
        gets(nome);
        printf("Informe o numero do seu bilhete: ");
        scanf("%d", &bilhete);
        if(bilhete==contador){
            printf("Voce venceu o jogo!!!\n");
            printf("Nome: %s\nNumero do bilhete: %d", nome,bilhete);
            return 0;
        }
} while (contador>0);
}
