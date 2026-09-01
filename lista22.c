#include <stdio.h>
#include <math.h>
int main() {
    //exercicio 1
    int idade, anoAtual , anoNascimento;
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Digite o ano atual:");
    scanf("%d",&anoAtual);
    anoNascimento = anoAtual - idade;
    printf("Ano de nascimento: %d\n\n");

    //exercicio 2
    float K, M;
    printf("Digite a velocidade em Km/h:");
    scanf("%f", &K);
    M = K / 3.6 ;
    printf("Velocidade em m/s: %.2f\n\n", M);

    //exercicio 3 
    float reais, cotacao, dolares;
    printf("Digite o valor em reais:");
    scanf("%f", &reais);
    printf("Digite a cotacao do dolar:");
    scanf("%f",&cotacao);
    dolares = reais / cotacao;
    printf("Valor em dolares: %.2f\n\n", dolares);

    //exercicio 4
    float C,F;
    printf("Digite a temperatura em Celsius:");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n\n", F);
    
    //exercicio 5
    float G,R;
    const float p = 3.141592;
    printf("Digite o valor do angulo em graus:");
    scanf("%f",&G);
    R = G *p / 180f;
    printf("Angulos em radianos: %.4f\n\n", R);
    
    //exercicio 6
    int n;
    printf("Digite um numer inteiro:");
    scanf("%d", &n);
    printf("Antecessor %d\n", n - 1);
    printf("Sucessor: %d\n",n+1 );
    
    // exercicio 7
    float total =780000.00f;
    float premio1, premio2, premio3;
     premio1 = total * 0.46f;
     premio2 = total * 0.32f;
     premio3 = total -(premio1 +premio2);
     printf("O primeiro ganhador recebe: R$ 2%f\n",premio1);
     printf("O segundo ganhador recebe: R$ 2%f\n",premio2);
     printf("O terceiro ganhador recebe: R$ 2%f\n\n",premio3);

   // exercicio 8
   int segundosTotais, horas, segundos, minutos;
    printf("Digite o tempo em segundos:");
    scanf("%d", &segundosTotais);
    horas = segundosTotais / 3600;
   
   // exercicio 9
   float tempoHoras , velocidadeMedia, distancia, litros;
    const float consumo = 12.0f;
    printf("Digite o tempo gasto na viagem:");
    scanf("%f", &tempoHoras);
    printf("Digite a velocidade media:");
    scanf("%f", &velocidadeMedia);
    distancia = tempoHoras * velocidadeMedia;
    litros = distancia / consumo;
    printf("A quantidade de litros de combustivel gasto na viagem: %.3f\n\n",litros );
   //exercicio 10
   float a,b,c, maiorAB, maiorFinal;
   printf("Digite tres valores:");
    scanf("%f %f %f", &a, &b, &c);

    maiorAB = (a + b + fabs(a - b)) / 2;
    maiorFinal = (maiorAB + c + fabs(maiorAB - c)) / 2;
    printf("O maior valor e: %.2f\n", maiorFinal);
   





    return 0;
}   

