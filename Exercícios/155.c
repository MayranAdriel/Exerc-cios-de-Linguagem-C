#include<stdio.h>
#include<conio.h>
const int TAMANHO = 10;
void main(){
	int vetor[TAMANHO],k,N;
	for(k=0; k<TAMANHO; k++){
		printf("Informe um numero inteiro: ");
		scanf("%d", &vetor[k]);
	}
	printf("Informe um numero entre 1 e 10:");
	scanf("%d", &N);
	printf("O numero eh %d", vetor[N-1]);
	getch();
}
