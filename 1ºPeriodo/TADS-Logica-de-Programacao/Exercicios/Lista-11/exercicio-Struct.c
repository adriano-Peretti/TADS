#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

typedef struct {
    int codigo;
    char nome[50];
    char genero;
    int idade;
    float altura;
    float peso;
} TPessoa;

void cadastrarPessoa(TPessoa cadastro[], int *n);
void alterarPessoa(TPessoa cadastro[], int n);
void excluirPessoa(TPessoa cadastro[], int n);
void mostrarPessoa(TPessoa cadastro[], int n);
void mostrarTodos(TPessoa cadastro[], int n);

int main() {
    TPessoa cadastro[TAM];
    int n = 0;
    int opcao;

    do {
        printf("\nMENU\n");
        printf("1. Cadastro de uma pessoa\n");
        printf("2. Alterar os dados de uma pessoa\n");
        printf("3. Excluir uma pessoa\n");
        printf("4. Mostrar os dados de apenas uma pessoa\n");
        printf("5. Mostrar os dados de todos os cadastros\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarPessoa(cadastro, &n);
                break;
            case 2:
                alterarPessoa(cadastro, n);
                break;
            case 3:
                excluirPessoa(cadastro, n);
                break;
            case 4:
                mostrarPessoa(cadastro, n);
                break;
            case 5:
                mostrarTodos(cadastro, n);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

void cadastrarPessoa(TPessoa cadastro[], int *n) {
    if (*n == TAM) {
        printf("Cadastro completo. Nao e possivel cadastrar mais pessoas.\n");
        return;
    }

    TPessoa pessoa;

    printf("\nCADASTRO DE UMA PESSOA\n");

    printf("Codigo: ");
    scanf("%d", &pessoa.codigo);
    getchar();

    printf("Nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Genero (M/F): ");
    scanf(" %c", &pessoa.genero);

    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    printf("Altura(x.xx):");
    scanf("%f", &pessoa.altura);

    printf("Peso(xxx.x):");
    scanf("%f", &pessoa.peso);

    cadastro[*n] = pessoa;
    (*n)++;

    printf("Pessoa cadastrada com sucesso!\n");
    getchar();
}

void alterarPessoa(TPessoa cadastro[], int n) {
    int codigo;
    int opcao;
    int i;

    printf("\nALTERAR OS DADOS DE UMA PESSOA\n");

    printf("Digite o codigo da pessoa que deseja alterar: ");
    scanf("%d", &codigo);

    for (i = 0; i < n; i++) {
        if (cadastro[i].codigo == codigo) {
            printf("\nDADOS DA PESSOA\n");
            printf("Codigo: %d\n", cadastro[i].codigo);
            printf("Nome: %s\n", cadastro[i].nome);
            printf("Genero: %c\n", cadastro[i].genero);
            printf("Idade: %d\n", cadastro[i].idade);
            printf("Altura: %.2f\n", cadastro[i].altura);
            printf("Peso: %.2f\n", cadastro[i].peso);

            printf("\nMENU DE ALTERACAO\n");
            printf("1. Alterar nome\n");
            printf("2. Alterar genero\n");
            printf("3. Alterar idade\n");
            printf("4. Alterar altura\n");
            printf("5. Alterar peso\n");
            printf("0. Sair do modo de edicao\n");

            do {
                printf("Escolha uma opcao: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("Digite o novo nome: ");
                        getchar();
                        fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
                        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
                        printf("Nome alterado com sucesso!\n");
                        break;
                    case 2:
                        printf("Digite o novo genero (M/F): ");
                        scanf(" %c", &cadastro[i].genero);
                        printf("Genero alterado com sucesso!\n");
                        break;
                    case 3:
                        printf("Digite a nova idade: ");
                        scanf("%d", &cadastro[i].idade);
                        printf("Idade alterada com sucesso!\n");
                        break;
                    case 4:
                        printf("Digite a nova altura: ");
                        scanf("%f", &cadastro[i].altura);
                        printf("Altura alterada com sucesso!\n");
                        break;
                    case 5:
                        printf("Digite o novo peso: ");
                        scanf("%f", &cadastro[i].peso);
                        printf("Peso alterado com sucesso!\n");
                        break;
                    case 0:
                        printf("Saindo do modo de edicao...\n");
                        break;
                    default:
                        printf("Opcao invalida!\n");
                }
            } while (opcao != 0);

            return;
        }
    }

    printf("Pessoa nao encontrada!\n");
}

void excluirPessoa(TPessoa cadastro[], int n) {
    int codigo;
    int i;

    printf("\nEXCLUIR UMA PESSOA\n");

    printf("Digite o codigo da pessoa que deseja excluir: ");
    scanf("%d", &codigo);

    for (i = 0; i < n; i++) {
        if (cadastro[i].codigo == codigo) {
            cadastro[i].codigo = 0;
            cadastro[i].nome[0] = '\0';
            cadastro[i].genero = '\0';
            cadastro[i].idade = 0;
            cadastro[i].altura = 0.0;
            cadastro[i].peso = 0.0;

            printf("Pessoa excluida com sucesso!\n");
            return;
        }
    }

    printf("Pessoa nao encontrada!\n");
}



void mostrarPessoa(TPessoa cadastro[], int n) {
    int codigo;
    int i;

    printf("\nMOSTRAR OS DADOS DE UMA PESSOA\n");

    printf("Digite o codigo da pessoa que deseja mostrar: ");
    scanf("%d", &codigo);

    for (i = 0; i < n; i++) {
        if (cadastro[i].codigo == codigo) {
            printf("\nDADOS DA PESSOA\n");
            printf("Codigo: %d\n", cadastro[i].codigo);
            printf("Nome: %s\n", cadastro[i].nome);
            printf("Genero: %c\n", cadastro[i].genero);
            printf("Idade: %d\n", cadastro[i].idade);
            printf("Altura: %.2f\n", cadastro[i].altura);
            printf("Peso: %.2f\n", cadastro[i].peso);
            return;
        }
    }

    printf("Pessoa nao encontrada!\n");
}

void mostrarTodos(TPessoa cadastro[], int n) {
    int i;

    printf("\nMOSTRAR OS DADOS DE TODOS OS CADASTROS\n");

    if (n == 0) {
        printf("Nenhum cadastro encontrado!\n");
        return;
    }

    printf("\nDADOS DE TODAS AS PESSOAS\n");
    for (i = 0; i < n; i++) {
        printf("Codigo: %d\n", cadastro[i].codigo);
        printf("Nome: %s\n", cadastro[i].nome);
        printf("Genero: %c\n", cadastro[i].genero);
        printf("Idade: %d\n", cadastro[i].idade);
        printf("Altura: %.2f\n", cadastro[i].altura);
        printf("Peso: %.2f\n", cadastro[i].peso);
        printf("\n");
    }
}
