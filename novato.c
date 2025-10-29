#include <stdio.h>

int main() {
    int i;

    // TORRE - usa estrutura FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // BISPO - usa estrutura WHILE
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // RAINHA - usa estrutura DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
