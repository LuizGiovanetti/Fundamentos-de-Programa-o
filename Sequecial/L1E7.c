/*
7) Resolva as seguintes express�es matem�ticas. X e Y s�o valores fornecidos pelo usu�rio. Calcule e
mostre o resultado de cada express�o. Reutilize vari�veis, ou seja, ter� apenas uma vari�vel para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira opera��o e j�
imprime o resultado e assim para todas as demais opera��es. Aten��o para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as express�es e depois
implementar o algoritmo para calcular os resultados.
*/
#include <stdio.h>

int main()
{
    //Declar��o de vari�veis
    int resInt;
    float x, y, resFloat;

    //Entrada de dados
    printf("Informe o valor para X: ");
    scanf("%f", &x);
    printf("Informe o valor para Y: ");
    scanf("%f", &y);

    //Processamentos e sa�da
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
