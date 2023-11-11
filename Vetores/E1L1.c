/*
1) Criar um arquivo de cabeçalho chamado vetores.h com:
- Função para gerar valores aleatórios inteiros que variem entre 0 e limite em um vetor;
- Função para mostrar um vetor de números inteiros.
Utilizar essas funções para:
a) Gerar números inteiros em um vetor em que a quantidade de elementos e o valor do limite sejam
informados pelo usuário. Validar as entradas para que sejam informados valores inteiros positivos.
b) Mostrar o vetor de números inteiros.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a média dos números pares que estão armazenados no vetor. Validar para que não seja realizada
divisão por zero no cálculo da média.
O programa permanecerá em execução até que seja escolhida a opção sair.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresP.h"

int main()
{
    char opcao;
    int tam, lim;
    do
    {
        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d", &tam);
            if(tam<=0)
            {
                printf("Tamanho invalido.\n");
            }
        }while(tam<=0);
        int vet[tam];
        do
        {
            printf("Informe o limite do valor para o vetor(positivo): ");
            scanf("%d", &lim);
            if(lim<=0)
            {
                printf("Limite invalido.\n");
            }
        }while(lim<=0);
        printf("===>VETOR GERADO<===\n");
        gerarVetorInteiroDe1aLimite(vet, tam, lim);
        mostrarVetorInteiro(vet, tam);
        printf("\n");
        printf("O menor valor eh %d, e esta no indice %d.\n",encontrarMenorNum(vet, tam), encontrarOIndice(vet, encontrarMenorNum(vet, tam), tam));
        mediaPares(vet, tam);
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
