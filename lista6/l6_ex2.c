#include <stdio.h>

int main()
{
    double valor;
    int i, quantidade_positivos = 0;

    for (i = 0; i < 6; i++)
    {
        scanf(" %lf", &valor);

        if (valor > 0)
            quantidade_positivos++;
    }

    printf("%d valores positivos\n", quantidade_positivos);

    return 0;
}
