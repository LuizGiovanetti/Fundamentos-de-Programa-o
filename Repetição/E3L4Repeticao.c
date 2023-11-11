/*
3) Faça um programa que solicite valores positivos para o limite inferior e superior de um intervalo e mostre os
números primos do intervalo em ordem crescente e faça a soma dos dígitos de cada número primo.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int numMenor, numMaior, i, j, contDiv, auxSoma, soma;

    do //Repeticao do programa
    {
        do //Validacao do limite inferior
        {
            printf("Digite um valor positivo para o limite inferior do intervalo: ");
            scanf("%d", &numMenor);
            if(numMenor<=0)
            {
                printf("Valor invalido.\n");
            }
        }while(numMenor<=0);
        do //Validacao do limite superior
        {

            printf("Digite um valor positivo para o limite superior do intervalo: ");
            scanf("%d", &numMaior);
            if(numMenor>=numMaior)
            {
                printf("Valor invalido.\n");
            }
        }while(numMenor>=numMaior);
        for(i=numMenor; i<=numMaior; i++)//calcular os numeros primos do intervalo do limite
        {
            contDiv=0;
            for(j=2; j<i; j++)//contar os divisores do numero
            {
                if(i%j==0)
                {
                    contDiv++;
                    break;
                }
            }
            if(contDiv==0 && i!=1) //verifica se o numero eh primo
            {
                printf("Primo %d => soma dos digitos = ", i);
                auxSoma = i;
                soma = 0;
                while(auxSoma!=0)
                {
                    soma = soma + (auxSoma%10);
                    auxSoma = auxSoma/10;
                }
                printf("%d\n", soma);
            }

        }
        do //Validacao para o usuario usar apenas S ou N
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
            {
                printf("Caracter Invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
    }while(opcao=='s' || opcao=='S');
    return 0;
}
