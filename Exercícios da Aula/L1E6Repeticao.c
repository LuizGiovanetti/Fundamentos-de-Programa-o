/*
6) Na matem�tica, o fatorial de um n�mero � o produto de todos os inteiros positivos menores ou iguais ao
n�mero. Exemplo: Fatorial de 5 � 1 * 2 * 3 * 4 * 5 = 120. Elabore um programa que calcule e mostre o fatorial
de um n�mero informado pelo usu�rio. Validar esse n�mero para que esteja em um intervalo de 1 a 20.
Lembrando que fatorial de 1 = 1 e fatorial de 0 = 1.
Obs.: Use uma vari�vel de tipo de dado long long int (%lld) para armazenar o fatorial.
*/
#include <stdio.h>

int main()
{
    int num, i;
    long long int fatorial=1;

    do
    {
        printf("Informe um numero no intervalo de 1 a 20 para calcular o fatorial: ");
        scanf("%d", &num);
        if(num <= 0 || num >= 20)
        {
            printf("Valor invalido.\n");
        }
    }while(num <= 0 || num >= 20);

    printf("%d! = ", num);

    for(i=num; i>=2; i--)
    {
        printf("%d * ", i);
        fatorial = fatorial * i;
    }

    printf("1 = %lld", fatorial);

    return 0;
}
