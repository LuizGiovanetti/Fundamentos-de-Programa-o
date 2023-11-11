/*
4) Na biblioteca "vetores.h" criar função:
a) Com o protótipo void gerarVetorCharMinuscula(char vetor[], int tam) para
gerar caracteres alfabéticos minúsculos em um vetor. Use vetor[i] = rand() % 26 + 97;
Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25, que somado com 97 equivale a um
valor entre 97 a 122, que se refere aos caracteres alfabéticos minúsculos da tabela ASCII.
b) Com o protótipo void gerarVetorCharMaiuscula(char vetor[], int tam) para
caracteres alfabéticos maiúsculos. Use vetor[i] = rand() % 26 + 65;
Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25, que somado com 65 equivale a um
valor entre 65 a 90, que se refere aos caracteres alfabéticos maiúsculos da tabela ASCII.
c) Com o protótipo void mostrarVetorChar(char vetor[], int tam, int n) para
mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espaço.
Usando essas funções:
a) Gerar um vetor com 100 caracteres alfabéticos minúsculos.
b) Gerar um vetor com 200 caracteres alfabéticos maiúsculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, sendo cada caractere deve ser
separado por um espaço.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresS.h"
//a imagem de exemplo do exercicio pede pro usuario fazer a validacao de quantos caracteres é para ter por linha, entretanto o o item c do exercicio determina uma quantidade fixa.
//abaixo foi resolvido da maneira q esta no exemplo da imagem com a validacao.
int main()
{
    char opcao, vetMin[100],vetMai[200];
    int linha;
    do
    {
        do
        {
            printf("Quantos caracteres deseja mostrar por linha? ");
            scanf("%d", &linha);
            if(linha<=0)
            {
                printf("Valor invalido.\n");
            }
        }while(linha<=0);
        printf("===>VETOR MINUSCULA<===\n");
        gerarVetorCharMinuscula(vetMin, 100);
        mostrarVetorChar(vetMin, 100, linha);
        printf("\n===>VETOR MAIUSCULA<===\n");
        gerarVetorCharMaiuscula(vetMai, 200);
        mostrarVetorChar(vetMai, 200, linha);
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
