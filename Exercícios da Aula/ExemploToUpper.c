#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Informe um caracter: ");
    scanf("%c", &caracter);
    printf("Caracter Informado: %c\n", caracter);

    printf("Caracter convertido para maiusculo usando a funcao toupper: ");
    printf("%c\n", toupper(caracter));
    printf("Caracter convertido para maiusculo sem usar a funcao: ");
    printf("%c\n", caracter - 32);

    return 0;
}
