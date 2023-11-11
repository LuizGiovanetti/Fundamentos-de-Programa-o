/*
4) Gerar uma matriz 10x2 com valores de 1 a 6. A primeira coluna da matriz se refere a base e a segunda
coluna ao expoente. Criar uma função que calcule a potência, gerar um vetor que armazena o resultado da
potência obtida a partir dos valores da matriz.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main()
{
    char opcao;
    int matriz[10][2], vetP[10], i;
    do
    {
        printf("===>MATRIZ<===\n");
        gerarMatrizInteiroDe1aLimite(10, 2, matriz, 6);
        imprimirMatrizInt(10, 2, matriz);
        printf("===>CALCULO DE POTENCIA<===\n");
        printf("BASE\t EXPOENTE\t RESULTADO\n");
        for(i=0; i<10; i++)
        {
            printf("%d\t %d\t\t %d\n", matriz[i][0], matriz[i][1], potencia(matriz[i][0], matriz[i][1]));
        }
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
