#include <stdio.h>
#include <math.h>

int main() {
    float num, raiz_quadrada;

    printf("Digite o numero do qual deseja saber a raiz quadrada: ");
    scanf("%f", &num);

    raiz_quadrada = sqrt(num);

    printf("A raiz quadrada de %.2f eh: %.2f", num, raiz_quadrada);

    return 0;
}
