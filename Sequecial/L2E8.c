/*
8) Ler um n�mero inteiro com at� 5 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Tamb�m calcular e mostrar a soma dos d�gitos.
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    int num, dig1,dig2, dig3, dig4, dig5, soma;

    //Entrada de dados
    printf("Informe um numero inteiro de ate cinco digitos: ");
    scanf("%d", &num);

    //Processamentos
    dig1 = num / 10000;
    dig2 = num % 10000 / 1000;
    dig3 = num % 1000 / 100;
    dig4 = num % 100 / 10;
    dig5 = num % 10;
    soma = dig1 + dig2 + dig3 + dig4 + dig5;

    //Sa�da
    printf("%d eh o primeiro digito\n", dig1);
    printf("%d eh o segundo digito\n", dig2);
    printf("%d eh o terceiro digito\n", dig3);
    printf("%d eh o quarto digito\n", dig4);
    printf("%d eh o quinto digito\n", dig5);
    printf("A soma de todos digitos eh: %d", soma);

    return 0;
}
