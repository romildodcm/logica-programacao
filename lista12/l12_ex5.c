#include <stdio.h>
#include <math.h>

float areaTriangulo(float a, float b)
{
    return (b * a) / 2;
}

int main()
{
    float altura, base;

    printf("Digite a altura e a base do triangulo: ");
    scanf(" %f %f", &altura, &base);

    printf("\nArea do triangulo eh: %f", areaTriangulo(altura, base));

    return 0;
}
