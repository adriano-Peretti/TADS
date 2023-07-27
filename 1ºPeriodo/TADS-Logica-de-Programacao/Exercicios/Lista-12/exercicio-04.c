#include <stdio.h>

float calcularAreaRetangular(float comprimento, float largura) {
    float area = comprimento * largura;
    return area;
}

int main() {
    float comprimento, largura;
    printf("Digite o comprimento da figura retangular: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da figura retangular: ");
    scanf("%f", &largura);

    float area = calcularAreaRetangular(comprimento, largura);

    printf("A area da figura retangular eh: %.2f\n", area);

    return 0;
}
