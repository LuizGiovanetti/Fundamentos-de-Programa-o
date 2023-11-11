/*
8) Ler tr�s valores inteiros que representam os lados de um tri�ngulo e determinar se esses valores podem
formar um tri�ngulo (obs.: para ser um tri�ngulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um tri�ngulo, determinar o seu tipo: equil�tero (todos os lados iguais), is�sceles (dois lados iguais) e
escaleno (todos os lados diferentes).
*/
#include <stdio.h>

int main()
{
    int lado1, lado2, lado3, triEqui, triIsos, triEsca;

    printf("Informe o valor do primeiro lado do triangulo: ");
    scanf("%d", &lado1);
    printf("Informe o valor do segundo lado do triangulo: ");
    scanf("%d", &lado2);
    printf("Informe o valor do terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    if(lado1==lado2 && lado2==lado3)
    {
        printf("Eh um triangulo equilatero.");
    }
    else if(lado1!=lado2 && lado2==lado3)
    {
        printf("Eh um triangulo isosceles.");
    }
    else if(lado2!=lado3 && lado3==lado1)
    {
        printf("Eh um triangulo isosceles.");
    }
    else if(lado3!=lado1 && lado2==lado1)
    {
        printf("Eh um triangulo isosceles.");
    }
    else
    {
        printf("Eh um triangulo escaleno.");
    }

    return 0;
}
