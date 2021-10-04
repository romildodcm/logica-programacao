#include <stdio.h>

int main()
{
    int inicio, fim, durou;

    scanf("%d %d", &inicio, &fim);

    if (inicio == fim)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (inicio > fim)
    {
        /* (24 - inicio) + fim */
        durou = (24 - inicio) + fim;
        printf("O JOGO DUROU %d HORA(S)\n", durou);
    }
    else
    {
        // fim - inicio
        durou = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", durou);
    }

    return 0;
}
