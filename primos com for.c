#include<conio.h>
#include<stdio.h>
void main(){
    int N,k,repeticao = 0,contador = 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &N);
    int primo = 2;
    while(repeticao<N){
    for(k=1;k<=primo;k++){
    if(primo % k == 0){
        contador++;
    }
    }
    if(contador == 2){
        printf("%d ", primo);
        repeticao++;
    }
    primo++;
    contador = 0;
}
getch();
}