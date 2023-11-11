/*
1) Ler um número double.
Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa
unidade, dezena e centena e mostrar.
*/
#include <stdio.h>

int main()
{
    double num, parteDec;
    int parteInt, parteDecInt, unidade, dezena, centena;

    printf("Informe um numero: ");
    scanf("%lf", &num);
    //lf significa long float, long float é o double
    printf("Numero informado: %lf\n", num);

    //Processamentos
    parteInt = (int)num;
    parteDec = num - parteInt;
    parteDecInt = parteDec * 1000;
    centena = parteInt / 100;
    dezena = parteInt % 100 /10;
    unidade = parteInt % 10;
    // % é o resto da divisao

    //Saídas
    printf("Parte Inteira: %d\n", parteInt);
    printf("Parte Decimal: %lf\n", parteDec);
    printf("Parte Decimal como inteiro de 3 digitos: %d\n", parteDecInt);
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);


    return 0;
}

