#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main(){
    /*if else */
    int idade;
    printf("Qual a sua idade?");
    scanf("%d",&idade);
    if(idade >= 18){
        printf("Voce eh maior de idade");
    
    }else if (idade <=0){
        printf("vc n existe");
    }
    else{
        printf("Voce eh menor de idade");
    } 

    /*soma */
    int a,b,soma;
    printf("Digite o valor de a:");
    scanf("%d",&a);
    printf("Digite o valor de b:");
    scanf("%d",&b);
    soma = a + b;
    printf("A soma de %d + %d = %d\n",a,b,soma);

     /* subtracao*/
   int a,b,subtracao;
   printf("Digite o primeiro numero:");
   scanf("%d",&a);
   printf("Digite o segundo numero:");
   scanf("%d",&b);
   subtracao = a - b;
   printf("A subtracao de %d - %d = %d\n",a,b,subtracao);{
     if(subtracao ==67)printf("hahaha 67\n");
    }

   /* multiplicacao*/
   int a, b, multiplicacao;
   printf("Digite o primeiro numero:");
   scanf("%d", &a);
   printf("Digite o segundo numero:");
   scanf("%d",&b);
   multiplicacao = a * b;
   printf("O resultado da multiplicacao: %d\n",multiplicacao);



   /* divisao*/
   int a, b, divisao;
   printf("Digite o primeiro valor:");
   scanf("%d",&a);
   printf("Digite o segundo valor:");
   scanf("%d",&b);
   divisao = a / b;
   printf("O resultado da divisao e: %d\n", divisao);


  /* dobro e triplo*/
   int a, dobro , triplo;
   printf("Digite um numero:");
   scanf("%d", %a);
   dobro = a *2;
   triplo = a *3;
   print("O dobro de %d eh %d e o triplo eh %d",a,dobro,triplo);
   

   

 

   













































































































































































































































    return 0;
}

