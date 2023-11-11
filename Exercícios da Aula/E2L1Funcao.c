/*
2) Fazer duas fun��es: uma para calcular o fatorial de um n�mero e a outra para mostrar o fatorial de um
n�mero. Ambas as fun��es devem ser implementadas em um arquivo de cabe�alho chamado "fatorial.h".
Elaborar um programa que use essas fun��es para:
a) Calcular e mostrar o fatorial dos n�meros entre 1 e 8.
b) Calcular e mostrar o fatorial de um valor informado pelo usu�rio. Continuar a leitura enquanto forem
informados valores positivos.
*/
#include <stdio.h>
#include "fatorial.h"

int main()
{
    char opcao, escolha;
    int i, num;
    do
    {
        printf("A - Fatorial do 1 ao 8\nB - Fatorial de um numero positivo\n");
        printf("Escolha uma opcao: ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);
        switch(escolha)
        {
        case 'a':
        case 'A':
            for(i=1; i<=8; i++)
            {
                mostrarFatorial(i);
            }
            break;
        case 'b':
        case 'B':
            do
            {
                printf("Informe um numero: ");
                scanf("%d", &num);
                if(num>0)
                {
                    mostrarFatorial(num);
                }
            }while(num>0);
            break;
        default:
            printf("Opcao invalida.\n");
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
