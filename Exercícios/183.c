#include<stdio.h>
#include<conio.h>
const int ordem = 5;
void main(){
	int l, c, N;
	int mat[ordem][ordem];
	int soma = 0;
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c ++){
			printf(" linha %d coluna %d ", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
	}
	
	
	printf("A matriz informada foi: \n");
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c ++){
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
	
	printf("Informe um numero entre 1 e %d: ", ordem);
	scanf("%d", &N);
	
	printf("A soma dos elementos da linha %d eh: \n", N);
	
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			if(l == N-1){
				soma = soma + mat[l][c];
			}
		}
	}
	
	printf("%d", soma);
	
	getch();
	
}
