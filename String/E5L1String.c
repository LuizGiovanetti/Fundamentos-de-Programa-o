/*
5) Escreva um programa que conta e exibe, separadamente, a quantidade de caracteres alfabéticos e de
dígitos numéricos existentes em um texto de até 100 caracteres fornecido pelo usuário
*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char texto[101], opcao;
    int i, contAlfa, contDig;
    do
    {

        fflush(stdin);
        printf("Informe um texto de ate 100 caracteres: \n");
        gets(texto);

        contDig=0, contAlfa=0, i=0;
        while(texto[i]!='\0')
        {
            if(texto[i]>='A' && texto[i]<='Z' || texto[i]>='a' && texto[i]<='z')
            {
                contAlfa++;
            }
            else if(texto[i]>='0' && texto[i]<='9')
            {
                contDig++;
            }
            i++;
        }

        if(contAlfa>0)
        {
            printf("Existem %d caracteres alfabeticos no texto.\n", contAlfa);
        }
        if(contDig>0)
        {
            printf("Existem %d digitos no texto.\n", contDig);
        }
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
