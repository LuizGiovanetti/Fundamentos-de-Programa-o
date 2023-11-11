/*
9) Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número.
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    int num, dig1, dig2, dig3, inverso;

    //Entrada de dados
    printf("Informe um numero inteiro de ate tres digitos: ");
    scanf("%d", &num);

    //Processamentos
    dig1 = num / 100;
    dig2 = num % 100 / 10;
    dig3 = num % 10;
    inverso = dig3 * 100 + dig2 * 10 + dig1;

    //Saída
    printf("%d eh o primeiro digito\n", dig1);
    printf("%d eh o segundo digito\n", dig2);
    printf("%d eh o terceiro digito\n", dig3);
    printf("O inverso do numero eh: %d", inverso);

    return 0;
}
