#include <stdio.h>

int main()
{
    int n, x = 1;

    scanf(" %d", &n);

    while (x < 10000)
    {
        if (x % n == 2)
            printf("%d\n", x);

        x++;
    }

    return 0;
}
