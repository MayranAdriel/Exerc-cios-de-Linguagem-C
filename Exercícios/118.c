#include<stdio.h>
#include<conio.h>
void main(){
	int N, k, divisores = 1, cont = 0, repeticao = 0;
	printf("Informe um numero N: ");
	scanf("%d", &N);
	for(k = 2;k <= N*3;k++){
		while(divisores <= N*3){
			if(k % divisores == 0 ){
				cont++;
			}
			divisores++;
		}
		if(cont == 2 && repeticao < N){
			printf("%d ", k);
			repeticao++;
		}
		cont = 0;
		divisores = 1;
	}
	getch();
}
