/*
3) A figura a seguir representa uma �rvore de decis�o para identificar se um paciente est� saud�vel ou
doente. Elabore um programa que implementa essa �rvore de decis�o.
*/
#include <stdio.h>

int main()
{
    char escolha;
    int temp;

    printf("O paciente se sente bem? \n");
    scanf("%c", &escolha);
    if(escolha=='sim' || escolha=='s' || escolha=='S' || escolha=='Sim')
    {
        printf("saudavel");
    }
    else if(escolha=='nao' || escolha=='n' || escolha=='N' || escolha=='Nao')
    {
        printf("O paciente tem dores? \n");
        fflush(stdin);
        scanf("%c", &escolha);
        if(escolha=='sim' || escolha=='s' || escolha=='S' || escolha=='Sim')
        {
            printf("O paciente esta doente.");
        }
        else if(escolha=='nao' || escolha=='n' || escolha=='N' || escolha=='Nao')
        {
            fflush(stdin);
            printf("Qual a temperatura do paciente?\n");
            scanf("%d", &temp);
            if(temp>37)
            {
                printf("O paciente esta doente.");
            }
            else if(temp<=37)
            {
                printf("O paciente esta saudavel.");
            }
            else
            {
                printf("Caracter invalido.");
            }
        }
        else
        {
            printf("Caracter invalido.");
        }
    }
    else
    {
        printf("Caracter invalido.");
    }
    return 0;
}
