/*
6) Fazer um programa que retira todos os caracteres repetidos de uma string
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char opcao, texto[50];
    do
    {
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
