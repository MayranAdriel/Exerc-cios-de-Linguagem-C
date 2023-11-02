#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > 0 && num2 > 0 && num3 > 0) {
        int mmc = 1;
        int k = 2;
        while (num1 > 1 || num2 > 1 || num3 > 1) {
            int cont = 0;
            if (num1 % k == 0) {
                num1 = num1 / k;
                cont++;
            }
            if (num2 % k == 0) {
                num2 = num2 / k;
                cont++;
            }
            if (num3 % k == 0) {
                num3 = num3 / k;
                cont++;
            }

            if (cont > 0) {
                mmc = mmc * k;
            } else {
                k++;
            }
        }
        printf("O MMC eh = %d\n", mmc);
    } else {
        printf("Digite numeros positivos\n");
    }
    getch();
}

