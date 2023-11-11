/*
2) Gerar um vetor com 20 elementos aleat�rios entre 5 e 20. Ordenar o vetor. Percorrer o vetor ordenado e
mostrar os pares e a soma dos pares de cada um dos valores armazenados. Caso existam elementos
repetidos, considerar apenas um deles.
Neste exerc�cio, al�m de utilizar a fun��o gerarVetorInteiroComFaixa(), a fun��o mostrarVetorInteiro() e a
fun��o ordenarVetorInteiro(), criar tamb�m fun��o mostrarPares(), que recebe um n�mero e mostra todos os
n�meros pares positivos at� esse n�mero, e fun��o somarPares(), que recebe um n�mero e retorna a soma
de todos os n�meros pares positivos at� esse n�mero. As fun��es mostrarPares() e somarPares()devem ser
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
