#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brasil.1252");
    char resp;

    printf("Programa para advinhar animais\n");
    printf("eh um mamifero? (S/N)");
    scanf("%c", &resp);

    resp = toupper(resp);

    if ( resp == 'S'){
        fflush(stdin);
        printf("eh um quadrupede? (S/N)");
        scanf("%c", &resp);
        if ( resp == 'S'){
            fflush(stdin);
            printf("eh carnivoro? (S/N)");
            scanf("%c", &resp);
            if( resp == 'S'){
                printf("O animal escolhido eh um LEAO!");
            } else if ( resp == 'N'){
                printf("O animal escolhido eh um CAVALO!");
            }
        } else if ( resp == 'N'){
            fflush(stdin);
            printf("eh bipedi? (S/N)");
            scanf("%c", &resp);
            if(resp == 'S'){
                fflush(stdin);
                printf("eh onivoro? (S/N)");
                scanf("%c", &resp);
                if( resp == 'S'){
                    printf("O animal escolhido eh o HOMEM!");
                } else if( resp == 'N'){
                    printf("O animal escolhido eh um MACACO!");
                }
            } else if( resp == 'N'){
                fflush(stdin);
                printf("eh Voador? (S/N)");
                scanf("%c", &resp);
                if( resp == 'S'){
                    printf("O animal escolhido eh um MORCEGO!");
                } else if (resp == 'N')
                {
                    fflush(stdin);
                    printf("eh aquatico? ");
                    scanf("%c", &resp);
                    if( resp == 'S'){
                        printf("O animal escolhido eh uma BALEIA!");
                    } else if (resp == 'N')
                    {
                        printf("O animal nao esta na lista!");
                    }else
                    {
                        printf("Resposta INVALIDA!");
                    }
                } else {
                    printf("Resposta INVALIDA!");
                }
            }
        } else {printf("Resposta Invalida!");}
    } else if ( resp == 'N'){
            fflush(stdin);
            printf("eh Ave? (S/N)");
            scanf("%c", &resp);
            if ( resp == 'S'){
                fflush(stdin);
                printf("eh nao-voadora? (S/N)");
                scanf("%c", &resp);
                if ( resp == 'S'){
                    fflush(stdin);
                    printf("eh tropical? (S/N)");
                    scanf("%c", &resp);
                    if (resp == 'S'){
                        printf("O animal escolhido eh a AVESTRUZ!");
                    } else if (resp == 'N')
                    {
                        printf("O animal escolhido eh o PINGUIM!");
                    } else {
                        printf("Resposta INVALIDA");
                    }
                } else if (resp == 'N')
                {
                    fflush(stdin);
                    printf("eh nadadora? (S/N)");
                    scanf("%c", &resp);
                    if (resp == 'S'){
                        printf("O animal escolhido eh o PATO!");
                    } else if (resp == 'N')
                    {
                        fflush(stdin);
                        printf("eh de rapina? ");
                        scanf("%c", &resp);
                        if(resp == 'S'){
                            printf("O animal escolhido eh a AGUIA!");
                        } else if (resp == 'N')
                        {
                            printf("O anima nao esta na lista!");
                        }else
                        {
                            printf("Resposta INVALIDA");
                        }
                    } else {
                        printf("Resposta INVALIDA!");
                    }
                } else {
                    printf("Resposta INVALIDA!");
                }
            } else if (resp == 'N')
            {
                fflush(stdin);
                printf("eh um reptil? (S/N)");
                scanf("%c", &resp);
                if ( resp == 'S'){
                    fflush(stdin);
                    printf("Tem casco? (S/N)");
                    scanf("%c", &resp);
                    if ( resp == 'S'){
                        printf("O animal escolhido eh a TARTARUGA!");
                    } else if (resp == 'N')
                    {
                            fflush(stdin);
                            printf("eh carnivoro? (S/N)");
                            scanf("%c", &resp);
                            if(resp == 'S'){
                                printf("O animal escolhido eh o CROCODILO!");
                            } else if (resp == 'N')
                            {
                                fflush(stdin);
                                printf("eh sem patas? (S/N)");
                                scanf("%c", &resp);
                                if( resp == 'S'){
                                    printf("O anima escolhido eh a COBRA!");
                                } else if (resp == 'N')
                                {
                                    printf("O animal nao esta na lista!");
                                } else {
                                    printf("Resposta INVALIDA!");
                                }
                            } else {
                                printf("Resposta INVALIDA!");
                            }
                    } else {
                                printf("Resposta INVALIDA!");
                    }
                } else if (resp == 'N')
                {
                    printf("O animal nao esta na lista!");
                } else {
                    printf("Resposta INVALIDA!");
                }
            } else {
                printf("Resposta INVALIDA!");
            }
    } else{
        printf("Resposta INVALIDA!");
    }

    return 0;
}
