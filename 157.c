#include<stdio.h>
#include<conio.h>
const int TAMANHO = 10;
void main(){
	int vetor[TAMANHO],k,N;
	for(k=0; k<TAMANHO; k++){
		printf("Informe um numero inteiro: ");
		scanf("%d", &vetor[k]);
	}
	printf("Informe um numero N: ");
	scanf("%d", &N);
	printf("Posicoes: ");
	for(k=0;k<TAMANHO;k++){
		if(vetor[k]==N){
	printf("%d ", k+1);
        }
    }
	getch();
}
