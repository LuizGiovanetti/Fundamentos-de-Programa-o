/*
5) Gerar uma matriz 3x3 com números randômicos no intervalo de 1 a 100 e a seguir escrever a localização
(linha e a coluna) do maior valor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main()
{
    char opcao;
    int n=3, matriz[n][n], i, j, maiorEl=0, linha=0, coluna=0;
    do
    {
        printf("===>MATRIZ<===\n");
        gerarMatrizInteiroDe1aLimite(n, n, matriz, 100);
        imprimirMatrizInt(n, n, matriz);
        maiorEl=matriz[0][0];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(maiorEl<matriz[i][j])
                {
                    maiorEl=matriz[i][j];
                    linha=i;
                    coluna=j;
                }
            }
        }
        printf("O maior elemento da matriz eh %d e se encontra na linha %d e coluna %d.\n", maiorEl, linha+1, coluna+1);
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

