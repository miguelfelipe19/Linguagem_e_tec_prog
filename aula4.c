#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int a, b, c,d, maior, maior_temp;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	//conta
	maior_temp = (a+b+abs(a-b))/2;
	
	maior = (maior_temp+c+abs(maior_temp-c))/2;
	
	maior = (maior+d+abs(maior-d))/2;
	printf("O maior entre|%d|%d|%d|%d| = %d", a,b,c,d, maior);
return 0;
}
