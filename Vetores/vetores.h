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

void mostrarVetorInteiro(int vet[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
}

int encontrarMenorNum(int vet[],int tam)
{
    int i, ult, menor=0;
    for(ult=tam-1; ult>0; ult--)
    {
        for(i=0; i<ult; i++)//comparar o primeiro elemento do vetor ate o ultimo
        {
            if(menor==0)
            {
                if(vet[i]<vet[i+1])
                {
                    menor=vet[i];
                }
            }
            else if(menor>vet[i])
            {
                menor=vet[i];
            }
        }
    }
    return menor;
}

int encontrarOIndice(int vet[], int num, int tam) //numero para ser encontrado
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(num==vet[i])
        {
            return i;
        }
    }
}

void mediaPares(int vet[], int tam)
{
    int i, soma=0, cont=0;
    float media;
    for(i=0; i<tam; i++)
    {
        if(vet[i]%2==0)
        {
            soma=soma+vet[i];
            cont++;
        }
    }
    if(cont>=1)
    {
        media=(float)soma/cont;
        printf("Media dos pares %.2f", media);
    }
    else
    {
        printf("Nao tem numeros pares.");
    }
}


