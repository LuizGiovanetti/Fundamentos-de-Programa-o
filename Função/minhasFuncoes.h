
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

int primo(int num)
{
    int i, contDiv=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            contDiv++;
            break;
        }
    }
    return contDiv;
}

void verificarPrimo(int a)
{
    if(primo(a)==0)
    {
        printf("O numero %d eh numero primo\n", a);
    }
    else
    {
        printf("O numero %d nao eh numero primo\n", a);
    }
}

int quadrado(int a)
{
    return a*a;
}

int soma(int a, int b)
{
    return a+b;
}

int multiplicacao(int a, int b)
{
    return a*b;
}

float divisao(int a, int b)
{
    float resultado;
    if(b==0 || a==0)
    {
        resultado = 0;
    }
    else
    {
        resultado = (float)a/b;
    }
    return resultado;
}

int divisores (int a)
{
    int i, contDiv=0;
    for(i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            contDiv++;
        }
    }
    return contDiv;
}

void mostrarQntDivisores(int a)
{
    if(divisores(a)==0)
    {
        printf("O numero %d nao tem divisores\n", a);
    }
    else
    {
        printf("O numero %d possui %d divisores\n", a, divisores(a));
    }
}

void mostrarDivisores(int a)
{
    int i;
    for(i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            printf("%d ", i);
        }
    }
}

void somaIntervalo(int a, int b)
{
    int i, j, contDiv, soma;
    for(i=a; i<=b; i++)
    {
        printf("%d ==> ", i);
        contDiv=0;
        soma=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                printf("%d ", j);
                soma=soma+j;
                contDiv++;
            }
        }
        printf("=> Quantidade divisores: %d => Soma: %d\n", contDiv, soma);
    }
}

void somaImpar(int a)
{
    int i, soma;
    soma=0;
    printf("%d = ", a);
    for(i=1; i<=a; i=i+2)
    {
        printf("%d ", i);
        soma=soma + i;
        if(soma==a)
        {
            printf("=> Equivale a soma dos imapares.\n");
            break;
        }
    }
    if(soma!=a)
        {
            printf("=> Nao equivale a soma dos impares.\n");
        }
}

void somaImparInter(int a, int b)
{
    int i, j, soma;
    for(i=a; i<=b; i++)
    {
        printf("%d = ", i);
        soma=0;
        for(j=1; j<=i; j=j+2)
        {
            printf("%d ", j);
            soma=soma + j;
        if(soma==i)
        {
            break;
        }
        }
        if(soma!=i)
        {
            printf("=> Nao equivale a soma dos impares.\n");
        }
        else
        {
            printf("=> Equivale a soma dos imapares.\n");
        }
    }
}
