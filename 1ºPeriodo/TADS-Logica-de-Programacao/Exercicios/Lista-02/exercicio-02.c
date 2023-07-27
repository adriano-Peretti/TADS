#include <stdio.h>

int main() {
    float valor_compra, valor_prestacao;
    int num_prestacoes = 5;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    valor_prestacao = valor_compra / num_prestacoes;

    printf("Compra Parcelada\n");
    printf("%d x %.2f = %.2f", num_prestacoes, valor_prestacao, valor_compra);

    return 0;
}
