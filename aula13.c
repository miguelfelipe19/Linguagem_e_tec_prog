#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* palindromo */

int main(int argc, char *argv[]) {
    int i, tamanho;
    int ehPalindromo = 1;
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%29s", palavra);   
    printf("Inseridos %s", palavra);
    printf("\n");

    
    for (i = 0; i < 30 && palavra[i] != '\0'; i++) {
        printf("%d", i);
    }
    tamanho = i;  
    printf("\n o tamanho da minha palavra eh %d\n", tamanho);

   
    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("A palavra \"%s\" eh um palindromo\n", palavra);
    } else {
        printf("A palavra \"%s\" NAO eh um palindromo\n", palavra);
    }

    return 0;
}
