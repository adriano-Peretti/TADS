#include <stdio.h>

int main() {

    int dia;

    printf("Digite um numero de 1 a 7: \n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("\nO dia da semana correspondente eh: DOMINGO\n");
        break;
    case 2:
        printf("\nO dia da semana correspondente eh: SEGUNDA\n");
        break;
    case 3:
        printf("\nO dia da semana correspondente eh: TERCA\n");
        break;
    case 4:
        printf("\nO dia da semana correspondente eh: QUARTA\n");
        break;
    case 5:
        printf("\nO dia da semana correspondente eh: QUINTA\n");
        break;
    case 6:
        printf("\nO dia da semana correspondente eh: SEXTA\n");
        break;
    case 7:
        printf("\nO dia da semana correspondente eh: SABADO\n");
        break;
    
    default:
        printf("Entrada INVALIDA!");
        break;
    }
    
    return 0;
}