#include <stdio.h>

int main() {
    int num = 1, soma = 0;
    
    while (num <= 100) {
        if (num % 2 != 0) {
            soma += num;
        }
        num++;
    }
    
    printf("A soma dos numeros impares entre 0 e 100 eh: %d\n", soma);
    
    return 0;
}