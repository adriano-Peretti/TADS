#include <stdio.h>
#include <math.h>

int numeroRaizesReais(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        return 2;  // Duas raízes reais distintas
    } else if (delta == 0) {
        return 1;  // Uma raiz real
    } else {
        return 0;  // Nenhuma raiz real
    }
}

int main() {
    float a, b, c;
    printf("Digite os coeficientes do polinômio de segundo grau (ax^2 + bx + c):\n");
    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    int resultado = numeroRaizesReais(a, b, c);

    if (resultado == 2) {
        printf("O polinômio possui duas raízes reais distintas.\n");
    } else if (resultado == 1) {
        printf("O polinômio possui uma raiz real.\n");
    } else {
        printf("O polinômio não possui raízes reais.\n");
    }

    return 0;
}
