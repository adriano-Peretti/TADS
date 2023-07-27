#include <stdio.h>

int somaNaturais(int n) {
    int soma = 0;

    for (int i = 0; i <= n; i++)
    {
        soma += i;
    }

    return soma;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = somaNaturais(n);

    printf("A soma dos %d primeiros numeros naturais eh: %d\n", n, resultado);

    return 0;
}

