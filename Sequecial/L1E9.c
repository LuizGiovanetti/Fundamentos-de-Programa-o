/*
9) Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino da viagem deseja saber:
a) Quantas vezes foi necess�rio abastecer o carro. (Use a fun��o ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a dist�ncia indicada.
c) Quantos litros restaram no tanque ap�s a chegada ao destino.
Fa�a um programa que leia a dist�ncia entre as duas cidades, a capacidade do tanque e o consumo m�dio
do ve�culo, calcule e mostre as informa��es solicitadas.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    //Declara��o de vari�vel
    float distPerc, capMaxTanq, consMed, abastecer, restTanq, litrosPercTraj;

    //Entrada de dados
    printf("informe a distancia(em Km) percorrida entre as cidades: ");
    scanf("%f", &distPerc);
    printf("Informe a capacidade maxima do tanque de combustivel do veiculo: ");
    scanf("%f", &capMaxTanq);
    printf("Informe o consumo medio(em Km por litro) do veiculo: ");
    scanf("%f", &consMed);

    //Processamento
    litrosPercTraj = distPerc / consMed;
    abastecer = litrosPercTraj / capMaxTanq;
    abastecer = ceil(abastecer);
    restTanq = (capMaxTanq - litrosPercTraj) + capMaxTanq;

    //Sa�da
    printf("Foi necessario abastecer o veiculo %.0f vezes\n", abastecer);
    printf("Foram necessarios %.1f litros de combustivel para percorrer o trajeto.\n", litrosPercTraj);
    printf("Restou no tanque de combustivel %.1f", restTanq);

    return 0;
}
