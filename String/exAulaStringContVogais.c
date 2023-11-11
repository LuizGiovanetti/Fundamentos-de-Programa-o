#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char texto[20]="Linguagem C", texto1[11]="aeiouAEIOU";
    int i=0, j, contVogais=0;
    puts(texto);
    while(texto[i]!='\0')
    {
        for(j=0; texto1[j]!='\0'; j++)
        {
            if(texto[i]==texto1[j])
            {
                contVogais++;
                break;
            }
        }
        /*if(texto[i]=='a' || texto[i]=='A' || texto[i]=='E' || texto[i]=='e' || texto[i]=='I' || texto[i]=='i' || texto[i]=='o' || texto[i]=='O' || texto[i]=='U' || texto[i]=='u')
        {
            contVogais++;
        }*/
        i++;
    }
    printf("Existem %d vogais.\n", contVogais);
    return 0;
}
