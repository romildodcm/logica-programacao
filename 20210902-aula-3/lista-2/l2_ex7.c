#include<stdio.h>

int main()
{
    int a, b, c, d, diferenca;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);

    diferenca = (a*b)-(c*d);
    printf("DIFERENCA = %d", diferenca);

    return 0;
}
