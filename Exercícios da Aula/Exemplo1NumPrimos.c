#include <stdio.h>

int main()
{
    int num, cont=0, i;

    printf("Informe um numero para saber se eh primo: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        if(num%i==0) // i exerce o papel de possiveis divisores do num.
        {
            cont++;
        }
    }

    if(cont == 2)
    {
        printf("Eh numero primo.\n");
    }
    else
    {
        printf("Nao eh numero primo.");
    }
    return 0;
}
