#include<stdio.h>
#include<conio.h>
void main(){
	int num, k, soma = 0;
	printf("Informe um numero: ");
	scanf("%d", &num);
	for( k = 1;k < num;k++){
		if(num % k == 0){
		soma += k;
	    }
	}
	if(soma == num){
		printf("O numero eh perfeito.");
	}
	else 
	printf("O numero nao eh perfeito.");
	getch();
}
