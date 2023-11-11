/*
3) Ler uma string e armazenar em um vetor o valor decimal ASCII apenas dos caracteres que fazem parte do
alfabeto. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Em uma segunda string, armazenar os
caracteres ordenados do vetor e mostrar a string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void mostrarVetorInt(int vet[], int tam);
void ordenarVetor(int vet[], int tam);
int main()
{
    char opcao, texto[51];
    int i, tam;
    do
    {
        do
        {
            fflush(stdin);
            printf("Informe uma string de ate 50 caracteres:\n");
            gets(texto);
            i=0;
            while(texto[i]!='\0')
            {
                i++;
            }
            if(i>50)
            {
                printf("Excedeu o limite de caracteres da string.\n");
            }
        }while(i>50);
        tam=i;
        int vet[tam];
        for(i=0; i<tam; i++)
        {
            if(texto[i]>='a' && texto[i]<='z' || texto[i]>='A' && texto[i]<='Z')
            {
                vet[i]=texto[i];
            }
        }
        printf("===>VETOR<===\n");
        mostrarVetorInt(vet, tam);
        ordenarVetor(vet, tam);
        printf("\n===>VETOR ORDENADO<===\n");
        mostrarVetorInt(vet, tam);
        char texto2[tam+1];
        for(i=0; i<tam; i++)
        {
            texto2[i]=vet[i];
        }
        texto2[i]='\0';
        printf("\nString 2:\n");
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

void mostrarVetorInt(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
}

void ordenarVetor(int vet[], int tam)
{
    int i, aux, ult;
    for(ult=tam-1; ult>0; ult--)
    {
        for(i=0; i<ult; i++)
        {
            if(vet[i]>vet[i+1])
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }
}
