#include<stdio.h>
#include<conio.h>

void main(){
	
	float real; //
	float dolar;
	printf("Informe o valor em real a ser convertido em dolar: ");
	scanf("%f", &real);
	printf("Informe a cotasaum atual do dolar: ");
	scanf("%f", &dolar);
	float conversaumDolar = 1.00/dolar;
	float conversaumReal = conversaumDolar*real;
	printf("O valor convertido em dolar eh U$ %.2f: ", conversaumReal);
	getch();
	
}
