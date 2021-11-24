#include <stdio.h>
#include <math.h>

float areaCirc(float r)
{
    return M_PI * pow(r, 2);
}

float areaRetangulo(float a, float b)
{
    return a * b;
}

float areaTriangulo(float a, float b)
{
    return (b * a) / 2;
}

int menu()
{
    int option;

    printf("-------------- Programa para calcular areas --------------\n");
    printf("\t1 - Area da circunferencia;\n");
    printf("\t2 - Area de retangulo;\n");
    printf("\t3 - Area de triangulo;\n");
    printf("\t0 - Sair.\n");
    printf("\nDigite o numero de uma das opcoes acima e tecle enter: ");
    scanf(" %d", &option);
    printf("----------------------------------------------------------\n");

    return option;
}

int main()
{
    int i = -1;
    float altura, base, raio;
    while (i != 0)
    {
        i = menu();
        switch (i)
        {
        case 1:
            printf("Digite o raio de circunferencia: ");
            scanf(" %f", &raio);

            printf("Area da circunferencia eh: %f\n", areaCirc(raio));
            break;
        case 2:
            printf("Digite a altura e a base da figura retangular: ");
            scanf(" %f %f", &altura, &base);

            printf("Area da figura retangular eh: %f\n", areaRetangulo(altura, base));
            break;
        case 3:
            printf("Digite a altura e a base do triangulo: ");
            scanf(" %f %f", &altura, &base);

            printf("Area do triangulo eh: %f\n", areaTriangulo(altura, base));
            break;
        case 0:
            printf("----------------------- Saindo... ------------------------\n");
            break;

        default:
            printf("Opcao invalida, tente novamente!\n");
            break;
        }
    }

    return 0;
}
