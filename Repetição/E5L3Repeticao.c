/*
5) Apresentar os n primeiros n�meros pares e divis�veis por 3 informados pelo usu�rio (validar para que n seja
diferente de 0). Se o usu�rio informar um n�mero negativo transform�-lo em positivo (sem usar fun��es prontas)
antes de utilizar.
Por exemplo, se o usu�rio informar 4, o programa dever� mostrar os quatro primeiros n�meros pares que s�o
divis�veis por tr�s: 0, 6, 12 e 18.
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
