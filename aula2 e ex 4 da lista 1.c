#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float area, raio;
	printf("Insira o raio do circulo:");
	scanf("%f", &raio);
	//area = M_PI * pow(raio ,2)
	area = pi *(raio*raio);
	printf("A area do circulo do raio %.2f= %.2f\n",raio ,area);
	
	float base_maior, base_menor, altura;
	printf("\nInsira a base maior(B):");
	scanf("%f", &base_maior);
	printf("\nInsira a base menor(b):");
	scanf("%f", &base_menor);
	printf("\nInsira a altura(h):");
	scanf("%f", &altura);
	area+((base_maior + base_menor)*altura /2);
	printf("\nA area do trapezio e: %.2f\n", area);
	
	
	
	
	return 0;
}
