/*
2) Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as tr�s �ltimas vari�veis em tipo float).
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    int segundos;
    float minutos, horas, dias;

    //Entrada de dados
    printf("Informe o tempo em segundos: ");
    scanf("%d", &segundos);

    //Processamento
    minutos =  segundos / 60;
    horas =  minutos / 60;
    dias = horas / 24;

    //Sa�da
    printf("O tempo em minutos eh: %.1f\n", minutos);
    printf("O tempo em horas eh: %.1f\n", horas);
    printf("O tempo em dias eh: %.1f", dias);

    return 0;
}
