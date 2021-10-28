#include <stdio.h>

int main()
{
    int i = 0, i_n = 0, j = 0, j_0 = 0, j_n = 0, sum = 0, n = 12;
    char t;
    double m[n][n], resultado = 0.0;

    scanf(" %c", &t);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf(" %lf", &m[i][j]);
        }
    }

    // Área Superior
    // Para as linhas a regra no for é: n = 6 -> metade inferior -> i < (n/2)+1
    // Para as colunas... notemos a o incremento no intervalo de j para cada linha
    // j inicia decrementando de 1 e encerra incrementando de 1.
    // . . . . . . i = 0 < (n/2)-1
    // . . . . . . i = 1 < (n/2)-1
    // . . . . . .
    // . . . . . .
    // . . x x . . (n/2)+1 = 4 = i_0, ir até i < n (n-1)
    // . x x x x . i = 5
    //     j j_n   -> j = 2, j_n = 3
    // 0 1 2 3 4 5 -> j = 1, j_n = 4
    //   j     j_n
    // 0 1 2 3 4 5
    //
    // para cada linha j-- e je ++
    // e o j e j_n inicial?
    // para o cado 6x6 temos j = (n/2) - 1 = 3-1 = 2
    //                     j_n = (n/2) + 1 = 3+1 = 4

    // // DEBUG
    // printf("-------------------- \n");
    //(6/2)-1 = 2 [0,1]

    i_n = (n / 2) + 1;
    j_0 = (n / 2) - 1;
    j_n = (n / 2) + 1;

    for (i = i_n; i < n; i++)
    {
        for (j = j_0; j < j_n; j++)
        {
            resultado = resultado + m[i][j];
            sum++;
            // // DEBUG
            // printf(" %.1lf", m[i][j]);
        }
        j_0--;
        j_n++;

        // // DEBUG
        // printf(" \n");
    }
    // // DEBUG
    // printf("-------------------- \n");

    if (t == 'M')
        resultado = resultado / sum;

    printf("%.1lf\n", resultado);

    return 0;
}
