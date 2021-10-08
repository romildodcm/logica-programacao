#include <stdio.h>

int main()
{
    int n, fatorial = 1;

    scanf("%d", &n);

    while (n >= 1)
    {
        fatorial = fatorial * n;
        n--;
    }

    printf("%d\n", fatorial);

    return 0;
}
