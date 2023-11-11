/*
3) Use a função criada no exercício anterior para mostrar todos os números felizes existentes no intervalo de
1 até 500.
*/
#include <stdio.h>
#include "numFeliz.h"

int main()
{
    int i;
    for(i=1; i<=500; i++)
    {
        numFeliz(i);
    }
    return 0;
}
//esse proximo era pra calcular a quantidade de numeros felizes, e n felizes q tem no intervalo de 1 ate 500, mas estava sempre mandando 500 nos numeros tristes
/*int main()
{
    int i, contFeliz=0, contTris=0;
    for(i=1; i<=500; i++)
    {
        numFeliz(i);
        contFelizes(i);
        if(contFelizes(i)==1)
        {
            contFeliz++;
        }
        contTristes(i);
        if(contTristes(i)==1)
        {
            contTris++;
        }

    }
    printf("%d, numeros felizes.\n", contFeliz);
    printf("%d, numeros nao felizes.\n", contTris);
    return 0;
}*/

