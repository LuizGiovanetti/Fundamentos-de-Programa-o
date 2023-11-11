/*
2) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que atende
essa condição. Esse número representa a quantidade de números ímpares a serem mostrados. Apresentar
esses valores n por linha, sendo n um número maior que zero, informado pelo usuário. Os valores são
apresentados separados por tabulação. Fazer a média dos números ímpares mostrados.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int num, linha, i, contImpar, soma;
    float media;

    do
    {
        do
        {
            printf("Informe o numero de impares que deseja mostrar: ");
            scanf("%d", &num);
            if(num<=0)
            {
                printf("Valor invalido.\n");
            }
        }while(num<=0);

        do
        {
            printf("Quantos impares por linha deseja mostrar: ");
            scanf("%d", &linha);
            if(linha<=0)
            {
                printf("Valor invalido.\n");
            }
        }while(linha<=0);

        soma=0;
        contImpar=0;
        for(i=1; contImpar<num; i=i+2)
        {
            if(contImpar%linha==0)
            {
                printf("\n");
            }
            printf("%.2d ", i);
            contImpar++;
            soma=soma+i;
        }

        media=(float)soma/contImpar;
        printf("\n\nA media dos impares eh: %.2f\n", media);

        printf("\nDeseja repetir o programa [S/s]: \n");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao=='s' || opcao=='S');
    return 0;
}
