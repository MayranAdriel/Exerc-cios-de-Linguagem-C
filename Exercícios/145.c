#include<stdio.h>
#include<conio.h>
void main(){
	int N,numero,soma = 0;
	printf("Informe o valor de N: ");
	scanf("%d", &N);
	while(soma<=N){
		printf("Informe outro valor: ");
		scanf("%d", &numero);
		soma += numero;
		fflush(stdin);
	}
	getch();
}
