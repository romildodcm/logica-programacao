#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, pi = 3.14159, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    // area do triangulo retangulo que tem A por base e C por altura
    triangulo = (a * c) / 2;
    // a area do circulo de raio C
    circulo = pi * pow(c, 2.0);
    // a area do trapezio que tem A e B por bases e C por altura.
    trapezio = (1 / 2.0) * (a + b) * c;
    // a area do quadrado que tem lado B.
    quadrado = b * b;
    // a area do retangulo que tem lados A e B.
    retangulo = a * b;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}
