#include <stdio.h>

int main() {
    int aluno = 1;
    float notaA, notaB, media;
    char resp;

    do
    {
        printf("Aluno %d \n", aluno);
        printf("Entre com a nota A: ");
        scanf("%f", &notaA);
        printf("Entre com a nota B: ");
        scanf("%f", &notaB);

        media = (notaA + (2 * notaB)) / 3;

        printf("Media do aluno %d: %.2f\n", aluno, media);

        do {
            printf("Continuar (S/N)? ");
            scanf(" %c", &resp);
            
            resp = toupper(resp);

            if (resp != 'S' && resp != 'N')
            {
                printf("ERRO: Resposta invalida!\n");
            }

        } while (resp != 'S' && resp != 'N');

        aluno++;

    } while (resp == 'S');

    return 0;
}
