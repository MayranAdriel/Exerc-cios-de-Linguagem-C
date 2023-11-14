#include<stdio.h>
#include<conio.h>
const int limite = 6;
void main(){
   int k, contador = 0, divisores = 1, repeticao = 0, Primo = 1;
   int n = 2;
   for(k=1;k<=n;k++){
    while(divisores<=n){
        if(k%divisores==0){
           contador++;
        }
    divisores++;
    }
    if(contador == 2 && k-Primo == 2 && repeticao < limite){
        printf("(%d,%d)", Primo,k);
        repeticao++;
    }
    if(contador==2){
        Primo = k;
    }
    contador = 0;
    divisores = 1;
    n++;
    if(repeticao == limite){
        return 0;
    }
   }
}
