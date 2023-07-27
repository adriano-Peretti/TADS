#include <stdio.h>

int main() {
    int total = 0, atletico = 0, coritiba = 0, foz = 0;
    float porcAtletico, porcCoxa, porcFoz;
    char resp;

    do {
        printf("Para qual time voce torce A- Atletico, C- Coritiba, F- Foz, S- Sair: ");
        scanf(" %c", &resp);

        resp = toupper(resp);

        switch (resp) {
        case 'A':
            atletico++;
            total++;
            break;
        case 'C':
            coritiba++;
            total++;
            break;
        case 'F':
            foz++;
            total++;
            break;
        case 'S':
            printf("\nPrograma encerrado.\n");
            break;
        default:
            printf("\n Opcao invalida. Tente novamente.\n");
            break;
        }

    } while (resp != 'S');

    porcAtletico = (((float)atletico / total) * 100);
    porcCoxa = (((float)coritiba / total) * 100);
    porcFoz = (((float)foz / total) * 100);

    printf("\nResultados:");
    printf("\nTotal de torcedores entrevistados: %d", total);
    printf("\nTotal de torcedores do Atletico: %d", atletico);
    printf("\nTotal de torcedores do Coritiba: %d", coritiba);
    printf("\nTotal de torcedores do Foz: %d", foz);
    printf("\nPorcentagem de torcedores do Atletico: %.2f%%", porcAtletico);
    printf("\nPorcentagem de torcedores do Coritiba: %.2f%%", porcCoxa);
    printf("\nPorcentagem de torcedores do Foz: %.2f%%", porcFoz);

    return 0;

}
