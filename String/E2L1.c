/*
2) Ler um texto com até 50 caracteres e imprimir o texto na vertical com uma palavra por linha.
Exemplo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char opcao, texto[101];
    int i;
    do
    {
        fflush(stdin);
        printf("Informe um texto de ate 100 caracteres: \n");
        gets(texto);
        printf("===>TEXTO NA VERTICAL<===\n");
        i=0;
        while(texto[i]!='\0')
        {
            if(texto[i]==' ')
            {
                printf("\n");
            }
            else
            {
                printf("%c", texto[i]);
            }
            i++;
        }
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

