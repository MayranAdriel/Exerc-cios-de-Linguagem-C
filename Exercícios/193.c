#include<stdio.h>
#include<conio.h>
const int ordem = 3;

void main(){
	int mat[ordem][ordem];
	int l, c;
	int linhaNula = 0, colunaNula = 0, contadorColuna = 0, contadorLinha = 0;
	
	for(l = 0; l < ordem; l++){
		for(c = 0; c < ordem; c++){
			printf("Informe a linha %d, coluna %d: ", l+1, c+1);
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
		contadorLinha = 0;
		contadorColuna = 0;
		
		for(c = 0; c < ordem; c++){
			if(mat[c][l] == 0){
				contadorColuna++;
			}
			if(mat[l][c] == 0){
				contadorLinha++;
			}
		}
		
		if(contadorLinha == ordem){
			linhaNula++;
		}
		if(contadorColuna == ordem){
			colunaNula++;
		}
	}
	
	printf("A matriz informada possui %d linhas+colunas nulas.", linhaNula+colunaNula);
	
	getch();
}
