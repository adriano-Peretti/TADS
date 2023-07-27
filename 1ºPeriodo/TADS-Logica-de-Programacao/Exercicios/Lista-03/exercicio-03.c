#include <stdio.h>
#include <ctype.h>

int main() {
    char resp;

    printf("Digite o seu estado civil: \n");
    scanf("%c", &resp);

    resp = tolower(resp);

    if (resp == 's'){
        printf("\nO seu estado civil eh:\n SOLTEIRO \n");
    } else if (resp == 'c'){
        printf("\nO seu estado civil eh:\n CASADO \n");
       } else if (resp == 'd'){
            printf("\nO seu estado civil eh:\n DIVORCIADO \n");
            } else if (resp == 'v'){
                printf("\nO seu estado civil eh:\n VIUVO \n");
                } else {
                    printf("\nEntrada INVALIDA\n");
                }

    return 0;


}
