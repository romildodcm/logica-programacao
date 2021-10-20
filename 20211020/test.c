#include <stdio.h>

int main()
{
    int i=0, a[5];

    for(i = 0; i <5; i++)
    {
        scanf(" %d", &a[i]);
    }

    for(i = 0; i <5; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("ok\n");
    return 0;
}
