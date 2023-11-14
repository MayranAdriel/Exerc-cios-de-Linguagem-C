#include<stdio.h>
#include<conio.h>
void main(){
	int M,N,k,contador = 0,divisores = 1, quantidade = 0,soma = 0;;
	printf("Informe o valor do intervalo (M,N): ");
	scanf("%d%d", &M, &N);
	printf("Numeros primos:\n");
	for(k = 1;k <= N;k++){
		while(divisores <= N){
			if(k % divisores == 0){
				contador++;
			}
			divisores++;
		}
		if(contador == 2){
			soma += k;
			quantidade++;
			printf("%d\n", k);
		}
		contador = 0;
		divisores = 1;
	}
	float media = (float)soma/quantidade;
	printf("A media de %d eh %.2f", soma, media);
	getch();
}
