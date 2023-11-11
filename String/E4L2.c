/*
4) Fazer funções para:
a) Contar as palavras de uma string.
b) Mostrar o primeiro caractere de cada palavra de uma string.
c) Mostrar o último caractere de cada palavra de uma string.
Usando as funções criadas, elabore um programa que receba uma string de até 100 caracteres e forneça a
quantidade de palavras da string, mostre o primeiro caractere de cada palavra da string e mostre o último
caractere de cada palavra da string. O programa também deverá copiar a primeira palavra da string para uma
outra string e imprimi-la.
Por exemplo (os traços representam os espaços):
String informada: -Universidade---Tecnologica--Federal----do--Parana--
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int main()
{
    char opcao, texto[101];

    do
    {
        fflush(stdin);
        printf("Informe uma string de ate 100 caracteres: \n");
        gets(texto);
        contarPalavras(texto);
        printf("\n");
        primeiraLetra(texto);
        printf("\n");
        ultimaLetra(texto);
        printf("\n");
        primeiraPalavra(texto);
        printf("\n");
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

