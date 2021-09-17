#include <stdio.h>
//obter centavos

int main()
{
    double valor;
    int resto, valor_int;

    scanf("%lf", &valor);

    valor_int = (int)valor;

    // Obtendo como inteiro o valor decimal do double (75.50 -> 50)
    resto = valor_int;
    resto = resto * 100;
    valor_int = (int)(valor * 100);
    resto = valor_int % resto;

    printf("%d", resto);

    return 0;
}