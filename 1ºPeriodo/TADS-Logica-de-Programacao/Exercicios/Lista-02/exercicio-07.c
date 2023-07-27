#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, mh;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Digite o valor de d: ");
    scanf("%f", &d);

    mh = 4 / ((1/a) + (1/b) + (1/c) + (1/d));

    printf("A media harmonica dos valores eh: %.2f", mh);

    return 0;
}
