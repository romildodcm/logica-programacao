#include <stdio.h>
/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

*/
int main()
{
    double valor, sm;
    int i, quantidade_positivos = 0;

    for (i = 0; i < 6; i++)
    {
        scanf(" %lf", &valor);

        if (valor > 0)
        {
            sm = sm + valor;
            quantidade_positivos++;
        }
    }

    sm = sm / quantidade_positivos;

    printf("%d valores positivos\n", quantidade_positivos);
    printf("%.1lf\n", sm);

    return 0;
}
