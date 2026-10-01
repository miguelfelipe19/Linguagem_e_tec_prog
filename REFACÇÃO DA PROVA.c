
#include <stdio.h>
#include <math.h>

/* ---------- REFACÇÃO DA PROVA ---------- */
void mochilas(void) {
    int total, capacidade;
    printf("Quantidade total de itens: ");
    scanf("%d", &total);
    printf("Capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0 || total < 0) {          
        printf("Valores invalidos!\n");
        return;
    }
    printf("Mochilas totalmente preenchidas: %d\n", total / capacidade); 
    printf("Itens que sobraram: %d\n", total % capacidade);              
}


void tresNumeros(void) {
    int a, b, c, t;
    printf("Digite a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
        return;
    }
    
    if (a > b) { t = a; a = b; b = t; }
    if (b > c) { t = b; b = c; c = t; }
    if (a > b) { t = a; a = b; b = t; }
    printf("%d %d %d\n", a, b, c);
}


void operacaoRelacional(void) {
    double v1, v2;
    int cod;
    printf("Primeiro valor: ");
    scanf("%lf", &v1);
    printf("Segundo valor: ");
    scanf("%lf", &v2);
    printf("Codigo (1:>  2:<  3:==  4:!=): ");
    scanf("%d", &cod);

    switch (cod) {
        case 1: printf("%s\n", v1 > v2  ? "Verdadeiro" : "Falso"); break;
        case 2: printf("%s\n", v1 < v2  ? "Verdadeiro" : "Falso"); break;
        case 3: printf("%s\n", v1 == v2 ? "Verdadeiro" : "Falso"); break;
        case 4: printf("%s\n", v1 != v2 ? "Verdadeiro" : "Falso"); break;
        default: printf("operador invalido\n");
    }
}


void consecutivos(void) {
    int n[5], i, j, achou = 0;
    printf("Digite 5 numeros inteiros: ");
    for (i = 0; i < 5; i++) scanf("%d", &n[i]);

    
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
            if (n[i] - n[j] == 1 || n[j] - n[i] == 1) {
                printf("Consecutivos: %d e %d\n", n[i], n[j]);
                achou = 1;
            }
    if (!achou) printf("Nao ha numeros consecutivos.\n");
}


void imc(void) {
    float peso, altura, valor;
    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    if (altura <= 0 || peso <= 0) {
        printf("Valores invalidos!\n");
        return;
    }
    valor = peso / (altura * altura);
    printf("IMC = %.1f - ", valor);

    
    if (valor < 18.5)       printf("Abaixo do peso\n");
    else if (valor < 25.0)  printf("Normal\n");
    else if (valor < 30.0)  printf("Acima do peso\n");
    else                    printf("Obeso\n");
}


int pino[3] = {6, 0, 0};   /* A = 1+2+3, B = 0, C = 0 */


void hanoi(int n, int origem, int destino, int aux) {
    if (n == 0) return;
    hanoi(n - 1, origem, aux, destino);          
    pino[origem]  -= n;                         
    pino[destino] += n;                          
    printf("Mover disco %d de %c para %c -> A=%d B=%d C=%d\n",
           n, 'A' + origem, 'A' + destino, pino[0], pino[1], pino[2]);
    hanoi(n - 1, aux, destino, origem);          
}

void torresHanoi(void) {
    pino[0] = 6; pino[1] = 0; pino[2] = 0;       
    printf("Inicio: A=%d B=%d C=%d\n", pino[0], pino[1], pino[2]);
    hanoi(3, 0, 2, 1);                           
}


void imparesMultiplos5(void) {
    int n[4], i, achou = 0;
    printf("Digite 4 numeros inteiros: ");
    for (i = 0; i < 4; i++) scanf("%d", &n[i]);

    printf("Impares multiplos de 5: ");
    for (i = 0; i < 4; i++)
        if (n[i] % 2 != 0 && n[i] % 5 == 0) {
            printf("%d ", n[i]);
            achou = 1;
        }
    if (!achou) printf("nenhum");
    printf("\n");
}

int grupo(int cod) {
    if (cod >= 1 && cod <= 3)   return 1;  
    if (cod == 4 || cod == 5)   return 2;  
    if (cod == 8 || cod == 9)   return 3;  
    if (cod == 10 || cod == 11) return 4;  
    return 0;
}

void conversao(void) {
    double valor, c, res;
    int de, para;
    printf("Valor a converter: ");
    scanf("%lf", &valor);
    printf("Codigo da unidade do valor\n"
           " (1:C 2:F 3:K 4:m 5:mi 8:kg 9:lb 10:mph 11:km/h): ");
    scanf("%d", &de);
    printf("Codigo da unidade de conversao: ");
    scanf("%d", &para);

    if (grupo(de) == 0 || grupo(para) == 0 || grupo(de) != grupo(para)) {
        printf("Erro: unidade inexistente ou conversao incompativel!\n");
        return;
    }
    if (de == para) { printf("Resultado: %.2f\n", valor); return; }

    switch (grupo(de)) {
        case 1:  
            if (de == 1)      c = valor;
            else if (de == 2) c = (valor - 32) / 1.8;
            else              c = valor - 273.15;
            if (para == 1)      res = c;
            else if (para == 2) res = c * 1.8 + 32;
            else                res = c + 273.15;
            break;
        case 2: res = (de == 4) ? valor / 1609.34 : valor * 1609.34; break;
        case 3: res = (de == 8) ? valor * 2.205   : valor / 2.205;   break;
        default: res = (de == 10) ? valor * 1.609 : valor / 1.609;   break;
       
    }
    printf("Resultado: %.2f\n", res);
}


int main(void) {
    int op;

    printf("\n========== MENU ==========\n");
    printf("--- Prova ESOFT M B ---\n");
    printf(" 1 - Mochilas (cheias e sobra)\n");
    printf(" 2 - Tres numeros distintos\n");
    printf(" 3 - Operacao relacional\n");
    printf("--- Prova ESOFT M A ---\n");
    printf(" 4 - Numeros consecutivos\n");
    printf(" 5 - IMC\n");
    printf(" 6 - Torres de Hanoi\n");
    printf("--- Prova ADSIS N A ---\n");
    printf(" 7 - Impares multiplos de 5\n");
    printf(" 8 - Conversao de unidades\n");
    printf(" 0 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &op);
    printf("\n");

    switch (op) {
        case 1: mochilas();           break;
        case 2: tresNumeros();        break;
        case 3: operacaoRelacional(); break;
        case 4: consecutivos();       break;
        case 5: imc();                break;
        case 6: torresHanoi();        break;
        case 7: imparesMultiplos5();  break;
        case 8: conversao();          break;
        case 0: printf("Encerrando...\n"); break;
        default: printf("Opcao invalida!\n");
    }
    return 0;
}
