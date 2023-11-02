#include<stdio.h>
#include<conio.h>
void main(){
	int valor, k, NovoM, contador = 0, divisores = 1, contador2 = 0;
	printf("Informe a ordem do numero primo: ");
	scanf("%d",&valor);
	int divisor = 2;
	for(k=2;k<=divisor;k++){
		while(divisores<=divisor){
			if(k % divisores == 0){
				contador++;
			}
			divisores++;
		}
		if(contador == 2){
			contador2++;
		}
		if(contador2 == valor){
			printf("%d ", k);
			return 0;
		}
		
		contador = 0;
		divisores = 1;
		divisor++;
	}
	getch();
}
