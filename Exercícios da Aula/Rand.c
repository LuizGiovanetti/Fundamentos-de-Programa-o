#include <stdio.h>
#include <stdlib.h> //fun��o rand() e RAND_MAX
#include <time.h> //utilizar a fun��o srand

int main()
{
    int x, i;
    srand(time(NULL)); //inicializar o gerador de n�meros aleat�rios com um valor semente diferente a cada execu��o do programa

    printf("Intervalo de rand: [0 a %d]\n", RAND_MAX);

    for(i=0; i<10; i++)
    {
        x = rand()%10; //Gera n�meros aleat�rios entre 0 e 9; para incluir o 10 colocar %(10+1)
        printf("%d\n", x);
    }


    printf("%d\n", x);

    return 0;
}
