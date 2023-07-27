#include <stdio.h>

#define TAM 20

int main() {
    int v[TAM], maiorElemento, posMaiorElemento;

    printf("Digite %d numeros positivos para popular o vetor: \n", TAM);
    for (int i = 0; i < TAM; i++)
    {
        do
        {
            scanf("%d", &v[i]);
            if(v[i] <= 0)
            {
                printf("Digite apenas numeros positivos!\n");
            }
        } while (v[i] <= 0);
    }

    maiorElemento = v[0];
    posMaiorElemento = 0;

    for (int i = 0; i < TAM; i++)
    {
        if (v[i] > maiorElemento)
        {
            maiorElemento = v[i];
            posMaiorElemento = i;
        }
    }

    printf("O maior Elemento do vetor eh: %d\n", maiorElemento);
    printf("Ele ocupa o index: %d\n", posMaiorElemento);

    return 0;

}
