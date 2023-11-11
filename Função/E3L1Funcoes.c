/*
3) Criar fun��o para:
a) Receber, por par�metro, um n�mero inteiro e positivo e retornar a quantidade de divisores que esse
n�mero possui.
b) Mostrar os divisores de um n�mero. Essa fun��o recebe como par�metro o n�mero e mostra os divisores
de 1 at� o n�mero passado como par�metro da fun��o.
c) Receber, por par�metro, um n�mero positivo e retornar a soma dos divisores que esse n�mero possui.
d) Receber, por par�metro, dois n�meros e retornar o M�ximo Divisor Comum dos dois n�meros.
Salvar todas as fun��es dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um n�mero
2 - Divisores de um n�mero
3 - Divisores, quantidade e soma de um intervalo
*/
#include <stdio.h>
#include "minhasFuncoes.h"

int main()
{
    char opcao, escolha;
    int num, num2;
    do
    {
        printf("1 - Quantidade de divisores de um numero\n2 - Divisores de um numero\n3 - Divisores, quantidade e soma de um intervalo\n");
        printf("Escolha uma opcao: ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);
        switch(escolha)
        {
        case '1':
            printf("Informe um numero para mostrar a quantidade de divisores: ");
            scanf("%d", &num);
            mostrarQntDivisores(num);
            printf("\n");
            break;
        case '2':
            printf("Informe um numero para mostrar a quantidade de divisores: ");
            scanf("%d", &num);
            mostrarDivisores(num);
            printf("\n");
            break;
        case '3':
            printf("Informe um numero para o intervalo inferior: ");
            scanf("%d", &num);
            do
            {
                printf("Informe um numero para o intervalo superior: ");
                scanf("%d", &num2);
            }while(num2<=num);
            somaIntervalo(num, num2);
            break;
        }
    do
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
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
