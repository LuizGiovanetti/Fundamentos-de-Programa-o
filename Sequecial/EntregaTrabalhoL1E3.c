/*
3) Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea.
Esse índice mede a relação entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros).
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    float IMC, peso, altura;

    //Entrada de dados
    printf("Informe o peso(em kg): ");
    scanf("%f", &peso);
    printf("Informe a altura(em metros): ");
    scanf("%f", &altura);

    //Processamento
    IMC = peso / ( altura * altura );

    //Saída
    printf("O IMC eh de: %.2f", IMC);

    return 0;
}
