#include<stdio.h>
#include<conio.h>
void main(){
	int M, N, k, divisores = 1, cont = 0, repeticao = 0;
	printf("Informe o valor de M e N: ");
	scanf("%d%d", &M,&N);
	int primo;
	for(k = M;k <= M*3;k++){
		while(divisores <= M*3){
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
