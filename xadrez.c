#include <stdio.h>

// Constantes de movimentação
const int casasTorre = 5;
const int casasBispo = 5;
const int casasRainha = 8;
const int cavaloPassoVertical = 2;
const int cavaloPassoHorizontal = 1;

// Função recursiva da Torre
void moverTorre(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Direita\n");
    moverTorre(passosRestantes - 1);
}

// Função recursiva da Rainha
void moverRainha(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1);
}

// Função recursiva para o Bispo (chama loops aninhados)
void moverBispo(int linhas) {
    if (linhas == 0) return;

    // Loop mais externo: movimento vertical
    for (int l = 0; l < linhas; l++) {
        // Loop interno: horizontal (simula diagonal)
        for (int c = 0; c < 1; c++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(linhas - linhas); // Fim da recursão
}

// Função com loops complexos para o Cavalo
void moverCavalo() {
    printf("\nMovimento do Cavalo (duas casas para cima e uma para a direita):\n");

    for (int i = 0, subida = 0; i < 3; i++) {
        if (subida < cavaloPassoVertical) {
            printf("Cima\n");
            subida++;
        } else {
            int j = 0;
            while (j < cavaloPassoHorizontal) {
                if (i == 2) {
                    printf("Direita\n");
                    break; // Encerramos após o passo horizontal
                }
                j++;
            }
        }
        if (i > 10) break; // segurança contra loop infinito (não deve acontecer aqui)
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre (recursivo):\n");
    moverTorre(casasTorre);

    // Movimento do Bispo
    printf("\nMovimento do Bispo (recursivo + loop aninhado):\n");
    moverBispo(casasBispo);

    // Movimento da Rainha
    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}
