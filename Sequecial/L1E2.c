/*
2) Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da
presta��o. Calcule o valor a ser pago por meio da f�rmula:
Valor com juros = Presta��o + (Presta��o * Taxa /100)
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    float valorPrest, taxaJurosAtraso, valorJuros;

    //Entrada de dados
    printf("Informe o valor de uma prestacao: ");
    scanf("%f", &valorPrest);
    printf("Informe o valor da taxa de juros: ");
    scanf("%f", &taxaJurosAtraso);

    //Processamentos
    valorJuros = valorPrest + (valorPrest * taxaJurosAtraso /100 );

    //Sa�da
    printf("O valor da prestacao com a taxa de juros eh de R$%.2f", valorJuros);

    return 0;
}
