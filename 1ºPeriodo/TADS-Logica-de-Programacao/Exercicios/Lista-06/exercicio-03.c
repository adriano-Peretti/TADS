#include <stdio.h>

int main() {
    int i = 1, idade, maiorIdade = 0, menorIdade = 999, somaIdadesMulheres = 0, numHomens = 0, numMulheres = 0;
    float mediaIdadeMulheres;
    char genero;

    while (i <= 10) {
        printf("Digite a idade da pessoa %d? ", i);
        scanf("%d", &idade);

        printf("Digite o genero da pessoa %d (F/M): ", i);
        scanf(" %c", &genero);

        genero = toupper(genero);

        if (genero == 'M') {
            numHomens++;
        }
        if (genero == 'F') {
            somaIdadesMulheres += idade;
            numMulheres++;
        }

        if (idade < menorIdade) {
            menorIdade = idade;
        }

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        i++;
    }
    
    if (numMulheres > 0) {
        mediaIdadeMulheres = (float)somaIdadesMulheres / numMulheres;
    } 

    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Media de idade das mulheres: %.2f\n", mediaIdadeMulheres);
    printf("Numero de homens: %d\n", numHomens);

    return 0;
}