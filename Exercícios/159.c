#include<stdio.h>
#include<conio.h>
const int TAMANHO = 10;
void main(){
	int vet[TAMANHO];
	int k;
	for(k=0;k<TAMANHO;k++){
		printf("Informe o %d numero inteiro: ", k);
		scanf("%d", &vet[k]);
	}
		printf("vetor antes da mudanca:\n");
		for(k=0;k<TAMANHO;k++){
		printf("%d ", vet[k]);
	}
	int M,N;
	printf("\nInforme o valor de M e N: ");
	scanf("%d%d", &N,&M);
	int aux = vet[M];
	vet[M] = vet[N];
	vet[N] = aux;
	printf("Numeros depois da inversao: ");
	for(k=0;k<TAMANHO;k++){
		printf("%d ", vet[k]);
	}
	getch();
}
