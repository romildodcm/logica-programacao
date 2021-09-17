#include <stdio.h>

int main()
{
    int valor, quantidade100, quantidade50, quantidade20, quantidade10, quantidade5, quantidade2, quantidade1, resto;

    scanf("%d", &valor);

    quantidade100 = valor / 100;
    resto = valor % 100;
    quantidade50 = resto / 50;
    resto = resto % 50;
    quantidade20 = resto / 20;
    resto = resto % 20;
    quantidade10 = resto / 10;
    resto = resto % 10;
    quantidade5 = resto / 5;
    resto = resto % 5;
    quantidade2 = resto / 2;
    resto = resto % 2;
    quantidade1 = resto / 1;
    resto = resto % 1;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", quantidade100);
    printf("%d nota(s) de R$ 50,00\n", quantidade50);
    printf("%d nota(s) de R$ 20,00\n", quantidade20);
    printf("%d nota(s) de R$ 10,00\n", quantidade10);
    printf("%d nota(s) de R$ 5,00\n", quantidade5);
    printf("%d nota(s) de R$ 2,00\n", quantidade2);
    printf("%d nota(s) de R$ 1,00\n", quantidade1);

    return 0;
}
