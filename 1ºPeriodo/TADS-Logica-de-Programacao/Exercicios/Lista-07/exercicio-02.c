#include <stdio.h>

int main() {
    float valor, valorMax = 0, valorMin = 9999, mediaValores, somaValores;
    int i, count = 30;

    for (i = 1; i <= count; i++)
    {
        printf("Entre o %d valor: ", i);
        scanf("%f", &valor);

        if(valor > 5.9){
            somaValores += valor;
        }

        if(valor >= valorMax){
            valorMax = valor;
        }

        if(valor <= valorMin){
            valorMin = valor;
        }
    }

    mediaValores = somaValores / (float)count;

    printf("O valor maximo eh: %f\n", valorMax);
    printf("O valor minimo eh: %f\n", valorMin);
    printf("A media dos valores maiores que 5,9 eh: %f\n", mediaValores);

    return 0;

}
