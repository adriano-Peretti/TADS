#include <stdio.h>

float calcularAreaTriangulo(float base, float altura) {
    float area = (base * altura) / 2;
    return area;
}

int main() {
    float base, altura;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    float area = calcularAreaTriangulo(base, altura);

    printf("A area do triangulo eh: %.2f\n", area);

    return 0;
}
