#include <stdio.h>
#include <stdlib.h>
#include <string.h> //utiliza o gets

int main()
{
    char texto[20];
    char texto2[20]={'P', 'r', 'o', 'g', 'r', 'a', 'm', 'a', 'c', 'a', 'o', '\0'} ;// ou, nao precisa de colchetes, so as aspas "Programacao".
    printf("Informe uma palavra: ");
    //scanf("%[^\n]s", texto); //%s lê uma sequência de caracteres ate encontrar o espaço. [^\n] lê ate quebrar a linha, usar o enter. nao precisa de & pois faz a leitura do vetor inteiro.
    gets(texto); //faz a leitura do texto ate o enter.
    //printf("%s", texto);
    puts(texto); //faz a impressao do texto.
    puts(texto2);
    return 0;
}
