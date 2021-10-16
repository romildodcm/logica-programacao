#include <stdio.h>

int main()
{
    int num = 10000, pot2 = 1, fim = 0;
    printf("fim, num, pot2\n");
    while (num != 0)
    {
        printf("Inicio: %d, %d, %d\n", fim, num, pot2);
        fim += num % 10 * pot2;
        num /= 10;
        pot2 *= 2;
        printf("Final: %d, %d, %d\n", fim, num, pot2);
    }
    printf("----------------------\n%d\n", fim);

    return 0;
}