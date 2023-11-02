//Feito por Mayran
#include<stdio.h>
#include<conio.h>
#include<string.h>
const int quantidade = 4;
void main(){
	 char nome[100], nome_maior[100], nome_menor[100];
	 int k, peso, maior, menor;
	 printf("Informe o NOME do 1 boi: ");
	 scanf("%s", nome);
	 printf("Informe o PESO do 1 boi: ");
	 scanf("%d", &peso);
	 maior = peso;
	 strcpy(nome_maior, nome);
	 menor = peso;
	 strcpy(nome_menor, nome);
	 for(k = 2;k <= quantidade;k++){
	 	printf("Informe o nome do %d boi: ", k);
	 	scanf("%s", nome);
	    printf("Informe o PESO do %d boi: ", k);
	    scanf("%d", &peso);
	    if(peso==maior){
	    	printf("Voce informou dois valores iguais.");
	    	return 0;
		}
	    if(peso>maior){
	    	maior = peso;
	    	strcpy(nome_maior, nome);
		}
		else
		if(peso<menor){
			menor = peso;
			strcpy(nome_menor, nome);
		}
	 }
	 printf("Boi mais pesado: %s\nPeso: %dKg\n", nome_maior, maior);
	 printf("Boi mais leve: %s\nPeso: %dKg", nome_menor, menor);
	 getch();
	 
}
