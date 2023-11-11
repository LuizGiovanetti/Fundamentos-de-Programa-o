/*
1) Fazer uma fun��o para verificar se um n�mero equivale a soma dos n primeiros �mpares iniciando em 1.
Por exemplo, 9, � um n�mero que tem essa caracter�stica porque 1 + 3 + 5 = 9 (soma dos n primeiros
n�meros �mpares iniciando em 1). Essa fun��o recebe como par�metro um valor inteiro e retorna 's' se o
n�mero equivale a soma dos n primeiros �mpares e 'n' caso n�o.
Fazer um programa que use essa fun��o para:
a) Ler um n�mero inteiro informado pelo usu�rio � verificar se o mesmo tem essa caracter�stica.
b) Mostrar todos os n�meros que t�m ou n�o t�m essa caracter�stica e pertencem a um intervalo informado
pelo usu�rio.
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
