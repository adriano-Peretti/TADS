#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[100], strUpper[100];
    int tam;

    printf("Digite sua string: ");
    fgets(str, sizeof(str), stdin);

    tam = strlen(str);

    for(int i = 0; i < tam; i++) {
        strUpper[i] = toupper(str[i]);
    }

    printf("Entrada: %s", str);
    printf("Saida: %s", strUpper);

    return 0;
}
