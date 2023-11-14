#include <stdio.h>
#include <conio.h>

const int ordem = 3;

void main(){
	float mat[ordem][ordem];
	int l, c;
	
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("Informe a linha %d coluna %d: ", l, c);
			scanf("%f", &mat[l][c]);
		}
	}
	
	printf("A matriz informada foi: \n");
	
	int linhaNula = 0;
	
	for(l = 0; l < ordem; l++){
		
		int cont = 0;
		
		for(c = 0; c < ordem; c++){
			if(mat[l][c] == 0){
				cont++;
			}
			
			printf("%.2f ", mat[l][c]);
		}
		
		if(cont == ordem){
			linhaNula++;
		}
		printf("\n");
	}
	
	printf("Linhas nulas: %d", linhaNula);
	
	getch();
}
