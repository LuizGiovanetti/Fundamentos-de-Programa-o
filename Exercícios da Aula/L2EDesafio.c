//resto=a-(b*(a/b)
#include <stdio.h>

int main()
{
    //vari�vel
    int a, b, resto;

    //Entrada de dados
    printf("O valor de a: ");
    scanf("%d", &a);
    printf("O valor de b: ");
    scanf("%d", &b);

    //Processamento
    resto = a- b*(a/b);

    //Sa�da
    printf("O resto da divisao eh: %d", resto);

    return 0;
}

