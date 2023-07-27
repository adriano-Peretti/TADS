#include <stdio.h>

int main(){
    float a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B: ");
    scanf("%f", &b);

    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    if((a + b > c) && (a + c > b) && (b + c > a)) {
        if( a == b && b == c){
            printf("\nTriangulo equilatero!\n");
        } else if (a == b || a == c || b == c){
                printf("\nTriangulo Isoceles\n");
            } else {
            printf("Triangulo escaleno!");
        }
    } else {
        printf("Nao forma um triangulo!");
    }
}

