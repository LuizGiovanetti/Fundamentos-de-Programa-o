/*
5) (DESAFIO) Obter o resto da divis�o de dois valores inteiros informados pelo usu�rio, sem usar o operador
de resto.
*/
#include<stdio.h>

int main()
{
    //Declarac�o de vari�vel
    int a, b, resto;

    //Entrada de dados
    printf("O valor de a: ");
    scanf("%d", &a);
    printf("O valor de b: ");
    scanf("%d", &b);

    //Processamentos
    resto = a- b*(a/b);

    //Sa�da
    printf("O resto da divisao eh: %d", resto);

    return 0;
}
