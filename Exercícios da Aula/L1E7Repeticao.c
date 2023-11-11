/*
7) Em um intervalo de 0 a 100, apresentar:
a) Os números divisíveis por 3.
b) O quadrado dos números divisíveis por 3.
c) Os números divisíveis por 5 ou por 7.
d) A raiz quadrada dos números divisíveis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabeçalho antes de cada listagem de maneira a
identificar o conteúdo da mesma. Em cada listagem separar os números por uma tabulação. A raiz quadrada
pode ser obtida pela função sqrt() que está na biblioteca math.h
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int i,quadrado;
    float raizQuad;

    printf("\t\t\t\t\t\t=== Numeros de 0 a 100 ===\n");
    printf("\t\t\t\t\t\t=== Divisiveis por 03 ===\n\t");
    for(i=3; i<100; i = i + 3)
    {

        printf("%.2d\t", i);
    }
    printf("\n\t\t\t\t\t  === Quadrado dos divisiveis por 03 ===\n\t");
    for(i=3; i<100; i = i + 3)
    {
        quadrado = i * i;
        printf("%.2d\t", quadrado);
    }
    printf("\n\t\t\t\t\t\t=== Divisiveis por 05 ou 07 ===\n\t");
    for(i=5; i<100; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
            printf("%.2d\t", i);
        }
    }
    printf("\n\t\t\t\t      === Raiz quadrada dos divisiveis por 05 ou 07 ===\n\t");
    for(i=0; i<=100; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
             raizQuad=sqrt(i);
        printf("%.2f\t", raizQuad);
        }
    }

    return 0;
}
