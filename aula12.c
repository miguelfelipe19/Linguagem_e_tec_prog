#include <stdio.h>
#include <stdlib.h>

/*
3) implemente um programa que leia um numero n
 [com n positivo $ n <=64] e mostre na tela o seu
 valor em bits  
 */

int bits[64], k = 0;
while (n > 0) {
    bits[k] = n % 2;
    k++;
    n = n / 2;
}
for (k = k - 1; k >= 0; k--)
    printf("%d", bits[k]);

	
	return 0;
}
