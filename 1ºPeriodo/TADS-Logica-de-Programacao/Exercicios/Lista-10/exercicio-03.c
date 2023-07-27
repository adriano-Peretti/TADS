#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int tam, contagem = 0;

    printf("Digite sua frase: ");
    fgets(str, sizeof(str), stdin);

    tam = strlen(str);

    for(int i = 0; i < tam; i++) {
            if(str[i] == 'o' || str[i] == 'O') {
                contagem++;
            }
        }

    printf("Entrada: %s", str);
    printf("Saida: %d", contagem);

    return 0;
}
