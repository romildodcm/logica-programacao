#include <stdio.h>

int main()
{
    int i=0, j=0, n = 12, sum = 0;
    char t;
    double m[n][n], resultado = 0.0;

    scanf(" %c", &t);

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            scanf(" %lf", &m[i][j]);
        }
    }

    // estão abaixo da diagonal principal da matriz 
    // j < i
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            if(j < i)
            {
                resultado = resultado + m[i][j];
                sum++;
            }
        }
    }


    if(t == 'M')
        resultado = resultado/sum;

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
