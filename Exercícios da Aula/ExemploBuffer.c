#include <stdio.h>

int main()
{
    char a, b, c;
    printf("Valor de a: ");
    scanf("%c", &a);
    fflush(stdin); //limpexa do buffer, s� para tipos char
    printf("Valor de b: ");
    scanf("%c", &b);
    fflush(stdin); //limpexa do buffer, s� para tipos char(faz a mesma fun��o que o fflush)
    printf("Valor de c: ");
    scanf("%c", &c);

    printf("Valor de a: %c \n", a);
    printf("Valor de b: %c \n", b);
    printf("Valor de c: %c \n", c);

    return 0;
}
