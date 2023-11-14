#include<stdio.h>
#include<conio.h>
int main() {
    int N;
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    int quociente = N;
    int binario = 0;
    int casaDecimal = 1;
    while (quociente > 0) {
        int resto = quociente % 2;
        binario = binario + resto * casaDecimal;
        casaDecimal = casaDecimal * 10;
        quociente = quociente / 2;
    }
    printf("Numero binario: %d\n", binario);
    getch();
}
