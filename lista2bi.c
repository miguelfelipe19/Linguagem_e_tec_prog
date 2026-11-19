
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 100

/* ---------- Funcoes auxiliares ---------- */


void lerVetor(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}


int ehPrimo(int n) {
    int i;
    if (n < 2) return 0;               
    for (i = 2; i * i <= n; i++)      
        if (n % i == 0) return 0;      
    return 1;
}


int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}


double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

/* ---------- Exercicio 1 ---------- */

void exercicio1() {
    int v[TAM], i, j, aux;

    printf("\n=== Exercicio 1 ===\n");
    lerVetor(v, TAM);

    
    printf("Ordem inversa da leitura:\n");
    for (i = TAM - 1; i >= 0; i--)
        printf("%d ", v[i]);
    printf("\n");

    
    for (i = 0; i < TAM - 1; i++)
        for (j = 0; j < TAM - 1 - i; j++)
            if (v[j] < v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }

    printf("Do maior para o menor:\n");
    for (i = 0; i < TAM; i++)
        printf("%d ", v[i]);
    printf("\n");
}

/* ---------- Exercicio 2 ---------- */

void exercicio2() {
    double x, a;
    int n = 0;

    printf("\n=== Exercicio 2 ===\n");
    printf("Digite um valor positivo: ");
    scanf("%lf", &x);

    if (x <= 0) {
        printf("Valor deve ser positivo.\n");
        return;
    }

    a = x;
    while (a >= 10) { a /= 10; n++; }  
    while (a < 1)   { a *= 10; n--; }  

    printf("%.6f x 10^%d\n", a, n);
}

/* ---------- Exercicio 3 ---------- */

void exercicio3() {
    int n, i, cont = 0;
    int bits[64];

    printf("\n=== Exercicio 3 ===\n");
    printf("Digite n (1 a 64): ");
    scanf("%d", &n);

    if (n < 1 || n > 64) {
        printf("n invalido.\n");
        return;
    }

   
        bits[cont] = n % 2;
        n = n / 2;
        cont++;
    }

    
    printf("Binario: ");
    for (i = cont - 1; i >= 0; i--)
        printf("%d", bits[i]);
    printf("\n");
}

/* ---------- Exercicio 4 ---------- */

void exercicio4() {
    int i, x, maior;

    printf("\n=== Exercicio 4 ===\n");
    printf("Valor 1: ");
    scanf("%d", &maior);               

    for (i = 2; i <= 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &x);
        maior = maiorAB(maior, x);     
    }

    printf("%d eh o maior\n", maior);
}

/* ---------- Exercicio 5 ---------- */

void exercicio5() {
    int v[TAM], i;

    printf("\n=== Exercicio 5 ===\n");
    lerVetor(v, TAM);

    for (i = 0; i < TAM; i++) {
        printf("%d: %s, %s\n", v[i],
               (v[i] % 2 == 0) ? "par" : "impar",
               ehPrimo(v[i]) ? "primo" : "nao primo");
    }
}

/* ---------- Exercicio 6 ---------- */

void exercicio6() {
    double x1[10], y1[10], x2[10], y2[10];
    int i;

    printf("\n=== Exercicio 6 ===\n");
    for (i = 0; i < 10; i++) {
        printf("Par %d - x1 y1 x2 y2: ", i + 1);
        scanf("%lf %lf %lf %lf", &x1[i], &y1[i], &x2[i], &y2[i]);
    }

    for (i = 0; i < 10; i++)
        printf("Distancia %d: %.2f\n", i + 1,
               distancia(x1[i], y1[i], x2[i], y2[i]));
}

/* ---------- Exercicio 7 ---------- */

void exercicio7() {
    int v[TAM], i, achou = 0;

    printf("\n=== Exercicio 7 ===\n");
    lerVetor(v, TAM);

    for (i = 0; i < TAM - 1; i++) {    
        if (v[i + 1] == v[i] + 1) {
            printf("Consecutivos: %d e %d\n", v[i], v[i + 1]);
            achou = 1;
        }
    }

    if (!achou)
        printf("Nenhum numero consecutivo encontrado.\n");
}


int main() {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    return 0;
}
