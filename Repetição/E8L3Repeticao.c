/*
8) Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para
os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o
usuário deverá fornecer um número positivo entre 2 e 100. Ao final, mostrar a maior quantidade de divisores.
A seguir um exemplo da execução, utilizá-lo como modelo para o programa implementado:
*/
#include <stdio.h>

int main()
{
    char opcao;
    int num, i, j, divisores, maior;

    do
    {
        do
        {
            printf("Informe um numero entre 2 e 100: ");
            scanf("%d", &num);
            if(num<2 || num>100)
            {
                printf("Valor invalido.\n");
            }
        }while(num<2 || num>100);
        maior=0;
        for(i=1; i<=11; i++)//controla as linhas
        {
            divisores=0;
            printf("%.2d ==> ", num);
            for(j=1; j<=num; j++)//conta os divisores do numero
            {
                if(num%j==0)
                {
                 printf("%d ", j);
                 divisores++;
                }
            }
            printf(" ==> %d divisores\n", divisores);
             num++;
             if(divisores>maior)
             {
                 maior=divisores;
             }
        }
        printf("\nA maior quantidade de divisores eh: %d\n", maior);
        printf("\nDeseja repetir o programa [S/s]: \n");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao=='S' || opcao=='s');


    return 0;
}
