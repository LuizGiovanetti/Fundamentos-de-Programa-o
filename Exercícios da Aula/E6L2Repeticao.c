/*
6) Ler n�meros inteiros. Prosseguir a leitura at� ser informado o valor zero que n�o deve ser considerado nos c�lculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, dever� retornar 1, pois tem apenas um
n�mero negativo que � par.
c) A m�dia dos valores divis�veis por 3 informados. Usar a func�o fabs() para converter os valores negativos em positivos. Validar
para n�o fazer divis�o por zero no c�lculo da m�dia.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num=1, soma=0, contPositivo=0, contNegPares=0, contTres=0;
    float media;

    while(num!=0)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num!=0)
        {
            if(num>0)
            {
                contPositivo++;
            }
            else if(num<0 && num%2==0)
            {
                contNegPares++;
            }
            if(num%3==0)
            {
                contTres++;
                num = fabs(num);
                soma = soma + num;
            }
        }
    }
    media = (float)soma/contTres;
    printf("Numeros positivos: %d\n", contPositivo);
    printf("Numeros negativos que sao pares: %2d\n", contNegPares);
    printf("A media dos numeros divisiveis por 3: %.1f", media);

    return 0;
}
