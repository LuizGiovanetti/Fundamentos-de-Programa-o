#include <stdio.h>
#include "minhasFuncoes.h"

int main(void)
{
    int numero1, numero2, i;
    char escolha, opcao;
    do
    {
        printf("1 - Quadrado de um numero\n");
        printf("2 - Quadrado dos numeros de  1 a 10\n");
        printf("3 - Tabuada de um numero\n");
        printf("4 - Soma de dois numeros\n");
        printf("5 - Multiplicacao de dois numeros\n");
        printf("6 - Divisao de dois numeros\n");
        printf("7 - Fatorial de um numero\n");
        printf("8 - Fatorial dos numeros de 1 a 10\n");
        printf("9 - Verifica se um numero eh primo\n");
        printf("Escolha uma opcao: ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);
        switch(escolha)
        {
        case '1': //feito
            printf("\nQUADRADO DE UM NUMERO\n\n");
            printf("Informe um numero: ");
            scanf("%d", &numero1);
            printf("O quadrado do numero %d eh: %d\n", numero1, quadrado(numero1));

            break;
        case '2': //feito
            printf("\nNUMERO\tQUADRADO\n");
            for(i=1; i<=10; i++)
            {
                printf("  %.2d\t", i);
                printf("   %.3d\n", quadrado(i));
            }
            break;
        case '3'://feito
            printf("\nTABUADA DE UM NUMERO ATE 10\n");
            printf("Informe um numero: ");
            scanf("%d", &numero1);
            for(i=1; i<=10; i++)
            {
                printf("%d * %.2d = %d\n", numero1, i, multiplicacao(numero1, i));
            }

            break;
        case '4': //feito
            printf("\nSOMA DOIS NUMEROS\n");
            printf("Informe o primeiro valor: ");
            scanf("%d",&numero1);
            printf("Informe o segundo valor: ");
            scanf("%d",&numero2);
            printf("%d + %d = %d\n", numero1, numero2, soma(numero1, numero2));
            break;
        case '5': //feito
            printf("\nMULTIPLICA DOIS NUMEROS\n");
            printf("Informe o primeiro valor: ");
            scanf("%d",&numero1);
            printf("Informe o segundo valor: ");
            scanf("%d",&numero2);
            printf("%d * %d = %d\n", numero1, numero2, multiplicacao(numero1, numero2));
            break;
        case '6'://feito
            printf("\nDIVIDE DOIS NUMEROS\n");
            printf("Informe o primeiro valor: ");
            scanf("%d",&numero1);
            printf("Informe o segundo valor: ");
            scanf("%d",&numero2);
            if(divisao(numero1, numero2)==0)
            {
                printf("Erro: divisao por zero\n");
            }
            else
            {
                printf("%d / %d = %.2f\n", numero1, numero2, divisao(numero1, numero2));
            }
            break;
        case '7'://feito
            printf("\nFATORIAL DE UM NUMERO\n");
            printf("Informe um numero: ");
            scanf("%d", &numero1);
            mostrarFatorial(numero1);
            break;
        case '8': //feito
            for(i=1; i<=10; i++)
            {
                mostrarFatorial(i);
            }
            break;
        case '9': //feito
            printf("VERIFICA SE UM NUMERO EH PRIMO\n");
            printf("Informe um numero: ");
            scanf("%d", &numero1);
            verificarPrimo(numero1);
            break;
        default:
            printf("Opcao invalida\n");
        }
        do
        {
            printf("Deseja continuar o programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);
            if(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
            {
                printf("Caracter invalido.\n");
            }
        }while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
    }while(opcao=='s' || opcao=='S');
    return 0;
}
