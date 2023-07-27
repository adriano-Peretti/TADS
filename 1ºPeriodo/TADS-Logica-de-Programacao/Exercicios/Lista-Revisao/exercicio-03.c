#include <stdio.h>

int main() {

    // Variaveis
        float media, numInt01, numInt02, numInt03, numInt04;

    // Entrada
        printf("Calculadora de media \n" "\n----------------------\n");
        printf("\n Digite o primeiro valor: ");
        scanf("%f", &numInt01);
        printf("\n Digite o segundo valor: ");
        scanf("%f", &numInt02);
        printf("\n Digite o terceiro valor: ");
        scanf("%f", &numInt03);
        printf("\n Digite o quarto valor: ");
        scanf("%f", &numInt04);

    // Processamento
        media = (numInt01 + numInt02 + numInt03 + numInt04) / 4;

    // Saida
        printf("A media desses 4 numeros, eh %.2f\n", media);

    return 0;
}
