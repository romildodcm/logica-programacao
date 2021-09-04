#include <stdio.h>

int main()
{
    float raio, area;

    printf("Programa para calcular area do circulo.\nDigite o raio: ");
    scanf("%f", &raio);

    area = 3.14 * (raio * raio);

    printf("\a");
    printf("Area calculada: %.3f", area);

    return 0;
}