/*
4) Ler caracteres e parar quando o usu�rio informar o caractere '0'. Utilizando a tabela ASCII contar quantos caracteres s�o letras
mai�sculas, quantos s�o letras min�sculas e quantos caracteres n�o s�o letras. Sugest�o: utilizar o c�digo num�rico para comparar
(A equivale a 65, B a 66...).
*/
#include <stdio.h>

int main()
{
    int maiuscula=0, minuscula=0, naoLetras=0;
    char ch;

   do
   {
       printf("Informe um caracter: ");
       fflush(stdin);
       scanf("%c", &ch);
       if(ch!='0')
       {
           if(ch>=65 && ch<=90)
           {
               maiuscula++;
           }
           else if(ch>=97 && ch<=122)
           {
                minuscula++;
           }
           else
           {
               naoLetras++;
           }
       }

   }while(ch!='0');

    printf("Foram digitadas %d letras maiusculas.\n", maiuscula);
    printf("Foram digitadas %d letras minusculas.\n", minuscula);
    printf("Foram digitados %d caracteres nao letra.\n", naoLetras);

    return 0;
}
