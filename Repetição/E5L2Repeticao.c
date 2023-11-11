/*
5) Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada produto. Calcular o valor
total da compra. Informar esse valor para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a quantidade for maior que zero. Se
informado zero ou valor negativo para a quantidade, não ler o valor unitário.
*/
#include <stdio.h>

int main()
{
    int qntProd;
    float precoProd, valorPag, somaDosProd=0, precoProdTotal=0;

    do
    {
        printf("Informe a quantidade do produto: ");
        scanf("%d", &qntProd);
        if(qntProd>0)
        {
            printf("Informe o valor unitario do produto: ");
            scanf("%f", &precoProd);
            precoProdTotal = precoProd * qntProd;
            somaDosProd = somaDosProd + precoProdTotal;
        }

    }while(qntProd>0);
    printf("Total da compra: %.2f\n", somaDosProd);
    printf("Informe o valor pago pelo cliente: R$ ");
    scanf("%f", &valorPag);

    do
    {
        if(valorPag < somaDosProd)
        {
            printf("valor inferior ao da compra!\n");
        }

    }while(valorPag > somaDosProd);

    return 0;
}
