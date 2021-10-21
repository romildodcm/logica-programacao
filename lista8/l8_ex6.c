#include <stdio.h>

int main()
{
    int len = 100, i = 0;
    double n[len];

    scanf(" %lf", &n[0]);

    for (i = 1; i < len; i++)
    {
        n[i] = n[i - 1] / 2;
    }

    for (i = 0; i < len; i++)
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}
