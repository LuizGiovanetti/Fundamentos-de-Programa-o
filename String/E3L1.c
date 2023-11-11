/*
3) Ler um texto de até 50 caracteres, copiar para um vetor somente a primeira palavra. Mostrar a string
armazenada.
Observação: Não esquecer de finalizar a string gerada (copiada).
Exemplo:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char opcao, texto1[51], textoCopia[51];
    do
    {
        fflush(stdin);
        printf("Informe um texto de ate 50 caracteres:\n");
        fflush(stdin);
        gets(texto1);
        int i=0, j=0, k;
        while(texto1[i]!='\0')
        {
            if(texto1[i]==' ')
            {
                break;
            }
            textoCopia[j]=texto1[i];
            j++;
            i++;
        }
        textoCopia[j];
        printf("Texto copiado: ");
        for(k=0; k<j; k++)
        {
            printf("%c", textoCopia[k]);
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
