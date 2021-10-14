#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    double s = 0.00;

    while (i <= 39)
    {
        s = s + ((i * 1.00) / j);

        i = i + 2;
        j = j * 2;
    }

    printf("%.2lf\n", s);

    return 0;
}
