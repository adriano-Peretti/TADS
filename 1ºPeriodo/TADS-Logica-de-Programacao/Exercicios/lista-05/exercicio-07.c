#include <stdio.h>

int main() {

    int n = 20, r = 3, i = 0, termo = 0;

    printf("Progressao Aritmetica de %d termos, razao %d, iniciando em 0:\n", n, r);

    while (i < n) {
        printf("%d ", termo);
        termo += r;
        i++;
    }

    printf("\n");

    return 0;
}
