#include <stdio.h>

int main()
{
    int i;
    float temp;

    printf("Digite a temperatura que deseja converter (ou digite 100 para sair):\n");
    scanf(" %d", &i);

    while (i != 100)
    {
        temp = (9 * i / 5) + 32;
        printf("%d Graus Centigrados equivalem a %.2f Graus Fahrenheit\n", i, temp);
        i -= 10;

        printf("Digite a temperatura que deseja converter (ou digite 100 para sair):\n");
        scanf(" %d", &i);
    }

    return 0;
}