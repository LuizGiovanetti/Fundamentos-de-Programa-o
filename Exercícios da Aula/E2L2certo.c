#include <stdio.h>

int main()
{
    int qntde, qntdeMostrada=0, i;

    do
    {
        printf("Informe quantos numeros pares deseja mostrar: ");
        scanf("%d", &qntde);
        if(qntde<=0)
        {
            printf("Numero invalido.\n");
        }
    }while(qntde<=0);

    for(i=1; qntdeMostrada<qntde; i++)
    {
        if(i%2==0)
        {
            printf("%d\t", i);
            qntdeMostrada++;

            if(qntdeMostrada%5==0)
            {
                printf("\n");
            }
        }
    }


    return 0;
}
