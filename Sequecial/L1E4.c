/*
4) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtra��o do primeiro pelo segundo;
c) A multiplica��o entre eles;
d) A divis�o inteira do primeiro pelo segundo;
e) A divis�o float do primeiro pelo segundo;
f) O resto da divis�o do primeiro pelo segundo.
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    int num1, num2, res, resto;
    float divisao;

    //Entrada de dados
    printf("Informe o valor do numero 1:");
    scanf("%d", &num1);
    printf("Informe o valor do numero 2:");
    scanf("%d", &num2);

    //Processamentos / Sa�da
    res = num1 + num2;
    printf("O valor da some eh: %d + %d = %d\n", num1, num2, res);
    res = num1 - num2;
    printf("O valor da subtracao eh: %d - %d = %d\n", num1, num2, res);
    res = num1 * num2;
    printf("O valor da multiplicacao eh: %d * %d = %d\n", num1, num2, res);

    divisao = (float)num1 / num2;
    //float na frente pra convers�o de inteiro para float

    printf("O valor da divisao eh: %d / %d = %.1f\n", num1, num2, divisao);
    resto = num1%num2;
    printf("Resto da divisao de %d por %d = %d\n", num1, num2, resto);

    return 0;
}
