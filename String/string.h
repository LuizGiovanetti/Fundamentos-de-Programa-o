void verificarSubString(char a[], char subString[])
{
    int i, j, contS, contPart=0;
    for(i=0; i<contarString(a); i++)
    {
        contS=0;
        for(j=0; j<contarString(subString); j++)
        {
            if(subString[j]==a[i])
            {
                contS++;
                if(contS==contarString(subString))
                {
                    contPart++;
                }
            }
            i++;
        }
        i=i-contarString(subString);
    }
    i=0, j=0;
    if(contPart==0)
    {
        printf("A subString ");
        while(subString[j]!='\0')
        {
            printf("%c", subString[j]);
            j++;
        }
        printf(" nao faz parte da String: ");
        while(a[i]!='\0')
        {
            printf("%c", a[i]);
            i++;
        }
        printf(".\n");
    }
    else
    {
        printf("A subString ");
        while(subString[j]!='\0')
        {
            printf("%c", subString[j]);
            j++;
        }
        printf(" faz parte da String: ");
        while(a[i]!='\0')
        {
            printf("%c", a[i]);
            i++;
        }
        printf(".\n");
    }
}

int contarString(char sub[])
{
    int i=0;
    while(sub[i]!='\0')
    {
        i++;
    }
    return i;
}

void juntarString(char st1[], char st2[])
{
    int i=0;
    while(st1[i]!='\0')
    {
        printf("%c", st1[i]);
        i++;
    }
    i=0;
    printf(" ");
    while(st2[i]!='\0')
    {
        printf("%c", st2[i]);
        i++;
    }
}

void contarPalavras(char st1[])
{
    int i=0, contPalavra=0;
    printf("A string: ");
    while(st1[i]!='\0')
    {
        if(st1[i]!=' ' && st1[i+1]==' ' || st1[i]!=' ' && st1[i+1]=='\0')
        {
            contPalavra++;
        }
        printf("%c", st1[i]);
        i++;
    }
    printf(" - possui %d palavras.", contPalavra);
}

void primeiraLetra(char st1[])
{
    int i=0;
    printf("%c ", st1[i]);
    while(st1[i]!='\0')
    {
        if(st1[i]==' ' && st1[i+1]!=' ')
        {
            printf("%c ", st1[i+1]);
        }
        i++;
    }
}

void ultimaLetra(char st1[])
{
    int i=0;
    while(st1[i]!='\0')
    {
        if(st1[i]!=' ' && st1[i+1]==' ' || st1[i]!=' ' && st1[i+1]=='\0')
        {
            printf("%c ", st1[i]);
        }
        i++;
    }
}

void primeiraPalavra(char st1[])
{
    int i=0;
    while(st1[i]!=' ')
    {
        printf("%c", st1[i]);
        i++;
    }
}
