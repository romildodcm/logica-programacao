#include<stdio.h>

int main()
{
    int distancia;
    float combustivel, consumo_medio;

    scanf("%d %f", &distancia, &combustivel);

    consumo_medio = distancia/combustivel;
    printf("%.3f km/l", consumo_medio);
    
    return 0;
}
