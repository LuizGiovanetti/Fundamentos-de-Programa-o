/*
3) Escreva um programa que imprima todas as possibilidades de que no lançamento de dois dados a soma das
faces seja um valor informado pelo usuário. O usuário deve informar um valor válido entre 2 a 12. Repetir a
leitura até que o usuário informe um valor válido.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int num, dadoUm, dadoDois, possibilidade;

    do
    {
        do
        {
            printf("Informe um valor entre 2 e 12: ");
            scanf("%d", &num);
            if(num<2 || num>12)
            {
             printf("Valor invalido.\n");
            }
        }while(num<2 || num>12);

        possibilidade=0;

        for(dadoUm=1; dadoUm<=12; dadoUm++)
        {
            for(dadoDois=1; dadoDois<=12; dadoDois++)
            {
                if(dadoUm+dadoDois==num)
                {
                    printf("%d + %d = %d\n", dadoUm, dadoDois, num);
                    possibilidade++;
                }
            }
        }

        printf("O numero de possibilidades eh: %d", possibilidade);

        printf("\n Deseja repetir o programa? [S/s]\n");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao=='s' || opcao=='S');
    return 0;
}
