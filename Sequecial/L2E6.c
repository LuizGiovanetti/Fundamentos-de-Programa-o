/*
6) Fazer um programa que leia um valor double que representa o sal�rio de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    double salario;
    int centavos, reais;

    //Entrada de dados
    printf("Informe o valor do salario: R$ ");
    scanf("%lf", &salario);

    //Processamentos
    reais = (int)salario;
    centavos =  ( salario - reais ) * 100;

    //Sa�da
    printf("Salario informado: R$%.2lf\n", salario);
    printf("Reais: %d\n", reais);
    printf("Centavos: %d", centavos);

    return 0;
}
