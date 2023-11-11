/*
4) Na biblioteca "vetores.h" criar fun��o:
a) Com o prot�tipo void gerarVetorCharMinuscula(char vetor[], int tam) para
gerar caracteres alfab�ticos min�sculos em um vetor. Use vetor[i] = rand() % 26 + 97;
Explicando: A fun��o rand() % 26 gera um n�mero aleat�rio entre 0 e 25, que somado com 97 equivale a um
valor entre 97 a 122, que se refere aos caracteres alfab�ticos min�sculos da tabela ASCII.
b) Com o prot�tipo void gerarVetorCharMaiuscula(char vetor[], int tam) para
caracteres alfab�ticos mai�sculos. Use vetor[i] = rand() % 26 + 65;
Explicando: A fun��o rand() % 26 gera um n�mero aleat�rio entre 0 e 25, que somado com 65 equivale a um
valor entre 65 a 90, que se refere aos caracteres alfab�ticos mai�sculos da tabela ASCII.
c) Com o prot�tipo void mostrarVetorChar(char vetor[], int tam, int n) para
mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espa�o.
Usando essas fun��es:
a) Gerar um vetor com 100 caracteres alfab�ticos min�sculos.
b) Gerar um vetor com 200 caracteres alfab�ticos mai�sculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, sendo cada caractere deve ser
separado por um espa�o.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresS.h"
//a imagem de exemplo do exercicio pede pro usuario fazer a validacao de quantos caracteres � para ter por linha, entretanto o o item c do exercicio determina uma quantidade fixa.
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
