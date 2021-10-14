#include <stdio.h>

int main()
{
    int i;
    double s = 0.00;

    for (i = 1; i <= 100; i++)
    {
        s = s + (1.0 / i);
    }

    printf("%.2lf\n", s);

    return 0;
}
