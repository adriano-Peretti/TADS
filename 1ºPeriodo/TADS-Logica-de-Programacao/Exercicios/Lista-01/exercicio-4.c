#include <stdio.h>

int main(){

// Variaveis
    float kmPercorrido, litrosConsumidos, consumo;

// Entrada
    printf("Calculadora de consumo \n" "-----------------\n" "Digite a distancia percorrida: ");
    scanf("%f", &kmPercorrido);
    printf("Digite quantos litros foram gastos: ");
    scanf("%f", &litrosConsumidos);

// Processamento
    consumo = kmPercorrido / litrosConsumidos;

// Saida
    printf("Seu veiculo tem um consumo medio de: %f", consumo);

    return 0;


}
