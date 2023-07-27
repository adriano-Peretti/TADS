#include <stdio.h>
#include <math.h>

int main() {
    float num, arred_baixo, arred_cima;

    printf("Digite o valor a ser arredondado: ");
    scanf("%f", &num);

    arred_baixo = floor(num);
    arred_cima = ceil(num);

    printf("O arredondamento para baixo de %.2f eh: %.2f\n", num, arred_baixo);
    printf("O arredontamento para cima de %.2f eh: %.2f", num, arred_cima);

    return 0;
    }
