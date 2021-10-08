#include <stdio.h>

int main()
{
    int x, y, move, soma = 0;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        move = y;
        y = x;
        x = move;
    }

    x++;

    while (x < y)
    {
        if ((x % 2) != 0)
            soma = soma + x;

        x++;
    }

    printf("%d\n", soma);

    return 0;
}
