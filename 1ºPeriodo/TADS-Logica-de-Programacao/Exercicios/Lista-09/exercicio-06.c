#include <stdio.h>

#define MAX_ALUNOS 100

int main() {
    int numAlunos;
    float notas[MAX_ALUNOS][4];
    float mediaGeral = 0.0;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    printf("Digite as notas dos alunos (Nota1, Nota2, Nota3, Nota4):\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f %f %f %f", &notas[i][0], &notas[i][1], &notas[i][2], &notas[i][3]);
    }

    printf("\nALUNO   NOTA1  NOTA2  NOTA3  NOTA4  MEDIA\n");
    for (int i = 0; i < numAlunos; i++) {
        float media = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4.0;
        printf("%-7d %-6.1f %-6.1f %-6.1f %-6.1f %-6.1f\n", i + 1, notas[i][0], notas[i][1], notas[i][2], notas[i][3], media);
        mediaGeral += media;
    }

    mediaGeral /= numAlunos;
    printf("\nMEDIA GERAL.......................: %.1f\n", mediaGeral);

    return 0;
}
