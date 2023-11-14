#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	double kb;
	printf("Informe o valor em KB:");
	scanf("%lf", &kb);
    double bits = kb*8192;
	double bytes = kb*1024;
    double MB = kb/1024;
    double GB = MB/1000000;
    printf("O valor em bits eh: %.2lfb\n", bits);
    printf("O valor em bytes eh: %.2lfB \n", bytes);
    printf("O valor em MB eh: %lfMB \n", MB);
    printf("O valor em GB eh: %lfGB ", GB);
    getch();
	
}
