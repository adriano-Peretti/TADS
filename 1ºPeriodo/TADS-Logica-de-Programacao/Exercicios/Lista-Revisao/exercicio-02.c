#include <stdio.h>

int main() {

    // Variaveis
        int numInt, numAnt, numSuc;

    // Entrada
        printf("Antecessor e sucessor \n" "\n----------------------\n" "\n Digite numero que deseja saber o Antecessor e o Sucessor: ");
        scanf("%d", &numInt);

    // Processamento
        numAnt = numInt - 1;
        numSuc = numInt + 1;

    // Saida
        printf("O antecessor de %d, eh %d\n", numInt,numAnt);
        printf("O sucessor de %d, eh %d", numInt,numSuc);

    return 0;
}
