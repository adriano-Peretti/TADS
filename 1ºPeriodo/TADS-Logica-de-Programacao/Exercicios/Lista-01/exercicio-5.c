#include <stdio.h>

int main(){

// Variaveis
    float comprimento, largura, valorMetro, custoTotal;

// Entrada
    printf("Calculadora de reforma \n" "---------------\n" "Digite o comprimento do local: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do local: ");
    scanf("%f", &largura);
    printf("Digite o valor do metro quadrado do carpet: ");
    scanf("%f", &valorMetro);

// Processamento
    custoTotal = (comprimento * largura) * valorMetro;

// Saida
    printf("O custo total da sua reforma será  de %.2f", custoTotal);

}
