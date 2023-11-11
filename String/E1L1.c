/*
1) Ler uma string de até 100 caracteres, contar e exibir a quantidade de cada uma das vogais existentes
nessa string. Armazenar essas quantidades em um vetor. É indispensável armazenar a quantidade no vetor à
medida que a string é percorrida na forma vetVogais[indice]++. Portanto, o vetor que armazena a
quantidade de vogais deve ser inicializado com zero antes de ser utilizado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[101], opcao;
    do
    {
        int i=0, vogal[5], j=0, contA=0, contE=0, contI=0, contO=0, contU=0;
        fflush(stdin);
        printf("Informe um texto de ate 100 caracteres: \n");
        gets(texto);
        while(texto[i]!='\0')
        {
            if(texto[i]=='a' || texto[i]=='A')
            {
                contA++;
            }
            else if(texto[i]=='e' || texto[i]=='E')
            {
                contE++;
            }
            else if(texto[i]=='i' || texto[i]=='I')
            {
                contI++;
            }
            else if(texto[i]=='o' || texto[i]=='O')
            {
                contO++;
            }
            else if(texto[i]=='u' || texto[i]=='U')
            {
                contU++;
            }
            i++;
        }
        for(j=0; j<5; j++)
        {
            if(j==0)
            {
                vogal[j]=contA;
            }
            else if(j==1)
            {
                vogal[j]=contE;
            }
            else if(j==2)
            {
                vogal[j]=contI;
            }
            else if(j==3)
            {
                vogal[j]=contO;
            }
            else if(j==4)
            {
                vogal[j]=contU;
            }
        }
        printf("VOGAL\tQUANTIDADE\n==================\n");
        printf("A/a\t    %.2d\n", contA);
        printf("E/e\t    %.2d\n", contE);
        printf("I/i\t    %.2d\n", contI);
        printf("O/o\t    %.2d\n", contO);
        printf("U/u\t    %.2d\n",contU);
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
