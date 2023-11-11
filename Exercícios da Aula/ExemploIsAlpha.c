#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Informe um caracter: ");
    scanf("%c", &caracter);
    printf("Caracter Informado: %c\n", caracter);

    printf("Verifica se o caractere informado e uma letra maiuscula. \n");

    /* pode se resolver assim invés da função
    if (caracter >= 'A' && caracter <= 'Z')
    {
        printf("Caracter %c e uma letra maiuscula", caracter);
    }
    else if
    {
        printf("Caracter %c e uma letra minuscula", caracter);
    }
    else
    {
        printf("Caracter %c nao eh uma letra", caracter)
    }
    */

    if(isalpha(caracter))
    {
        printf("Voce digitou uma letra %c\n", caracter);
    }
    else
    {
        printf("Voce nao digitou uma letra.");
    }

    return 0;
}
