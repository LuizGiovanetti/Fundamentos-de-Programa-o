/*
1) Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1.
Por exemplo, 9, é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros
números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o
número equivale a soma dos n primeiros ímpares e 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado
pelo usuário.
*/
#include <stdio.h>
#include "minhasFuncoes.h"

int main()
{
    char opcao;
    int verificacao, num, limInf, limSup;

    do
    {
        printf("1 - Verifique se um numero se equivale com a soma dos impares.\n2- Verifica os numeros que equivalem a soma dos impares em um intervalo.\n");
        do
        {
            printf("Qual opcao voce deseja verificar? ");
            scanf("%d", &verificacao);
            if(verificacao!=1 && verificacao!=2)
            {
                printf("Numero invalido.\n");
            }
        }while(verificacao!=1 && verificacao!=2);
        if(verificacao==1)
        {
            printf("Informe um numero: ");
            scanf("%d", &num);
            somaImpar(num);
        }
        else
        {
            do
            {
                printf("Informe um valor para o limite inferior de um intervalo: ");
                scanf("%d", &limInf);
                if(limInf<=0)
                {
                    printf("Valor invalido.\n");
                }
            }while(limInf<=0);
            do
            {
                printf("Informe um valor para o limite superior de um intervalo: ");
                scanf("%d", &limSup);
                if(limSup<=limInf)
                {
                    printf("Valor invalido.\n");
                }
            }while(limSup<=limInf);
            somaImparInter(limInf, limSup);
        }
        do
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='N' && opcao!='n')
            {
                printf("Caracter invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='N' && opcao!='n');
    }while(opcao=='s' || opcao=='S');
    return 0;
}
