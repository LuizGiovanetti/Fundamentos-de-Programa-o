/*
2) Fazer uma função que verifica se uma substring pertence a uma string.
Exemplo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int main()
{
    char opcao, string[101], subString[101];
    do
    {
        fflush(stdin);
        printf("Informe uma string de ate 100 caracteres:\n");
        gets(string);
        printf("Informe uma subString: ");
        gets(subString);
        verificarSubString(string, subString);
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
