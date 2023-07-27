#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    printf("String de entrada: %s", str);

    printf("String invertida: ");
    for (int i = len - 2; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
