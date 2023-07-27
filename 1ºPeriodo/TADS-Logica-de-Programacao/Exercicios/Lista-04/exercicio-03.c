#include <stdio.h>

int main() {

    int mes;

    printf("Digite um numero de 1 a 12: \n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
    case 2:
    case 3:
        printf("\nPRIMEIRO TRIMESTRE\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("\nSEGUNDO TRIMESTRE\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("\nTERCEIRO TRIMESTRE\n");
        break;
    case 10:
    case 11:
    case 12:
        printf("\nQUARTO TRIMESTRE\n");
        break;
    default:
        printf("Entrada INVALIDA!");
        break;
    }

    return 0;
}