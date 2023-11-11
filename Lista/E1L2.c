/*
1) Ler uma string e contar os espaços em branco que ocorrem no início, entre as palavras e no final da string,
e armazenar a contagem em um vetor. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Construir
uma matriz de n linhas e duas colunas, sendo que n representa a quantidade de elementos do vetor (se o
elemento ocorrer mais de uma vez, considerar apenas uma ocorrência). Na segunda coluna da matriz
armazenar a quantidade de repetições de cada elemento no vetor. Mostrar a matriz.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void ordenarVetor(int vet[], int tam);
void mostrarVetor(int vet[], int tam);
int ocorreNoVetor(int vet[], int tam, int num);
int main()
{
    char opcao, texto[51];
    int i, j, k, s, vet[50];
    do
    {
        do//verificar se a string tem a quantidade certa de caracteres.
        {
            fflush(stdin); //limpar o buffer quando faz a segunda volta do programa.
            printf("Escreva uma string de ate 50 caracteres:\n");
            gets(texto);
            i=0;
            while(texto[i]!='\0')
            {
                i++;
            }
            if(i>50)//se exceder os 50 caracteres aparece a mensagem.
            {
                printf("A string excedeu o limite de caracteres.\n");
            }
        }while(i>50);
        k=0;
        s=0;
        for(j=0; j<i; j++)//contar os espaços da string.
        {
            if(texto[j]==' ')//contar quando tem espaços.
            {
                k++;
                if(texto[j+1]!=' ')//se o caracter seguinte não for espaço, atribui k para o vetor, zera a variavel, e aumenta o indice do vetor.
                {
                    vet[s]=k;
                    k=0;
                    s++;
                }
            }
        }
        vet[s];//deixar o vetor com a quantidade de indices.
        if(s>0)
        {
            printf("===>VETOR<===\n");
            mostrarVetor(vet, s),
            printf("\n===>VETOR ORDENADO<===\n");
            ordenarVetor(vet, s);
            mostrarVetor(vet, s);
            printf("\n===>MATRIZ<===\n");
            j=0;
            i=0;
            for(k=0; k<s; k++)//contar as linhas para a matriz.
            {
                if(vet[k]!=vet[k+1])//se vetor no indice k for diferente dele no proximo indice, aumenta o j;
                {
                    j++;
                }
            }
            int matriz[j][2];//sendo j a quantidade de linhas da matriz.
            for(k=0; k<s; k++)//verificar quantas vezes o numero se repete no vetor.
            {
                if(vet[k]!=vet[k+1])//para não fazer a verificação do mesmo numero.
                {
                    matriz[i][0]=vet[k];//primeira coluna da matriz recebe o valor do numero.
                    matriz[i][1]=ocorreNoVetor(vet, s, vet[k]);//segunda coluna da matriz recebe a quantidade de ocorrencia desse numero.
                    printf("%d\t %d\n", matriz[i][0], matriz[i][1]);//imprimir a linha da matriz.
                    i++;

                }
            }
        }
        else
        {
            printf("A string nao contem espacos.\n");
        }
        do//validar se a pessoa quer continuar no programa, aceitando apenas s, S, n, N como resposta.
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
void ordenarVetor(int vet[], int tam)
{
    int i, ult, aux;
    for(ult=tam-1; ult>0; ult--)//faz a varredura do final ate o começo.
    {
        for(i=0; i<ult; i++)//vai do começo ate o final.
        {
            if(vet[i]>vet[i+1])//se o vetor no indice i for maior que o vetor seguinte o valor é trocado.
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }
}

void mostrarVetor(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)//imprimir o valor do vetor.
    {
        printf("%d ", vet[i]);
    }
}

int ocorreNoVetor(int vet[], int tam, int num)//função que retorna inteiro, pois vai voltar o valor da variavel contadora.
{
    int i, cont=0;
    for(i=0; i<tam; i++)
    {
        if(vet[i]==num)//se o vetor no indice i for igual ao número, aumenta a variavel contadora.
        {
            cont++;
        }
    }
    return cont;//retorna a variavel para a main.
}
