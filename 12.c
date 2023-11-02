#include<stdio.h>
#include<conio.h>
void main(){


    float polegada;
    printf("Informe o valor em polegadas: ");
    scanf("%f", &polegada);
    float conversaum = polegada*2.54;
    printf("O valor eh %.2fcm", conversaum);
    getch();
}
