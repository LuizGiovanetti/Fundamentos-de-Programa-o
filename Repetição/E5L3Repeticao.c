/*
5) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário (validar para que n seja
diferente de 0). Se o usuário informar um número negativo transformá-lo em positivo (sem usar funções prontas)
antes de utilizar.
Por exemplo, se o usuário informar 4, o programa deverá mostrar os quatro primeiros números pares que são
divisíveis por três: 0, 6, 12 e 18.
*/
#include <stdio.h>

int main()
{
    char opcao;
    int num, i, cont;

    do
    {

        do
        {

            printf("Quantos numeros pares divisiveis por 3 quer mostrar? ");
            scanf("%d", &num);
            if(num==0)
            {
                printf("Valor invalido.\n");
            }

        }while(num==0);

        if(num<0)
        {
            num = num * (-1); //multiplica por menos 1 pra tornar positivo caso num seja um numero negativo
        }
       cont=1;
        for(i=0;cont<=num;i++)
        {

            if(i%2==0) //se for par
            {

                if(i%3==0) //se for par e divisivel por 3
                {
                    printf("%d \t");
                    cont++;
                }

            }

        }


        printf("\nDeseja continuar no programa? [S/s] ");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao == 's' || opcao == 'S');

    return 0;
}
