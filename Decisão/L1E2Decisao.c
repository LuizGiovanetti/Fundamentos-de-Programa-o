/*
2) Faça um programa que apresente o menu a seguir e permita ao usuário escolher a opção desejada,
receba os dados necessários para executar a operação e mostre o resultado.
Menu de opções:
1 – Mostra os números em ordem crescente
2 – Mostra os números em ordem decrescente
3 - Mostra os números que são múltiplos de 2
Digite a opção desejada:
*/
#include <stdio.h>

int main()
{
    int opcao, a, b, c;

        printf("Informe o valor de a: ");
        scanf("%d", &a);
        printf("Informe o valor de b: ");
        scanf("%d", &b);
        printf("Informe o valor de c: ");
        scanf("%d", &c);

        printf ("\nMenu de opcoes: \n");
        printf ("(1) Mostra os numeros em ordem crescente.\n");
        printf ("(2) Mostra os numeros em ordem decrescente.\n");
        printf ("(3) Mostra os numeros que sao multiplos de 2.\n");
        printf ("Digite a opcao desejada: ");
        scanf ("%d", &opcao);

        if(opcao == 1) //opcao 1
        {
            if(a>b && a>c) //a maior
            {
                if(b>c) //b meio
                {
                    printf("%d\t %d\t %d\t", c, b, a);
                }
                else //c meio
                {
                    printf("%d\t %d\t %d\t", b, c, a);
                }
            }
            else if(b>a && b>c) //b maior
            {
                if(a>c) //a meio
                {
                    printf("%d\t %d\t %d\t", c, a, b);
                }
                else //c meio
                {
                    printf("%d\t %d\t %d\t", a, c, b);
                }
            }
            else //c maior
            {
                if(a>b) //a meio
                {
                     printf("%d\t %d\t %d\t", b, a, c);
                }
                else //b meio
                {
                     printf("%d\t %d\t %d\t", a, b, c);
                }
            }
        }
        else if(opcao == 2) //opcao 2
        {
            if(a>b && a>c) //a maior
            {
                if(b>c) //b meio
                {
                    printf("%d\t %d\t %d\t", a, b, c);
                }
                else //c meio
                {
                    printf("%d\t %d\t %d\t", a, c, b);
                }
            }
            else if(b>a && b>c) //b maior
            {
                if(a>c) //a meio
                {
                    printf("%d\t %d\t %d\t", b, a, c);
                }
                else //c meio
                {
                    printf("%d\t %d\t %d\t", b, c, a);
                }
            }
            else //c maior
            {
                if(a>b) //a meio
                {
                     printf("%d\t %d\t %d\t", c, a, b);
                }
                else //b meio
                {
                     printf("%d\t %d\t %d\t", c, b, a);
                }
            }
        }
        else if(opcao == 3) //opcao 3
        {
            if(a%2==0 && b%2==0 && c%2==0) // 1 2 3 =
            {
                printf("Os numeros %d, %d e %d sao multiplos de 2.", a, b, c);
            }
            else if (a%2==0 && b%2==0) // 1 2 =
            {
                printf("Os numeros %d e %d sao multiplos de 2.", a, b);
            }
            else if(a%2==0 && c%2==0) //1 3 =
            {
                printf("Os numeros %d e %d sao multiplos de 2.", a, c);
            }
            else if(b%2==0 && c%2==0) //2 3=
            {
                printf("Os numeros %d e %d sao multiplos de 2.", b, c);
            }
            else if(a%2==0) //1 =
            {
                printf("O numero %d e multiplo de 2.", a);
            }
            else if(b%2==0) //2 =
            {
                printf("O numero %d e multiplo de 2.", b);
            }
            else if(c%2==0) //3 =
            {
                printf("O numero %d e multiplo de 2.", c);
            }
            else //nenhum multiplo
            {
                printf("Nenhum numero e multiplo de 2.");
            }
        }
        else
        {
            printf("opcao invalida.");
        }

    return 0;
}
