#include<stdio.h>
#include<conio.h>
float media(float num1, float num2, float num3){
	return (num1+num2+num3)/3;
}
void main(){
	float num1,num2,num3;
	printf("Informe tres numeros: ");
	scanf("%f%f%f", &num1, &num2, &num3);
	float valMedia = media(num1, num2, num3);
	printf("A media eh %.1f", valMedia);
	getch();
}
