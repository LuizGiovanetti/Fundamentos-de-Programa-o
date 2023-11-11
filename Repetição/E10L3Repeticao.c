/*
10) Ler dois n�meros que representam os limites de um intervalo. Validar a entrada, o usu�rio dever� fornecer
valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os n�meros primos desse intervalo, com cinco n�meros por linha.
b) Calcular a m�dia dos m�ltiplos de 3 e de 7 desse intervalo. Validar para que n�o seja realizada uma divis�o
por zero.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int numMenor, numMaior, i, j, contPrimos, divisores;

    do
    {
        do
        {
            printf("Informe um valor para o limite inferior do intervalo: ");
            scanf("%d", &numMenor);
            if(0>=numMenor)
            {
                printf("Valor invalido.\n");
            }

        }while(0>=numMenor);

        do
        {
            printf("Informe um valor para o limite superior do intervalo: ");
            scanf("%d", &numMaior);
            if(numMenor>=numMaior)
            {
                printf("Valor invalido.\n");
            }

        }while(numMenor>=numMaior);

        i=2;
        contPrimos=0;
        do
        {
            divisores=0;
            for(j=1; j<=i; j++) //conta os divisores
            {
                if(i%j==0)
                {
                    divisores++;
                }
            }

            if(divisores==2)
            {
                printf("%d\t", i);
                contPrimos++;

                if(contPrimos%5==0)
                {
                    printf("\n");
                }
            }

            i++;

        }while(i<numMaior);

        do
        {
            printf("Deseja repetir o programa? [S/n] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='S' && opcao !='s' && opcao !='n' && opcao != 'N')
            {
                printf("Caracter invalido.\n");
            }
        }while(opcao!='S' && opcao !='s' && opcao !='n' && opcao != 'N');

    }while(opcao=='S' || opcao=='s');

    return 0;
}
