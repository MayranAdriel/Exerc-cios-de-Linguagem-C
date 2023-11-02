#include <stdio.h>

int main() {
    int n = 2;  // Iniciamos com o primeiro número primo, que é 2
    int count = 0; // Contador de pares de primos gêmeos

    printf("Os seis primeiros pares de primos gêmeos são:\n");

    while (count < 6) {
        int isPrimeN = 1;
        int isPrimeNPlus2 = 1;

        // Verifica se n é primo
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrimeN = 0;
                break;
            }
        }

        // Verifica se n + 2 é primo
        for (int i = 2; i * i <= n + 2; i++) {
            if ((n + 2) % i == 0) {
                isPrimeNPlus2 = 0;
                break;
            }
        }

        // Se ambos n e n + 2 forem primos, imprime o par de primos gêmeos
        if (isPrimeN && isPrimeNPlus2) {
            printf("(%d,%d)\n", n, n + 2);
            count++;
        }

        n++;
    }

    return 0;
}
