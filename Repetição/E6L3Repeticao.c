/*
6) O Triângulo de Floyd é um triângulo formado com números naturais. O triângulo começa em 1 no canto
superior esquerdo e continua a escrever a sequência de números naturais de tal modo que cada linha contém
um número a mais do que a linha anterior. Escreva um programa que leia um número inteiro positivo n e em
seguida imprima n linhas do Triângulo de Floyd.
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
