void numFeliz(int num)
{
    int aux, centena, dezena, unidade, milhar, cont=0;
    aux=num;
    while(aux!=1 && cont!=30)
    {
        if(aux<100)
        {
            dezena=aux/10;
            unidade=aux%10;
            aux=(dezena*dezena)+(unidade*unidade);
            printf("%d^2 + %d^2 = %d\n", dezena, unidade, aux);
        }
        else if(aux<1000)
        {
            centena=aux/100;
            dezena=(aux/10)%10;
            unidade=aux%10;
            aux=(centena*centena)+(dezena*dezena)+(unidade*unidade);
            printf("%d^2 + %d^2 + %d^2 = %d\n", centena, dezena, unidade, aux);
        }
        else if(aux<10000)
        {
            milhar=aux/1000;
            centena=(aux/100)%10;
            dezena=(aux/10)%10;
            unidade=aux%10;
            aux=(milhar*milhar)+(centena*centena)+(dezena*dezena)+(unidade*unidade);
            printf("%d^2 + %d^2 + %d^2 + %d^2 = %d\n", milhar, centena, dezena, unidade, aux);
        }
        cont++;
    }
    if(aux==1)
    {
        printf("eh um numero feliz.\n");
    }
    else
    {
        printf("nao eh um numero feliz.\n");
    }
}

//proximas funcoes para a segunda resolucao do 3, que seria so pra contar quantos num felizes tem

int contFelizes(int num)
{
    int aux, centena, dezena, unidade, milhar, cont=0;
    aux=num;
    while(aux!=1 && cont!=30)
    {
        if(aux<100)
        {
            dezena=aux/10;
            unidade=aux%10;
            aux=(dezena*dezena)+(unidade*unidade);
        }
        else if(aux<1000)
        {
            centena=aux/100;
            dezena=(aux/10)%10;
            unidade=aux%10;
            aux=(centena*centena)+(dezena*dezena)+(unidade*unidade);
        }
        else if(aux<10000)
        {
            milhar=aux/1000;
            centena=(aux/100)%10;
            dezena=(aux/10)%10;
            unidade=aux%10;
            aux=(milhar*milhar)+(centena*centena)+(dezena*dezena)+(unidade*unidade);
        }
        cont++;
    }
    if(aux==1)
    {
        return 1;
    }
}
int contTristes(int num)
{
    int aux, centena, dezena, unidade, milhar, cont=0;
    aux=num;
    while(aux!=1 && cont!=30)
    {
        if(aux<100)
        {
            dezena=aux/10;
            unidade=aux%10;
            aux=(dezena*dezena)+(unidade*unidade);
        }
        else if(aux<1000)
        {
            centena=aux/100;
            dezena=(aux/10)%10;
            unidade=aux%10;
            aux=(centena*centena)+(dezena*dezena)+(unidade*unidade);
        }
        else if(aux<10000)
        {
            milhar=aux/1000;
            centena=(aux/100)%10;
            dezena=(aux/10)%10;
            unidade=aux%10;
            aux=(milhar*milhar)+(centena*centena)+(dezena*dezena)+(unidade*unidade);
        }
        cont++;
    }
    if(aux==1)
    {
        printf("eh um numero feliz.\n");
    }
    else if(aux!=1);
    {
        return 1;
    }
}
