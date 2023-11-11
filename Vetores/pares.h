void mostrarPares(int a)
{
    int i;
    for(i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i);
        }
    }
}

int somarPares(int a)
{
    int i, soma=0;
    for(i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            soma=soma+i;
        }
    }
    return soma;
}
