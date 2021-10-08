#include <stdio.h>

int main()
{
    int valor, i = 0, pares = 0, impares = 0, positivos = 0, negativos = 0;

    while (i < 5)
    {
        scanf(" %d", &valor);

        if (valor % 2 == 0)
            pares++;
        else
            impares++;

        if (valor > 0)
            positivos++;
        else if (valor < 0)
            negativos++;

        i++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}
