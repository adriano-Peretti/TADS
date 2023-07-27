#include <stdio.h>

int main() {

    // Variaveis
        float pago, preco, troco;

    // Entrada
        printf("Calculadora de troco \n" "\n----------------------\n");
        printf("\n Digite o valor pago: ");
        scanf("%f", &pago);
        printf("\n Digite o preco do produto: ");
        scanf("%f", &preco);

    // Processamento
        troco = pago - preco;

    // Saida
        printf("o troco eh %.2f\n", troco);

    return 0;

}
