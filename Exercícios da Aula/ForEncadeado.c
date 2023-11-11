#include <stdio.h>

int main()
{
    int i, j;

    for(i=1; i<=5; i++) //i => linhas
    {

        for(j=1; j<=10; j++) //j => colunas
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
