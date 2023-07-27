#include <stdio.h>

int main(){

    // declaração de variaveis
        int numA, numB, soma, sub, mult, div;
    //entrada
        printf("Digite o numero A: ");
        scanf("%d", &numA);
        printf("Digite o numero B: ");
        scanf("%d", &numB);
    //processamento
        soma = numA + numB;
        sub = numA - numB;
        mult = numA * numB;
        div = numA / numB;
    //saida
        printf("O resultado da soma: %d\n", soma);
        printf("O resultado da subtracao: %d\n", sub);
        printf("O resultado da multiplicacao: %d\n", mult);
        printf("O resultado da divisao: %d\n", div);

    return 0;
}
