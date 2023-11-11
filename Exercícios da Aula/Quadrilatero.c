#include <stdio.h>

int main()
{
    //declaração de variáveis
    int lado1, lado2, area, perimetro;

    //entrada de dados
    printf("Informe o valor do lado 1:");
    scanf("%d", &lado1);
    printf("Informe o valor do lado 2:");
    scanf("%d", &lado2);

    //processamento
    area = lado1 * lado2;
    perimetro = (2 * lado1) + (2 * lado2);

    //saída
    printf("Area: %d\n", area);
    printf("Perimetro %d", perimetro);

    return 0;
}
