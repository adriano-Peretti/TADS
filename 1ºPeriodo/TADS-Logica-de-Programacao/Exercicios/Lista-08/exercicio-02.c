#include <stdio.h>
#define TAM 10

int main() {
    int vetorA[TAM], vetorB[TAM];
    int i;

    printf("Digite os %d elementos do vetor: ", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        if (vetorA[i] % 2 == 0)
        {
            vetorB[i] = vetorA[i] * 5;
        }
        else {
            vetorB[i] = vetorA[i] + 5;
        }      
    }

    for (i = 0; i < TAM; i++)
    {
            printf("%d \n", vetorB[i]);
    }
    
    return 0;    
    
}