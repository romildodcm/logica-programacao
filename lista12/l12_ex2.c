#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c)
{
    float delta, r1, r2;

    delta = (b * b) - (4.0 * a * c);

    if (delta < 0 || a == 0)
    {
        return 0;
    }
    else
    {
        // conta
        r1 = ((-1.0 * b) + sqrt(delta)) / (2.0 * a);
        r2 = ((-1.0 * b) - sqrt(delta)) / (2.0 * a);

        //output
        if (r1 == r2)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
}

int main()
{
    double a, b, c;

    printf("--- Programa para determinar numero de raizes ---\n");
    printf("Entre com os valores de a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("\nTem %d raizes.", raizes(a, b, c));

    return 0;
}
