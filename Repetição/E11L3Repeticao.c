/*
11) Sendo n um n�mero positivo, apresentar as n primeiras ra�zes quadradas exatas. A fun��o para obter a
raiz quadrada � a sqrt() e est� na biblioteca math.h.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    char opcao;
    int n, i;

    do
    {
        do
        {
            printf("Informe valor de n, sendo n um numero positivo: ");
            scanf("%d", &n);
        }while(n<=0);

        n=n*n;  //n*n pois eh a raiz dele
        for(i=1; i<=n; i++)
        {


        }

        do
        {
            printf("Deseja continuar o programa? ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
            {
                printf("Caracter invalido!\n");
            }

        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');

    }while(opcao=='S' || opcao=='s');

    return 0;
}






