/*
4) Ler uma string e contar os espaços em branco (sucessivos ou não) e armazenar a contagem em um vetor.
Mostrar o vetor. Percorrer o vetor copiando apenas os números que são primos para um novo vetor. Mostrar
o novo vetor (de números primos).
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "revisao.h"

int main()
{
    char opcao, texto[51];
    int i, j, vet[50], vetP[50], k, cont, s;
    do
    {
        fflush(stdin);
        printf("Informe um texto de ate 50 caracteres: \n");
        gets(texto);
        printf("\n===>STRING<===\n");
        puts(texto);
        i=0;
        while(texto[i]!='\0')
        {
            i++;
        }
        for(j=0; j<=i; j++)
        {
            vet[j]=0;
            vetP[j]=0;
        }
        k=0;
        for(j=0; j<=i; j++)
        {
            if(texto[j]==' ')
            {
                vet[k]++;
                if(texto[j+1]!=' ')
                {
                    k++;
                }
            }
        }
        printf("===>VETOR<===\n");
        mostrarVetorInt(vet, k);
        printf("\n===>PRIMOS<===\n");
        cont=0;
        s=0;
        for(j=0; j<=k; j++)
        {
            for(i=2; i<vet[j]; i++)
            {
                if(vet[j]%i==0)
                {
                    cont++;
                    break;
                }
            }
            if(cont==0)
            {
                vetP[s]=vet[j];
                s++;
            }
            cont=0;
        }
        s--;
        mostrarVetorInt(vetP, s);
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
