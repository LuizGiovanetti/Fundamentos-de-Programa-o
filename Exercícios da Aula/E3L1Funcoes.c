/*
3) Criar função para:
a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse
número possui.
b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
de 1 até o número passado como parâmetro da função.
c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
Salvar todas as funções dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um número
2 - Divisores de um número
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
