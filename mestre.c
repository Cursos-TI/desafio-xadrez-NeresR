#include <stdio.h>

// ====== Funções Recursivas ======
void moverTorre(int casas) {
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int vertical, int horizontal) {
    if (vertical == 0)
        return;

    // Loop aninhado para o movimento horizontal
    for (int j = 1; j <= horizontal; j++) {
        printf("Direita\n");
    }

    printf("Cima\n");  // movimento vertical
    moverBispo(vertical - 1, horizontal); // recursão
}

void moverRainha(int casas) {
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ====== Cavalo com loops aninhados complexos ======
void moverCavalo() {
    int i, j;

    printf("Movimento do Cavalo (duas casas para cima e uma para a direita):\n");

    for (i = 1; i <= 2; i++) {
        if (i == 2) {
            printf("Cima\n");
            continue; // continua o loop, imprimindo a segunda subida
        }
        printf("Cima\n");
    }

    for (j = 1; j <= 2; j++) {
        if (j > 1) {
            break; // sai após uma casa para a direita
        }
        printf("Direita\n");
    }
}

int main() {
    printf("Movimento da Torre (recursivo):\n");
    moverTorre(5);

    printf("\n");

    printf("Movimento do Bispo (recursivo + loops aninhados):\n");
    moverBispo(3, 1); // move 3 casas na diagonal (cima + direita)

    printf("\n");

    printf("Movimento da Rainha (recursivo):\n");
    moverRainha(8);

    printf("\n");

    moverCavalo();

    return 0;
}
