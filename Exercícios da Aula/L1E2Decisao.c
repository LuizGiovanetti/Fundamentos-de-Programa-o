/*
2) Escreva um programa que leia um n�mero e verifique se ele � maior, menor ou igual a 10.
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Informe um numero(inteiro): ");
    scanf("%d", &num);

    if( num > 10)
    {
        printf("Numero informado maior que 10.");
    }
    else if( num < 10)
    {
        printf("Numero informado menor que o 10.");
    }
    else
    {
        printf("Numero informado eh igual 10.");
    }
    return 0;
}
