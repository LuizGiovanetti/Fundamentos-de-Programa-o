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

void gerarVetorCharMinuscula(char vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vetor[i] = rand()  % 26 + 97;
    }
}
void gerarVetorCharMaiuscula(char vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vetor[i] = rand()  % 26 + 65;
    }
}

void mostrarVetorChar(char vetor[], int tam, int n)
{
    int i, cont;
    cont=0;
    for(i=0; i<tam; i++)
    {
        printf("%c ", vetor[i]);
        cont++;
        if(cont==n)
        {
            printf("\n");
            cont=0;
        }
    }
}

void gerarVetorPositivoNegativo(int vetor[], int tam, int limNeg, int limPos)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % (limPos - limNeg + 1) + limNeg; //na lista fala pra usar (limPos+limNeg+1) - limNeg; entretanto estava dando errado, dai alterei o sinal e funcionou
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
