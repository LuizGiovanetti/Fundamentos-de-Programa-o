/*
4) Fazer um programa que leia um número inteiro de até três dígitos (considere que será fornecido um
número de até 3 dígitos), calcule e imprima a soma dos seus dígitos.
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    int valor, digito1, digito2, digito3, soma;

    //Entrada de dados
    printf("Informe um numero inteiro com ate tres digitos: ");
    scanf("%d", &valor);

    //Processamentos
    digito1 = valor/100;
    digito2 = valor % 100/10;
    digito3 = valor % 10;
    soma = digito1 + digito2 + digito3;

    //Saída
    printf("%d = %d + %d + %d = %d", valor, digito1, digito2, digito3, soma);

    return 0;
}
