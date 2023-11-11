/*
9) Construa um programa que leia um conjunto de dados contendo altura (que deve ser maior que 0) e sexo
(que deve ser masculino ou feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0, é
encerrada a entrada de dados. O programa deve calcular e fornecer:
a) A maior e a menor altura do grupo.
b) A média de altura das mulheres.
c) A média de altura dos homens.
d) O número de homens e o percentual que eles representam no grupo.
e) O número de mulheres e o percentual que elas representam no grupo.
*/
#include <stdio.h>

int main()
{
    char sexo, opcao;
    int contF, contM, contPerc;
    float altura, mediaM, mediaF, percentualF, percentualM, maior, menor, somaAltF, somaAltM;

    do
    {
        contM=0;
        contF=0;
        contPerc=0;
        somaAltF=0;
        somaAltM=0;
        maior=0;
        menor=0;
        mediaM=0;
        mediaF=0;

        do
        {
            printf("Informe a altura(em metros): ");
            scanf("%f", &altura);

            if(altura>maior)
            {
                maior = altura;

            }

            if(menor==0)
            {
                menor = altura;
            }
            else if(altura<menor)
            {
                if(altura!=0)
                {
                   menor = altura;
                }

            }

            if(altura>0)
            {
                do
                {

                    printf("Informe o sexo[M/m] [F/f]: ");
                    fflush(stdin);
                    scanf("%c", &sexo);

                    switch(sexo)
                    {
                        case 'F':
                        case 'f':
                            contF++;
                            somaAltF = somaAltF + altura;
                        break;
                        case 'M':
                        case 'm':
                            contM++;
                            somaAltM = somaAltM + altura;
                        break;
                        default:
                            printf("Caracter invalido.\n");

                    }
                    contPerc++;

                }while(sexo!= 'm' && sexo!= 'f' && sexo!= 'F' && sexo!= 'M');

            }

        }while(altura>0);

        printf("A maior altura do grupo eh: %.2f\n", maior);
        printf("A menor altura do grupo eh: %.2f\n", menor);

        printf("==== Mulheres ====\n");

        printf("Quantidade: %d\n", contF);
        mediaF = somaAltF / (float)contF;
        printf("Media de altura: %.2f\n", mediaF);
        percentualF = (contF*100) / (float)contPerc;
        printf("Percentual: %.2f\n", percentualF);

        printf("====  Homens  ====\n");

        printf("Quantidade: %d\n", contM);
        mediaM = somaAltM / (float)contM;
        printf("Media de altura: %.2f\n", mediaM);
        percentualM = (contM*100) / (float)contPerc;
        printf("Percentual: %.2f\n", percentualM);

        do
        {
            printf("Deseja continuar no programa? [S/s] [N/n] ");
            fflush(stdin);
            scanf("%c", &opcao);

            switch(opcao)
            {
                case 's':
                case 'S':
                break;
                case 'N':
                case 'n':
                return 0;
                default:
                    printf("Caracter invalido.\n");
            }

        }while(opcao!='s' && opcao!='S');

    }while(opcao == 's' || opcao == 'S');

    return 0;
}
