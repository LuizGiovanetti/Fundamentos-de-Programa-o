/*
3) Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. Em seguida, preencher com 0 as
diagonais principal e secundária e mostrar a matriz.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main()
{
    char opcao;
    int n=10, matriz[10][10], i, j;
    do
    {
        printf("===>MATRIZ ORIGINAL<===\n");
        gerarMatrizInteiroDe1aLimite(n, n, matriz, 1);
        imprimirMatrizInt(n, n, matriz);
        printf("===>MATRIZ ATUAL<===\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    matriz[i][j]=0;
                }
                if(i+j==n-1)
                {
                    matriz[i][j]=0;
                }
            }
        }
        imprimirMatrizInt(n, n, matriz);
        do
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
            {
                printf("Caracter invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
    }while(opcao=='S' || opcao=='s');
    return 0;
}
