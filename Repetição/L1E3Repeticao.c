/*
3) Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo.
*/
#include <stdio.h>

int main()
{
    int incremento, numI, numF, impDiv=0, mudarV, i=0, cont=0;
    float media;

    printf("Informe o valor inicial do intervalo: ");
    scanf("%d", &numI);
    printf("Informe o valor final do intervalo: ");
    scanf("%d", &numF);
    printf("Informe o incremento: ");
    scanf("%d", &incremento);

    if(numF<numI)
    {
        mudarV = numF;
        numF = numI;
        numI = mudarV;
        for(i=numI; i<=numF; i=i+incremento)
        {
           printf("%d\n", i);

            if(i % 35 == 0)
            {
                impDiv = impDiv + i;
                cont++;
            }
        }
    }
    else
    {
        for(i=numI; i<=numF; i=i+incremento)
        {
            printf("%d\n", i);

            if(i % 35 == 0)
            {
                impDiv = impDiv + i;
                cont++;
            }
        }

    }

    media = (float)impDiv / cont;
    if(media==35)
    {
        printf("A media dos numeros impares que sao divisiveis por 35 eh: %.2f", media);
    }


    return 0;
}
