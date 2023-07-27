#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[100], character[2];
    int tam, contagem = 0;

    printf("Digite sua frase: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite o caractere que deseja contar: ");
    fgets(character, sizeof(character), stdin);

    char c = tolower(character[0]);

    tam = strlen(str);

    for(int i = 0; i < tam; i++) {
            if(tolower(str[i]) == c) {
                contagem++;
            }
        }

    printf("Entrada: %s", str);
    printf("Caractere: %c \n", c);
    printf("Saida: %d", contagem);

    return 0;
}
