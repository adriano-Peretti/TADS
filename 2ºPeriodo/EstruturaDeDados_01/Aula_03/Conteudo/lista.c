//1. Inserir elemento 
//2. Retirar Elemento
//3. Criar Lista
//4. Contar elementos da lista
//5. Exibir o conteúdo da lista
#include <stdio.h>
#include <string.h>

#define MaxItens 10
#define TamItem 20

typedef char tpLista[MaxItens][TamItem];

void criaLista(tpLista l)
{
int i;
for (i=0;i<MaxItens;i++)
   l[i][0] = '\0';
}

void imprimeLista(tpLista l)
{
int i;
printf("\nItens da lista\n");
for(i=0; i<MaxItens && strlen(l[i])>0; i++)
printf("\n%s",l[i]);
printf("\n");
}

int contaLista(tpLista l)
{
    int i;
    // Percorre a lista, até chegar ao final do espaço
    //                   ou encontrar um elemento vazio (tamanho = 0)
    for (i = 0; i<MaxItens && strlen(l[i])>0; i++);
    
    // Retorna a posição do elemento vazio, ou MaxItens, que equivale
    //   ao número de elementos na lista.
    return(i);
}

void insereLista(tpLista l, char *item)
{
    int i;
    // Laço que percorre a lista até encontrar o primeiro elemento vazio
    // (com tamanho = 0), ou ultrapassar o espaço alocado para a lista
    for(i=0; i<MaxItens && strlen(l[i])>0; i++);
    
    // Testa se ainda tem espaço na lista 
    if (i<MaxItens)
    {
        strcpy(l[i],item); // copia o item para a posição vazia da lista
        printf("\nItem (%s) inserido com sucesso",item);
    }
    else // Não tem espaço na lista
        printf("\nLista cheia, não pode inserir");
}

void retiraLista(tpLista l, char *item)
{
    int i;
    // Procura o elemento "item" na lista. 
    // Encerra a busca se chegar ao final do espaço, ou 
    //                 se encontrar um elemento vazio, ou
    //                 se encontrar o elemento "item"
    for(i=0; i<MaxItens && strlen(l[i])>0 && (strcmp(l[i],item) != 0); i++);
    // Pode ter saído do laço por três razões. Descobre qual
    if (i<MaxItens && (strcmp(l[i],item) == 0))   
    {  // Encontrou o elemento buscado
       printf("\nItem (%s) encontrado, removendo\n",item);
       if (i < (MaxItens-1)) 
       { // Tem outros elementos depois dele, puxa todos para cima
       for (;i<(MaxItens-1) && strlen(l[i])>0;i++)
           strcpy(l[i],l[i+1]);
       }
       // Zera o último elemento do espaço da lista
       l[MaxItens-1][0] = '\0';
    }
    else // Não encontrou o elemento buscado
       printf("\nItem (%s) não encontrado\n",item);
}

int main()
{
    tpLista lista;
    criaLista(lista);

    int opcao;
    char item[TamItem];

    do
    {
        printf("\nMenu:");
        printf("\n1. Inserir elemento");
        printf("\n2. Retirar elemento");
        printf("\n3. Criar Lista");
        printf("\n4. Contar elementos da lista");
        printf("\n5. Exibir o conteúdo da lista");
        printf("\n0. Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o item a ser inserido: ");
            scanf("%s", item);
            insereLista(lista, item);
            break;

        case 2:
            printf("Digite o item a ser retirado: ");
            scanf("%s", item);
            retiraLista(lista, item);
            break;

        case 3:
            criaLista(lista);
            printf("\nLista criada\n");
            break;

        case 4:
            printf("\nNúmero de elementos na lista: %d\n", contaLista(lista));
            break;

        case 5:
            imprimeLista(lista);
            break;

        case 0:
            printf("Encerrando o programa.\n");
            break;

        default:
            printf("Opção inválida. Escolha novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
