#include <stdio.h>

int main()
{
    int t, len = 1000, n[len], i = 0, a = 0;

    scanf(" %d", &t);

    while (i < len)
    {
        for (a = 0; a < t; a++)
        {
            n[i] = a;
            i++;
        }
    }

    for (i = 0; i < len; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
