/*
3) Escreva um programa que imprima todas as possibilidades de que no lan�amento de dois dados a soma das
faces seja um valor informado pelo usu�rio. O usu�rio deve informar um valor v�lido entre 2 a 12. Repetir a
leitura at� que o usu�rio informe um valor v�lido.
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
