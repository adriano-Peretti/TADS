#include <stdio.h>
#include <math.h>

int main() {
   int num, milhar, centena, dezena, unidade, soma;

    printf("Digite um numero inteiro de quatro algarismos: ");
    scanf("%d", &num);

    milhar = num / 1000;
    centena = (num % 1000) / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;

    soma = milhar + centena + dezena + unidade;

    printf("A soma dos digitos do numero eh: %d", soma);

    return 0;
}
