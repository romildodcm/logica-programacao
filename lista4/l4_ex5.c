#include <stdio.h>

int main()
{
    double x, y;

    scanf("%lf %lf", &x, &y);

    // Q1 -> x>0 && y>0
    if (x > 0 && y > 0)
        printf("Q1\n");
    // Q2 -> x<0 && y>0
    else if (x < 0 && y > 0)
        printf("Q2\n");
    // Q3 -> x<0 && y<0
    else if (x < 0 && y < 0)
        printf("Q3\n");
    // Q4 -> x>0 && y<0
    else if (x > 0 && y < 0)
        printf("Q4\n");
    // eixo x -> y = 0
    else if (y == 0 && x != 0)
        printf("Eixo X\n");
    // eixo y -> x = 0
    else if (x == 0 && y != 0)
        printf("Eixo Y\n");
    // origem -> x = y = 0
    else if (x == 0 && y == 0)
        printf("Origem\n");

    return 0;
}
