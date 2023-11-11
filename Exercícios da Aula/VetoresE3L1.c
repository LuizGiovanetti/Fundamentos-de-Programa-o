/*
3) Gerar elementos inteiros aleatórios entre 1 e 10 em um vetor A de tamanho 10 e criar um vetor B de
mesma dimensão e com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro elemento
de A será o último de B, o segundo elemento de A será o penúltimo de B e assim sucessivamente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresAula.h"

int main()
{
    char opcao;
    int vetA[10], vetB[10], i;
    do
    {
        gerarVetorInteiroDe0aLimite(vetA, 10, 10);
        printf("===>VETOR A<===\n");
        mostrarVetorInteiro(vetA, 10);
        printf("\n===>VETOR B<===\n");
        for(i=9; i>=0; i--)
        {
            vetB[9-i]=vetA[i];
        }
        mostrarVetorInteiro(vetB, 10);
        printf("\n");
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
