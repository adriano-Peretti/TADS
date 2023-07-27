#include <stdio.h>

int main(){
    int aluno, qtAlunos=0, i, contConceitoE=0, contConceitoD=0, contConceitoC=0, contConceitoB=0, contConceitoA=0;
    float mediaFinal, somaConceitoE=0, somaConceitoD=0, somaConceitoC=0, somaConceitoB=0, somaConceitoA=0;

    for (i = 1; i <= 40; i++)
    {
        printf("Digite o codigo do aluno: ");
        scanf("%d", &aluno);
        printf("Digite a nota do aluno: ");
        scanf("%f", &mediaFinal);

        if(mediaFinal >= 0 && mediaFinal < 3){
            printf("Conceito E\n");
            contConceitoE++;
            somaConceitoE += mediaFinal;
        }else if (mediaFinal >= 3 && mediaFinal < 5)
        {
            printf("Conceito D\n");
            contConceitoD++;
            somaConceitoD += mediaFinal;
        }else if (mediaFinal >= 5 && mediaFinal < 7)
        {
            printf("Conceito C\n");
            contConceitoC++;
            somaConceitoC += mediaFinal;
        }else if (mediaFinal >= 7 && mediaFinal <= 8.9)
        {
            printf("Conceito B\n");
            contConceitoB++;
            somaConceitoB += mediaFinal;
        }else if (mediaFinal >= 9 && mediaFinal <= 10)
        {
            printf("Conceito A\n");
            contConceitoA++;
            somaConceitoA += mediaFinal;
        }else{
            printf("Nota invalida!\n");
        }
        qtAlunos++;
    }

    float mediaConceitoE = (float)somaConceitoE / contConceitoE;
    float mediaConceitoD = (float)somaConceitoD / contConceitoD;
    float mediaConceitoC = (float)somaConceitoC / contConceitoC;
    float mediaConceitoB = (float)somaConceitoB / contConceitoB;
    float mediaConceitoA = (float)somaConceitoA / contConceitoA;

    printf("A quantidade de alunos eh: %d\n", qtAlunos);
    printf("A media de nota do conceito E eh: %.2f\n", mediaConceitoE);
    printf("A media de nota do conceito D eh: %.2f\n", mediaConceitoD);
    printf("A media de nota do conceito C eh: %.2f\n", mediaConceitoC);
    printf("A media de nota do conceito B eh: %.2f\n", mediaConceitoB);
    printf("A media de nota do conceito A eh: %.2f\n", mediaConceitoA);

    return 0;
}
