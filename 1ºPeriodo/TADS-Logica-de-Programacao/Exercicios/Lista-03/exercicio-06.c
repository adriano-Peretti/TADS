#include <stdio.h>

int main(){
    float salario, salarioFinal;

    printf("Digite seu salario atual: \n");
    scanf("%f", &salario);

    if(salario >= 0.00 && salario <= 990.00){
        salarioFinal = salario * 1.2;
        printf("\nSeu salario final eh %.2f\n", salarioFinal);
    } else if( salario >= 990,01 && salario <= 1480.00){
            salarioFinal = salario * 1.1;
            printf("\nSeu salario final eh %.2f\n", salarioFinal);
        } else if (salario >= 1480.01 && salario <= 2000.00){
                salarioFinal = salario * 1.05;
                printf("\nSeu salario final eh %.2f\n", salarioFinal);
            } else {
                    printf("\nSem aumento, seu salario continua o mesmo!\n");
            }

    return 0;
}
