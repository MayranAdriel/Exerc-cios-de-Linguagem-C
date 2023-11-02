#include<stdio.h>
#include<conio.h>
void main(){
	int limite, k, i, fatorial = 1, multiplicador = 1;
	printf("Informe o limite: ");
	scanf("%d", &limite);
	if(limite<0){
		printf("Numero invalido: ");
		return 0;
	}
	for(k=1;k<=limite;k++){
		for(i=1;i<=multiplicador;i++){
			fatorial *= i;
		}
		printf("%d ", fatorial);
		fatorial = 1;
		multiplicador++;
		i = 1;
	}
	getch();
}
