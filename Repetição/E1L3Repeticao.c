/*
1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que atende
essa condição. Esse número representa a quantidade de números primos a serem mostrados.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int qntde, contPrimos, i, j, divisores;

    do //repeticao do programa
    {
        do //validar a entrada de numeros primos que serao exibidos
        {

            printf("Informe a quantidade de numeros primos que deseja exibir: ");
            scanf("%d", &qntde);
            if(qntde<0)
            {
                printf("Valor invalido.\n");
            }
        }while(qntde<=0);

        contPrimos=0;
        i=2;
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
            }
            i++;
        }while(contPrimos<qntde);


        printf("\nDeseja repetir o programa [S/s]: ");
        fflush(stdin);
        scanf("%c", &opcao);

    }while(opcao == 'S' || opcao == 's');
    return 0;
}
