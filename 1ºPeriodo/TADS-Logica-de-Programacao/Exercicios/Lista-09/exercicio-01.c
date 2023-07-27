#include <stdio.h>

#define LINHAS 8
#define COLUNAS 8

int main() {
    int matriz[LINHAS][COLUNAS];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = matriz[0][0];
    int menor = matriz[0][0];
    int posicaoMaiorI = 0, posicaoMaiorJ = 0;
    int posicaoMenorI = 0, posicaoMenorJ = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                posicaoMaiorI = i;
                posicaoMaiorJ = j;
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                posicaoMenorI = i;
                posicaoMenorJ = j;
            }
        }
    }

    printf("Maior elemento: %d, Posicao: [%d][%d]\n", maior, posicaoMaiorI, posicaoMaiorJ);
    printf("Menor elemento: %d, Posicao: [%d][%d]\n", menor, posicaoMenorI, posicaoMenorJ);

    return 0;
}
