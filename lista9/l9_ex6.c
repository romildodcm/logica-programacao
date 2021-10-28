#include <stdio.h>

int main()
{
    int i = 0, j = 0, j2 = 0, j_move = 0, n = 12, sum = 0;
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

    // // DEBUG
    // printf("-------------------- \n");
    // Acima da Diagonal Secundária
    j2 = n - 2; //10
    j_move = n-1; //11
    for (i = 1; i < n; i++)
    {
        for (j = j_move; j > j2; j--)
        {
            resultado = resultado + m[i][j];
            sum++;
            // // DEBUG
            // printf(" %.1lf", m[i][j]);
        }
        j2--;

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
