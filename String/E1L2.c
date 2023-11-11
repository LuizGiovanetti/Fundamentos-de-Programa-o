/*
1) Ler uma string e contar quantos espaços sucessivos ela contém. Armazenar esses valores em um vetor.
Mostrar esse vetor.
Por exemplo (os traços representam os espaços):
String informada: -Universidade---Tecnologica--Federal----do--Parana--
Vetor gerado: 1 3 2 4 2 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char opcao, texto[101];
    int i, contEsp, j, vetor[101];
    do
    {
        fflush(stdin);
        printf("Informe um texto de ate 100 caracteres:\n");
        gets(texto);
        i=0, contEsp=0, j=0;
        while(texto[i]!='\0')
        {
            if(texto[i]==' ')
            {
                contEsp++;
                if(texto[i+1]!=' ')
                {
                    vetor[j]=contEsp;
                    contEsp=0;
                    j++;
                }
            }
            i++;
        }
        printf("===>VETOR<===\n");
        for(i=0; i<j; i++)
        {
            printf("%d ", vetor[i]);
        }
        do
        {
            printf("\nDeseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
            {
                printf("Caracter invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
    }while(opcao=='s' || opcao=='S');
    return 0;
}
