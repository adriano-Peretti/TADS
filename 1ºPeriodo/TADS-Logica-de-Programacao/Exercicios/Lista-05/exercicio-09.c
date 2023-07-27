#include <stdio.h>

int main() {
    int num = 6, i = 1;

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}