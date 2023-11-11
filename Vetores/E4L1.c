/*
4) Gerar valores inteiros aleatórios nos vetores A e B, sendo A com n elementos entre 1 e 20 e B com n
elementos entre 1 e 15. O usuário informa a quantidade de elementos dos vetores, ou seja, o seu tamanho.
Validar para que seja informado um valor positivo o tamanho do vetor. Mostrar os elementos dos vetores A e
B. Construir um vetor C, em que cada elemento de C será 1 quando o elemento de A for maior que o
respectivo elemento em B; será 0 quando o elemento de A for igual ao respectivo elemento em B; e será -1
quando o elemento de A for menor que o respectivo elemento em B. Mostrar os elementos do vetor C.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresP.h"

int main()
{
    char opcao;
    int tamA, tamB, tamC, i, j;
    do
    {
        do
        {
            printf("Informe o tamanho do vetor A: ");
            scanf("%d", &tamA);
            if(tamA<=0)
            {
                printf("Tamanho invalido.\n");
            }
        }while(tamA<=0);
        do
        {
            printf("Informe o tamanho do vetor B: ");
            scanf("%d", &tamB);
            if(tamB<=0)
            {
                printf("Tamanho invalido.\n");
            }
        }while(tamB<=0);
        if(tamA>tamB)
        {
            tamC=tamA;
        }
        else
        {
            tamC=tamB;
        }
        int vetA[tamA], vetB[tamB], vetC[tamC];
        printf("===>VETOR A<===\n");
        gerarVetorInteiroDe1aLimite(vetA, tamA, 20);
        mostrarVetorInteiro(vetA, tamA);

        printf("\n===>VETOR B<===\n");
        gerarVetorInteiroDe1aLimite(vetB, tamB, 15);
        mostrarVetorInteiro(vetB, tamB);
        j=0;
        for(i=0; i<tamC; i++)
        {
            if(vetA[i]>vetB[i])
            {
                vetC[j]=1;
                j++;
            }
            else if(vetA[i]<vetB[i])
            {
                vetC[j]=-1;
                j++;
            }
            else
            {
                vetC[j]=0;
                j++;
            }
        }
        printf("\n===>VETOR C<===\n");
        mostrarVetorInteiro(vetC, tamC);
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
