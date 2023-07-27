#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0){
        printf("O numero eh POSITIVO!");
    } else if (num < 0){
        printf("O numero eh NEGATIVO!");
    } else {
        printf("O numero eh NULO!");
    }

    return 0;

}
