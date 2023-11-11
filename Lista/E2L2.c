/*
2) Ler uma string e criar uma função que receba a string e retorne quantas palavras a mesma possui. Criar
uma segunda função para contar quantas letras têm em cada palavra da string, armazenando essa contagem
em um vetor passado por parâmetro para a função (esse vetor terá como tamanho o número de palavras da
string). Na sequência, ordenar o vetor e mostrar o vetor. Construir uma matriz de n linhas e duas colunas,
sendo que n representa a quantidade de elementos do vetor (se o elemento ocorrer mais de uma vez,
considerar apenas uma ocorrência). Na segunda coluna da matriz armazenar a quantidade de divisores que o
elemento possui será armazenada. Percorrer a matriz mostrando os elementos das colunas 0 e 1 e
escrevendo “Sim” quando o elemento que está na coluna 0 for primo e “Não” caso contrário.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------
*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int contarPalavras(char texto[], int tam);
void contarLetras(int tam, int vet[tam],int tamText, char texto[tamText]);
void mostrarVet(int vet[], int tam);
int main()
{
    char opcao, texto[51];//Texto com 51 indices, pois o ultimo indice recebe o \0 quando é lido.
    int i, j, esp;
    do//Repetição do programa.
    {
        do//Validação do limite de caracteres da string.
        {
            fflush(stdin);//Limpar o buffer, para que não ocorra interferencia na segunda interação ou mais.
            printf("Informe uma string de ate 50 caracteres:\n");
            gets(texto);
            i=0;//Iniciar a variavel aqui, pois sempre que houver repetição no programa ele iria ficar acumulada.
            esp=0;
            while(texto[i]!='\0')//Contar a quantidade de caracteres no texto.
            {
                i++;
                if(texto[i]==' ')
                {
                    esp++;
                }
            }
            if(i>50)//Se i for maior que 50 quer dizer que o usuario informou um texto com caracteres a mais do que cabe na string.
            {
                printf("Excedeu o limite de caracteres.\n");
            }
            else if(i==0 || esp==i-1)//Se não houver nenhuma palavra na string ele informa essa frase. Ou se o texto for apenas de espaços.
            {
                printf("O texto nao contem nenhuma palavra, por favor informe uma string.\n");
            }
        }while(i>50 || i==0 || esp==i-1);
        printf("A string tem %d palavras.\n", contarPalavras(texto, i));
        j=contarPalavras(texto, i);
        printf("%d", j);
        int vet[j];
        contarLetras(j, vet, i, texto);
        printf("===>VETOR<===\n");
        mostrarVet(vet, j);

        do//Validar se o usuario informa apenas S ou N como resposta para reiniciar o programa.
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')//Se não for alguma dessas opções o programa informa que o caracter é invalido.
            {
                printf("Caracter invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
    }while(opcao=='s' || opcao=='S');
    return 0;
}

int contarPalavras(char texto[], int tam)
{
    int i, cont=0;
    for(i=0; i<tam; i++)
    {
        if(texto[i]==' ' && texto[i+1]!=' ' || texto[i]!=' ' && texto[i+1]=='\0')//Verificar se é uma palavra.
        {
            cont++;
        }
    }
    return cont;
}

void contarLetras(int tam, int vet[tam], int tamTex, char texto[tamTex])
{
    int i, j=0, cont=0, k=0;
    for(i=0; i<tamTex; i++)
    {
        if(texto[i]==' ' && texto[i+1]!=' ' || texto[i]!=' ' && texto[i+1]=='\0')
        {
            while(texto[1-j]!=' ' && texto[j+1]==' ')
            {
                vet[k]++;
                printf("%d  ", vet[k]);
                j++;
            }
        }

    }
}

void mostrarVet(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
}
