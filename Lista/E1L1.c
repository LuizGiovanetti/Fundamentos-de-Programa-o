/*
1) Gerar um vetor que não contenha números repetidos, com 10 elementos aleatórios entre 0 e 50. Utilizar
uma função para verificar se cada elemento do vetor é ou não um número primo. Essa função retorna 0 para
indicar que o número é primo ou 1 para indicar que o número não é primo. Criar uma matriz 10x3 onde a
primeira coluna vai armazenar o índice do vetor, a segunda coluna vai armazenar o elemento do vetor e a
terceira coluna vai armazenar 0 se o elemento do vetor for um número primo ou 1 caso o elemento do vetor
não seja um número primo. Fazer a média dos números primos encontrados no vetor. A saída do programa
deve ser apresentada como no exemplo a seguir
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "revisao.h"

int main()
{
    char opcao;
    int vet[10], matriz[10][3], i, cont, soma;
    float media;
    do
    {
        printf("===>VETOR<===\n");
        gerarVetorIntde1aLimiteSemRep(vet, 10, 49);
        mostrarVetorInt(vet, 10);
        printf("\nINDICE\t NUMERO\t PRIMO\n");
        soma=0;
        cont=0;
        for(i=0; i<10; i++)
        {
            matriz[i][0] = i;
            matriz[i][1]=vet[i];
            matriz[i][2]=verificarPrimo(vet[i]);
            if(matriz[i][2]==vet[i])
            {
                soma = soma + matriz[i][2];
                cont++;
                matriz[i][2]=0;

            }

            printf("%d\t %d\t %d\n", matriz[i][0], matriz[i][1], matriz[i][2]);
        }
        media = (float)soma / cont;
        if(cont==0)
        {
            printf("Nao tem numeros primos no vetor.\n");
        }
        else
        {
            printf("A media dos primos eh: %.2f\n", media);
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
