#include <stdio.h>

int main () {

    int inicial, final;

    printf("Entre com o numero inicial da contagem: ");
    scanf("%d", &inicial);
    printf("Entre com o numero final da contagem: ");
    scanf("%d", &final);

    while (inicial <= final)
    {
        printf("%d \n", inicial);
        inicial++;
    }
    
    return 0;
}