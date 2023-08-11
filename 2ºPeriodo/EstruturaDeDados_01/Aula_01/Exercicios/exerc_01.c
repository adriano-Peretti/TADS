#include <stdio.h>

int soma(int x, int y){
    int soma = x+y;
    return(soma);
}

int multiplicacao(int x, int y){
    int mult = x*y;
    return(mult);
}

int subtracao(int x, int y){
    int sub = x-y;
    return(sub);
}

int divisao(int x, int y){
    if(y == 0){
       printf("Divisao por 0");
       return(-1);
    }else{
    int div = x/y;
    return(div);
    }

}

int calcula(int x, int y, char op){

    switch (op)
    {
    case '+':
        int sum = soma(x, y);
        return(sum);
        break;

    case '-':
        int sub = subtracao(x, y);
        return(sub);
        break;

    case '*':
        int mult = multiplicacao(x, y);
        return(mult);
        break;

    case '/':
        int div = divisao(x, y);
        return(div);
        break;

    default:
        printf("Operacao invalida!");
        break;
    }

}

int main(){
    int x, y;
    char op;
    printf("Digite a operacao que deseja realizar: ");
    scanf("%c", &op);
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite a segundo numero: ");
    scanf("%d", &y);

    int resultado = calcula(x, y, op);

    printf("%d \n", resultado);

    return 0;
}

