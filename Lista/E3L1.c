/*
3) Ler uma string e armazenar em um vetor o valor decimal ASCII apenas dos caracteres que fazem parte do
alfabeto. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Em uma segunda string, armazenar os
caracteres ordenados do vetor e mostrar a string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "revisao.h"

int main()
{
    char opcao, texto[51], string2[51];
    int i, vetASCCI[51], cont;
    do
    {
        do
        {
            fflush(stdin);
            printf("Informe um texto de ate 50 caracteres:\n");
            gets(texto);
            i=0;
            cont=0;
            while(texto[i]!='\0')
            {
                if(texto[i]==' ')
                {
                    cont++;
                }
                i++;
            }
            if(cont==i)
            {
                printf("Nao eh possivel um texto apenas de espaco.\n");
            }
        }while(i==cont);
        printf("\nString 1: ");
        puts(texto);
        i--;
        vetASCCI[i];
        transformarASCCISemEsp(texto, i, vetASCCI);
        printf("\n===>VETOR LETRAS<===\n");
        mostrarVetorInt(vetASCCI, i);
        printf("\n\n===>VETOR ORDENADO<===\n");
        ordenarVetor(vetASCCI, i);
        mostrarVetorInt(vetASCCI, i);
        tranformarNumEmChar(vetASCCI, i, string2);
        printf("\n\nString 2: ");
        puts(string2);
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
