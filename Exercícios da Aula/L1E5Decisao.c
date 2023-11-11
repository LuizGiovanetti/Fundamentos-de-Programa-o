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

    //encontrar o maior
    if(num1>num2 && num1>num3)
    {
        maior=num1;
    }
    else if(num2>num3)
    {
        maior=num2;
    }
    else
    {
        maior=num3;
    }

    //encontrar o meio
    if(num1>num2 && num1<num3)
    {
        meio=num1;
    }
    else if(num1<num2 && num1>num3)
    {
        meio=num1;
    }
    else if(num2>num3 && num2<num1)
    {
        meio=num2;
    }
    else if(num2<num3 && num2>num1)
    {
        meio=num2;
    }
    else if(num3>num1 && num3<num2)
    {
        meio=num3;
    }
    else
    {
        meio=num3;
    }

    //encontrar a menor
    if(num1<num2 && num1<num3)
    {
        menor=num1;
    }
    else if(num2<num3)
    {
        menor=num2;
    }
    else
    {
        menor=num3;
    }

    printf("Menor: %d Meio: %d Maior: %d", menor, meio, maior);

    return 0;
}
