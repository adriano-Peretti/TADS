#include <stdio.h>
#include <math.h>

float calcularAreaCircunferencia(float raio) {
    float area = M_PI * raio * raio;
    return area;
}

int main() {
    float raio;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    float area = calcularAreaCircunferencia(raio);

    printf("A area da circunferencia eh: %.2f\n", area);

    return 0;
}
