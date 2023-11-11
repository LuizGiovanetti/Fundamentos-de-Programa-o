/*
2) Faça um programa para mostrar os primos e calcular a quantidade deles para os números compreendidos
entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um
número positivo.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int num, i, contPrimos, j, contDiv, k;

    do
    {
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);
            if(num<=0)
            {
                    printf("Numero invalido.\n");
            }
        }while(num<=0);
        for(i=num; i<=num+10; i++)
        {
            contPrimos=0;
            printf("%.2d ==> ", i);
            for(j=1; j<=i; j++)//calcula se o numero e primo
            {
                contDiv=0;
                for(k=1; k<=j; k++)//contar os divisores de cada num
                {
                    if(j%k==0)
                    {
                        contDiv++;
                    }
                }
                if(contDiv==2)
                {
                    printf("%d ", j);
                    contPrimos++;
                }
            }
            printf(" ==> %d primo(s).\n", contPrimos);
        }
        do
        {
            printf("Deseja continuar o programa?[S/s] [N/n] ");
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
