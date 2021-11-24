#include <stdio.h>

int sum_n(int num)
{
    int i, sum = 0;
    for (i = 0; i <= num; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n = -1;

    while (n <= 0)
    {
        printf("Programa para fazer somatorio dos primeiros n numeros naturais.\nDigite o numero n: ");
        scanf(" %d", &n);
    }
    printf("A soma eh: %d", sum_n(n));

    return 0;
}
