#include <stdio.h>

int main() {

    // Variaveis
        float c, f, k;

    // Entrada
        printf("Conversor de medida de temperatura \n" "\n----------------------\n");
        printf("\n Digite a temperatura em Celsius: ");
        scanf("%f", &c);

    // Processamento
        k = (c + 273);
        f = ((1.8 * c) + 32);

    // Saida
        printf("\n----------------------\n");
        printf("Escalas de temperatura\n\n %.1fC = %.1fF = %.1fK \n" , c, f, k);

    return 0;
}
