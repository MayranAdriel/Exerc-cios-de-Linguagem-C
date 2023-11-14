#include<stdio.h>
#include<conio.h>
const int quantidade = 5;
void main(){
	int vetA[quantidade];
	int vetB[quantidade];
	int vetC[quantidade * 2], quantidadeC = 0;
	int k, i;
	int cont = 0;
	
	for(k = 0; k < quantidade; k++){
		printf("Informe o valor da %d posicao do vetor A: ", k);
		scanf("%d", &vetA[k]);
		
		cont = 0;
		
		for(i = 0; i < quantidadeC; i++ ){
			 
			if(vetA[k] == vetC[i]){
				cont++;
			}
			
		}
		if(cont == 0){
				vetC[quantidadeC] = vetA[k];
				quantidadeC++;
			}
	}
	
	
	for(k = 0; k < quantidade; k++){
		printf("Informe o valor da %d posicao do vetor B: ", k);
		scanf("%d", &vetB[k]);
		
		cont = 0;
		
		for(i = 0; i < quantidadeC; i++){
			 
			 if(vetB[k] == vetC[i]){
			 	cont++;
			 }
			 
		}
		if(cont == 0){
			 	vetC[quantidadeC] = vetB[k];
			 	quantidadeC++;
			 }
	}
	
	printf("Valores que estão presentes em pelo menos um dos vetores: \n");
	
	for(k = 0; k < quantidadeC; k++){
		printf("%d ", vetC[k]);
	}
	
	getch();
}
