 /*
4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por esta
aplicação e o período do investimento; e retorne o valor da aplicação ao final do período de investimento. Obs.:
A cada 12 meses o percentual de rendimento deve ser aumentado em 0,25%. Validar o valor da aplicação para
que seja positivo. Validar o percentual de rendimento para que seja um número entre 0 e 1. Validar o período
para que seja um valor positivo.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int meses, i;
    float aplic, rend;

    do
    {
        do
        {
            printf("Informe o valor da aplicacao: ");
            scanf("%f", &aplic);
            if(aplic<=0)
            {
                printf("Valor invalido.\n");
            }

        }while(aplic<=0);

        do
        {
            printf("Informe o percentual de rendimento mensal(0 a 1): ");
            scanf("%f", &rend);
            if(rend<=0 || rend>=1)
            {
                printf("Valor invalido.\n");
            }

        }while(rend<=0 || rend>=1);

        do
        {
            printf("Informe o periodo(em meses): ");
            scanf("%d", &meses);
            if(meses<=0)
            {
                printf("Valor invalido.\n");
            }

        }while(meses<=0);

        printf("Mes \t Porcentagem de rendimento \t Valor aplicacao\n");
        for(i=1; i<=meses; i++) //numero de linhas
        {

            if(i%12==0)
            {
                rend=rend+0.25;
            }

            aplic = aplic + aplic * rend;
            printf("%.2d\t\t    %.2f \t\t R$ %.2f\n", i, rend, aplic);

        }




        printf("\n Deseja repetir o programa? [S/s]\n");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao=='s' || opcao=='S');
    return 0;
}
