/*
5) Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e
entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a união
dos valores dos vetores anteriores. Utilizar o conceito matemático de união entre conjuntos. Mostrar os três
vetores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresT.h"

int main()
{
    char opcao;
    int vetA[10], vetB[10], vetU[20], i, j, k;
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
            vetU[k]=vetA[i];
            k++;
        }
        for(i=0; i<10; i++)
        {
            if(ocorreNoVetor(vetA, 20, vetB[i])==0)
            {
                vetU[k]=vetB[i];
                k++;
            }
        }
        printf("\n===>Uniao[%d]<===\n", k);
        mostrarVetorInteiro(vetU, k);
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
