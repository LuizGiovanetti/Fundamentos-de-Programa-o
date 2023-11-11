/*
5) Gerar aleatoriamente valores 0 ou 1 um vetor com 100 elementos. Mostrar o vetor. Em seguida contar quantos
0s sucessivos o vetor contém, armazenar essa quantidade em outro vetor e mostrá-lo. Qual seria o tamanho
mínimo e máximo do vetor que armazena as quantidades? Criá-lo para o tamanho máximo possível.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresP.h"

int main()
{
    char opcao;
    int vetA[100], vetB[100], i, j, cont;
    do
    {
        printf("===>VETOR A<===\n");
        gerarVetorInteiroDe0aLimite(vetA, 100, 1);
        mostrarVetorInteiro(vetA, 100);
        j=0;
        cont=0;
        printf("\n===>VETOR B<===\n");
        for(i=0; i<100; i++)
        {
            if(vetA[i]==0)
            {
                cont++;
            }
            else
            {
                if(cont>=1)
                {
                    vetB[j]=cont;
                    j++;
                }
                cont=0;
            }
        }
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
