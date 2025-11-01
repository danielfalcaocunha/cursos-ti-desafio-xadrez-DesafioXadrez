#include <stdio.h>

// Constantes de movimentação
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;

// Função recursiva para movimentação do Bispo
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(passos - 1);
}

int main() {
    printf("=== MateCheck - Simulador de Movimentação ===\n\n");

    // Nível Novato
    printf("Nível Novato - Movimentação das Peças\n");

    // Bispo - Diagonal superior direita (for)
    printf("\nBispo (for loop):\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre - Direita (while)
    printf("\nTorre (while loop):\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }

    // Rainha - Esquerda (do-while)
    printf("\nRainha (do-while loop):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    // Nível Aventureiro
    printf("\nNível Aventureiro - Movimentação do Cavalo\n");
    // Cavalo - Movimento em L (2x1 ou 1x2)
    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            if ((dx == 0 && dy == 0) || dx == dy || dx == -dy) continue;
            if ((dx * dx + dy * dy) == 5) {
                printf("Movimento em L: Horizontal %d, Vertical %d\n", dx, dy);
            }
        }
    }

    // Nível Mestre
    printf("\nNível Mestre - Função Recursiva para o Bispo\n");
    moverBispoRecursivo(MOV_BISPO);

    printf("\n=== Fim da Simulação ===\n");
    return 0;
}
