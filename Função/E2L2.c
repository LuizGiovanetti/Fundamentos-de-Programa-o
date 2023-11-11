/*
2) Para saber se um número é feliz, você deve obter o quadrado de cada dígito deste número, em seguida
você faz a soma desses resultados. A seguir o mesmo procedimento deve ser feito com o valor resultante
desta soma. Se ao repetir o procedimento diversas vezes obtivermos o valor 1, o número inicial é considerado
feliz.
Tomamos o 7, que é um número feliz:
7² = 49
4² + 9² = 97
9² + 7² = 130
1² + 3² + 0² = 10
1² + 0² = 1
Podemos observar nesse exemplo que os números 49, 97, 130 e 10 também são felizes. Existem infinitos
números felizes.
E um número triste? Como sabemos que um número não é feliz?
Desenvolva uma função que receba um número inteiro positivo e retorne 1 se o número for feliz e 0 se o
número não for feliz. Elabore um programa que use essa função para determinar se um número é ou não
feliz.
*/
#include<stdio.h>
#include "numFeliz.h"

int main()
{
    int num;
    char opcao;
    do
    {
        printf("Digite um numero para verificar se ele eh feliz: ");
        scanf("%d", &num);
        numFeliz(num);
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
