#include <stdio.h>

#define TAM 20

int main() {
    int alunos[TAM], contagemAlunos = 0;
    float notas[TAM], media = 0, somaNotas = 0;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf(" %f", &notas[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        somaNotas += notas[i];
    }

    media = somaNotas / TAM;

    for (int i = 0; i < TAM; i++)
    {
        if(notas[i] > media ){
            contagemAlunos++;
        }
    }

    printf("A media da turma foi: %.2f \n E %d alunos ficaram acima da media", media, contagemAlunos);

    return 0;

}
