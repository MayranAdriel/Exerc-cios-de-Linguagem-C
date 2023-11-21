#include<stdio.h>
#include<conio.h>

const int tamanho = 50;

void main(){
	int vetA[tamanho];
	int vetB[tamanho];
	int vetC[tamanho * 2];
	int k, tamanhoC = 0;
	
	for( k = 0; k < tamanho; k++){
		printf("Informe o valor %d do vetor A: ", k);
		scanf("%d", &vetA[k]);
	}
	
	for( k = 0; k < tamanho; k++){
		printf("Informe o valor %d do vetor B: ", k);
		scanf("%d", &vetB[k]);
	}
	
	for(k = 0; k < tamanho; k++){
		vetC[tamanhoC] = vetA[k];
		tamanhoC++;
		vetC[tamanhoC] = vetB[k];
		tamanhoC++;
	}
	
	for(k = 0; k < tamanhoC; k++){
		printf("%d ", vetC[k]);
	}
	
	getch();
}
