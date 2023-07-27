#include <stdio.h>

#define TAM 20

int main() {
    int v[TAM], menorElemento, posMenorElemento;

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

    menorElemento = v[0];
    posMenorElemento = 0;

    for (int i = 0; i < TAM; i++)
    {
        if (v[i] < menorElemento)
        {
            menorElemento = v[i];
            posMenorElemento = i;
        }
    }

    printf("O menor Elemento do vetor eh: %d\n", menorElemento);
    printf("Ele ocupa o index: %d\n", posMenorElemento);

    return 0;

}
