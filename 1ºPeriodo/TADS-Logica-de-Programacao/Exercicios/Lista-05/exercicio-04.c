#include <stdio.h>

int main() {
    int n, num, somaPar = 0, somaImpar = 0;

    printf("Digite a quantidade de numeros da sequencia: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            somaPar += num;
        } else {
            somaImpar += num;
        }

        i++;
    }

    printf("Soma dos numeros pares: %d\n", somaPar);
    printf("Soma dos numeros impares: %d\n", somaImpar);

    return 0;
}
