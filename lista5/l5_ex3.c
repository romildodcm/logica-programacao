#include <stdio.h>
#include <math.h>

int main()
{
    double valor, imposto;

    scanf("%lf", &valor);

    if (valor >= 0.00 && valor <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (valor >= 2000.01 && valor <= 3000.00)
    {
        valor = valor - 2000;
        imposto = valor * 0.08;

        printf("R$ %.2lf\n", imposto);
    }
    else if (valor >= 3000.01 && valor <= 4500.00)
    {
        imposto = 1000 * 0.08;
        valor = valor - 3000;
        imposto = imposto + (valor * 0.18);

        printf("R$ %.2lf\n", imposto);
    }
    else if (valor > 4500.00)
    {
        // 8% imposto sobre 1000
        imposto = 1000 * 0.08;
        // 18% imposto sobre 1500
        imposto = imposto + (1500 * 0.18);
        // imposto de 28%
        valor = valor - 4500;
        imposto = imposto + (valor * 0.28);

        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}
