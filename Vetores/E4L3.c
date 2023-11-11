/*
4) Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e
entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a
interseção dos valores dos vetores anteriores. Utilizar o conceito matemático de intersecção entre conjuntos.
Mostrar os três vetores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresT.h"
int main()
{
    char opcao;
    int vetA[10], vetB[10], vetC[10], i, j, k;
    do
    {
        printf("===>Vetor A[10]<===\n");
        gerarVetorSemRepeticao(vetA, 10, 15);
        mostrarVetorInteiro(vetA, 10);

        printf("\n===>Vetor B[10]<===\n");
        gerarVetorSemRepeticao(vetB, 10, 10);
        mostrarVetorInteiro(vetB, 10);
        k=0;
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                if(vetA[i]==vetB[j])
                {
                    vetC[k]=vetA[i];
                    k++;
                }
            }
        }
        printf("\n===>INTERSECAO[%d]<===\n", k);
        mostrarVetorInteiro(vetC, k);
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
