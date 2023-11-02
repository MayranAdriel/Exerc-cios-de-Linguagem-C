#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
     float pessoas;
     printf("Informe o numero de pessoas");
     scanf("%f", &pessoas);
     float carne = (pessoas*250)/1000;
     printf("A quantidade sera de %.2fKg", carne);
     getch();
}
