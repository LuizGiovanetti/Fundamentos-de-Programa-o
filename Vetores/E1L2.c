/*
1) Criar uma fun��o para gerar valores aleat�rios em um vetor com o seguinte prot�tipo:
void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int
limSup);
Sendo que limInf e limSup s�o os limites da faixa de valores sorteados.
Dica: Use vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf; para
gerar valores aleat�rios entre os limites informados.
Usando a fun��o gerarVetorInteiroComFaixa(), gerar aleatoriamente um vetor com 20 elementos entre 5 e 20.
Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar os divisores e a quantidade de divisores de
cada um dos valores armazenados. Caso existam elementos repetidos, considerar apenas um deles.
Aten��o: Neste exerc�cio, al�m de utilizar a fun��o gerarVetorInteiroComFaixa(), usar tamb�m a fun��o
mostrarVetorInteiro(), para exibir os elementos de um vetor, a fun��o ordenarVetorInteiro(), para ordenar os
elementos de um vetor, e as fun��es mostrarDivisores() e qtdeDivisores(), que criadas em listas de exerc�cios
anteriores e est�o armazenadas em uma biblioteca chamada "divisores.h".
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresS.h"
int main()
{
    char opcao;
    int vet[20], i, j;
    do
    {
        printf("===>VETOR ORIGINAL<===\n");
        gerarVetorInteiroComFaixa(vet, 20, 5, 20);
        mostrarVetorInteiro(vet, 20);
        printf("\n===>VETOR ORDENADO<===\n");
        ordenarVetor(vet, 20);
        mostrarVetorInteiro(vet, 20);
        printf("\n===>DIVISORES<===\n");
        for(i=0; i<20; i++)
        {
            if(vet[i]==vet[i+1])
            {
                //nao faz nd
            }
            else
            {
                printf("%d => ", vet[i]);
                mostrarDivisores(vet[i]);
                printf(" => %d divisores.\n", divisores(vet[i]));
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
