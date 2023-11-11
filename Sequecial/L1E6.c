/*
6) Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.
*/
#include <stdio.h>

int main()
{
    //variáveis
    int a, b, aux;

    //Entrada de dados
    printf("Informe o valor de a(inteiro): ");
    scanf("%d", &a);
    printf("Informe o valor de b(inteiro): ");
    scanf("%d", &b);

    //Processamento
    aux=a;
    a=b;
    b=aux;

    //saida
    printf("O valor de A= %d\n", a);
    printf("O valor de B= %d", b);

    return 0;
}
