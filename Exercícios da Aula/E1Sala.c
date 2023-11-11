#include <stdio.h>

int main()
{
    //variável
    float n1, n2, media, notaRec, mediaFinal;

    //Entrada de dados
    printf("Informe a nota 1:");
    scanf("%f", &n1);
    printf("Informe a nota 2:");
    scanf("%f", &n2);

    //Processamento
    media= (n1+n2)/2;

    //Saída
    printf("A media eh: %.1f\n", media);

    if(media>=6 && media<=10) //Sem ponto e virgula, pois é uma condição
    {
        printf("Aprovado.\n");
    }
    else if (media>= 4 && media<6)
    {
        printf("Em recuperacao.\n");
        printf("Informe a nota da recuperacao: ");
        scanf("%f", &notaRec);
        mediaFinal = (media + notaRec) / 2;

        if(mediaFinal>=5)
        {
            printf("aprovado apos recuperacao.\n", mediaFinal);
        }
        else
        {
            printf("Reprovado apos recuperacao.\n", mediaFinal);
        }
    }
    else
    {
        printf("Reprovado\n");
    }

    return 0;
}
