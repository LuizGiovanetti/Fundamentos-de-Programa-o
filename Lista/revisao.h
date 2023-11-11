void gerarVetorIntde1aLimiteSemRep(int vet[], int tam, int lim)
{
    int i, j;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vet[i] = rand() % lim + 1;
        for(j=0; j<i; j++)
        {
            if(vet[i] == vet[j])
            {
                i--;
                break;
            }
        }
    }
}

void mostrarVetorInt(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
}

int verificarPrimo(int num)
{
    int i, cont=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            cont++;
            break;
        }
    }
    if(cont==1)
    {
        return 1;
    }
    else
    {
        return num;
    }
}
void transformarASCCI(char text[], int tam, int vet[])
{
    int i;
    for(i=0; i<=tam; i++)
    {
        vet[i]=text[i];
    }
}

void ordenarVetor(int vet[], int tam)
{
    int i, aux, ult;
    for(ult=tam-1; ult>0; ult--)
    {
        for(i=0; i<ult; i++)
        {
            if(vet[i]>vet[i+1])
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }
}

int ocorreNoVetor(int vet[], int tam, int num)
{
    int i, cont=0;
    for(i=0; i<tam; i++)
    {
        if(vet[i]==num)
        {
            cont++;
        }
    }
    return cont;
}

void mostrarMatrizInt(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void tranformarNumEmChar(int vet[], int tam, char vetC[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        vetC[i]=vet[i];
    }
    vetC[i]='\0';
}

void transformarASCCISemEsp(char text[], int tam, int vet[])
{
    int i, cont=0;
    for(i=0; i<=tam; i++)
    {
        if(text[i]==' ')
        {
            cont++;
        }
        else
        {
            vet[i]=text[i];
        }
    }
}
