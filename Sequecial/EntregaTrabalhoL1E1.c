/*
1) Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo e ainda obter um lucro
de 25%
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    float custoEsp, convite, cobrirCusto, cobrirCustoELucrar;

    //Entrada de dados
    printf("Informe o valor de custo do espetaculo: R$ ");
    scanf("%f", &custoEsp);
    printf("Informe o valor do convite: R$ ");
    scanf("%f", &convite);

    //Processamentos
    cobrirCusto = custoEsp / convite;
    cobrirCustoELucrar = ( (custoEsp) + (custoEsp * 0,250) ) / convite;

    //Saída
    printf("Para cobrir o custo do espetaculo eh necessario vender %.0f ingressos.\n", cobrirCusto);
    printf("Para cobrir o custo do espetaculo e ter 25 por cento de lucro eh necessario vender %.0f ingressos.", cobrirCustoELucrar);

    return 0;
}
