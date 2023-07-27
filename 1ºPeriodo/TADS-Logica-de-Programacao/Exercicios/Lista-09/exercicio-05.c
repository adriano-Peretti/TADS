#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS], opcao, soma = 0, elemento, linha = -1, coluna = -1;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    do {
        printf("\nMenu de opcoes:\n");
        printf("1 - Mostrar todos os elementos da matriz\n");
        printf("2 - Mostrar quarta linha e primeira coluna\n");
        printf("3 - Mostrar a soma dos elementos da diagonal principal\n");
        printf("4 - Atribuir 0 para valores negativos fora da diagonal principal\n");
        printf("5 - Buscar um elemento na matriz\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Matriz:\n");
                for (int i = 0; i < LINHAS; i++) {
                    for (int j = 0; j < COLUNAS; j++) {
                        printf("%d ", matriz[i][j]);
                    }
                    printf("\n");
                };
                break;
            case 2:
                printf("Quarta linha da matriz: ");
                for (int j = 0; j < COLUNAS; j++) {
                    printf("%d ", matriz[3][j]);
                }
                printf("\n");

                printf("Primeira coluna da matriz: ");
                for (int i = 0; i < LINHAS; i++) {
                    printf("%d ", matriz[i][0]);
                }
                printf("\n");
                break;
            case 3:
                for (int i = 0; i < LINHAS; i++) {
                    soma += matriz[i][i];
                }
                printf("Soma da diagonal principal: %d\n", soma);
                break;
            case 4:
                for (int i = 0; i < LINHAS; i++) {
                    for (int j = 0; j < COLUNAS; j++) {
                        if (i != j && matriz[i][j] < 0) {
                            matriz[i][j] = 0;
                        }
                    }
                }
                printf("Valores negativos fora da diagonal principal foram atribuidos 0\n");
                break;
            case 5:
                printf("Digite o elemento a ser buscado: ");
                scanf("%d", &elemento);
                for (int i = 0; i < LINHAS; i++) {
                    for (int j = 0; j < COLUNAS; j++) {
                        if (matriz[i][j] == elemento) {
                            linha = i;
                            coluna = j;
                            break;
                        }
                    }
                    if (linha != -1 && coluna != -1) {
                        break;
                    }
                }

                if (linha != -1 && coluna != -1) {
                    printf("Elemento %d encontrado na posicao (%d, %d)\n", elemento, linha, coluna);
                } else {
                    printf("Elemento %d nao encontrado na matriz\n", elemento);
                }
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
