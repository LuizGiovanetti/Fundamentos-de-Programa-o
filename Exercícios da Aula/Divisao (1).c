#include <stdio.h>

int main()
{
    int num1, num2, res, resto;
    float divisao;
    printf("Informe o valor do numero 1:");
    scanf("%d", &num1);
    printf("Informe o valor do numero 2:");
    scanf("%d", &num2);

    res = num1 + num2;
    printf("O valor da some eh: %d + %d = %d\n", num1, num2, res);
    res = num1 - num2;
    printf("O valor da subtracao eh: %d - %d = %d\n", num1, num2, res);
    res = num1 * num2;
    printf("O valor da multiplicacao eh: %d * %d = %d\n", num1, num2, res);

    divisao = (float)num1 / num2;
    //float na frente pra conversão de inteiro para float

    printf("O valor da divisao eh: %d / %d = %.1f\n", num1, num2, divisao);

    resto = num1%num2;
    printf("Resto da divisao de %d por %d = %d\n", num1, num2, resto);


    return 0;
}
