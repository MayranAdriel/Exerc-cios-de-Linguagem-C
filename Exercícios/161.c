#include<stdio.h>
#include<conio.h>

const int QUANTIDADE = 20;

void main(){
	
	char vet[QUANTIDADE];
	int k, i;
	
	for(k=0;k<QUANTIDADE;k++){
		fflush(stdin);
		printf("Informe o %d caracterer: ", k);
			scanf("%c",&vet[k]);		
	}
	
	printf("\nO vetor de caracteries informado foi:\n");
	
	for(k=0;k<QUANTIDADE;k++){
		printf("%c ",vet[k]);
	}
	
    int cont = 0;

	for(k = 0, i = QUANTIDADE-1; k < i; k++, i--){
        
        if(vet[k] != vet[i]){
            cont++;
        }
    }
	
	
	if(cont == 0){
		printf("\n\nO vetor eh um palindromo!\n");
	}
	else{
		printf("\n\nO vetor nao eh um palindromo!\n");
	}
	
	getch();
}