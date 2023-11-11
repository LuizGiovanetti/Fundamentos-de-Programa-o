/*
1) O número 3.025 possui a seguinte característica: 30 + 25 = 55 e 552 = 3 025. Faça um programa que escreva
todos os números com quatro algarismos que possuem a citada característica.
*/
#include <stdio.h>

int main()
{printf("7^1");
    char opcao;
    int quad, divisores, soma, resto, i;

    do //Repeticao do programa
    {
        for(i=1000; i<=9999; i++)
        {
            soma=0;
            resto= i%100;
            divisores=i/100;
            soma=divisores+resto;
            quad=soma*soma;
            if(i==quad)
            {
                printf("%d\t", i);
            }
        }
        printf("\n");
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

