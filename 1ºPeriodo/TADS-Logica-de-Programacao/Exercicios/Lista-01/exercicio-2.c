#include <stdio.h>

int main(){

    // declaração de variaveis
        float real, dolar, cotacao;
    //entrada
        printf("Digite a quantidade de dolares que deseja converter em reais: ");
        scanf("%f", &dolar);
        printf("Digite a cotacao do Dolar hoje? ");
        scanf("%f", &cotacao);
    //processamento
        real = cotacao * dolar;
    // saida
        printf("%.2f Dolares sao %.2f Reais", dolar, real);

    return 0;
    }
