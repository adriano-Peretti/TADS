#include <stdio.h>

int main() {

    int tempo_seg, horas, minutos, segundos;

    printf("Digite a duração do evento em segundos: ");
    scanf("%d", &tempo_seg);

    horas = tempo_seg / 3600;
    minutos = (tempo_seg % 3600) / 60;
    segundos = tempo_seg %60;

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}
