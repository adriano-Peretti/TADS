#include <stdio.h>

int main() {

    // Variaveis
        float valorTotal, valorDesc, valorAcres;

    // Entrada
        printf("Calculadora de desconto e acressimo \n" "\n----------------------\n");
        printf("\n Digite o valor total da compra: ");
        scanf("%f", &valorTotal);

    // Processamento
        valorDesc = (valorTotal - (valorTotal * .1));
        valorAcres = (valorTotal * 1.05);

    // Saida
        printf("O valor total com desconto eh %.2f \n", valorDesc);
        printf("O valor total com acressimo eh %.2f \n", valorAcres);

    return 0;
}
