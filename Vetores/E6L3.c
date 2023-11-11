/*
6) (Desafio) Gerar um vetor A (pode conter valores repetidos) com 15 valores aleatórios entre 1 e 20 e fazer
as seguintes funcionalidades:
 Ordenar o vetor e mostrar o vetor.
 Gerar um vetor B que contenha apenas os valores que se repetem no vetor A e mostrar o vetor.
 Gerar um vetor C que contenha apenas os valores que não se repetem no vetor A e mostrar o vetor.
Dicas:
Para verificar se os números se repetem ou não no vetor, poderá ser criada uma função com o protótipo int
existeNoVetor(int vet[], int tamanho, int valor) que recebe como parâmetros o vetor, o
tamanho do vetor e um valor e retorna o número de vezes que esse valor ocorre no vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresT.h"
int main()
{
    char opcao;
    int vetA[15], vetB[15], vetC[15], i, j, k, z;
    do
    {
        printf("===>VETOR<===\n");
        gerarVetorInteiroDe1aLimite(vetA, 15, 20);
        ordenarVetor(vetA, 15);
        mostrarVetorInteiro(vetA, 15);
        j=0;
        k=0;
        for(i=0; i<15; i++)
        {
            if(vetA[i]==vetA[i+1])
            {
                vetB[j]=vetA[i];
                if(vetB[j]==vetB[j-1])
                {
                    vetB[j]=vetB[j-1];
                    j--;
                }
                j++;
            }
            else
            {
                if(vetA[i]==vetA[i-1])
                {
                    //n faz nd
                }
                else
                {
                    vetC[k]=vetA[i];
                    k++;
                }
            }
        }
        printf("\n===>REPETIDOS<===\n");
        mostrarVetorInteiro(vetB, j);
        printf("\n===>NAO REPETIDOS<===\n");
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
