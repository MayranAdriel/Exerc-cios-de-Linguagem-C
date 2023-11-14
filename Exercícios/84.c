#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float peso,altura;
    printf("Informe o peso e a altura: ");
    scanf("%f%f", &peso,&altura);
    float IMC = peso/pow(altura,2);
    printf("O seu IMC eh %.1f\n", IMC);
    if(IMC<18){
        float pesoMin = 18*pow(altura,2);
        float pesoGanhar = pesoMin-peso;
        printf("Esta abaixo do peso e precisara ganhar %.1fKg", pesoGanhar);
    }
    else 
    if(IMC>25){
        float pesoMax = 25*pow(altura,2);
        float pesoPerder = peso-pesoMax;
        printf("Esta acima do peso e precisara perder %.1fKg", pesoPerder);
    }
    else 
    printf("Esta com o peso ideal");
    getch();
}