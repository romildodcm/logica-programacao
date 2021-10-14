#include <stdio.h>

int main()
{
    int x, y, i, soma = 0;

    scanf("%d%d", &x, &y);

    // não necessariamente em ordem crescente
    if (x > y)
    {
        i = y;
        y = x;
        x = i;
    }

    for (i = x; i <= y; i++)
    {
        if (i % 13 != 0)
            soma = soma + i;
    }

    printf("%d\n", soma);

    return 0;
}
