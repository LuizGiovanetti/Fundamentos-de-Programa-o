/*
2) Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. Em seguida criar dois vetores que
contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os vetores criados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main()
{
    char opcao;
    int n=5, matriz[n][n], vetL[n], vetC[n];
    do
    {
        iniciarVet0(vetC, n);
        iniciarVet0(vetL, n);
        gerarMatrizInteiroDe1aLimite(n, n, matriz, 5);
        printf("===>MATRIZ<===\n");
        imprimirMatrizInt(n, n, matriz);
        printf("===>SOMA LINHAS<===\n");
        somaLinhasMatrizInt(n, n, matriz, vetL);
        imprimirVetor(vetL, n);
        printf("\n===>SOMA COLUNAS<===\n");
        somaColunasMatrizInt(n, n, matriz, vetC);
        imprimirVetor(vetC, n);
        do
        {
            printf("\nDeseja continuar o programa? [S/s] [N/n] ");
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
