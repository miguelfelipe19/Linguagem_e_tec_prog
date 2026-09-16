int main(int argc, char *argv[]) {
	
	int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, soma1, resto1, verificador1, resto2, soma2, verificador2;
	
	printf("Digite seu CPF: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dig10, &dig11);
	
	printf("CPF: %d%d%d%d%d%d%d%d%d%d%d",dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11);
	
	soma1 = (dig1 * 10) + (dig2 * 9) + (dig3 * 8) + (dig4 * 7) + (dig5 * 6) + (dig6 * 5) + (dig7 * 4) + (dig8 * 3) + (dig9 * 2);
	soma2 = (dig1 * 11) + (dig2 * 10 ) + (dig3 * 9) + (dig4 * 8) + (dig5 * 7) + (dig6 * 6) + (dig7 * 5) + (dig8 * 4 ) + (dig9 * 3) + (dig10 * 2);
	
	resto1 = soma1 % 11;
	resto2 = soma2 % 11;
	
    if (resto1 < 2) {
    	verificador1 = 0;
    }else {
        verificador1 = 11 - resto1;
    }

    if (resto2 < 2) {
        verificador2 = 0;
    }else {
        verificador2 = 11 - resto2;
    }
    
     if ((verificador1 == dig10) && (verificador2 == dig11)) {
        printf("\nO CPF e valido!\n");
    }else {
        printf("\nO CPF e invalido!\n");
    }


	return 0;
}
/*ex2*/

#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(){
   /* ex1*/
   int a, dobro , triplo;
   char medida_d_entrada;
   int temp_celcius, temp_fahrenheit;
   printf("Digite a tempeatura de entrada(C p/ celcius ou F p/ fahrenheit): ");
   scanf(" %c", &medida_d_entrada);
   if(medida_d_entrada == 'C' || medida_d_entrada == 'c'){
      printf("Digite a temperatura em celcius: ");
      scanf("%d", &temp_celcius);
      temp_fahrenheit = (temp_celcius * 9/5) + 32;
      printf("A temperatura em fahrenheit é: %d\n", temp_fahrenheit);
    }else if(medida_d_entrada == 'F' || medida_d_entrada == 'f'){
      printf("Digite a temperatura em fahrenheit: ");
      scanf("%d", &temp_fahrenheit);
      temp_celcius = (temp_fahrenheit - 32) * 5/9;
      printf("A temperatura em celcius é: %d\n", temp_celcius);

}


    return 0;
}

/*ex 3*/
#define AZUL "\033[34m"
#define VERDE "\033[32m"
#define VERMELHO "\033[31m"
#define RESET "\033[0m"

int main() {

    int nota1, nota2, nota3;
    float media, calculo;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
    calculo = 70 - media;

    if (media >= 70 && media <= 100) {
        printf(AZUL "Aprovado\n" RESET);
    } else if (media >= 40 && media < 70) {
        printf(VERDE "Exame\n" RESET);
        printf("Nota necessaria para aprovacao: %.2f\n", calculo);
    } else if (media >= 0 && media < 40) {
        printf(VERMELHO "Reprovado\n" RESET);
    } else {    
        printf(VERMELHO "Nota invalida\n" RESET);
    }



/*ex5*/
void ()
{
    int valor;
    int n100, n50, n10, n5, n2, n1;

    printf("\n========================================\n");
    printf("EXERCICIO 05 - CAIXA ELETRONICO\n");
    printf("========================================\n");

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor <= 0)
    {
        printf("Valor invalido!\n");
        return;
    }

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n2 = valor / 2;
    valor = valor % 2;

    n1 = valor;

    printf("\nNotas entregues:\n");
    printf("R$ 100: %d nota(s)\n", n100);
    printf("R$  50: %d nota(s)\n", n50);
    printf("R$  10: %d nota(s)\n", n10);
    printf("R$   5: %d nota(s)\n", n5);
    printf("R$   2: %d nota(s)\n", n2);
    printf("R$   1: %d nota(s)\n", n1);
}
/*resenha absurda no exercicio 6*/
/*ex 7*/
float calcularINSS(float salario)
{
    float desconto;

    if (salario <= 1412.00)
    {
        desconto = salario * 0.075;
    }
    else if (salario <= 2666.68)
    {
        desconto = salario * 0.09;
    }
    else if (salario <= 4000.03)
    {
        desconto = salario * 0.12;
    }
    else
    {
        desconto = salario * 0.14;
    }

    return desconto;
}
/* ex8 */

float calcularIRPF(float salarioBase)
{
    float imposto;

    if (salarioBase <= 2259.20)
    {
        imposto = 0;
    }
    else if (salarioBase <= 2826.65)
    {
        imposto = (salarioBase * 0.075) - 169.44;
    }
    else if (salarioBase <= 3751.05)
    {
        imposto = (salarioBase * 0.15) - 381.44;
    }
    else if (salarioBase <= 4664.68)
    {
        imposto = (salarioBase * 0.225) - 662.77;
    }
    else
    {
        imposto = (salarioBase * 0.275) - 896.00;
    }

    
    if (imposto < 0)
    {
        imposto = 0;
    }

    return imposto;
}


/*ex9 */

void ()
{
    float valorHora;
    float horas;
    float salarioBruto;
    float inss;
    float salarioBase;
    float irpf;
    float salarioLiquido;

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);

    /* Calcula o salario bruto */
    salarioBruto = valorHora * horas;

    inss = calcularINSS(salarioBruto);

    salarioBase = salarioBruto - inss;


    irpf = calcularIRPF(salarioBase);

  
    salarioLiquido = salarioBruto - inss - irpf;

    printf("\n");
    printf("====================================================\n");
    printf("           RECIBO DE PAGAMENTO DE SALARIO\n");
    printf("                  CONTRA-CHEQUE\n");
    printf("====================================================\n");

    printf("Salario Bruto:             R$ %.2f\n", salarioBruto);
    printf("(-) Desconto INSS:         R$ %.2f\n", inss);
    printf("(-) Desconto IRPF:         R$ %.2f\n", irpf);

    printf("----------------------------------------------------\n");

    printf("LIQUIDO A RECEBER:         R$ %.2f\n", salarioLiquido);

    printf("====================================================\n");
}





