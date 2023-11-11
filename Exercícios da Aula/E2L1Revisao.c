/*
2) Ler uma string e copiar o valor decimal do código ASCII de cada elemento da string para um vetor. Mostrar
o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Percorrer o vetor ordenado contando, sem repetição, os
números pares e os números ímpares e mostrar a soma total desses valores. Criar um vetor chamado vPares
e um vetor chamado vImpares e copiar, sem repetição, os elementos pares e ímpares para os respectivos
vetores. Mostrar os dois vetores. Criar uma matriz chamada mPares e uma matriz chamada mImpares, sendo
que mPares deverá conter na primeira coluna todos os elementos pares do vetor e na segunda coluna a
quantidade de ocorrências de cada elemento par no vetor e na matriz mImpares fazer o mesmo com os
elementos ímpares. Mostrar as duas matrizes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int ocorreNoVetor(int vet[], int tam, int num);
void ordenarVetor(int vet[], int tam);
void mostrarVetorInt(int vet[], int tam);
void transformarASCCI(char text[], int tam, int vet[]);
void mostrarMatrizInt(int linha, int coluna, int matriz[linha][coluna]);
int main()
{
    char opcao, texto[51];
    int vet[50], i, vetPar[50], vetImpar[50], j, k, s, matrizPar[50][2], matrizImpar[50][2], cont;
    do
    {
        do
        {
            fflush(stdin);
            printf("Informe um texto de ate 50 caracteres:\n");
            gets(texto);
            i=0;
            while(texto[i]!='\0')
            {
                i++;
            }
            if(i>50)
            {
                printf("Excedeu a quantidade de caracteres.\n");
            }
        }while(i>50);
        vet[i];
        printf("\n===>VETOR<===\n");
        transformarASCCI(texto, i, vet);
        mostrarVetorInt(vet, i);
        printf("\n\n===>VETOR ORDENADO<===\n");
        ordenarVetor(vet, i);
        mostrarVetorInt(vet, i);
        printf("\n");
        k=0;
        s=0;
        for(j=0; j<i; j++)
        {
            if(vet[j]!=vet[j+1])
            {
                if(vet[j]%2==0)
                {
                    vetPar[k]=vet[j];
                    k++;
                }
                else
                {
                    vetImpar[s]=vet[j];
                    s++;
                }
            }
        }
        if(k!=0)
        {
            printf("\nNumeros pares, sem repeticao: %d\n", k);
        }
        if(s!=0)
        {
            printf("\nNumeros impares, sem repeticao: %d\n", s);
        }
        if(k!=0)
        {
            printf("\n===>VETOR PAR<===\n");
            mostrarVetorInt(vetPar, k);
        }
        if(s!=0)
        {
            printf("\n\n===>VETOR IMPAR<===\n");
            mostrarVetorInt(vetImpar, s);
        }
        cont=0;
        k=0;
        s=0;
        for(j=0; j<i; j++)
        {
            if(vet[j]!=vet[j+1])
            {
                if(vet[j]%2==0)
                {
                    matrizPar[k][0]=vet[j];
                    matrizPar[k][1]=ocorreNoVetor(vet, i, vet[j]);
                    k++;
                }
                else
                {
                    matrizImpar[s][0]=vet[j];
                    matrizImpar[s][1]=ocorreNoVetor(vet, i, vet[j]);
                    s++;
                }
            }
        }
        if(k!=0)
        {
            printf("\n\n===>MATRIZ PARES<===\n");
            printf("PARES   OCORRENCIA\n");
            mostrarMatrizInt(k, 2, matrizPar);
        }
        if(s!=0)
           {
                printf("\n===>MATRIZ IMPARES<===\n");
                printf("IMPARES OCORRENCIA\n");
                mostrarMatrizInt(s, 2, matrizImpar);
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

void transformarASCCI(char text[], int tam, int vet[])
{
    int i;
    for(i=0; i<=tam; i++)
    {
        vet[i]=text[i];
    }
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

int ocorreNoVetor(int vet[], int tam, int num)
{
    int i, cont=0;
    for(i=0; i<tam; i++)
    {
        if(vet[i]==num)
        {
            cont++;
        }
    }
    return cont;
}

void mostrarMatrizInt(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
