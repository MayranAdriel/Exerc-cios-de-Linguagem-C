#include<stdio.h>
#include<conio.h>
void main(){
   int k, M, N, contador = 0, divisores = 1, NovoM;
   printf("Informe o valor de M e N: ");
   scanf("%d%d", &M,&N);
   if(M>N){
   	printf("\nVoce informou os numeros na ordem contraria, portanto, os corrigi automaticamente: \n");
   NovoM = M;
   M = N;
   N = NovoM;
   }
   for(k=M;k<=N;k++){
    while(divisores<=N){
        if(k%divisores==0){
           contador++;
        }
    divisores++;
    }
    if(contador==2){
        printf("%d ", k);
    }
    contador = 0;
    divisores = 1;
   }
getch();
}
