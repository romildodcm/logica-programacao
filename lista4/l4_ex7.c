#include <stdio.h>

/*
Forma triângulo se: a soma das medidas de dois deles é sempre maior
que a medida do terceiro, então, eles podem formar um triângulo.

https://brasilescola.uol.com.br/o-que-e/matematica/o-que-e-a-condicao-existencia-um-triangulo.htm
*/

int main()
{
    double a, b, c, resultado;

    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        resultado = a + b + c;
        printf("Perimetro = %.1lf\n", resultado);
    }
    else
    {
        resultado = (a + b) * c * (1 / 2.0);
        printf("Area = %.1lf\n", resultado);
    }

    return 0;
}
