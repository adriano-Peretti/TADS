#include <stdio.h>
#include <math.h>

float calcularAreaCircunferencia(float raio) {
    float area = M_PI * pow(raio, 2);
    return area;
}

float calcularAreaRetangulo(float base, float altura) {
    float area = base * altura;
    return area;
}

float calcularAreaTriangulo(float base, float altura) {
    float area = (base * altura) / 2;
    return area;
}

int main() {
    int opcao;
    float raio, base, altura;

    printf("Escolha uma opcao:\n");
    printf("1 - Calcular area de uma circunferencia\n");
    printf("2 - Calcular area de um retangulo\n");
    printf("3 - Calcular area de um triangulo\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o raio da circunferencia: ");
            scanf("%f", &raio);
            float areaCircunferencia = calcularAreaCircunferencia(raio);
            printf("A area da circunferencia e: %.2f\n", areaCircunferencia);
            break;
        case 2:
            printf("Digite a base do retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retangulo: ");
            scanf("%f", &altura);
            float areaRetangulo = calcularAreaRetangulo(base, altura);
            printf("A area do retangulo e: %.2f\n", areaRetangulo);
            break;
        case 3:
            printf("Digite a base do triangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triangulo: ");
            scanf("%f", &altura);
            float areaTriangulo = calcularAreaTriangulo(base, altura);
            printf("A area do triangulo e: %.2f\n", areaTriangulo);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
