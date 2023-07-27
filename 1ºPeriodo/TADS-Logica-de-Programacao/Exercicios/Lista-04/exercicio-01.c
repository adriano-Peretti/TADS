#include <stdio.h>
#include <ctype.h>

int main() {

    char categoria;

    printf("Digite a categoria da sua CNH: \n");
    scanf("%c", &categoria);

    categoria = toupper(categoria);

    switch (categoria)
    {
    case 'A':
        printf("Categoria A: MOTO");
        break;
    case 'B':
        printf("Categoria B: CARRO");
        break;
    case 'C':
        printf("Categoria A: CAMINHAO");
        break;
    case 'D':
        printf("Categoria A: ONIBUS");
        break;
    case 'E':
        printf("Categoria A: CARRETA");
        break;
    
    default:
        printf("Categoria INVALIDA!");
        break;
    }

    return 0;
}