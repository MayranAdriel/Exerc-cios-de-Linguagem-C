#include<conio.h>
#include<stdio.h>
const int ordem = 3;
void main(){
	int l, c;
	int mat[ordem][ordem];
	
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("Informe o valor da linha %d coluna %d: ", l+1, c+1);
			scanf("%d", &mat[l][c]);
		}
	}
	
	printf("A matriz informada foi: \n");
	
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
	
	for(l = 0; l < ordem; l++){
		int soma = 0;
		for(c = 0; c < ordem; c++){
			soma = soma + mat[l][c];
		}
		printf("A soma da linha %d eh: %d\n", l+1, soma);
	}
	
	getch();
}
