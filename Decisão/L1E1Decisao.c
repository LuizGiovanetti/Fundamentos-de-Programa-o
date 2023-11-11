/*
1) A contribuição para o INSS é calculada da seguinte forma:
a) Para o salário bruto de até três salários mínimos, o desconto do INSS será de 8%.
b) Para o salário bruto acima de três salários mínimos, o desconto do INSS será de 10%. Para as
contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do salário bruto, calcule o
INSS e o salário líquido restante e informe-os.
*/
#include <stdio.h>

int main()
{
    float salMin, salBruto, inss, salLiq;

    printf("Informe o valor do salario minimo: R$ ");
    scanf("%f", &salMin);
    printf("Informe o valor do salario bruto: R$ ");
    scanf("%f", &salBruto);
    if(salBruto<=salMin*3)
    {
        printf("Salario minimo e R$ %.2f\n", salMin);
        printf("Salario bruto e: R$ %.2f\n", salBruto);
        inss = (salBruto * 0.08) ;
        if(inss<=salMin)
        {
            printf("INSS R$ %.2f * 8% = R$ %.2f\n", salBruto, inss);
            salLiq = salBruto - inss;
            printf("Salario liquido R$ %.2f - R$ %.2f = R$ %.2f\n", salBruto, inss, salLiq);
        }
        else
        {
            printf("INSS R$ %.2f * 8% = R$ %.2f\n", salBruto, salMin);
            salLiq = salBruto - salMin;
            printf("Salario liquido R$ %.2f - R$ %.2f = R$ %.2f\n", salBruto, salMin, salLiq);
        }
    }
    else
    {
        printf("Salario minimo e R$ %.2f\n", salMin);
        printf("Salario bruto e: R$ %.2f\n", salBruto);
        inss = salBruto * 0.1;
        if(inss<=salMin)
        {
            printf("INSS R$ %.2f * 10% = R$ %.2f\n", salBruto, inss);
            salLiq = salBruto - inss;
            printf("Salario liquido R$ %.2f - R$ %.2f = R$ %.2f\n", salBruto, inss, salLiq);
        }
        else
        {
            printf("INSS R$ %.2f * 10% = R$ %.2f\n", salBruto, salMin);
            salLiq = salBruto - salMin;
            printf("Salario liquido R$ %.2f - R$ %.2f = R$ %.2f\n", salBruto, salMin, salLiq);
        }
    }

    return 0;
}
