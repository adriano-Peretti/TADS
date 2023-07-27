#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    float num, positivo, negativo;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    positivo = sqrt(num);
    negativo = pow(num, 3);

    if (num > 0){
        printf("\nO numero eh POSITIVO e sua raiz quadrada eh %.2f\n", positivo);
    } else {
        printf("\nO numero eh NEGATIVO e seu cubo eh %.2f\n", negativo);
        }

    return 0;
}
