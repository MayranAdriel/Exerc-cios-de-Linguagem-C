#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    float cateto1,cateto2;
    printf("Informe o valor dos dois catetos:");
    scanf("%f%f", &cateto1,&cateto2);
    float hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
    printf("O valor da hipotenusa eh: %.2f", hipotenusa);
    getch();


}
