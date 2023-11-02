#include<stdio.h>
#include<conio.h>
int main() {
    int k;

    printf("Palindromos no intervalo [1000, 9999]:\n");

    for (k = 1000; k <= 9999; k++) {
       int uni_m = k / 1000;
       int resto = k % 1000;
       int centena = resto / 100;
       resto = resto % 100;
       int dezena = resto / 10;
       int unidade = resto % 10;
       if(uni_m == unidade && centena == dezena){
        printf("%d ", k);
       }
    }
    getch();
}

