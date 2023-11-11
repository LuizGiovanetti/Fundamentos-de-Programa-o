#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int qntdeSemEspacos(char texto[]);
int qntdeComEspacos(char texto[]);
int espaco(char texto[]);
int main()
{
    char texto[151];
    printf("Informe um texto de ate 150 caracteres: \n");
    gets(texto);
    printf("\nQuantidade de caracteres com espacos: %d\n", qntdeComEspacos(texto));
    printf("\nQuantidade de caracteres sem espacos: %d\n", qntdeSemEspacos(texto));
    printf("\nQuantidade de espacos: %d\n", espaco(texto));

    return 0;
}

int qntdeComEspacos(char texto[])
{
    int i=0;
    while(texto[i]!='\0')
    {
        i++;
    }
    return i;
}

int qntdeSemEspacos(char texto[])
{
    int i=0, cont=0;
    while(texto[i]!='\0')
    {
        if(texto[i]!=' ')
        {
            cont++;
        }
        i++;
    }
    return cont;
}

int espaco(char texto[])
{
    int i=0, cont=0;
    while(texto[i]!='\0')
    {
        if(texto[i]==' ')
        {
            cont++;
        }
        i++;
    }
    return cont;
}
