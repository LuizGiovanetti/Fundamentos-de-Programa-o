/*
8) O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de f�brica). Escrever um programa para, a
partir do custo de f�brica do carro, calcular e mostrar o custo ao consumidor.
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    float custoCarroNv,custoFabrica, perDist, perImpos;

    //Entrada de dados
    printf("Informe o custo de fabrica de automovel: R$ ");
    scanf("%f", &custoFabrica);
    printf("Informe a percentagem do distribuidor (0 a 100): ");
    scanf("%f", &perDist);
    printf("Informe a percentagem de impostos (0 a 100): ");
    scanf("%f", &perImpos);

    //Processamentos
    custoCarroNv = custoFabrica + custoFabrica * ( perDist / 100 ) + custoFabrica * ( perImpos / 100 );

    //Sa�da
    printf("O custo do veiculo ao consumidor eh: R$ %.2f", custoCarroNv);

    return 0;
}
