#include<stdio.h>
#include<conio.h>
const float Total_deVotos = 20;
void main(){
    float k,voto;
    float cont1,cont2,cont3,cont4,contNulos;
    printf("[1] Joao Borracheiro\n[2] Ze do caminhão\n[3] Maria da bodega\n[4] Ana \n");
    for(k=1;k<=Total_deVotos;k++){
        printf("Informe o seu voto: ");
        scanf("%f", &voto);
        if(voto==1){
             cont1++;
        }
        if(voto==2){
             cont2++;
        }
        if(voto==3){
             cont3++;
        }
        if(voto==4){
             cont4++;
        }
        if(voto!=1&&voto!=2&&voto!=3&&voto!=4){
            contNulos++;
        }
    }    
            float percentual1 = (cont1/Total_deVotos)*100; 
            float percentual2 = (cont2/Total_deVotos)*100;
            float percentual3 = (cont3/Total_deVotos)*100;
            float percentual4 = (cont4/Total_deVotos)*100;
            float percentualNulos = (contNulos/20)*100;
            printf("Candidato 1: Quantidade: %.2f  Percentual: %.2f%%.\n", cont1, percentual1);
             printf("Candidato 2: Quantidade: %.2f  Percentual: %.2f%%.\n", cont2, percentual2);
              printf("Candidato 3: Quantidade: %.2f  Percentual: %.2f%%.\n", cont3, percentual3);
               printf("Candidato 4: Quantidade: %.2f  Percentual: %.2f%%.\n", cont4, percentual4);
                printf("Votos Nulos: Quantidade: %.2f  Percentual: %.2f%%.\n", contNulos, percentualNulos);
        getch();
}