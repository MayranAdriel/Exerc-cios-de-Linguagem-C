#include<stdio.h>
#include<conio.h>

const int ordem = 4;

int main() {
    int mat[ordem][ordem];
    int grao = 1;
    int l,c;

    for ( l = 0; l < ordem; l++) {
        for ( c = 0; c < ordem; c++) {
            mat[l][c] = grao;
            grao *= 2;
        }
    }

    for ( l = 0; l < ordem; l++) {
        for ( c = 0; c < ordem; c++) {
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    getch();
}

