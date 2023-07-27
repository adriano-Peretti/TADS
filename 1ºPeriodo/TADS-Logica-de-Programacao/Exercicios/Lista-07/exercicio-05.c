#include <stdio.h>

int main() {
    int i, inicial, final, qtPositivo = 0, qtPares = 0, qtImpar = 0, qtDiv3e4 = 0, somaPositivo = 0, somaPares = 0, somaImpares = 0, somaDiv3e4 = 0;

    printf("Digite o valor inicial da faixa: ");
    scanf("%d", &inicial);
    
    printf("Digite o valor final da faixa: ");
    scanf("%d", &final);

    for ( i = inicial; i <= final; i++)
    {
        if (i > 0)
        {
            qtPositivo++;
            somaPositivo += i;
        }
        
        if (i % 2 == 0)
        {
            qtPares++;
            somaPares += i;

            if (i % 3 == 0 && i % 4 == 0)
            {
                qtDiv3e4++;
                somaDiv3e4 += i;
            }            
        }
        
        if (i % 2 != 0)
        {
            qtImpar++;
            somaImpares += i;

            // if (i % 3 == 0 && i % 4 == 0)
            // {
            //     qtDiv3e4++;
            //     somaDiv3e4 += i;
            // }
        }      
   
    }

    float mediaPositivo = (float)somaPositivo / qtPositivo;
    float mediaPares = (float)somaPares / qtPares;
    float mediaImpares = (float)somaImpares / qtImpar;
    float mediaDiv3e4 = (float)somaDiv3e4 / qtDiv3e4;

    printf("\nQuantidade de numeros inteiros e positivos: %d\n", qtPositivo);
    printf("\nMedia dos numeros inteiros e positivos: %.2f\n", mediaPositivo);
    
    printf("\nQuantidade de numeros pares: %d\n", qtPares);
    printf("\nMedia dos numeros pares: %.2f\n", mediaPares);
    
    printf("\nQuantidade de numeros impares: %d\n", qtImpar);
    printf("\nMedia dos numeros impares: %.2f\n", mediaImpares);
    
    printf("\nQuantidade de numeros pares e divisiveis por 3 e 4: %d\n", qtDiv3e4);
    printf("\nMedia dos numeros pares e divisiveis por 3 e 4: %.2f\n", mediaDiv3e4);
    
    return 0;
}