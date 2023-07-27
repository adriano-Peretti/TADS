#include <stdio.h>

int main() {

    int mes, dias, ano;

    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            printf("Digite o ano: ");
            scanf("%d", &ano);
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        default:
            printf("Mes invalido\n");
            break;
    }

    if (dias == 29){
        printf("\nO mes %d do ano %d tem %d dias e eh bisexto\n", mes, ano, dias);
    } else {
        printf("\nO mes %d tem %d dias\n", mes, dias);
    }

    return 0;
}
