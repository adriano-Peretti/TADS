#include <stdio.h>

int main() {
    int idade, totalEspectadores = 0, totalVotos = 0, totalRecomendacoes =0;
    char gostou, recomendacao;

    printf("Pesquisa de satisfacao de espectadores\n\n");

    while (1) {
        printf("Digite a idade do espectador (0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break;
        }

        totalEspectadores++;

        printf("Voce gostou do filme? [S/N]: ");
        scanf(" %c", &gostou);
        gostou = toupper(gostou);

        if (gostou == 'S') {
            totalVotos++;
        }

        printf("Voce recomendaria o filme para colegas? [S/N]: ");
        scanf(" %c", &recomendacao);

        recomendacao = toupper(recomendacao);

        if(recomendacao == 'S') {
            totalRecomendacoes++;
        }
    }

    printf("\nTotal de Espectadores: %d\n", totalEspectadores);
    printf("Total de Votos: %d\n", totalVotos);
    printf("Total de Recomendacoes: %d\n", totalRecomendacoes);

    return 0;
    
}