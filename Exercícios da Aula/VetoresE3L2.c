/*
3) Na biblioteca "vetores.h" criar função:
a) Com o protótipo void gerarVetorFloat0a1(float vetor[], int tam) para gerar
valores float aleatórios entre 0 e 1 em um vetor. Use vetor[i] = (float)(rand()) /
RAND_MAX; para gerar valores aleatórios entre 0 e 1.
b) Com o protótipo void gerarVetorFloat0a100(float vetor[], int tam) para gerar
valores float aleatórios entre 0 e 100 em um vetor. Use vetor[i] = ((float)(rand()) /
RAND_MAX)*100; para gerar valores aleatórios entre 0 e 100.
c) Com o protótipo void mostrarVetorFloat(float vetor[], int tam) para mostrar
os elementos de um vetor float.
d) Com o protótipo float somarVetorFloat(float vetor[], int tam) para somar os
elementos de um vetor float.
Usando essas funções:
a) Gerar um vetor float com 10 elementos aleatórios entre 0 e 1, exibir o vetor e mostrar a soma de todos os
elementos do vetor.
b) Gerar um vetor float com 50 elementos aleatórios entre 0 e 100 e exibir o vetor. Criar outros dois vetores
numéricos do tipo float, em um deles armazenar os valores menores que 50 e em outro os maiores que 50.
Mostrar os vetores gerados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresAula.h"

int main()
{
    float vetA[10], vetB[50];
    char opcao;
    do
    {
        printf("\t===>VETOR A<===\n");
        gerarVetorFloatDe0a1(vetA, 10);
        mostrarVetorFloat(vetA, 10);
        printf("\n");
        somaVetorFloat(vetA, 10);
        printf("\n\t===>VETOR B<===\n");
        gerarVetorFloatDe0a100(vetB, 50);
        mostrarVetorFloat(vetB, 50);
        float vetC[tamanhoVetoresMaior50(vetB, 50)];
        printf("\n\t===>VETOR C<===\n");
        separarVetorMaior50(vetC, tamanhoVetoresMaior50(vetB, 50));
        printf("\n\t===>VETOR D<===\n");
        separarVetorMenor50(vetB, 50);
        printf("\n");
        do
        {
            printf("\tDeseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
            {
                printf("\tCaracter invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
    }while(opcao=='s' || opcao=='S');
    return 0;
}
