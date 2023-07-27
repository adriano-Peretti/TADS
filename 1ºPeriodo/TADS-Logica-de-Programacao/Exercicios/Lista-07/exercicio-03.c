#include <stdio.h>

int main() {
    int i;

    for (i = 32; i <= 126; i++) {
        printf("%d -> %c -> %X\n", i, (char)i, i);
    }

    return 0;
}