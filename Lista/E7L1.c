/*
7) Desafio: Strings que gaguejam
Criar uma função que duplique cada vogal da string
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char opcao, texto[51], texto2[51];
    int i, j, k;
    do
    {
        do
        {
            fflush(stdin);
            printf("Informe um texto, de ate 50 caracteres:\n");
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
        for(j=0; j<i; j++)
        {
            if(texto[j]=='a' || texto[j]=='e' || texto[j]=='i' || texto[j]=='o' || texto[j]=='u' || texto[j]=='A' || texto[j]=='E' || texto[j]=='I' || texto[j]=='O' || texto[j]=='U')
            {
                i++;
            }
        }
        texto[i];
        texto2[i];
        k=0;
        for(j=0; j<i; j++)
        {
            if(texto[j]!='\0')
            {
                texto2[k]=texto[j];
                k++;
            }
            if(texto[j]=='a' || texto[j]=='e' || texto[j]=='i' || texto[j]=='o' || texto[j]=='u' || texto[j]=='A' || texto[j]=='E' || texto[j]=='I' || texto[j]=='O' || texto[j]=='U')
            {
                texto2[k]=texto[j];
                k++;
            }
        }
        texto2[k]='\0';
        for(j=0; j<k; j++)
        {
            texto[j]=texto2[j];
        }
        puts(texto);
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
