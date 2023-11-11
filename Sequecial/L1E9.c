/*
9) Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
a) Quantas vezes foi necessário abastecer o carro. (Use a função ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a distância indicada.
c) Quantos litros restaram no tanque após a chegada ao destino.
Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio
do veículo, calcule e mostre as informações solicitadas.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    //Declaração de variável
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

    //Saída
    printf("Foi necessario abastecer o veiculo %.0f vezes\n", abastecer);
    printf("Foram necessarios %.1f litros de combustivel para percorrer o trajeto.\n", litrosPercTraj);
    printf("Restou no tanque de combustivel %.1f", restTanq);

    return 0;
}
