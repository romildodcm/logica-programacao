#include<stdio.h>

int main()
{
    int a, b, result;
    float div;

    printf("Programa operacoes basicas.\nDigite dois numeros: ");
    scanf("%d %d", &a, &b);

    result = a+b;
    printf("soma: %d", result);
    result = a-b;
    printf("subtracao: %d", result);
    result = a*b;
    printf("multiplicacao: %d", result);
    result = a/b;
    printf("divisao: %d", result);

    return 0;
}