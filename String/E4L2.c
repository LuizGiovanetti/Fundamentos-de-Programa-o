/*
4) Fazer fun��es para:
a) Contar as palavras de uma string.
b) Mostrar o primeiro caractere de cada palavra de uma string.
c) Mostrar o �ltimo caractere de cada palavra de uma string.
Usando as fun��es criadas, elabore um programa que receba uma string de at� 100 caracteres e forne�a a
quantidade de palavras da string, mostre o primeiro caractere de cada palavra da string e mostre o �ltimo
caractere de cada palavra da string. O programa tamb�m dever� copiar a primeira palavra da string para uma
outra string e imprimi-la.
Por exemplo (os tra�os representam os espa�os):
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

