#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void mostrarVetInt(int vet[], int tam);
void ordenarVetInt(int vet[], int tam);
void mostrarMatrizInt(int linha, int coluna, int matriz[linha][coluna]);
int main()
{
    char opcao, texto[51];
    int i, j, tamVet, contEsp, tamText, contSeq, linhaMatriz, fat;
    do
    {
        do
        {
            fflush(stdin);//Para limpar na segunda inicialização do programa
            printf("Informe uma string de ate 50 caracteres:\n");
            gets(texto);
            i=0;
            contEsp=0;
            while(texto[i]!='\0')
            {
                if(texto[i]==' ')
                {
                    contEsp++;
                }
                i++;
            }
            if(i>50)
            {
               printf("Excedeu a quantidade de caracteres.\n");
            }
            if(contEsp==i)
            {
                printf("A string so ontem espacos, por favor informe uma nova string.\n");
            }
        }while(i>50 || contEsp==i);

        tamText=i;
        texto[tamText];
        int vetEsp[contEsp];
        if(contEsp!=0)
        {
            printf("\n===>VETOR ESPACOS<===\n");
        }
        contEsp=0;
        tamVet=0;
        for(i=0; i<tamText; i++)
        {
            if(texto[i]==' ')
            {
                contEsp++;
                if(texto[i]==' ' && texto[i+1]!=' ')
                {
                    vetEsp[tamVet]=contEsp;
                    contEsp=0;
                    tamVet++;
                }
            }
        }

        mostrarVetInt(vetEsp, tamVet);

        contSeq=0;
        for(i=0; i<tamVet; i++)
        {
            if(tamVet<3)
            {
                break;
            }
            if(vetEsp[i]<vetEsp[i+1] && vetEsp[i+1]<vetEsp[i+2] && i+2<tamVet)
            {
                if(contSeq==0)//Primeira interação de sequencias.
                {
                    printf("\n\n===>SEQUENCIAS<===\n");
                }
                printf("%d%d%d ", vetEsp[i], vetEsp[i+1], vetEsp[i+2]);
                contSeq++;
            }
        }
        if(contSeq==0)
        {
            printf("\n\nNao ha sequencias crescente de espaco na string.");
        }

        if(tamVet!=0)
        {
            printf("\n\n===>VETOR ORDENADO<===\n");
            ordenarVetInt(vetEsp, tamVet);
            mostrarVetInt(vetEsp, tamVet);

            printf("\n\n===>MATRIZ<===\n");
            linhaMatriz=0;
            int matriz[linhaMatriz][2];
            for(i=0; i<tamVet; i++)
            {
                if(vetEsp[i]!=vetEsp[i+1])
                {
                    matriz[linhaMatriz][0]=vetEsp[i];
                    linhaMatriz++;
                }
            }
            fat=1;//Igual a 1 pra n zerar hora de multiplicar.
            for(i=0; i<linhaMatriz; i++)
            {
                for(j=matriz[i][0]; j>1; j--)
                {
                    fat=fat*j;
                }
                matriz[i][1]=fat;
                fat=1;
            }
            mostrarMatrizInt(linhaMatriz, 2, matriz);
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
