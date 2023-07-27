#include <stdio.h>

int main() {

    int num = 1;

    printf("Num | Quadrado | Cubo\n");
    printf("----------------------\n");

    while (num <= 10) {
        int quad = num * num;
        int cubo = num * num * num;
        printf("%3d | %8d | %4d\n", num, quad, cubo);
        num++;
    }

    return 0;
}
