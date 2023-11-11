#include <stdio.h>

int main()
{
    char opcao;

    do
    {




        printf("Deseja repetir o programa [S/s]: ");
        fflush(stdin);
        scanf("%c", &opcao);

    }while(opcao == 'S' || opcao == 's');
    return 0;
}
