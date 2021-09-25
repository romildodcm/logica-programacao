#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, memoria;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b)
    {
        if (b > c)
        {
            // abc
        }
        else if (a > c)
        {
            // acb
            memoria = b;
            b = c;
            c = memoria;
        }
        else
        {
            memoria = a;
            a = c;
            c = b;
            b = memoria;
        }
    }
    else if (a > c)
    {
        memoria = a;
        a = b;
        b = memoria;
    }
    else if (c > b)
    {
        memoria = a;
        a = c;
        c = memoria;
    }
    else
    {
        // bca
        memoria = a;
        a = b;
        b = c;
        c = memoria;
    }

    // printf("%.1lf\n%.1lf\n%.1lf\n", a, b, c);

    if (a >= (b + c))
        printf("NAO FORMA TRIANGULO\n");
    else if ((pow(a, 2.0)) == (pow(b, 2.0) + pow(c, 2.0)))
        printf("TRIANGULO RETANGULO\n");
    else if (pow(a, 2.0) > (pow(b, 2.0) + pow(c, 2.0)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if (pow(a, 2.0) < (pow(b, 2.0) + pow(c, 2.0)))
        printf("TRIANGULO ACUTANGULO\n");
    if (a == b && a == c)
        printf("TRIANGULO EQUILATERO\n");
    else if (a == b || b == c)
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}
