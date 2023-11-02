#include<stdio.h>
#include<conio.h>

void main(){
	int distancia;
	int tempo;
	printf("Informe a distancia percorrida em km: ");
	scanf("%d", &distancia);
	printf("Informe o tempo gasto em horas: ");
	scanf("%d", &tempo);
	int metros = distancia*1000;
	int segundos = tempo*3600;
	int velocidadeM = metros/segundos;
	printf("A velocidade media eh: %dm/s", velocidadeM);
	getch();
}
