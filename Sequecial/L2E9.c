/*
9) Ler um n�mero inteiro com at� 3 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Na sequ�ncia calcular e mostrar o inverso do n�mero.
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    int num, dig1, dig2, dig3, inverso;

    //Entrada de dados
    printf("Informe um numero inteiro de ate tres digitos: ");
    scanf("%d", &num);

    //Processamentos
    dig1 = num / 100;
    dig2 = num % 100 / 10;
    dig3 = num % 10;
    inverso = dig3 * 100 + dig2 * 10 + dig1;

    //Sa�da
    printf("%d eh o primeiro digito\n", dig1);
    printf("%d eh o segundo digito\n", dig2);
    printf("%d eh o terceiro digito\n", dig3);
    printf("O inverso do numero eh: %d", inverso);

    return 0;
}
