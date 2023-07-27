#include <stdio.h>

#define TAM 100

int main() {
    int n, vetorX[TAM], vetorY[TAM], produtoEscalar = 0;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    printf("Digite os elementos do vetor X: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetorX[i]);
    }

    printf("Digite os elementos do vetor Y: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetorY[i]);
    }

    for (int i = 0; i < n; i++)
    {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    printf("O produto escalar dos vetores eh: %d\n", produtoEscalar);

    return 0;
}
