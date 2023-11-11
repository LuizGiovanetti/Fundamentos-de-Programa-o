/*
4) Fazer uma função que recebe duas strings e retorna 1 se elas são iguais ou 0, caso sejam diferentes.
Elaborar um programa que leia uma palavra, armazene o seu inverso em outra string e determine se a
mesma representa um palíndromo ou não, usando a função que compara strings. Exemplos de palavras
palíndromos: ovo, natan, sos, arara, mirim, anilina, ana.
Exemplo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char opcao, palavra[47], verificarPalin[47];
    int contPalin;
    do
    {
        printf("Informe uma palavra pra verificar se eh palindromo: ");
        fflush(stdin);
        gets(palavra);
        int j=0, i=0, k=0, s=0;
        while(palavra[i]!='\0')
        {
            i++;//para contar as palavras
            s++;//para auxiliar dps
        }
        i--;//para sair do indice \0
        printf("Inverso da palavra: ");
        while(palavra[i]!='\0')//comeca de tras para frente
        {
            verificarPalin[j]=palavra[i];
            printf("%c", verificarPalin[j]);
            j++;
            i--;
        }
        verificarPalin[j];
        j=0, contPalin=0;
        while(palavra[k]!='\0')
        {
            if(palavra[k]==verificarPalin[j])
            {
                if(k==s-1)
                {
                    contPalin++;
                }
            }
            else
            {
                contPalin++;
            }
            j++;
            k++;
        }
        if(contPalin<=1)
        {
            printf("\nEh palindromo.\n");
        }
        else
        {
            printf("\nNao eh palindromo.\n");
        }
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
