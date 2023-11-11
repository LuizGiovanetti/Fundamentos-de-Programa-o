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
    float precoProd, valorPag, somaDosProd=0, precoProdTotal=0, troco, nDeCinco, nDeUm, nDeDez, centavos;

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

    do
    {
        printf("Informe o valor pago pelo cliente: R$ ");
        scanf("%f", &valorPag);

        if(valorPag < somaDosProd)
        {
            printf("valor inferior ao da compra!\n");
        }

    }while(valorPag < somaDosProd);

    troco = valorPag - somaDosProd;

    nDeDez = (int)troco/10;
    nDeCinco = (int)troco%10 /5;
    nDeUm = (int)troco%5;
    centavos = troco - (int)troco;

    printf("O valor do troco sera devolvido com: \n");
    printf("%.2f nota(s) de 10 reais.\n", nDeDez);
    printf("%.2f nota(s) de 5 reais.\n", nDeCinco);
    printf("%.2f nota(s) de 1 real.\n", nDeUm);
    printf("e %.2f centavos.", centavos);

    return 0;
}
