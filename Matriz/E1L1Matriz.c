/*
1) Criar um arquivo "matrizes.h". Dentro desse arquivo incluir função para:
a) Gerar uma matriz de elementos inteiros randômicos entre 1 e limite com o protótipo:
void gerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int
limite)
b) Mostrar uma matriz com o protótipo:
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
Usar as funções para:
a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.
b) Somar todos os elementos da matriz.
c) Somar os elementos da diagonal principal da matriz.
d) Somar os elementos da diagonal secundária da matriz.
e) Mostrar a matriz e as somas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main()
{
    char opcao;
    int matriz[3][3];
    do
    {
        gerarMatrizInteiroDe1aLimite(3, 3, matriz, 10);
        printf("===>MATRIZ<===\n");
        imprimirMatrizInt(3, 3, matriz);
        printf("A soma dos elementos da matriz eh: %d\n", somarMatrizInt(3, 3, matriz));
        printf("A soma dos elementos da matriz na diagonal principal eh: %d\n", somaDiagonalPrincipalInt(3, 3, matriz));
        printf("A soma dos elementos da matriz na diagonal secundaria eh: %d\n", somaDiagonalSecIntMatrizQuad(3, 3, matriz));
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
