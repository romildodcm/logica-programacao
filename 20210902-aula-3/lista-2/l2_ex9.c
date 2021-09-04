#include<stdio.h>

int main()
{
    int codigo_1, numero_1, codigo_2, numero_2;
    float valor_1, valor_2, pagar;

    scanf("%d %d %f", &codigo_1, &numero_1, &valor_1);
    scanf("%d %d %f", &codigo_2, &numero_2, &valor_2);

    pagar = numero_1*valor_1;
    pagar = pagar+(numero_2*valor_2);

    printf("VALOR A PAGAR: R$ %.2f", pagar);
    return 0;
}
