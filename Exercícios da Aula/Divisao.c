#include <stdio.h>

int main()
{
    int num1, num2;
    float divisao;
    printf("Informe o valor do numero 1:");
    scanf("%d", &num1);
    printf("Informe o valor do numero 2:");
    scanf("%d", &num2);

    divisao = (float)num1 / num2;
    //float na frente pra conversão de inteiro para float

    printf("O valor da divisao eh: %.1f", divisao);

    return 0;
}
