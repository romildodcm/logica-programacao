#include <stdio.h>
#include <math.h>

float areaRetangulo(float a, float b)
{
    return a * b;
}

int main()
{
    float altura, base;

    printf("Digite a altura e a base da figura retangular: ");
    scanf(" %f %f", &altura, &base);

    printf("\nArea da figura retangular eh: %f", areaRetangulo(altura, base));

    return 0;
}
