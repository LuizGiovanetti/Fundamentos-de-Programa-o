/*
5) Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. O valor
informado para a quantidade deve ser maior que 0. Validar a entrada.
*/
#include <stdio.h>

int main()
{
    int num, i, impares;

    do
    {
        printf("Quantos numeros impares quer mostrar? ");
        scanf("%d", &num);
        if(num <= 0)
        {
            printf("Numero invalido\n");
        }
    }while(num <= 0);

    impares = num * 2;
    for(i=1; i<=impares; i = i + 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
