#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

int main() {
    int matrizA[MAX_LINHAS][MAX_COLUNAS];
    int matrizT[MAX_COLUNAS][MAX_LINHAS];
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizT[j][i] = matrizA[i][j];
        }
    }

    printf("Matriz transposta T:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matrizT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
