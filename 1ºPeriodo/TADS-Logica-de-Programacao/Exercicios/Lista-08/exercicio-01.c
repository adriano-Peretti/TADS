#include <stdio.h>
#define TAM 5

int main() {
    float vetorA[TAM], vetorB[TAM];
    int i;

    printf("Digite os %d elementos que deseja calcular o dobro: ", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%f", &vetorA[i]);
    }
    
    for (i = 0; i < TAM; i++)
    {
        vetorB[i] = vetorA[i] * 2;
    }
    
    for (i = 0; i < TAM; i++)
    {
        printf("O dobro de %.2f é %.2f \n",vetorA[i], vetorB[i]);
    }

    return 0;
    
}
