#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "lua", str2[10] = "cheia";

    strcat(str1, str2);

    puts(str1);
    printf("O resultado da concatenacao eh: %s ", str1);

    return 0;
}
