/*
7) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
            Renda anual                   Alíquota*
          Até R$ 10.000,00                   0%
    > R$ 10.000,00 e <= R$ 25.000,00        10%
        Acima de R$ 25.000,00               25%

*Alíquota é o percentual para realizar o cálculo do imposto de renda a ser pago.
Se informado valor negativo, não realizar o cálculo e informar o usuário.
*/
#include <stdio.h>

int main()
{
    float rendaAn, impoRend, aliq;

    printf("Informe sua renda anual: R$ ");
    scanf("%f", &rendaAn);

    if(rendaAn>25000.00)
    {
        aliq = (rendaAn * 0,25) ;
    }
    else if(rendAn>10000.00 && rendaAn<= 25000.00)
    {
        aliq = (rendaAn * 0,1);
    }
    else
    {

    }
    return 0;
}
