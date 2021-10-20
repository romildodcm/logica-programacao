#include <stdio.h>

int main()
{
    int v[20], move, i=0;

    for(i = 0; i < 20; i++)
    {
        scanf(" %d", &v[i]);
    }

    for(i = 0; i < 10; i++)
    {
        // 0 <- (20-1-0)[19]
        // 1 <- (20-1-1)[18]
        // ...
        // 9 <- (20-1-9)[10]
        // i <- (n-1-i)
        move = v[19-i];
        v[19-i] = v[i];
        v[i] = move;        
    }
 
    for(i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, v[i]);
    }

    return 0;
}
