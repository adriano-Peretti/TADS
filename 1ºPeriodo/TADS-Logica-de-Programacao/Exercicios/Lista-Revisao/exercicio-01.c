#include <stdio.h>

int main() {

    // Variaveis
        int numInt, dobro;

    // Entrada
        printf("Calculadora de dobro\n" "\n----------------------\n" "Digite o numero que deseja saber o dobro: ");
        scanf("%d", &numInt);

    // Processamento
        dobro = numInt * 2;

    // Saida
        printf("O dobro de %d e %d ", numInt, dobro);

    return 0;
}
