#include <stdio.h>

// ===============================================
// Função Recursiva - Movimento do Bispo
// ===============================================
void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return; // Condição de parada
    }

    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

int main() {

    // ===============================================
    // NÍVEL NOVATO - Movimentação das Peças
    // ===============================================

    const int CASAS_BISPO = 5;
    const int CASAS_TORRE = 5;
    const int CASAS_RAINHA = 8;

    int i;

    // -----------------------------------------------
    // Movimentação do Bispo (Diagonal - While)
    // -----------------------------------------------
    printf("=== Movimento do Bispo (While) ===\n");

    int contadorBispo = 1;
    while (contadorBispo <= CASAS_BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // -----------------------------------------------
    // Movimentação da Torre (Direita - For)
    // -----------------------------------------------
    printf("\n=== Movimento da Torre (For) ===\n");

    for (i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    // -----------------------------------------------
    // Movimentação da Rainha (Esquerda - Do-While)
    // -----------------------------------------------
    printf("\n=== Movimento da Rainha (Do-While) ===\n");

    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= CASAS_RAINHA);


    // ===============================================
    // NÍVEL AVENTUREIRO - Movimento do Cavalo
    // Movimento em "L" (2 casas horizontal + 1 vertical)
    // Utilizando loops aninhados
    // ===============================================

    printf("\n=== Movimento do Cavalo (Loops Aninhados) ===\n");

    int horizontal, vertical;

    for (horizontal = 1; horizontal <= 2; horizontal++) {
        printf("Direita\n");

        for (vertical = 1; vertical <= 1; vertical++) {
            printf("Cima\n");
        }
    }


    // ===============================================
    // NÍVEL MESTRE - Recursividade
    // ===============================================

    printf("\n=== Movimento do Bispo (Recursivo) ===\n");
    moverBispoRecursivo(CASAS_BISPO);


    // ===============================================
    // Uso de continue e break
    // ===============================================

    printf("\n=== Exemplo com continue e break ===\n");

    for (i = 1; i <= 5; i++) {

        if (i == 3) {
            continue; // Pula o movimento 3
        }

        if (i == 5) {
            break; // Para no movimento 5
        }

        printf("Movimento %d executado\n", i);
    }

    return 0;
}
