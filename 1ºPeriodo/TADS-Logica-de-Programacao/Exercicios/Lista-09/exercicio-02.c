#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    float matriz[LINHAS][COLUNAS];
    int linha;

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Digite o numero da linha a ser exibida (0 a %d): ", LINHAS - 1);
    scanf("%d", &linha);

    if (linha >= 0 && linha < LINHAS) {
        printf("Linha %d: ", linha);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%.2f ", matriz[linha][j]);
        }
        printf("\n");
    } else {
        printf("Linha invalida!\n");
    }

    return 0;
}
