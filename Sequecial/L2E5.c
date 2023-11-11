/*
5) (DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador
de resto.
*/
#include<stdio.h>

int main()
{
    //Declaracão de variável
    int a, b, resto;

    //Entrada de dados
    printf("O valor de a: ");
    scanf("%d", &a);
    printf("O valor de b: ");
    scanf("%d", &b);

    //Processamentos
    resto = a- b*(a/b);

    //Saída
    printf("O resto da divisao eh: %d", resto);

    return 0;
}
