#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Laço FOR repete um conjuno de instruções,de um valor 
inicial(inicializaçao), até uma determinada condição, realizando uma operação(incremento) a cada execução [sempre]*/

int main(int argc, char *argv[]) {
/*
	Laço FOR repete um conjuno de instruções,de um valor 
inicial(inicializaçao), até uma determinada condição,
 realizando uma operação(incremento) a cada execução [sempre]
 */
for (i=0,j=1; i<10; i++,j--){
	printf("Esse eh o laco FOR");
}
/* Laço WHILE (enquanto), que testa se yma condção eh verdadeira,
caso seja executa um bloco de comandos repetindo o processo 
enquanto a condição for avaliada verdadeira
*/


while (i < 10) {
    printf("%d, laco WHILE\n", i);
    i++;
}

/* Laço DO WHILE (faça enquanto), que executa o bloco
   de comandos primeiro e testa a condição depois.
   Dessa forma, o bloco é executado pelo menos uma vez,
   mesmo que a condição seja falsa.*/
  
/* variáveis de todos os exercícios */
    int a, b, passo, i, j, esp;
    int n, linhas;
    double termo, soma;
    long c;

    /* exercicio 1 */
    printf("Exercicio 1\n");
    printf("Digite 3 valores (inicio fim passo): ");
    scanf("%d %d %d", &a, &b, &passo);

    if (passo <= 0) {
        printf("O passo deve ser maior que zero.\n");
    } else {
        for (i = a + passo; i < b; i += passo) {
            printf("%d ", i);
        }
        printf("\n");
    }

    /* exercicio 2 */
    printf("\nExercicio 2\n");
    printf("Digite n: ");
    scanf("%d", &n);

    termo = 0.5;
    soma = 0.0;
    for (i = 0; i < n; i++) {
        soma += termo;
        termo /= 2.0;
    }
    printf("Soma dos %d primeiros termos = %f\n", n, soma);

    /* exercicio 3 */
    printf("\nExercicio 3\n");
    printf("Quantas linhas do triangulo de Pascal? ");
    scanf("%d", &linhas);

    for (i = 0; i < linhas; i++) {
        c = 1;
        for (esp = 0; esp < linhas - i - 1; esp++) printf("  ");
        for (j = 0; j <= i; j++) {
            printf("%4ld", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }

    
    return 0;
}
