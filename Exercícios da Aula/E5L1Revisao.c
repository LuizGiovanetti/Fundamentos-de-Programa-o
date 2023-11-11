/*
5) Fazer um programa que mostra os caracteres repetidos de uma string.
Exemplo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char opcao, texto[51];
    int i, j, tam, aux;
    do
    {
        do
        {
            fflush(stdin);
            printf("Informe uma string de ate 50 caracters:\n");
            gets(texto);
            i=0;
            while(texto[i]!='\0')
            {
                i++;
            }
        }while(i>50);
        tam=i;
        int vet[tam];
        char texto2[tam];
        for(i=0; i<tam; i++)
        {
            vet[i]=texto[i];
        }
        for(i=tam-1; i>0; i--)
        {
            for(j=0; j<i; j++)
            {
                if(vet[j]>vet[j+1])
                {
                    aux=vet[j];
                    vet[j]=vet[j+1];
                    vet[j+1]=aux;
                }
            }
        }
        int repet[j];
        j=0;
        for(i=0; i<tam; i++)
        {
            if(vet[i]!=vet[i+1])
            {
                repet[j]=vet[i];
                j++;
            }
        }
        for(i=0; i<j; i++)
        {
            texto2[i]=repet[i];
        }
        texto2[tam]='\0';
        puts(texto2);
        do
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
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
