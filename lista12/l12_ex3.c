#include <stdio.h>
#include <math.h>

float areaCirc(float r)
{
    return M_PI * pow(r, 2);
}

int main()
{
    float raio;
    printf("Digite o raio de circunferencia: ");
    scanf(" %f", &raio);
    printf("\nArea da circunferencia eh: %f", areaCirc(raio));
    return 0;
}
