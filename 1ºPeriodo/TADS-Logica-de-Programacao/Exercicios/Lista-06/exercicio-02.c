#include <stdio.h>

int main () {
    int i=0, fiboAtual=1, fiboAnterior= 0, fiboProximo;

    while (i < 15)
    {
        printf("%d ", fiboAtual);
        fiboProximo = fiboAtual + fiboAnterior;
        fiboAnterior = fiboAtual;
        fiboAtual = fiboProximo;
        i++;
    }
    
    return 0;
}