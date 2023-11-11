#include <stdio.h>

int main()
{
    char tipo;

    printf("Informe o sabor da pizza: ");
    scanf("%c", & tipo);

    switch (tipo)
    {
        case 'M':
        case 'm':
            printf("muzzarela.");
            break;
        case 'C':
        case 'c':
            printf("Calabresa.");
            break;
        default:
            printf("opcao invalida.");
    }


    return 0;
}
