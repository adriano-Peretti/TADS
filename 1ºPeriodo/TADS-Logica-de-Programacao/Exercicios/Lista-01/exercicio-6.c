#include <stdio.h>

int main() {

// Variaveis
    float tamanho, bitsPSec, tempoDownload;

// Entrada
    printf("Calculadora de tempo de download \n" "\n----------------------\n" "Digite o tamanho do arquivo em bits: ");
    scanf("%f", &tamanho);
    printf("Digite a velocidade da sua conexao em bits/sec: ");
    scanf("%f", &bitsPSec);

// Processamento
    tempoDownload = tamanho / bitsPSec;

// Saida
    printf("Seu download ira demorar %.0f segundos", tempoDownload);

return 0;

}
