#include<stdio.h>
#include<conio.h>
void main(){
	char produto[50], continuar = 's';
	float valor, quantidade, valor_aprazo;
	while(continuar == 's'){
		fflush(stdin);
		printf("Informe o nome do produto: ");
		fgets(produto, 50, stdin);
		printf("Informe o valor: ");
		scanf("%f", &valor);
		printf("Informe a quantidade: ");
		scanf("%f", &quantidade);
		if(quantidade == 0){
			printf("valor invalido.");
			return 0;
		}
			valor_aprazo = valor_aprazo+valor*quantidade;
			fflush(stdin);
		printf("Deseja adicionar outro item a lista?\n Sim (s) Nao (n)\n");
		scanf("%c", &continuar);
	}
	float valor_avista = valor_aprazo-(15*valor_aprazo/100);
	printf("Valor A Prazo: R$%.2f.\n", valor_aprazo);
	printf("Valor A Vista: R$%.2f\n", valor_avista);
	getch();
}
