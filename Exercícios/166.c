#include<stdio.h>
#include<conio.h>
const int tamanho = 5;

void main(){
	int vetA[tamanho], vetB[tamanho], vetC[tamanho];
	int k, i, j, tamanhoC = 0;
	
	for(k = 0; k < tamanho; k++){
		printf("Informe o valor da %d posicao do vetor A: ", k);
		scanf("%d", &vetA[k]);
	}
	
	puts("\n------------------------------------------------------\n");
	
	for(k = 0; k < tamanho; k++){
		printf("Informe o valor da %d posicao do vetor B: ", k);
		scanf("%d", &vetB[k]);
	}
	
	puts("\n------------------------------------------------------\n");
	
	printf("Numeros do vetor A que nao estao presentes no vetor B: \n");
	
	for(k = 0; k < tamanho; k++){
		int cont = 0;
		
		for(i = 0; i < tamanho; i++){
			
			if(vetA[k] == vetB[i]){
				cont++;
			}
			
		}
		
		if(cont == 0){
			
			for(j = 0; j < tamanhoC; j++){
				
				if(vetA[k] == vetC[j]){
					cont++;
				}
				
			}
			
			if(cont == 0){
					vetC[tamanhoC] = vetA[k];
					tamanhoC++;
				}
		}
	}
	
	for(k = 0; k < tamanhoC; k++){
		printf("%d ", vetC[k]);
	}
	
	getch();
}
