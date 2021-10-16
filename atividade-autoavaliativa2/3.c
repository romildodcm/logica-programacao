#include <stdio.h>

int main()
{
    int x = 1, y = 2, z = 3;
    x += y += z += 7;
    printf("---------Inicio----------\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("---------loop----------\n");
    while (x >= 13)
    {
        y *= x + z;
        x--;
        printf("x = %d\n", x);
        printf("y = %d\n", y);
        printf("z = %d\n", z);
    }
    printf("---------Fim----------\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    return 0;
}