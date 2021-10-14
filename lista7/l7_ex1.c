#include <stdio.h>

int main()
{
    int x, n;

    scanf("%d", &x);

    while (n < 6)
    {
        if ((x % 2) != 0)
        {
            printf("%d\n", x);
            n++;
        }
        x++;
    }

    return 0;
}
