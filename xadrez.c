#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula a movimentação de peças de xadrez utilizando estruturas de repetição.

int main() {
    // Nível Novato - Movimentação das Peças
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Implementação de Movimentação da Torre (FOR)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação do Bispo (WHILE)
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Implementação de Movimentação da Rainha (DO-WHILE)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    

    return 0;
}
