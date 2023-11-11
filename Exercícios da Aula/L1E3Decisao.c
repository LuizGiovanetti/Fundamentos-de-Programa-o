/*
3) Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20 ou fora
do fora do intervalo entre 5 e 20.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero (inteiro): ");
    scanf("%d", &num);

    if( num>=5 && num<=20)
    {
        printf("Numero informado esta no intervalo de 5 a 20.");
    }
    else
    {
        printf("Numero informado nao esta no intervalo de 5 a 20.");
    }

    return 0;
}
