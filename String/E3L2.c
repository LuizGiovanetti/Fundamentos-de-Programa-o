/*
3) Criar uma função para concatenar duas strings.
Exemplo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int main()
{
    char opcao, string1[51], string2[51];
    do
    {
        fflush(stdin);
        printf("Informe a primeira string, de ate 50 caracteres: ");
        gets(string1);
        printf("Informe a segunda string, de ate 50 caracteres: ");
        gets(string2);
        juntarString(string1, string2);
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

