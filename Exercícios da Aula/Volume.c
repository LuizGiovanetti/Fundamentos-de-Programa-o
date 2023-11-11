/*
Escreva um programa que leia o comprimento(cm), a largura(cm) e a altura(cm)
de uma caixa retangular e calcule o seu volume.
*/
#include <stdio.h>

int main()
{
    //declaração de variáveis
    float comprimento, largura, altura, volume;

    //entrada de dados
    printf("Informe o valor do comprimento: ");
    scanf("%f", &comprimento);
    printf("Informe o valor da largura: ");
    scanf("%f", &largura);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    //processamento

    volume = comprimento * largura * altura;

    //saída
    printf("O volume da caixa eh: %f", volume);

    return 0;
}
