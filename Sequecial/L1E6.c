/*
6) Leia dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma que a vari�vel A
passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do das vari�veis antes e depois da troca.
*/
#include <stdio.h>

int main()
{
    //vari�veis
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
