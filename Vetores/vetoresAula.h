void gerarVetorInteiroDe0aLimite(int vet[], int tam, int lim)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vet[i] = rand()  % (lim + 1); //para gerar valores de 0 a limite
    }
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

void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int limSup)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vet[i] =  rand() % ((limSup - limInf) + 1) + limInf; // de 5 a 15 => ((15-5)+1)=>11 => rand()%11+5=> gera n�meros de 0 a 10 e soma 5 ao n�mero sorteado para ficar entre 5 e 15
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

void gerarVetorFloatDe0a1(float vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vetor[i]=rand()/(float)RAND_MAX;//32767, converte o valor pra resposta dar em float
        //gerar valores de ponto flutuante entre 0 e 1
    }
}

void gerarVetorFloatDe0a100(float vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vetor[i]=(rand()*100)/(float)RAND_MAX;//32767, converte o valor pra resposta dar em float
        //gerar valores de ponto flutuante entre 0 e 100
    }
}

void mostrarVetorFloat(float vet[], int tam)
{
    int i;
    printf("\t");
    for(i=0; i<tam; i++)
    {
        printf("%.2f\t", vet[i]);
    }
}

void somaVetorFloat(float vetor[], int tam)
{
    int i;
    float soma=0;
    for(i=tam-1; i>=0; i--)
    {
        soma=soma+vetor[i];
    }
    printf("\tsoma: %.2f", soma);
}

int tamanhoVetoresMaior50(float vet[], int tam)
{
    int i,cont=0;
    for(i=tam-1; i>0; i--)
    {
        if(vet[i]>=50)
        {
            cont++;
        }
    }
    return cont;
}

int tamanhoVetoresMenor50(float vet[], int tam)
{
    int i,cont=0;
    for(i=tam-1; i>0; i--)
    {
        if(vet[i]<50)
        {
            cont++;
        }
    }
    return cont;
}

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
