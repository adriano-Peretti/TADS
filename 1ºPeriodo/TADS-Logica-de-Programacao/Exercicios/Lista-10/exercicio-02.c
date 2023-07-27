#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[50];

    printf("Digite as palavras que deseja concatenar: ");
    scanf("%s", str1);
    scanf("%s", str2);

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);

    printf("string1: %s", str1);
    printf("    string2: %s", str2);
    printf("    string3: %s \n", str3);

    printf("Tamanhos: %d %d %d", strlen(str1), strlen(str2), strlen(str3));

    return 0;
}
