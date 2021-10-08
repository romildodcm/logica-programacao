#include <stdio.h>

int main()
{
    int codigo = 0, alcool = 0, gasolina = 0, diesel = 0;

    while (codigo != 4)
    {
        scanf(" %d", &codigo);

        switch (codigo)
        {
        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}
