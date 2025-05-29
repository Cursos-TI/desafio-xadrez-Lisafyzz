#include <stdio.h>

// Movimento recursivo da Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo da Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento recursivo do Bispo na diagonal cima-direita, com loops aninhados
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;

    for (int v = 0; v < 1; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(casas - 1);
}

// Movimento do Cavalo: 2 para cima e 1 para a direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    for (int m = 0; m < 1; m++) {
        int vertical = 0;

        while (vertical < 2) {
            printf("Cima\n");
            vertical++;
        }

        int horizontal = 0;
        while (horizontal < 1) {
            printf("Direita\n");
            horizontal++;
        }
    }

    printf("\n");
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(5);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    moverCavalo();

    return 0;
}
