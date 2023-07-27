#include <stdio.h>

int main() {

    // Variaveis
        float base, altura, area;

    // Entrada
        printf("Calculadora de area de um retangulo \n" "\n----------------------\n");
        printf("\n Digite o tamanho da base do retangulo: ");
        scanf("%f", &base);
        printf("\n Digite a altura do retangulo: ");
        scanf("%f", &altura);

    // Processamento
        area = base * altura;

    // Saida
        printf("A area do seu retangulo eh %.2f\n", area);

    return 0;
}
