#include <stdio.h>

int main() {

    float valorTotal, valorFinal, valorDesconto, valorAcrescimo, valorParcela;
    int opcaoPagamento, numParcelas;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);

    printf("Escolha a forma de pagamento: \n");
    printf("1 - Pagamento a vista \n");
    printf("2 - Pagamento com cheque pre-datado para 30 dias \n");
    printf("3 - Pagamento parcelado em 3x \n");
    printf("4 - Pagamento parcelado em 6x \n");
    printf("5 - Pagamento parcelado em 12x \n");
    printf("Opcao: \n");
    scanf("%d", &opcaoPagamento);

    switch (opcaoPagamento)
    {
    case 1:
        valorDesconto = valorTotal * .15;
        valorFinal = valorTotal - valorDesconto;
        printf("\nValor total da compra: R$ %.2f\n", valorTotal);
        printf("Valor com Desconto: R$ %.2f\n", valorFinal);
        printf("Desconto de: R$ %.2f\n", valorDesconto);
        break;
    case 2:
        valorDesconto = valorTotal * .1;
        valorFinal = valorTotal - valorDesconto;
        printf("\nValor total da compra: R$ %.2f\n", valorTotal);
        printf("Valor com Desconto: R$ %.2f\n", valorFinal);
        printf("Desconto de: R$ %.2f\n", valorDesconto);
        break;    
    case 3:
        valorDesconto = valorTotal * .05;
        valorFinal = valorTotal - valorDesconto;
        valorParcela = valorFinal / 3;
        printf("\nValor total da compra: R$ %.2f\n", valorTotal);
        printf("Valor com Desconto: R$ %.2f\n", valorFinal);
        printf("Desconto de: R$ %.2f\n", valorDesconto);
        printf("Valor de cada parcela (3x): R$ %.2f\n", valorParcela);
        break;
    case 4:
        valorFinal = valorTotal;
        valorParcela = valorFinal / 6;
        printf("\nValor total da compra: R$ %.2f\n", valorTotal);
        printf("Valor de cada parcela (6x): R$ %.2f\n", valorParcela);
        break;
    case 5:
        valorDesconto = valorTotal * .08;
        valorFinal = valorTotal + valorDesconto;
        valorParcela = valorFinal / 12;
        printf("\nValor total da compra: R$ %.2f\n", valorTotal);
        printf("Valor com Acresimo: R$ %.2f\n", valorFinal);
        printf("Acrescimo de: R$ %.2f\n", valorDesconto);
        printf("Valor de cada parcela (12x): R$ %.2f\n", valorParcela);
        break;    
    default:
        printf("\nOpcao Invalida.\n");
        break;
    }

    return 0;
}