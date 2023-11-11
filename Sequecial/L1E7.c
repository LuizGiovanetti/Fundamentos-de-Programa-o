/*
7) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as expressões e depois
implementar o algoritmo para calcular os resultados.
*/
#include <stdio.h>

int main()
{
    //Declarção de variáveis
    int resInt;
    float x, y, resFloat;

    //Entrada de dados
    printf("Informe o valor para X: ");
    scanf("%f", &x);
    printf("Informe o valor para Y: ");
    scanf("%f", &y);

    //Processamentos e saída
    resFloat =( x / y + y / y ) * ( x * x );
    printf("a) %f\n", resFloat);
    resFloat = ( x + y ) / ( x - y );
    printf("b) %f\n", resFloat);
    resFloat = ( x * x + y * y * y) / 2;
    printf("c) %f\n", resFloat);
    resFloat = ( x * x * x ) / ( x * x );
    printf("d) %f\n", resFloat);
    resInt = (int)x%(int)y;
    printf("e1) %d\n", resInt);
    resInt = (int)x%3;
    printf("e2) %d\n", resInt);
    resInt = (int)y%5;
    printf("e3) %d", resInt);

    return 0;
}
