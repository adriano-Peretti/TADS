#include <stdio.h>

int main() {
    int i = 1, idade, mulherMaisVelha = 0, homemMaisNovo = 999, somaIdadesMulheres = 0;
    float peso, maiorPeso = 0, menorPeso = 999;
    char genero, continuar;

    do {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Digite o genero da pessoa %d (F/M): ", i);
        scanf(" %c", &genero);

        printf("Digite o peso da pessoa %d: ", i);
        scanf(" %f", &peso);

        genero = toupper(genero);

        if (genero == 'M' && idade < homemMaisNovo) {
            homemMaisNovo = idade;
        } else if (genero == 'F' && idade > mulherMaisVelha) {
            mulherMaisVelha = idade;
        }

        if (peso > maiorPeso) {
            maiorPeso = peso;
        } else if (peso < menorPeso) {
            menorPeso = peso;
        }

        printf("Deseja ler os dados de mais uma pessoa? [S/N]: ");
        scanf(" %c", &continuar);

        continuar = toupper(continuar);

        i++;
    } while (continuar == 'S');

    printf("\nResultados:");

    if (mulherMaisVelha > 0) {
        printf("\nA mulher mais velha tem %d anos\n", mulherMaisVelha);
    } else {
        printf("\nNao foi informada a idade de nenhuma mulher.");
    }

    if (homemMaisNovo > 0)
    {
        printf("\nO homem mais novo tem %d anos", homemMaisNovo);
    }
    else
    {
        printf("\nNao foi informada a idade de nenhum homem.");
    }

    if (maiorPeso > 0)
    {
        printf("\nO maior peso eh %.2f", maiorPeso);
    }
    else
    {
        printf("\nNao foi informada o peso de nenhuma pessoa.");
    }

    if (menorPeso > 0)
    {
        printf("\nO menor peso eh %.2f", menorPeso);
    }
    else
    {
        printf("\nNao foi informada o peso de nenhuma pessoa.");
    }

    return 0;
}
