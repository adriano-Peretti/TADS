#include <stdio.h>
#include <math.h>

int main(){
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if( num >= 10 && num <= 100){
        printf("\nNumero esta entre 10 e 100 - Intervalo permitido \n");
    } else {
        printf("\nNumero fora do intervalor permitido! \n");
        }

    return 0;
}
