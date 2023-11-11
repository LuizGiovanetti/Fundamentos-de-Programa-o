#include <stdio.h>
#include <stdlib.h> //função rand() e RAND_MAX
#include <time.h> //utilizar a função srand

int main()
{
    int x, i;
    srand(time(NULL)); //inicializar o gerador de números aleatórios com um valor semente diferente a cada execução do programa

    printf("Intervalo de rand: [0 a %d]\n", RAND_MAX);

    for(i=0; i<10; i++)
    {
        x = rand()%10; //Gera números aleatórios entre 0 e 9; para incluir o 10 colocar %(10+1)
        printf("%d\n", x);
    }


    printf("%d\n", x);

    return 0;
}
