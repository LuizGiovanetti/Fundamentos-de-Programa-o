#include <stdio.h>

int main()
{
    char genero;
    float altura, pesoIdeal;
    printf("Informe o genero: ");
    scanf("%c", &genero);

    if(genero=='M' || genero=='m' || genero=='F' || genero=='f')
    {
        printf("Informe a altura: ");
        scanf("%f", &altura);

        if(genero=='M' || genero=='m')
        {
            pesoIdeal = (72.7 * altura) - 58;
            printf("O peso ideal para um homem de %.1f de altura eh: %.1f kg\n", altura, pesoIdeal);
        }
        else
        {
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("O peso ideal para uma mulher de %.1f de altura eh: %.1f kg\n", altura, pesoIdeal);
        }
    }
    else
    {
        printf("Caracter invalido.");
    }
    return 0;
}
