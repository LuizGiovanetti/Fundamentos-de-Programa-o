/*
7) Fazer um programa para ler o sal�rio de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o sal�rio com aumento.
*/
#include<stdio.h>

int main()
{
    //Declara��o de vari�vel
    float salBruto, perAumento, perDesc, salLiq, salAument;
    int salLiqReais, salLiqCent;

    //Entrada de dados
    printf("Informe o valor do salario: R$ ");
    scanf("%f", &salBruto);
    printf("Informe o percentual de aumento(1 a 100): ");
    scanf("%f", &perAumento);
    printf("Informe o percentual de desconto(1 a 100): ");
    scanf("%f", &perDesc);

    //Processamentos
    salAument = salBruto +  salBruto * ( perAumento / 100 );
    salLiq = salAument - (salAument) * ( perDesc / 100 );
    salLiqReais = (int)salLiq;
    salLiqCent = ( salLiq - salLiqReais ) * 100;

    //Sa�da
    printf("Salario aumentado: R$ %.2f\n", salAument);
    printf("Salario liquido: R$ %.2f\n", salLiq);
    printf("O salario liquido eh: %d reais e %d centavos.\n", salLiqReais, salLiqCent);

    return 0;
}
