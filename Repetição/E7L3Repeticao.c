/*
7) Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com que a saída do
programa seja mostrada como no exemplo a seguir:
*/
#include <stdio.h>

int main()
{
    char opcao;
    int i, j;
    long long int fatorial;

    do
    {

        for(i=1; i<=12; i++) //conta linhas
        {

            printf("%.2d ! => ", i);
            fatorial = 1; //fatorial tem q ser iniciado aqui, pq o valor dele smp sera alterado conforme as linhas
            // tem q ser um, pois qnd multiplicado a seguir n alterar o valor do primeiro produto

            for(j=i; j<=i; j--) //a multiplicacao dos fatoriais
            {

                if(j==0)
                {
                    break;
                }

                printf("%.2d ", j);
                fatorial = fatorial * j;

            }

            printf("= %lld\n", fatorial);

        }

        printf("Deseja continuar no programa? [S/s]");
        fflush(stdin);
        scanf("%c", &opcao);

    }while(opcao=='s' || opcao=='S');

    return 0;
}
