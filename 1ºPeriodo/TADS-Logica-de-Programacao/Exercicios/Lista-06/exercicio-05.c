#include <stdio.h>

int main() {
    int num;

    do
    {
        printf("Entre com um numero entre 0 e 10: \n");
        scanf("%d", &num);
    } while (num >= 0 && num <=10);

    printf("\nNumero fora do intervalo!\n");

    return 0;
}
