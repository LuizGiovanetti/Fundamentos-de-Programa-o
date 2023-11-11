/*
1) Gerar aleatoriamente um vetor com 5 elementos inteiros entre 1 a 9. Mostrar a tabuada de cada um dos
elementos armazenados no vetor. A tabuada deve ser mostrada por uma função, que recebe como parâmetro
o número e apresenta a respectiva tabuada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresT.h"

int main()
{
    char opcao;
    int vet[5];
    do
    {
        printf("===>VETOR<===\n");
        gerarVetorInteiroDe1aLimite(vet, 5, 9);
        mostrarVetorInteiro(vet, 5);
        ordenarVetor(vet, 5);
        printf("\n");
        tabuada(vet, 5);
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
