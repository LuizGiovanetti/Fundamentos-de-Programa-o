/*
5) Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem ser apresentados
com uma instrução:
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, maior, meio, menor;

    printf("Informe o primeiro numero (inteiro): ");
    scanf("%d", &num1);
    printf("Informe o segundo numero (inteiro): ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero (inteiro): ");
    scanf("%d", &num3);

    if(num1>num2 && num1>num3)
    {
        num1=maior;
        if(num2>num3)
        {
            num2=meio;
            num3=menor;
        }
        else
        {
            num2=menor;
            num3=meio;
        }
    }
    else if(num2>num1 && num2>num3)
    {
        num2=maior;
        if(num1>num3)
        {
            num1=meio;
            num3=menor;
        }
        else
        {
            num1=menor;
            num3=meio;
        }
    }
    else
    {
        num3=maior;
        if(num2>num1)
        {
            num2=meio;
            num1=menor;
        }
        else
        {
            num2=menor;
            num1=meio;
        }
    }

    printf("Menor: %d Meio: %d Maior: %d", menor, meio, maior);

    return 0;
}
