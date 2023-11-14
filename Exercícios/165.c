#include<stdio.h>
#include<conio.h>
const int tamanho = 5;
void main(){
	int vetA[tamanho];
	int vetB[tamanho];
	int vetC[tamanho], tamanhoC = 0;
	int k, i, j;
	
	for(k = 0; k < tamanho; k++){
		printf("Informe o valor da %d posicao do vetor A: ", k);
		scanf("%d", &vetA[k]);
	}
	
	puts("\n-----------------------------------------------------\n");
	
	for(k = 0; k < tamanho; k++){
		printf("Informe o valor da %d posicao do vetor B: ", k);
		scanf("%d", &vetB[k]);
	}
	
	puts("\n-----------------------------------------------------\n");
	
	printf("Numeros que tem nos dois vetores: \n");
	
	for(k = 0; k < tamanho; k++){
		int cont = 0;
		
		for(i = 0; i < tamanho; i++){
			
			if(vetA[k] == vetB[i]){
				
				for( j = 0; j < tamanhoC; j++){
					
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
	}
	
	for(k = 0; k < tamanhoC; k++){
		printf("%d ", vetC[k]);
	}
	
	getch();
}
