#include <stdio.h>


int main()
{
    int i, num;

    printf("Informe um numero para calcular a tabuada: ");
    scanf("%d", &num);

    printf("tabuada do numero %d\n", num);

    for(i=1; i<=10; i++)
    {
        printf("%2d * %2d = %2d\n", num, i , num*i); //o 2 antes do d é para ter um espaço para alinhar
    }

    return 0;
}
/*
int main()
{
    int i;
    printf("Numero de 1 a 10.\n");
    for(i=1; i<=10; i++)
    {
        printf("%d\t", i); // o \t é uma tabulação, invés de pular linha ele da um "tab"
    }

    return 0;
}
*/
/*
int main()
{
    int i;
    printf("Numero de 5 a 50 sendo multiplos de 5.\n");
    for(i=1; i<=10; i=i+5)
    {
        printf("%d\t", i); // o \t é uma tabulação, invés de pular linha ele da um "tab"
    }

    return 0;
}

int main()
{
    int i;
    printf("Numero de 5 a 50 sendo multiplos de 5.\n");
    for(i=1; i<=10; i++)
    {
        if(5% == 0)
        {
        printf("%d\t", i); // o \t é uma tabulação, invés de pular linha ele da um "tab"
        }
    }

    return 0;
}
*/
