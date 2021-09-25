#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
        if (b < c)
            printf("%d\n%d\n%d\n", a, b, c); // abc
        else if (a < c)
            printf("%d\n%d\n%d\n", a, c, b); // acb
        else
            printf("%d\n%d\n%d\n", c, a, b); // cab
    else if (a < c)
        printf("%d\n%d\n%d\n", b, a, c); // bac
    else if (c < b)
        printf("%d\n%d\n%d\n", c, b, a); // cba
    else
        printf("%d\n%d\n%d\n", b, c, a); // bca

    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}