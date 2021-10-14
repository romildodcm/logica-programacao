#include <stdio.h>

int main()
{
    int i = 1, j = 7;

    while (i < 10)
    {
        while (j > i + 3)
        {
            printf("I=%d J=%d\n", i, j);
            j--;
        }

        j = j + 5;
        i = i + 2;
    }

    return 0;
}
