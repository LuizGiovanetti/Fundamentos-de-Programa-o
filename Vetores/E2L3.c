/*
2) (Desafio) Implemente uma fun��o que recebe por par�metro um vetor num�rico e retorna o n�mero de
maior ocorr�ncia no vetor.
Use a fun��o para verificar o n�mero que ocorre com maior frequ�ncia em um vetor de 10 posi��es com
valores aleat�rios entre 1 e 5. Se ocorrer de mais de um elemento ter a maior frequ�ncia, considere apenas o
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
