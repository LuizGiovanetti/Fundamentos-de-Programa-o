/*
5) Fazer um programa que mostra os caracteres repetidos de uma string.
Exemplo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char opcao, texto[51], aux;
    int i;
    do
    {
        do
        {
            fflush(stdin);
            printf("Escreva um texto de ate 50 caracteres: ");
            gets(texto);
            i=0;
            while(texto[i]!='\0')
            {
                i++;
            }
            if(i>51)
            {
                printf("O texto excede 50 caracteres.\n");
            }
        }while(i>51);
        printf("\n===>LETRAS REPETIDAS<===\n");
        puts(texto);

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
