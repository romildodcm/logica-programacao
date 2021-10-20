#include <stdio.h>

int main()
{
    int i = 0, x[10];

    scanf(" %d", &x[i]);

    for(i = 1; i < 10; i++)
    {
        x[i] = x[i-1] * 2;
    }
 
    for(i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, x[i]);
    }

    return 0;
}
