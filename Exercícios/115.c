#include<stdio.h>
#include<conio.h>
#include<math.h>
const float pessoas = 1;
void main(){
    float k,peso,altura;
    float PesoAcima = 0;
    float PesoAbaixo = 0;
    float PesoNormal;
     for(k=1;k<=pessoas;k++){
        printf("Informe o seu peso: ");
        scanf("%f", &peso);
         printf("Informe a sua altura: ");
        scanf("%f", &altura);
        float IMC = peso/pow(altura,2);
        if(IMC<=18.4){
            PesoAbaixo++;
        }
        if(IMC>=25){
            PesoAcima++;
        }
        if(IMC>=18.5&&IMC<=24.9){
            PesoNormal++;
        }
     }
        float porcentagemAbaixo = PesoAbaixo/pessoas*100;
        float porcentagemAcima = PesoAcima/pessoas*100;
        float porcentagemNormal = PesoNormal/pessoas*100;
     printf("Porcentagem de pessoas abaixo do peso: %.2f%%\nPorcentagem de pessoas acima do peso: %.2f%%\nPorcentagem de pessoas com o peso normal: %.2f%%", porcentagemAbaixo, porcentagemAcima, porcentagemNormal);
     getch();
}