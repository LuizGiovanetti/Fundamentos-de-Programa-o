/*
6) O Tri�ngulo de Floyd � um tri�ngulo formado com n�meros naturais. O tri�ngulo come�a em 1 no canto
superior esquerdo e continua a escrever a sequ�ncia de n�meros naturais de tal modo que cada linha cont�m
um n�mero a mais do que a linha anterior. Escreva um programa que leia um n�mero inteiro positivo n e em
seguida imprima n linhas do Tri�ngulo de Floyd.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int num, i, j, cont;

    do
    {
        do
        {
            printf("Informe um numero inteiro positivo: ");
            scanf("%d", &num);
            if(num<=0)
            {
                printf("Valor invalido.\n");
            }
        }while(num<=0);
        cont=0;
        for(i=1; i<=num; i++) //controla as linhas
        {
            for(j=1; j<=i; j++)//controla o que vai ser impresso nas linhas
            {
                cont++;
                printf("%.2d ", cont);
            }
            printf("\n");
        }


        printf("\n Deseja repetir o programa? [S/s]\n");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao=='s' || opcao=='S');
    return 0;
}
