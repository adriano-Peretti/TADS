#include <stdio.h>

int main() {
    int v1, v2, temp;

    printf("Digite o valor de v1: ");
    scanf("%d", &v1);

    printf("Digite o valor de v2: ");
    scanf("%d", &v2);

    printf("Valores iniciais: v1 = %d, v2 = %d\n", v1, v2);

    temp = v1;
    v1 = v2;
    v2 = temp;

    printf("Valores finais: v1 = %d, v2 = %d", v1, v2);

    return 0;
}
