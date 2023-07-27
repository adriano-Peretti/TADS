#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, mq;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Digite o valor de d: ");
    scanf("%f", &d);

    mq = sqrt(((pow(a, 2))+(pow(b, 2))+(pow(c, 2))+(pow(d, 2)))/4);

    printf("A media quadratica dos valores eh: %.2f", mq);

    return 0;
}
