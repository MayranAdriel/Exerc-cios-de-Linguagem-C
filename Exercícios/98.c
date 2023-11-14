#include<stdio.h>
#include<conio.h>
void main(){
    int k,numero;
    printf("Informe um limite: ");
    scanf("%d", &numero);
    for(k=1;k<=numero;k++){
        printf("%d ", k);
    }
    getch();
}