#include <stdio.h>

int main()
{
    int i, atual=1, anterior=1, proximo, termos;

    printf("Quantos termos deseja mostrar? ");
    scanf("%d", &termos);

    printf("1\t1\t");

    for(i=2; i<=termos; i++)
    {
        proximo = atual + anterior;
        printf("%d\t", proximo);
        anterior = atual;
        atual = proximo;
    }
    return 0;
}
