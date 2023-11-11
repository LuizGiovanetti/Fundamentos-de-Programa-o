/*
5) Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de
renda e de INSS.
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    float salLiq, salBruto,impostoRenda, inss;

    //Entrada de dados
    printf("Informe o valor do salario bruto: R$");
    scanf("%f", &salBruto);
    printf("Informe o percentual de INSS: ");
    scanf("%f", &inss);
    printf("Informe o percentual de IR: ");
    scanf("%f", &impostoRenda);

    //Processamentos
    salLiq = salBruto - ( salBruto ) * ( inss / 100 ) - ( salBruto ) * ( impostoRenda / 100 );

    //Saída
    printf("O salario liquido eh R$ %.2f", salLiq);

    return 0;
}
