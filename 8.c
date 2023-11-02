#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){


    float celsius;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);
    float kelvin = celsius+273;
    float fahrenheit = 1.8*celsius+32;
    printf("O valor de %fC em kelvin eh: %.2fK\n", celsius, kelvin);
    printf("O valor de %fC em fahrenheit eh: %.2fF", celsius, fahrenheit);
    getch();
    
}
