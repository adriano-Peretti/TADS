#include <stdio.h>

int main() {

    int num;

    printf("Digite o numero que deseja saber se eh multiplo de 3: ");
    scanf("%d", &num);

    if (num % 3 == 0){
        printf("\nO numero eh MULTIPLO de 3!\n");
    } else {
        printf("\nO numero NAO eh MULTIPLO de 3!\n");
    }

        return 0;
}
