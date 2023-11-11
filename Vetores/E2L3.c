/*
2) (Desafio) Implemente uma função que recebe por parâmetro um vetor numérico e retorna o número de
maior ocorrência no vetor.
Use a função para verificar o número que ocorre com maior frequência em um vetor de 10 posições com
valores aleatórios entre 1 e 5. Se ocorrer de mais de um elemento ter a maior frequência, considere apenas o
que ocorre primeiro no vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresT.h"

int main()
{
    char opcao;
    int vet[10];
    do
    {
        printf("===>Vetor[10]<===\n");
        gerarVetorInteiroDe0aLimite(vet, 10, 5);
        mostrarVetorInteiro(vet, 10);
        printf("\nA moda do vetor: %d\n", moda(vet, 10));
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
