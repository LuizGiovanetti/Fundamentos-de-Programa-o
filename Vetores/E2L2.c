/*
2) Gerar um vetor com 20 elementos aleatórios entre 5 e 20. Ordenar o vetor. Percorrer o vetor ordenado e
mostrar os pares e a soma dos pares de cada um dos valores armazenados. Caso existam elementos
repetidos, considerar apenas um deles.
Neste exercício, além de utilizar a função gerarVetorInteiroComFaixa(), a função mostrarVetorInteiro() e a
função ordenarVetorInteiro(), criar também função mostrarPares(), que recebe um número e mostra todos os
números pares positivos até esse número, e função somarPares(), que recebe um número e retorna a soma
de todos os números pares positivos até esse número. As funções mostrarPares() e somarPares()devem ser
criadas ema biblioteca chamada "pares.h".
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresS.h"
#include "pares.h"
int main()
{
    char opcao;
    int vet[20], i;
    do
    {
        printf("===>VETOR ORIGINAL<===\n");
        gerarVetorInteiroComFaixa(vet, 20, 5, 20);
        mostrarVetorInteiro(vet, 20);
        printf("\n===>VETOR ORDENADO<===\n");
        ordenarVetor(vet, 20);
        mostrarVetorInteiro(vet, 20);
        printf("\n===>PARES<===\n");
        for(i=0; i<20; i++)
        {
            if(vet[i]==vet[i+1])
            {
                //nao faz nd
            }
            else
            {
                printf("%d => ", vet[i]);
                mostrarPares(vet[i]);
                printf(" => soma = %d.\n", somarPares(vet[i]));
            }
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
    }while(opcao=='s' || opcao=='S');
    return 0;
}
