#include <stdio.h>

int main()
{
    char opcao;
    int dig, num, contDig, soma, i, aux;
    do
    {
        do
        {
            printf("Informe um digito positivo: ");
            scanf("%d", &dig);
            if(dig<=0)
            {
                printf("Valor invalido.\n");
            }
        }while(dig<=0);
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
            if(num<=0)
            {
                printf("Valor invalido.\n");
            }
                aux=1;
                soma=0;
                contDig=0;
                while(aux!=0)
                {
                    soma = soma + (aux%10);
                    aux = aux/10;
                    if(soma==num)
                    {
                        contDig++;
                    }
                }
                printf("o numero tem %d digitos igual a %d\n", contDig, dig);
        }while(num!=0);
        do //Validacao para o usuario usar apenas S ou N
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
            {
                printf("Caracter Invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
    }while(opcao=='s' || opcao=='S');
    return 0;
}
