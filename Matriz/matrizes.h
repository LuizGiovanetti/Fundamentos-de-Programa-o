void gerarMatrizInteiroDe1aLimite(int linha, int coluna, int matriz[linha][coluna], int limite) //sempre declarar a linha e coluna, antes da matriz
{
    int i, j;
    srand(time(NULL));
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriz[i][j] = rand() % limite + 1;
        }
    }
}

void imprimirMatrizInt(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirVetor(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%3d ", vet[i]);
    }
}

int somarMatrizInt(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j, soma=0;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            soma = soma + matriz[i][j];
        }
    }
    return soma;
}

int somaDiagonalPrincipalInt(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j, soma=0;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(i==j)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int somaDiagonalSecIntMatrizQuad(int linha, int coluna, int matriz[linha][coluna])//matriz quadrada
{
    int i, j, soma=0;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(i+j==linha-1)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

void somaLinhasMatrizInt(int linha, int coluna, int matriz[linha][coluna], int vetor[])
{
    int i, j, k=0; //soma=0;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            //soma = soma + matriz[i][j];
            vetor[k]=matriz[i][j] + vetor[k];
        }
        //vetor[k]=soma;
        //soma=0;
        k++;
    }
}

void somaColunasMatrizInt(int linha, int coluna, int matriz[linha][coluna], int vetor[])
{
    int i, j, k=0; //soma=0;
    for(j=0; j<coluna; j++)
    {
        for(i=0; i<linha; i++)
        {
            //soma = soma + matriz[i][j];
            vetor[k]=matriz[i][j] + vetor[k];
        }
        //vetor[k]=soma;
       //soma=0;
        k++;
    }
}

void iniciarVet0(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vet[i]=0;
    }
}

void calculoPotenciaMatriz2Coluna(int linha, int coluna, int matriz[linha][coluna], int vetor[])
{
    int i, j, k=0, potencia=1, p=0;
    for(i=0; i<linha; i++)
    {
        printf("%d\t %d\t\t ", matriz[i][0], matriz[i][1]);
        while(k<matriz[i][1])
        {
            potencia = potencia * matriz[i][0];
            k++;
        }
        k=0;
        vetor[p]=potencia;
        printf("%d\n", vetor[p]);
        p++;
        potencia=1;
    }
}

int potencia(int base, int expoente)
{
    int i, res=1;
    for(i=0; i<expoente; i++)
    {
        res=res*base;
    }
    return res;
}
