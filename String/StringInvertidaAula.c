#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[20] = "Linguagem C";
    char string2[20];
    int i=0, j=0;
    printf("String 1: %s\n", string);
    while(string[i]!='\0')
    {
        i++;
    }
    printf("Tamanho da string: %d\n", i);
    i = i-1;
    for(i; i>=0; i--)
    {
        string2[j]=string[i];
        j++;
    }
    string2[j]='\0';
    printf("String invertida: %s\n", string2);
    return 0;
}
