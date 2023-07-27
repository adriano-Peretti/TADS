#include <stdio.h>

int main() {
    int count = 0, num, maiores = 0, sum = 0;
    float avg;

    printf("Digite 15 numeros:\n");

    while (count < 15) {
        scanf("%d", &num);
        if (num > 10) {
            sum += num;
            maiores++;
        }
        count++;
    }

    if (maiores > 0) {
        avg = (float) sum / maiores;
        printf("A media dos numeros maiores que 10 eh %.2f\n", avg);
    } else {
        printf("Nenhum numero maior que 10 foi digitado.\n");
    }

    return 0;
}
