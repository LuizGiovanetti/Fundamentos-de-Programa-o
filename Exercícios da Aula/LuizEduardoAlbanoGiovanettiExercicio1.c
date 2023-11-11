#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <strings.h>

void vetorIntLim(int vet[], int tam, int limSup, int limInf);
void mostrarVetInt(int vet[], int tam);
void ordenarVetInt(int vet[], int tam);
int main()
{
    char opcao;
    int i, j, k, limSup, limInf, vet[10], matriz[4][3];
    do
    {
        printf("Caracteres minusculos da tabela ASCCI 97 ate 122.\n");
        do
        {
            printf("Informe um valor para o limite inferior: ");
            scanf("%d", &limInf);
            if(limInf<=0)
            {
                printf("Valor invalido.\n");
            }
        }while(limInf<=0);
        do
        {
            printf("Informe um valor para o limite superior: ");
            scanf("%d", &limSup);
            if(limSup<=limInf)
            {
                printf("Valor invalido.\n");
            }
        }while(limSup<=limInf);
        vetorIntLim(vet, 10, limSup, limInf);
        printf("\n===>VETOR ORDENADO<===\n");
        ordenarVetInt(vet, 10);
        mostrarVetInt(vet, 10);

        matrizIntLim(4, 3, matriz, limSup, limInf);
        printf("\n\n===>MATRIZ<===\n");
        mostrarMatrizInt(4, 3, matriz);
        j=0;
        int vetSemRep[j];
        for(i=0; i<10; i++)
        {
            if(vet[i]!=vet[i+1])
            {
                if(ocorreNaMatriz(4, 3, matriz, vet[i])!=0)
                {
                    vetSemRep[j]=vet[i];
                    j++;
                }
            }
        }

        printf("\n===>ELEMENTOS DO VETOR QUE EXISTEM NA MATRIZ<===\n");
        mostrarVetInt(vetSemRep, j);

        char string[j];
        k=0;
        for(i=0; i<j; i++)
        {
            string[k]=vetSemRep[k];
            k++;
        }
        string[k]='\0';
        printf("\n\n===>STRING<===\n");
        fflush(stdin);
        puts(string);
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

void vetorIntLim(int vet[], int tam, int limSup, int limInf)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vet[i] = rand() % (limSup-limInf+1) + limInf;//complementar
    }
}

void mostrarVetInt(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
}

void ordenarVetInt(int vet[], int tam)
{
    int ult, aux, i;
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

void matrizIntLim(int linha, int coluna, int matriz[linha][coluna], int limSup, int limInf)
{
    int i, j;
    srand(time(NULL));
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriz[i][j] = rand() % (limSup-limInf+1) + limInf + 1; //complementar
        }
    }
}

void mostrarMatrizInt(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int ocorreNaMatriz(int linha, int coluna, int matriz[linha][coluna], int num)
{
    int i, j, cont=0;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(matriz[i][j]==num)
            {
                cont++;
            }
        }
    }
    return cont;
}
