#include<stdio.h>
#include<conio.h>
const int ordem = 3;
void main(){

    int mat[ordem][ordem];
    int l,c;
    char resposta;
    do{
    for(l = 0; l < ordem; l++){
        for(c = 0; c < ordem; c++){
            printf("Informe a linha %d coluna %d:  ", l+1, c+1);
            scanf("%d", &mat[l][c]);
        }
    }
    printf("A matriz informada foi:\n");

    for(l = 0; l < ordem; l++){
        for(c = 0; c < ordem; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("Diagonal principal: ");

    for(l = 0; l < ordem; l++){
        for(c = 0; c < ordem; c++){
            if(l == c){
                printf("%d ", mat[l][c]);
            }
        }
    }
    
    printf("\nNumeros acima da diagonal principal: ");
    
    for(l = 0; l < ordem; l++){
        for(c = 0; c < ordem; c++){
            if(c > l){
                printf("%d ", mat[l][c]);
            }
        }
    }
    
    printf("\nNumeros abaixo da diagonal principal: ");
    
     for(l = 0; l < ordem; l++){
        for(c = 0; c < ordem; c++){
            if(c < l){
                printf("%d ", mat[l][c]);
            }
        }
    }
    
    puts("\n\n------------------------------------------------");

    printf("\nDiagonal secundaria: ");

    for(l = 0, c = ordem-1; l < ordem; l++, c--){
        printf("%d ", mat[l][c]);
    }
    
    printf("\nNumeros acima da diagonal secundaria: ");
    
     for(l = 0; l < ordem; l++){
        for(c = 0; c < ordem; c++){
        	if(c < (ordem - 1 - l)){
                printf("%d ", mat[l][c]);
            }
        }
    }
    
     printf("\nNumeros abaixo da diagonal secundaria: ");
    
     for(l = 0; l < ordem; l++){
        for(c = 0; c < ordem; c++){
        	if(c > (ordem - 1 - l)){
                printf("%d ", mat[l][c]);
            }
        }
    }

    fflush(stdin);
    printf("\n\nDeseja informar outra matriz?\n(S)Sim ou (N)Nao: ");
    resposta = getchar();
    
    system("cls");

    } while (resposta != 'N' && resposta != 'n');
    
    printf("O programa foi encerrado.");
    
    getch();
}
