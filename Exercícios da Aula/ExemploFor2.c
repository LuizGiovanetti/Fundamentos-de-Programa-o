/*
Apresentar a soma dos numeros pares e o produto dos numeros impares na faixa de 0 a 10.
*/
#include <stdio.h>

int main()
{
    int somaPar=0, i, somaImp=0, produto=1, qntPar=0, qntImp=0; //variáveis acumuladoras tem q ter valor atribuido de inicio.
    float mediaPar, mediaImp;

    for(i=0; i<=10; i++)
    {
        if(i%2==0)
        {
            printf("%d\t", i);
            somaPar = somaPar + i; //soma é variável acumuladora.
            qntPar++; // == qntPar = qntPar + 1;
        }
    }

    printf("\nSoma dos pares: %d\n", somaPar);
    printf("Quantidade dos pares: %d\n", qntPar);
    mediaPar = (float)somaPar / qntPar;
    printf("Media dos numeros pares: %.2f\n", mediaPar);
    printf("O produto dos numeros impares:\n");

    for(i=1; i<=10; i++)
    {
        if(i%2!=0)
        {
            printf("%d\t", i);
            produto = produto * i;
            qntImp++;
            somaImp = somaImp + i;
        }
    }
    printf("\nSoma dos Impares: %d\n", somaImp);
    printf("Produto dos numeros impares: %d\n", produto);
    printf("Quantidade dos impares: %d\n", qntImp);
    mediaImp = (float)somaImp / qntImp ;
    printf("Media dos numeros impares: %.2f", mediaImp);

    return 0;
}
