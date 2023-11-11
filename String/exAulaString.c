#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[20] = "Linguagem C";
    char string2[20];
    int i;
    for(i=0; string[i]!='\0'; i++)
    {
        string2[i]=string[i];
    }
    string2[i]='\0';
    puts(string2);
    return 0;
}
