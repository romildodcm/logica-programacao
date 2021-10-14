#include <stdio.h>

int main()
{
    int n, valor = 1;

    scanf(" %d", &n);

    while (valor <= n)
    {
        if (valor % 2 == 0)
            printf("%d^2 = %d\n", valor, valor * valor);

        valor++;
    }

    return 0;
}
