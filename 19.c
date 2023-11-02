#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(){
	int lado1;
	int lado2;
	printf("Informe o valor dos dois lados do triangulo: ");
	scanf("%d%d", &lado1,&lado2);
	int lado3 = 180-(lado1+lado2);
	printf("O valor do terceiro lado eh: %d", lado3);
	getch();
}
