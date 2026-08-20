#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//ex1

int idade, ano_Atual, ano_Nascimento;
    printf("Digite sua idade: ");
	scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_Atual);

    ano_Nascimento = ano_Atual - idade;
    printf("Ano de nascimento: %d\n\n", ano_Nascimento);
