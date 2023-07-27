#include <stdio.h>

#define TAM 10

int main() {
    int vetor[TAM], inverso[TAM];

    printf("Digite uma sequencia de %d numeros: ", TAM);
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        inverso[TAM - 1 - i] = vetor[i];
    }
    
    printf("Vetor invertido: \n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d\n", inverso[i]);
    }
    
    printf("\n");

    return 0;
    
}