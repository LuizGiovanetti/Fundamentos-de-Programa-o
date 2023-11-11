/*
1) Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3), cuja fórmula é:
Volume = Comprimento * Largura * Altura
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    float comprimento, largura, altura, volume;

    //Entrada de dados
    printf("Informe o comprimento: ");
    scanf("%f", &comprimento);
    printf("Informe a largura: ");
    scanf("%f", &largura);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    //Processamentos
    volume = comprimento * largura * altura;

    //Saída
    printf("O volume eh %.2f cm3", volume);

    return 0;
}
