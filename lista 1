#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592
int main() {

    //ex1

    int num1, num2;

    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Ordem inversa: %d %d\n\n", num2, num1);


    //ex2

    double valor;

    
    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    printf("Notacao cientifica: %e\n\n", valor);


    //ex3
    int n;

    
    printf("Digite um numero entre 1 e 64: ");
    scanf("%d", &n);

    printf("Valor em binario: ");

    for (int i = 6; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }

    printf("\n\n");


    //ex4

    double salario, vendas, total;

    
    printf("Digite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o valor total das vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n\n", total);


    //ex5

    double v1, v2, v3, v4;
    double soma, media, produto;

    
    printf("Digite quatro valores: ");
    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);

    soma = v1 + v2 + v3 + v4;
    media = soma / 4;
    produto = v1 * v2 * v3 * v4;

    printf("Soma: %.2lf\n", soma);
    printf("Media: %.2lf\n", media);
    printf("Produtorio: %.2lf\n\n", produto);


    //ex6
    int idadeDias;
    int anos, meses, dias;

    
    printf("Digite a idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    idadeDias = idadeDias % 365;

    meses = idadeDias / 30;
    dias = idadeDias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n\n", dias);


   //ex7

    double raio;
    double volume;
    const double PI = 3.14159;

   
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("VOLUME = %.3lf\n\n", volume);

//ex8

    double x1, y1, x2, y2;
    double distancia;

    

    printf("Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(
        pow(x2 - x1, 2) +
        pow(y2 - y1, 2)
    );

    printf("Distancia = %.4lf\n", distancia);


    return 0;
	
	
	
	
	

	
	
	return 0;
}
