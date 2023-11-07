#include<stdio.h>
#include<conio.h>
#include<math.h>

float dobro (float num){
	return num * 2;
}

float triplo (float num){
	return num * 3;
}

float quadrado (float num){
	return pow(num,2);
}

float cubo (float num){
	return pow(num, 3);
}

float raiz (float num){
	return sqrt(num);
}

void main(){
	
	float num;
	printf("Informe o numero: ");
	scanf("%f", &num);
	printf("Dobro = %.1f\nTriplo = %.1f\nQuadrado = %.1f\nCubo = %.1f\nRaiz = %.2f", dobro(num), triplo(num), quadrado(num), cubo(num), raiz(num));
	getch();
}

