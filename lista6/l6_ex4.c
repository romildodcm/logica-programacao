#include <stdio.h>

int main()
{
    int i = 0, total_pares = 0, valor;

    while (i < 5)
    {
        scanf(" %d", &valor);

        if (valor % 2 == 0)
            total_pares++;

        i++;
    }

    printf("%d valores pares\n", total_pares);

    return 0;
}
