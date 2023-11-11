/*
5) Na biblioteca "vetores.h" criar uma função com o protótipo void
gerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo,
int limPositivo) para gerar números positivos e negativos em um intervalo de valores. Use
vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;
Usando essa função:
Gerar um vetor A de inteiros com 100 elementos, com valores entre -50 e +50. Armazenar em um vetor B
somente os valores positivos do vetor A.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresS.h"
int main()
{
    char opcao;
    int vetA[100], vetB[100], i, j;
    do
    {
        printf("===>VETOR A<===\n");
        gerarVetorPositivoNegativo(vetA, 100, -50, 50);
        mostrarVetorInteiro(vetA, 100);
        j=0;
        for(i=0; i<100; i++)
        {
            if(vetA[i]>0)
            {
                vetB[j]=vetA[i];
                j++;
            }
        }
        printf("\n===>VETOR B<===\n");
        mostrarVetorInteiro(vetB, j);
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
    }while(opcao=='s' || opcao=='S');
    return 0;
}
