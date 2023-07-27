#include <stdio.h>

int main(){

    float porcComissao = 1.1;

    // Variaveis
    float totalDeVendas, comissao;

    //entrada
    printf("Digite o valor total de vendas: ");
    scanf("%f", &totalDeVendas);

    //processamento
    comissao = (totalDeVendas * porcComissao) - totalDeVendas;

    //saida
    printf("A comissao do vendedor sera: %.2f", comissao);

    return 0;
}
