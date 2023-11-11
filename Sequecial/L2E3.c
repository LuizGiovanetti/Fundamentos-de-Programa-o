/*
3) Leia um valor double que representa o troco a ser fornecido por um caixa.
Separe a parte inteira (reais) da parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos.
Use a fun��o round, da biblioteca math.h, para o arredondamento da parte decimal).
*/
#include <stdio.h>
#include <math.h>

int main()
{
    //Declara��o de vari�vel
    int reais, centavos;
    double trocoCaixa;

    //Entrada de dados
    printf("Informe o valor do troco:");
    scanf("%lf", &trocoCaixa);

    //Processamentos
    reais = (int)trocoCaixa;
    centavos = (trocoCaixa - reais) *100;
    round(centavos);

    //Sa�da
    printf("O valor informado eh %d reais e %d centavos.", reais, centavos);

    return 0;
}
