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
    // Para as linhas a regra no for é: n = 6 -> metade superior -> i < (n/2)-1
    // Para as colunas... notemos a redução no intervalo de j para cada linha
    // j inicia incrementado de 1 e encerra decrementado de 1.
    //   j     j_n    -> j = 1, j_n = n-1
    // 0 1 2 3 4 5
    //     j je
    // 0 1 2 3 4 5
    // . s s s s . i = 0 < (n/2)-1
    // . . s s . . i = 1 < (n/2)-1
    // . . . . . . (n/2)-1 = 2
    // . . . . . .
    // . . . . . .
    // . . . . . .
    //
    // para cada linha j++ e je --

    // // DEBUG
    // printf("-------------------- \n");
    //(6/2)-1 = 2 [0,1]

    i_n = (n / 2) - 1; 
    j_0 = 1;
    j_n = n - 1;

    for (i = 0; i < i_n; i++)
    {
        for (j = j_0; j < j_n; j++)
        {
            resultado = resultado + m[i][j];
            sum++;
            // // DEBUG
            // printf(" %.1lf", m[i][j]);
        }
        j_0++;
        j_n--;

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
