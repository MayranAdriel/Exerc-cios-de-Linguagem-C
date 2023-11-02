#include<stdio.h>
#include<conio.h>
const int quantidade = 10;
void main(){
	 int maior,segundo_maior,numero,k;
     printf("Informe o 1 numero: ");
     scanf("%d", &numero);
     maior = numero;
     for(k=2;k<=quantidade;k++){
     	printf("Informe o %d numero:", k);
     	scanf("%d", &numero);
     	 if(numero == maior){
		 	printf("Voce repetiu dois numeros seguidos.");
		 	return 0;
		 }
     	if(numero>maior){
     		segundo_maior = maior;
     		maior = numero;
		 }
	 }
	 int diferenca = maior - segundo_maior;
	 printf("Maior numero : %d\nSegundo maior numero: %d\nDiferenca entre eles %d", maior,segundo_maior,diferenca);
	 getch();
}
