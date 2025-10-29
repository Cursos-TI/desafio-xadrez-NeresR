#include <stdio.h>

int main() {
    int i, j;

    // TORRE - usa for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // BISPO - usa while
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // RAINHA - usa do-while
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\n");

    // CAVALO - usa loops aninhados (for + while)
    printf("Movimento do Cavalo (duas casas para baixo e uma para a esquerda):\n");

    // duas casas para baixo (loop externo - for)
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    // uma casa para a esquerda (loop interno - while)
    j = 1;
    while (j <= 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
