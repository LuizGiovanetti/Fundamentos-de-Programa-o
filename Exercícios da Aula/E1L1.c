#include <stdio.h>
#include "minhasFuncoes.h"

int main()
{
    char opcao;
    do
    {
        do
        {
            printf("A - Verificar se eh um numero primo.\n B - Primos entre 1 e 100.\n C - Media dos numeros 200 e 100.\n")
            printf("Informe qual deseja: ");
            fflush(stdin);
            scanf("%c", &opcao);
            switch()
            {
                case: 'a'
                case: 'A'
                break;
                case: 'b'
                case: 'B'
                break;
                case: 'c'
                case: 'C'
                break;
                default:
                    printf("Caracter invalido.\n");
                    break
            }
        }while();

        do
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='S' && opcao!='s' && opcao!='n' && opcao!='N')
            {
                printf("Caracter invalido.\n");
            }
        }while(opcao!='S' && opcao!='s' && opcao!='n' && opcao!='N');
    }while(opcao=='s' || opcao=='S');
    return 0;
}
