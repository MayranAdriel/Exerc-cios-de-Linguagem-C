#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){

float raio;
    printf("Informe o raio em cm:");
    scanf("%f", &raio);
    float area = 3.14*raio;
    area = area = pow(area,2);
    float comprimento = raio*2;
    printf("A area do circulo eh %.2fcm\n", area);
    printf("O comprimento do circulo eh %.2fcm", comprimento);
     getch();
}
