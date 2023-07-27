#include <stdio.h>

int main() {
    int termo = -2, razao = -2, contador = 1;
    
    printf("Progressão Geométrica:\n");
    
    while (contador <= 10) {
        printf("%d ", termo);
        termo *= razao;
        contador++;
    }
    
    return 0;
}