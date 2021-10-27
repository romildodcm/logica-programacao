#include <stdio.h>

int main()
{
    int line, i=0, j=0, n = 12;
    char t;
    double m[n][n], resultado = 0.0;

    scanf(" %d", &line);
    scanf(" %c", &t); // c or s?

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            scanf(" %lf", &m[i][j]);
        }
    }

    if(t == 'S')
    {
        for(j = 0; j<n; j++)
        {
            resultado = resultado + m[line][j];
        }
    }
    else if(t == 'M')
    {
        for(j = 0; j<n; j++)
        {
            resultado = resultado + m[line][j];
        }
        resultado = resultado/n;
    }

    // print all
    // for(i = 0; i<n; i++)
    // {
    //     for(j = 0; j<n; j++)
    //     {
    //         printf(" %lf", m[i][j]);
    //     }
    //     // printf("\n");
    // }

    printf("%.1lf\n", resultado);

    return 0;
}
