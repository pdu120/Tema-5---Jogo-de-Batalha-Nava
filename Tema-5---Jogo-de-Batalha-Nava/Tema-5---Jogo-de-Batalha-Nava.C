#include <stdio.h>

// ---------------------
// Função recursiva para a Torre (move 5 casas para a direita)
// ---------------------
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// ---------------------
// Função recursiva para a Rainha (move 8 casas para a esquerda)
// ---------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// ---------------------
// Função recursiva para o Bispo (move diagonal: cima + direita)
// Inclui loops aninhados para representar passo a passo
// ---------------------
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    // Movimento diagonal: para cada passo, um passo em cima e um em direita
    for (int i = 0; i < 1; i++) { // Movimento vertical (Cima)
        for (int j = 0; j < 1; j++) { // Movimento horizontal (Direita)
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

// ---------------------
// Movimento complexo do Cavalo com loops aninhados
// ---------------------
void moverCavalo() {
    int movimentosFeitos = 0;
    int maxMovimentos = 1;  // Quantas vezes o movimento em "L" será feito

    printf("\nMovimento do Cavalo:\n");

    for (int vertical = 0; vertical < 3; vertical++) {
        for (int horizontal = 0; horizontal < 2; horizontal++) {
            if (vertical < 2) {
                printf("Cima\n");
                continue; // pular para a próxima iteração do loop interno
            }

            if (horizontal == 1) {
                printf("Direita\n");
                movimentosFeitos++;

                // Se já fez o movimento completo (2x cima, 1x direita), sai do loop
                if (movimentosFeitos == maxMovimentos) {
                    break;
                }
            }
        }
        if (movimentosFeitos == maxMovimentos) break;
    }
}

// ---------------------
// Função principal
// ---------------------
int main() {
    // ------------------ Torre ------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ------------------ Bispo ------------------
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // ------------------ Rainha ------------------
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ------------------ Cavalo ------------------
    moverCavalo();

    return 0;
}