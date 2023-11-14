#include<stdio.h>
#include<conio.h>
const int ordem = 3;

void main(){
	
int mat1[ordem][ordem];
int mat2[ordem][ordem];
int mat3[ordem][ordem];
int c, l;

for(l = 0; l < ordem; l++){
	for(c = 0; c < ordem; c++){
		printf("Informe a matriz 1 linha %d coluna %d: ", l, c);
		scanf("%d", &mat1[l][c]);
	}
}

printf("A matriz 1 informada foi: \n");

for(l = 0; l < ordem; l++){
	for(c = 0; c < ordem; c++){
		printf("%d: ", mat1[l][c]);
	}
	printf("\n");
}

for(l = 0; l < ordem; l++){
	for(c = 0; c < ordem; c++){
		printf("Informe a matriz 2 linha %d coluna %d: ", l, c);
		scanf("%d", &mat2[l][c]);
	}
}

printf("A matriz 2 informada foi: \n");

for(l = 0; l < ordem; l++){
	for(c = 0; c < ordem; c++){
		printf("%d: ", mat2[l][c]);
	}
	printf("\n");
}


printf("A soma das duas matrizes eh: \n");

for(l = 0; l < ordem; l++){
	for(c = 0; c < ordem; c++){
		mat3[l][c] = mat1[l][c] + mat2[l][c];
		printf("%d ", mat3[l][c]);
	}
	printf("\n");
}
getch();
}
