#include<stdio.h>
#include<conio.h>
void main(){
	int num, primeiro_numero = 0, segundo_numero = 1, proximo_numero;
	printf("Informe um numero: ");
	scanf("%d", &num);
	while(proximo_numero<num){
		proximo_numero = primeiro_numero + segundo_numero;
		primeiro_numero = segundo_numero;
		segundo_numero = proximo_numero;
		if(num == proximo_numero){
			printf("O numero pertence a serie de Fibonacci.");
			return 0;
		}
	}
	printf("O numero nao pertence.");
	getch();
}
