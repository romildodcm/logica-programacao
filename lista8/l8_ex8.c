#include <stdio.h>

int main()
{
    int n, i, min, p;

    scanf(" %d", &n);
    int x[n];

    scanf(" %d", &x[0]);
    min = x[0];
    p = 0;

    for (i = 1; i < n; i++)
    {
        scanf(" %d", &x[i]);
        if (x[i] < min)
        {
            min = x[i];
            p = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", p);

    return 0;
}
