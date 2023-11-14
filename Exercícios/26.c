#include<stdio.h>
#include<conio.h>
int main(){
	
	float EQUIPE1PESO1,EQUIPE1PESO2,EQUIPE1ALTURA1,EQUIPE1ALTURA2,EQUIPE2PESO1,EQUIPE2PESO2,EQUIPE2ALTURA1,EQUIPE2ALTURA2,EQUIPE3PESO1,EQUIPE3PESO2,EQUIPE3ALTURA1,EQUIPE3ALTURA2,EQUIPE4PESO1,EQUIPE4PESO2,EQUIPE4ALTURA1,EQUIPE4ALTURA2;
	printf("Informe o peso dos dois atletas da PRIMEIRA dupla:");
	scanf("%f%f", &EQUIPE1PESO1,&EQUIPE1PESO2);
	printf("Informe tambem a altura:");
	scanf("%f%f", &EQUIPE1ALTURA1,&EQUIPE1ALTURA2);
	printf("Informe o peso dos dois atletas da SEGUNDA dupla:");
	scanf("%f%f", &EQUIPE2PESO1,&EQUIPE2PESO2);
	printf("Informe tambem a altura:");
	scanf("%f%f", &EQUIPE2ALTURA1,&EQUIPE2ALTURA2);
	printf("Informe o peso dos dois atletas da TERCEIRA dupla:");
	scanf("%f%f", &EQUIPE3PESO1,&EQUIPE3PESO2);
	printf("Informe tambem a altura:");
	scanf("%f%f", &EQUIPE3ALTURA1,&EQUIPE3ALTURA2);
	printf("Informe o peso dos dois atletas da QUARTA dupla:");
	scanf("%f%f", &EQUIPE4PESO1,&EQUIPE4PESO2);
	printf("Informe tambem a altura:");
	scanf("%f%f", &EQUIPE4ALTURA1,&EQUIPE4ALTURA2);
	float calculo12 = (EQUIPE1PESO1+EQUIPE1PESO2)/2;
	float calculo12a = (EQUIPE1ALTURA1+EQUIPE1ALTURA2)/2;
	float calculo34 = (EQUIPE2PESO1+EQUIPE2PESO2)/2;
	float calculo34a = (EQUIPE2ALTURA1+EQUIPE2ALTURA2)/2;
	float calculo56 = (EQUIPE3PESO1+EQUIPE3PESO2)/2;
	float calculo56a = (EQUIPE3ALTURA1+EQUIPE3ALTURA2)/2;
	float calculo78 = (EQUIPE4PESO1+EQUIPE4PESO2)/2;
	float calculo78a = (EQUIPE4ALTURA1+EQUIPE4ALTURA2)/2;
	float todospeso = (EQUIPE1PESO1+EQUIPE1PESO2+EQUIPE2PESO1+EQUIPE2PESO2+EQUIPE3PESO1+EQUIPE3PESO2+EQUIPE4PESO1+EQUIPE4PESO2)/8;
	float todosaltura = (EQUIPE1ALTURA1+EQUIPE1ALTURA2+EQUIPE2ALTURA1+EQUIPE2ALTURA2+EQUIPE3ALTURA1+EQUIPE3ALTURA2+EQUIPE4ALTURA1+EQUIPE4ALTURA2)/8;
	printf("A media da peso da PRIMEIRA dupla eh:%.2fKg\n", calculo12);
	printf("A media da altura da PRIMEIRA dupla eh:%.2fm\n", calculo12a);
	printf("A media da peso da SEGUNDA dupla eh:%.2fKg\n", calculo34);
	printf("A media da altura da SEGUNDA dupla eh:%.2fm\n", calculo34a);
	printf("A media da peso da TERCEIRA dupla eh:%.2fKg\n", calculo56);
	printf("A media da altura da TERCEIRA dupla eh:%.2fm\n", calculo56a);
	printf("A media da peso da QUARTA dupla eh:%.2fKg\n", calculo78);
	printf("A media da altura da QUARTA dupla eh:%.2fm\n", calculo78a);
	printf("A media do peso de TODAS as duplas eh:%.2fKg\n", todospeso);
	printf("A media da altura de TODAS as equipes eh:%.2fm", todosaltura);
	getch();
	
	
	
}
