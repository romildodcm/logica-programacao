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

    // Área esquerda ex n = 8
    // Para as linhas a regra no for é: i = 1 até i < i_n, onde i_n = n-1
    // Para as colunas... notemos a o incremento no intervalo de j,
    // para cada linha j inicia = 0 e vai até j < j_n
    // -> j_n incrementa se i < n/2
    // -> j_n decrementa se i > n/2
    //                                                       j_0 = n
    // Visualização em m[8][8]:                              [antes do for de coluna]
    // . . . . . . . .                                       [if i < (n/2) j_0-- |=7]
    // . . . . . . . x -> i = 1 < n-1 | j_0 = 7, j_n = 8 = n [if i < (n/2) j_0-- |=6]
    // . . . . . . x x -> i = 2 < n-1 | j_0 = 6, j_n = 8 = n [if i < (n/2) j_0-- |=5]
    // . . . . . x x x -> i = 3 < n-1 | j_0 = 5, j_n = 8 = n
    // . . . . . x x x -> i = 4 < n-1 | j_0 = 5, j_n = 8 = n [if i > (n/2) j_0++ |=6]
    // . . . . . . x x -> i = 5 < n-1 | j_0 = 6, j_n = 8 = n [if i > (n/2) j_0++ |=7]
    // . . . . . . . x -> i = 6 < n-1 | j_0 = 7, j_n = 8 = n
    // . . . . . . . . i_n = n-1 = 7
    //         |     |
    //         |      -> j_0 max = 7
    //          -------> j_0 min = 4 = (n/2)

    // // DEBUG
    // printf("---------------------------------------- \n");
    //(6/2)-1 = 2 [0,1]

    i_n = n - 1;
    j_0 = n;
    j_n = n;

    for (i = 1; i < i_n; i++)
    {
        // // DEBUG
        // printf("%d \t| ", i);

        if (i < (n / 2))
            j_0--;
        else if (i > (n / 2))
            j_0++;

        for (j = j_0; j < j_n; j++)
        {
            resultado = resultado + m[i][j];
            sum++;

            // // DEBUG
            // printf(" %.1lf", m[i][j]);
        }

        // // DEBUG
        // printf(" \n");
    }
    // // DEBUG
    // printf("---------------------------------------- \n");

    if (t == 'M')
        resultado = resultado / sum;

    printf("%.1lf\n", resultado);

    return 0;
}
