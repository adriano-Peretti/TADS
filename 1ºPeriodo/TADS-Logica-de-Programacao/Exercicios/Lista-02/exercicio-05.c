#include <stdio.h>
#include <math.h>

int main() {
int num, quadrado, cubo;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

quadrado = pow(num, 2);
cubo = pow(num, 3);

printf("numero\t quadrado\t cubo\n");
printf("%d\t %d\t\t %d", num, quadrado, cubo);

return 0;
}
