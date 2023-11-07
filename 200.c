#include<stdio.h>
#include<conio.h>
#include<math.h>

float perimetro (float num1){
	return num1 * 4;
} 

float area (float num1){
	return pow(num1,2);
}
void main(){
	float num;
	printf("Informe o valor do lado do quadrado: ");
	scanf("%f", &num);
	float valPerimetro = perimetro(num);
	float valArea = area(num);
	printf("Perimetro = %.1f  Area = %.1f", valPerimetro, valArea);
	getch();
}
