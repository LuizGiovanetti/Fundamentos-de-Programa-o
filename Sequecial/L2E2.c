/*
2) Considerando que para um cons�rcio sabe-se o n�mero total de presta��es, a quantidade de presta��es
pagas e o valor de cada presta��o (que � fixo).
Escreva um programa que determine o valor total j� pago pelo
consorciado e o saldo devedor.
*/
#include <stdio.h>

int main()
{
    float totalPrest, quantPrestPaga, valorPrest, valorTPago, saldoDev;

    printf("Informe a quantidade total de prestacoes: ");
    scanf("%f", &totalPrest);
    printf("Informe a quantidade de prestacoes pagas: ");
    scanf("%f", &quantPrestPaga);
    printf("Informe o valor de cada prestacao: R$");
    scanf("%f", &valorPrest);

    valorTPago = valorPrest * quantPrestPaga;
    saldoDev = totalPrest * valorPrest - valorTPago;


    printf("O valor total pago eh: R$ %.2f\n", valorTPago);
    printf("O saldo devedor eh de R$ %.2f\n", saldoDev);

    return 0;
}
