#include<stdio.h>
#include<conio.h>
const int ordem = 5;
void main(){
	int mat[ordem][ordem];
	int N, C, L;
	printf("Informe o numero que deseja multiplicar: ");
	scanf("%d", &N);
	for(L = 0; L < ordem; L++){
		for(C = 0; C < ordem; C++){
			printf("Informe o numero linha %d coluna %d: ", L, C);
			scanf("%d", &mat[L][C]);
		}
	}
	for(L = 0; L < ordem; L++){
		for(C = 0; C < ordem; C++){
			printf("%d ", mat[L][C]);
		}
		printf("\n");
	}
	int aux;
	int aux1;
	printf("Matriz multiplicada por %d: \n", N);
	
	for(L = 0; L < ordem; L++){
		for(C = 0; C < ordem; C++){
			aux = mat[L][C];
			aux1 = mat[L][C] * N;
			mat[L][C] = aux1;
		}
	}
	
	for(L = 0; L < ordem; L++){
		for(C = 0; C < ordem; C++){
			printf("%d ", mat[L][C]);
		}
		printf("\n");
	}
	

	
	getch();
}
