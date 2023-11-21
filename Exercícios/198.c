#include<stdio.h>
#include<conio.h>

const int ordem = 3;

void main(){
	int matA[ordem][ordem];
	int matB[ordem][ordem];
	int numeros[ordem*ordem], tamanhoNumeros = 0;
	int l, c, j, i, x;
	                                      //Le as as matriz A e B
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("Informe linha %d coluna %d matriz A: ", l, c);
			scanf("%d", &matA[l][c]);
		}
	}
	 
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("Informe linha %d coluna %d matriz B: ", l, c);
			scanf("%d", &matB[l][c]);
		}
	}
	
	system("cls");                                       
	
	puts("\n----------------------------------------------------\n");
	
	printf("Matriz A: \n");                   //Imprime as duas matrizes informadas pelo usuario
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("%d ", matA[l][c]);
		}
		printf("\n");
	}
	
	puts("\n----------------------------------------------------\n");
	
	printf("Matriz B: \n");
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("%d ", matB[l][c]);
		}
		printf("\n");
	}
	
	for(l = 0; l < ordem; l++){          //Inicializa a matriz A
		for(c = 0; c < ordem; c++){
			int cont = 0;                //Zera o contador a cada nova inicializacao da matriz A
			for(j = 0; j < ordem; j++){     //Inicializa a matriz B
				for(i = 0; i < ordem; i++){
					if(matA[l][c] == matB[j][i]){          //Verifica se o elemento atual da matriz A eh igual a pelo menos um dos elementos da matriz B
						for(x = 0; x < tamanhoNumeros; x++){       //Inicializa o vetor que armazena os numeros que estao presentes nas duas matrizes (A e B)
							if(matA[l][c] == numeros[x]){       //Verifica se o numero ja foi armazenado no vetor
								cont++;
							}
						}
						if(cont == 0){                    //Armazena o numero, caso ele ainda nao tenha sido armazenado no vetor
							numeros[tamanhoNumeros] = matA[l][c];
							tamanhoNumeros++;
						}
					}
				}
			}
		}
	}
	
	puts("\n----------------------------------------------------\n");
	
	printf("Numeros que aparecem nas duas matrizes: \n");
	
	for(c = 0; c < tamanhoNumeros; c++){
		printf("%d ", numeros[c]);
	}
	
	getch();
}
