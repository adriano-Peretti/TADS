#include <stdio.h>

int main() {
    float divisor = 1, dividendo = 1, a;

    for ( divisor = 1; divisor <= 25; divisor++)
    {
        a += dividendo/divisor;
        printf("%.2f / %.2f = %.2f\n", dividendo, divisor, a);
        dividendo += 2;
    }

    printf("A = %.2f", a);

    return 0;
}
