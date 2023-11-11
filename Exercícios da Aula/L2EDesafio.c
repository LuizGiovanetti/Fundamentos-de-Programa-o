//resto=a-(b*(a/b)
#include <stdio.h>

int main()
{
    //variável
    int a, b, resto;

    //Entrada de dados
    printf("O valor de a: ");
    scanf("%d", &a);
    printf("O valor de b: ");
    scanf("%d", &b);

    //Processamento
    resto = a- b*(a/b);

    //Saída
    printf("O resto da divisao eh: %d", resto);

    return 0;
}

