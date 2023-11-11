#include <stdio.h>

int main()
{
    int num;

    do
    {
        printf("Informe um valor positivo e diferente de zero: ", num);
        scanf("%d", &num);
        if(num<=0)
        {
            printf("Numero invalido.\n");
        }
    }while(num<=0);

    printf("Parabens.");

    return 0;
}



/*
int main()
{
    int i=0;

    do
    {
        printf("%d\t", i);
        i++;

    }while(i<=10);

    return 0;
}
*/
