#include <stdio.h>

int main() {
    int i=1, idade, menorIdade = 999, qtHomens, qtMulheres;
    char genero, olhos, cabelos;

    do
    {
        printf("Qual a genero do entrevistado %d [F/M]: ", i);
        scanf(" %c", &genero);
        printf("Qual a cor dos olhos do entrevistado %d [A-Azuis, V-Verdes, P-Pretos, C-Castanhos]: ", i);
        scanf(" %c", &olhos);
        printf("Qual a cor do cabelo do entrevistado %d [L-Louros, C-Castanhos, P-Pretos]: ", i);
        scanf(" %c", &cabelos);
        printf("Qual a idade do entrevistado %d:", i);
        scanf("%d", &idade);

        genero = toupper(genero);
        olhos = toupper(olhos);
        cabelos = toupper(cabelos);

        if(idade < menorIdade){
            menorIdade = idade;
        }

        if(genero == 'M' && idade >= 16 && idade <= 24 && olhos == 'A' && cabelos == 'C') {
            qtHomens++;
        }
        
        if(genero == 'F' && idade <= 40 && olhos == 'P' && cabelos == 'P') {
            qtMulheres++;
        }

        i++;

    } while (i <= 50);
    
    printf("\nA menor idade do grupo eh: %d", menorIdade);
    printf("\nA quantidade de HOMENS entre 16 e 24 anos com olhos AZUIS e cabelos CASTANHOS eh: %d", qtHomens);
    printf("\nA quantidade de MULHERES com idade menor que 40 anos com olhor e cabelos PRETOS eh: %d", qtMulheres);

    return 0;
}