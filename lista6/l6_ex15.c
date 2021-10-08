#include <stdio.h>

int main()
{
    int idade = 0, quantidade = -1;
    float sm = 0.0;

    while (idade >= 0)
    {
        quantidade++;
        sm = sm + idade;

        scanf(" %d", &idade);
    }

    sm = sm / quantidade;

    printf("%.2lf\n", sm);

    return 0;
}
