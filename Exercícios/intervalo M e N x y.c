#include <stdio.h>
#include <conio.h>
void main()
{
    int M, N, x, y;
    printf("Informe o valor de M e N: "); // Pede para o usuario informar os valores de M e N.
    scanf("%d%d", &M, &N);
    if (N % 2 != 0)
    { // Se caso o valor de N for ímpar, subtrai 1, garantindo que N seja par.
        N--;
    }
    for (x = M; x <= N; x++)
    { // Loop de x de M até N.
        if (x % 2 == 0)
        { // Imprimindo x caso ele seja par.
            printf("(%d,", x);
        }
        for (y = x + 1; y <= x + 2; y++)
        { // Loop de y de x+1 até x+2.
            if (x % 2 == 0 && y % 2 == 0 && y >= x && y <= N)
            { // Imprime y caso x seja par, y seja par, y seja maior ou igual a x e y seja menor ou igual a N.
                printf("%d) ", y);
            }
        }
    }
    if (x = N){   
        printf("%d)", x); // Imprimindo o ultimo valor de y que tem de ser igual a x.
    }

    getch();
}
