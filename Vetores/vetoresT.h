void gerarVetorSemRepeticao(int vetor[], int tam, int lim)
{
    int i,j;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % lim + 1;
        for(j=0; j<i; j++)
        {
            if(vetor[i] == vetor[j])
            {
                i--;
                break;
            }
        }
    }
}

void mostrarVetorInteiro(int vet[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
}

int ocorreNoVetor(int vet[], int tam, int valor)
{
    int i, cont=0;
    for(i=0; i<tam; i++)
    {
        if(vet[i]==valor)
        {
            cont++;
        }
    }
    return cont;
}

void gerarVetorInteiroDe0aLimite(int vet[], int tam, int lim)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vet[i] = rand()  % (lim + 1); //para gerar valores de 0 a limite
    }
}

int moda(int vet[], int tam)
{
    int i, j, qntde, qntdeMaior=0, maior;
    maior = vet[0];
    for(i=0; i<tam; i++)
    {
        qntde=0;
        for(j=i; j<tam; j++)
        {
            if(vet[i]==vet[j])
            {
                qntde++;
            }
        }
        if(qntde>qntdeMaior)
        {
            qntdeMaior=qntde;
            maior=vet[i];
        }
    }
    return maior;
}

void gerarVetorInteiroDe1aLimite(int vet[], int tam, int lim)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vet[i] = rand()  % lim + 1; //para gerar valores de 1 a limite
    }
}

void tabuada(int vet[], int tam)
{
    int i, j, tabuada;
    for(i=0; i<tam; i++)
    {
        if(vet[i]==vet[i+1])
        {
            //nao faz nada
        }
        else
        {
            printf("===>TABUADA DE %d<===\n", vet[i]);
            for(j=0; j<=10; j++)
            {
                tabuada=vet[i] * j;
                printf("%d * %d = %d\n", vet[i], j, tabuada);
            }
        }
    }
}

void ordenarVetor(int vet[], int tam)
{
    int i, ult, aux;
    for(ult=tam-1; ult>0; ult--)//varredura para ordenar o vetor
    {
        for(i=0; i<ult; i++)//comparar o primeiro elemento do vetor ate o ultimo
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

