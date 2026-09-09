#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// validador de CPF

int multDigito(int dig, int valor,){
	return = dig*valor;
	
}

int main(int argc, char *argv[]) {
int num1,num2,num3,num4,num5,num6,num7,num8,num9,dgv,dgv2,soma,resto;
printf("Digite o seu CPF:");
scanf("%d%d%d . %d%d%d . %d%d%d - %d%d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&dgv,&dgv2);
printf("Seu CPF:%d%d%d . %d%d%d . %d%d%d - %d%d ",num1,num2,num3,num4,num5,num6,num7,num8,num9,dgv,dgv2);
soma = multDigito(num1,10)+multDigito(num2,9)+multDigito(num3,8)+multDigito(num4,7)+multDigito(num5,6)+multDigito(num6,5)+multDigito(num7,4)+multDigito(num8,3)+multDigito(9,2);
soma *=10;
resto = soma%11;
printf("\n%d",resto);

soma = multDigito(num1,11)+multDigito(num2,10)+multDigito(num3,9)+multDigito(num4,8)+multDigito(num5,7)+multDigito(num6,6)+multDigito(num7,5)+multDigito(num8,4)+multDigito(9,3)+multDigito(dgv,2);

soma *=10;
restoII = soma %11;
printf("\n%d",restoII);


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
