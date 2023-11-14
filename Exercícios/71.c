#include<stdio.h>
#include<conio.h>
void main(){
    int n1,n2,n3;
    printf("Informe tres numeros inteiros:");
    scanf("%d", &n1,&n2,&n3);
    if(n1>n2){
        if(n1>n3){
        printf("O primeiro numero eh o maior!\n");
        }
    }
    else
    if(n2>n1){
        if(n2>n3){
        printf("O segundo numero eh o maior!\n");
        }
    }
    else
    printf("O terceiro numero eh o maior!\n");
    if(n1<n2){
        if(n1,n3){
        printf("O primeiro numero eh o menor!\n");
        }
    }
    else
    if(n2<n3){
        if(n2<n1){
        printf("O segundo numero eh o menor!\n");
        }
    }
    else
    printf("O terceiro numero eh o menor!");
    getch();

}
