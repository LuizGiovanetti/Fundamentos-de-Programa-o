/*
2) Ler uma série de números indicados pelo usuário até ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usuário. O valor zero indica o final da leitura e não deve ser
considerado.
*/
#include <stdio.h>

int main()
{
    int primeiro=0, num=1, maior, menor;

    while(num!=0)
    {
        printf("Informe um valor: ");
        scanf("%d", &num);
        if(num!=0)
        {
             if(primeiro == 0)
            {
                maior=num;
                menor=num;
                primeiro=1;
            }
            else
            {
                if(num>maior)
                {
                    maior=num;
                }
                else if(num<menor)
                {
                    menor=num;
                }
            }


        }

    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d", menor);
    return 0;
}
