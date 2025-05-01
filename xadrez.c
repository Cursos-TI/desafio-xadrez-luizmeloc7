#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez usando estruturas de repetição.
 * Peças simuladas: Torre (for), Bispo (while), Rainha (do-while).
 */

int main() {
    // TORRE - Movimento horizontal para a direita (usa for)
    int casasTorre = 5;
    printf("Movimento da TORRE (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // BISPO - Movimento diagonal para cima e à direita (usa while)
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do BISPO (5 casas na diagonal para cima e à direita):\n");
    while (contadorBispo < casasBispo) {
        printf("Cima\n");
        printf("Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // RAINHA - Movimento horizontal para a esquerda (usa do-while)
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da RAINHA (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
