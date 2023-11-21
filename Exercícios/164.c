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
		
		for(i = 0; i < quantidadeC; i++ ){  //Verifica se o elemento do vetor A está presente no vetor C.
			 
			if(vetA[k] == vetC[i]){ 
				cont++;
			}
			
		}
		if(cont == 0){
				vetC[quantidadeC] = vetA[k];  //Se não estiver, armazena o numero dentro do vetor C.
				quantidadeC++;
			}
	}
	
	
	for(k = 0; k < quantidade; k++){
		printf("Informe o valor da %d posicao do vetor B: ", k);
		scanf("%d", &vetB[k]);
		
		cont = 0;
		
		for(i = 0; i < quantidadeC; i++){ //Verifica se o elemento do vetor B está presente no vetor C.
			 
			 if(vetB[k] == vetC[i]){
			 	cont++;
			 }
			 
		}
		if(cont == 0){
			 	vetC[quantidadeC] = vetB[k];  //Se não estiver, armazena o numero dentro do vetor C.
			 	quantidadeC++;
			 }
	}
	
	printf("Valores que estao presentes em pelo menos um dos vetores: \n");
	
	for(k = 0; k < quantidadeC; k++){  //Imprime os numeros que estao presentes em pelo menos um dos vetores.
		printf("%d ", vetC[k]);
	}
	
	getch();
}
