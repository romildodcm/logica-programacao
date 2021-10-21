#include <stdio.h>

int main()
{
    int n = 100, i = 0;

    double a[n];

    for(i = 0; i < n; i++)
    {
        scanf(" %lf", &a[i]);
    }
 
    for(i = 0; i < n; i++)
    {
        if (a[i] <= 10)
            printf("A[%d] = %.1lf\n", i, a[i]);
    }

    return 0;
}
