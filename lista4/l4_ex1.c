#include <stdio.h>

int main()
{
    int a, b, c, d, soma_cd, soma_ab;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    soma_ab = a + b;
    soma_cd = c + d;

    if (b > c && d > a && soma_cd > soma_ab && c > 0 && d > 0 && (a % 2) == 0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}