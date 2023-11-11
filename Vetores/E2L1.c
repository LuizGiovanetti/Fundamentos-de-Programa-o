/*
2) Gerar elementos inteiros e aleatórios entre 1 e 25 em um vetor de tamanho 15. Gerar outros dois vetores,
um contendo os valores pares e outro os ímpares e mostrar os três vetores.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresP.h"
int main()
{
    char opcao;
    int vet[15], vetPar[15], vetImpar[15], i, j, k;
    do
    {
        gerarVetorInteiroDe1aLimite(vet, 15, 25);
        printf("===>VETOR<===\n");
        mostrarVetorInteiro(vet, 15);
        k=0;
        j=0;
        for(i=0; i<15; i++)
        {
            if(vet[i]%2==0)
            {
                vetPar[j]=vet[i];
                j++;
            }
            else
            {
                vetImpar[k]=vet[i];
                k++;
            }
        }
        printf("\n===>VETOR DE PARES<===\n");
        mostrarVetorInteiro(vetPar, j);
        printf("\n===>VETOR DE IMPARES<===\n");
        mostrarVetorInteiro(vetImpar, k);
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
