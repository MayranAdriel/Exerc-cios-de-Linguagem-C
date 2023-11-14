#include<stdio.h>
#include<conio.h>
void main(){
    int valor;
    printf("Informe o valor a ser sacado: ");
    scanf("%d", &valor);
    int soma;
    int quanti100 = 0, quanti50 = 0, quanti20 = 0, quanti10 = 0;
    while(valor != 0){
    	if(valor % 10 == 0){
        soma = soma + valor;
        int cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0;
        while(valor >= 100){
            valor = valor - 100;
            cont100++;
            quanti100++;
        }
        while(valor >= 50){
            valor = valor - 50;
            cont50++;
            quanti50++;
        }
        while(valor >= 20){
            valor = valor - 20;
            cont20++;
            quanti20++;
        }
        while( valor >= 10){
            valor = valor - 10;
            cont10++;
            quanti10++;
        }
        printf("Cedulas de 100 = %d Cedulas de 50 = %d Cedulas de 20 = %d Cedulas de 10 = %d\n", cont100, cont50, cont20, cont10);
    }
    else{
    	printf("O valor nao eh sacavel\n");
    }
		printf("Informe outro valor: ");
        scanf("%d", &valor);
}
    printf("Valor total dos saques: %d.\n", soma);
    printf("Cedulas de 100 = %d Cedulas de 50 = %d Cedulas de 20 = %d Cedulas de 10 = %d", quanti100, quanti50, quanti20, quanti10 );
    getch();
}
