#include <stdio.h>
#include <stdlib.h>

/* Validador de CPF */

int multDigito(int dig, int valor) {
    return dig * valor;
}

int main(int argc, char *argv[]) {

    int num1, num2, num3;
    int num4, num5, num6;
    int num7, num8, num9;
    int dgv, dgv2;
    int soma, resto, restoII;

    printf("Digite o seu CPF: ");

    scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d",
          &num1, &num2, &num3,
          &num4, &num5, &num6,
          &num7, &num8, &num9,
          &dgv, &dgv2);

    printf("Seu CPF: %d%d%d.%d%d%d.%d%d%d-%d%d",
           num1, num2, num3,
           num4, num5, num6,
           num7, num8, num9,
           dgv, dgv2);

    soma = multDigito(num1, 10)
         + multDigito(num2, 9)
         + multDigito(num3, 8)
         + multDigito(num4, 7)
         + multDigito(num5, 6)
         + multDigito(num6, 5)
         + multDigito(num7, 4)
         + multDigito(num8, 3)
         + multDigito(num9, 2);

    soma *= 10;
    resto = soma % 11;

    printf("\nPrimeiro digito calculado: %d", resto);

    soma = multDigito(num1, 11)
         + multDigito(num2, 10)
         + multDigito(num3, 9)
         + multDigito(num4, 8)
         + multDigito(num5, 7)
         + multDigito(num6, 6)
         + multDigito(num7, 5)
         + multDigito(num8, 4)
         + multDigito(num9, 3)
         + multDigito(dgv, 2);

    soma *= 10;
    restoII = soma % 11;

    printf("\nSegundo digito calculado: %d", restoII);

/* calc insse */
    float calc_inss(float salario){
	if (salario <= 1412.00)return salario * 0.075;
	else if(salario<=2666.68) return salario * 0.09;
	else if(salario<= 4000.00) return salario * 0.12;
	else return salario * 0.14;
		
		
	}



int main(int argc, char *argv[]) {
	float salario;
	float desconto;
	scanf ("%f", &salario);
	desconto = calc_inss(salario);
	printf("%f || %f", desconto, calc_inss(salario));

































    
    return 0;
}
