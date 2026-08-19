
#include <stdio.h>
#include <math.h>   
int main() {

    //exercicio1
    
        int idade, anoAtual, anoNascimento;
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite o ano atual: ");
        scanf("%d", &anoAtual);

        anoNascimento = anoAtual - idade;
        printf("Ano de nascimento: %d\n\n", anoNascimento);
    

    //ex2
 float K, M;

        printf("Digite a velocidade em km/h: ");
        scanf("%f", &K);

        M = K / 36.0f;       
        printf("Velocidade em m/s: %.2f\n\n", M);
    

//ex3
float reais, cotacao, dolares;

        printf("Digite o valor em reais: ");
        scanf("%f", &reais);
        printf("Digite a cotacao do dolar: ");
        scanf("%f", &cotacao);

        dolares = reais / cotacao;
        printf("Valor em dolares: %.2f\n\n", dolares);
//ex4
 float C, F;
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &C);

        F = C * (9.0f / 5.0f) + 32.0f;
        printf("Temperatura em Fahrenheit: %.2f\n\n", F);
//ex5
float G, R;
        const float p = 3.141592f;

        printf("Digite o angulo em graus: ");
        scanf("%f", &G);

        R = G * p / 180.0f;
        printf("Angulo em radianos: %.4f\n\n", R);
//ex6
int n;
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        printf("Antecessor: %d\n", n - 1);
        printf("Sucessor: %d\n\n", n + 1);
//ex7
float total = 780000.00f;
        float premio1, premio2, premio3;
        premio1 = total * 0.46f;
        premio2 = total * 0.32f;
        premio3 = total - (premio1 + premio2); 
        printf("Primeiro ganhador recebe: R$ %.2f\n", premio1);
        printf("Segundo ganhador recebe: R$ %.2f\n", premio2);
        printf("Terceiro ganhador recebe: R$ %.2f\n\n", premio3);

//ex8
int segundosTotais, horas, minutos, segundos;

        printf("Digite o tempo em segundos: ");
        scanf("%d", &segundosTotais);

        horas = segundosTotais / 3600;
        minutos = (segundosTotais % 3600) / 60;
        segundos = segundosTotais % 60;

        printf("%d:%d:%d\n\n", horas, minutos, segundos);

//ex9
float tempoHoras, velocidadeMedia, distancia, litros;
        const float consumo = 12.0f; 
        printf("Digite o tempo gasto na viagem (horas): ");
        scanf("%f", &tempoHoras);
        printf("Digite a velocidade media (km/h): ");
        scanf("%f", &velocidadeMedia);

        distancia = tempoHoras * velocidadeMedia;
        litros = distancia / consumo;
        printf("Litros gastos: %.3f\n\n", litros);

//ex10
 float a, b, c, maiorAB, maiorFinal;

        printf("Digite tres valores: ");
        scanf("%f %f %f", &a, &b, &c);

        maiorAB = (a + b + fabs(a - b)) / 2.0f;
        maiorFinal = (maiorAB + c + fabs(maiorAB - c)) / 2.0f;

        printf("%.2f eh o maior\n", maiorFinal);
    return 0;
}
