#include <stdio.h>
#include <stdlib.h>

/*
3) implemente um programa que leia um numero n
 [com n positivo $ n <=64] e mostre na tela o seu
 valor em bits  
 */

int main(int argc, char *argv[]) {
	int n = 10;// 8 + 2 = 10 >> 1010
	scanf("%d",&n);	
	while(n > 0){
		printf("%d", n%2); // 0 1 0 1
		n = n/2;
    } 

	
	return 0;
}
