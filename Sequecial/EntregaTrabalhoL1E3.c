/*
3) Fa�a um programa que receba o peso e a altura de uma pessoa e calcule o �ndice de massa corp�rea.
Esse �ndice mede a rela��o entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros).
*/
#include <stdio.h>

int main()
{
    //Declara��o de vari�vel
    float IMC, peso, altura;

    //Entrada de dados
    printf("Informe o peso(em kg): ");
    scanf("%f", &peso);
    printf("Informe a altura(em metros): ");
    scanf("%f", &altura);

    //Processamento
    IMC = peso / ( altura * altura );

    //Sa�da
    printf("O IMC eh de: %.2f", IMC);

    return 0;
}
