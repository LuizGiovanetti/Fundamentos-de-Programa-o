int calcularFatorial(int a)
{
    int fat=1, i;
    for(i=a; i>=1; i--)
    {
        fat=fat*i;
    }
    return fat;
}

void mostrarFatorial(int a)
{
    int i;
    printf("%d! = ", a);
    for(i=a; i>=2; i--)
    {
        printf("%d * ",i);
    }
    printf("1 = %d\n", calcularFatorial(a));
}
