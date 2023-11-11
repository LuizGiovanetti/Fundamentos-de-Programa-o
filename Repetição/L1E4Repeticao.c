/*
4) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.
*/
#include <stdio.h>

int main()
{
    char nacionalidade, superior;
    int idade=1 /*idade tem valor pra entrar no while*/, qntdeBras=0, somaIdade=0, qntdeBSCS=0 /*Brasileiro sem curso superior*/, qntdeEst=0, menorIdade=0 ;
    float media;

    while(idade > 0)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);
        if(idade > 0)
        {
            printf("Informe a nacionalidade [B] Brasileiro [E] Estrangeiro: ");
            fflush(stdin);
            scanf("%c", &nacionalidade);
            switch(nacionalidade)
            {
                case 'b':
                case 'B':
                    qntdeBras++;
                    printf("Possui curso superior? [S] Sim [N] Nao: ");
                    fflush(stdin);
                    scanf("%c", &superior);
                    switch(superior)
                    {
                        case 'n':
                        case 'N':
                            somaIdade = somaIdade + idade;
                            qntdeBSCS++;
                        break;
                    }
                break;
                case 'e':
                case 'E':
                    qntdeEst++;
                    printf("Possui curso superior? [S] Sim [N] Nao: ");
                    fflush(stdin);
                    scanf("%c", &superior);
                    switch(superior)
                    {
                        case 's':
                        case 'S':
                            if(menorIdade == 0)
                            {
                                menorIdade = idade;
                            }
                            else
                            {
                                if(idade < menorIdade)
                                {
                                    menorIdade = idade;
                                }
                            }
                        break;
                        default:
                            printf("Curso superior invalido. \n");
                    }
                break;
                default:
                    printf("Nacionalidade invalida. \n");
            }
        }
    }

    printf("Quantidade de brasileiros: %d\n", qntdeBras);
    printf("Quantidade de estrangeiros: %d\n", qntdeEst);
    if(qntdeBSCS > 0)
    {
        media = (float)somaIdade / qntdeBSCS;
        printf("Media das idades dos brasileiros sem curso superior: %.2f\n", media);
    }
    printf("Menor idade dos estrangeiros com curso superior: %d", menorIdade);

    return 0;
}
