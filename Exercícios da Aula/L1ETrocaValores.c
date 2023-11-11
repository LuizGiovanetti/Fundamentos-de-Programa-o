//Troca de valores
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
