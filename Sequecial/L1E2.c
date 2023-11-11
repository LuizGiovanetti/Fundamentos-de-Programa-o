/*
2) Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação. Calcule o valor a ser pago por meio da fórmula:
Valor com juros = Prestação + (Prestação * Taxa /100)
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    float valorPrest, taxaJurosAtraso, valorJuros;

    //Entrada de dados
    printf("Informe o valor de uma prestacao: ");
    scanf("%f", &valorPrest);
    printf("Informe o valor da taxa de juros: ");
    scanf("%f", &taxaJurosAtraso);

    //Processamentos
    valorJuros = valorPrest + (valorPrest * taxaJurosAtraso /100 );

    //Saída
    printf("O valor da prestacao com a taxa de juros eh de R$%.2f", valorJuros);

    return 0;
}
