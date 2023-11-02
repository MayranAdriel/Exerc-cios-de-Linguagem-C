#include<stdio.h>
#include<conio.h>
const int parcela_maxima = 240;
void main(){
    float valor,parcelas,x;
    float parcelaAnterior,proximaParcela;
    printf("Informe o valor a ser financiado: ");  //Pede para o usuario informar o valor do financiamento e a quantidade de parcelas.
    scanf("%f", &valor);
    printf("Informe a quantidade de parcelas: ");
    scanf("%f", &parcelas);
    if(parcelas>parcela_maxima){
       printf("A quantidade de parcelas excede o limite."); //Se caso o numero de parcelas informado pelo usuario exceder o limite, o programa se encerra.
       getch();
    }
    else
    parcelaAnterior = valor/parcelas;
    printf("Parcela 1: R$%.2f\n", parcelaAnterior);            // Imprime o valor da primeira parcela.
    for( x = 2;x <= parcelas; x++){                      //loop da parcela 2 até a parcela informada pelo usuario
        proximaParcela = (7*parcelaAnterior/100)+parcelaAnterior; //calcula o valor de 7% sobre a parcela anterior e acrescenta.
        printf("Parcela %.0f: R$%.2f\n", x, proximaParcela);
        parcelaAnterior = proximaParcela;                      // A parcela anterior vira a proxima parcela e a proxima parcela é zerada.
        proximaParcela = 0;
        
    }
    getch();

}