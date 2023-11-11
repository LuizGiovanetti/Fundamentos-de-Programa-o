/*
2) Ler uma string e copiar o valor decimal do c�digo ASCII de cada elemento da string para um vetor. Mostrar
o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Percorrer o vetor ordenado contando, sem repeti��o, os
n�meros pares e os n�meros �mpares e mostrar a soma total desses valores. Criar um vetor chamado vPares
e um vetor chamado vImpares e copiar, sem repeti��o, os elementos pares e �mpares para os respectivos
vetores. Mostrar os dois vetores. Criar uma matriz chamada mPares e uma matriz chamada mImpares, sendo
que mPares dever� conter na primeira coluna todos os elementos pares do vetor e na segunda coluna a
quantidade de ocorr�ncias de cada elemento par no vetor e na matriz mImpares fazer o mesmo com os
elementos �mpares. Mostrar as duas matrizes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "revisao.h"

int main()
{
    char opcao, texto[51];
    int vet[50], i, vetPar[50], vetImpar[50], j, k, s, matrizPar[50][2], matrizImpar[50][2], cont;
    do
    {
        fflush(stdin);
        printf("Informe um texto de ate 50 caracteres:\n");
        gets(texto);
        i=0;
        while(texto[i]!='\0')
        {
            i++;
        }
        vet[i];
        printf("\n===>VETOR<===\n");
        transformarASCCI(texto, i, vet);
        mostrarVetorInt(vet, i);
        printf("\n\n===>VETOR ORDENADO<===\n");
        ordenarVetor(vet, i);
        mostrarVetorInt(vet, i);
        printf("\n");
        k=0;
        s=0;
        for(j=0; j<i; j++)
        {
            if(vet[j]!=vet[j+1])
            {
                if(vet[j]%2==0)
                {
                    vetPar[k]=vet[j];
                    k++;
                }
                else
                {
                    vetImpar[s]=vet[j];
                    s++;
                }
            }
        }
        printf("\nNumeros pares, sem repeticao: %d\n", k);
        printf("Numeros impares, sem repeticao: %d\n", s);
        printf("\n===>VETOR PAR<===\n");
        mostrarVetorInt(vetPar, k);
        printf("\n\n===>VETOR IMPAR<===\n");
        mostrarVetorInt(vetImpar, s);
        cont=0;
        k=0;
        s=0;
        for(j=0; j<i; j++)
        {
            if(vet[j]!=vet[j+1])
            {
                if(vet[j]%2==0)
                {
                    matrizPar[k][0]=vet[j];
                    matrizPar[k][1]=ocorreNoVetor(vet, i, vet[j]);
                    k++;
                }
                else
                {
                    matrizImpar[s][0]=vet[j];
                    matrizImpar[s][1]=ocorreNoVetor(vet, i, vet[j]);
                    s++;
                }
            }
        }
        printf("\n\n===>MATRIZ PARES<===\n");
        printf("PARES   OCORRENCIA\n");
        mostrarMatrizInt(k, 2, matrizPar);
        printf("\n===>MATRIZ IMPARES<===\n");
        printf("IMPARES OCORRENCIA\n");
        mostrarMatrizInt(s, 2, matrizImpar);
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
