#include<stdio.h>
#include<conio.h>
void main(){
    float financiamento;
    printf("Informe o valor do financiamento:");
    scanf("%f", &financiamento);
    float parcela1 = financiamento+(20*financiamento/100);
    float parcela2 = parcela1+(7*parcela1/100);
    float parcela3 = parcela2+(7*parcela2/100);
    float parcela4 = parcela3+(7*parcela3/100);
    float parcela5 = parcela4+(7*parcela4/100);
    float total = (parcela1+parcela2+parcela3+parcela4+parcela5);
    float diferenca = total-financiamento;
    printf("parcela1:%.2f\n", parcela1);
     printf("parcela2:%.2f\n", parcela2);
      printf("parcela3:%.2f\n", parcela3);
       printf("parcela4:%.2f\n", parcela4);
        printf("parcela5:%.2f\n", parcela5);
        printf("Total:%.2f\n", total);
        printf("A diferenca eh %.2f", diferenca);
        getch();
}