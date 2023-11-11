/*
7) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
potência.
*/
#include <stdio.h>

int main()
{
    int base, expoente, i, potencia=1;

    printf("Informe o valor da base: ");
    scanf("%d", &base);
    printf("Informe o valor do expoente: ");
    scanf("%d", &expoente);

    for(i=1; i<expoente; i++)
    {
        printf("%d * ", base);
        potencia = potencia * base;
    }
    potencia = potencia * base;
    printf("%d = ", base);
    printf("%d", potencia);

    return 0;
}
