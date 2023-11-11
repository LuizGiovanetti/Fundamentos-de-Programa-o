/*
6) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um
número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar
para não fazer divisão por zero no cálculo da média.
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
