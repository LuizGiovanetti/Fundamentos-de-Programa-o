#include <stdio.h>

int main()
{
    int num, i=0;

    while(i<5)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num%2==0)
        {
            printf("O numero e par\n");
        }
        else
        {
            printf("O numero e impar\n");
        }
        i++;
    }

    return 0;
}
