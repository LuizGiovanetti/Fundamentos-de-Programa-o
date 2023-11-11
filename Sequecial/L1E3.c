/*
3) Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.
Média Ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3)/(1+2+3)
*/
#include <stdio.h>

int main()
{
    //Declaração de variável
    float nota1, nota2, nota3, mediaPond;

    //Entrada de dados
    printf("Informe o valor da primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe o valor da segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe o valor da terceira nota: ");
    scanf("%f", &nota3);

    //Processamento
    mediaPond = (nota1 * 1 + nota2 * 2 + nota3 * 3) / (1+2+3);

    //Saída
    printf("A media ponderada eh de %.2f ", mediaPond);

    return 0;
}
