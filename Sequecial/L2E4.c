/*
4) Fazer um programa que leia um n�mero inteiro de at� tr�s d�gitos (considere que ser� fornecido um
n�mero de at� 3 d�gitos), calcule e imprima a soma dos seus d�gitos.
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    int valor, digito1, digito2, digito3, soma;

    //Entrada de dados
    printf("Informe um numero inteiro com ate tres digitos: ");
    scanf("%d", &valor);

    //Processamentos
    digito1 = valor/100;
    digito2 = valor % 100/10;
    digito3 = valor % 10;
    soma = digito1 + digito2 + digito3;

    //Sa�da
    printf("%d = %d + %d + %d = %d", valor, digito1, digito2, digito3, soma);

    return 0;
}
