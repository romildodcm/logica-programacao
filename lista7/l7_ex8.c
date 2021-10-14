#include <stdio.h>

int main()
{
    int escolha = 1, gols_inter = 0, gols_gremio = 0, num_grenais = 0, vitoria_inter = 0, vitoria_gremio = 0, empates = 0;

    while (escolha == 1)
    {

        scanf(" %d%d", &gols_inter, &gols_gremio);

        num_grenais++;

        if (gols_inter > gols_gremio)
            vitoria_inter++;
        else if (gols_inter < gols_gremio)
            vitoria_gremio++;
        else
            empates++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf(" %d", &escolha);
    }

    printf("%d grenais\n", num_grenais);
    printf("Inter:%d\n", vitoria_inter);
    printf("Gremio:%d\n", vitoria_gremio);
    printf("Empates:%d\n", empates);

    if (vitoria_inter > vitoria_gremio)
        printf("Inter venceu mais\n");
    else if (vitoria_inter < vitoria_gremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor");

    return 0;
}
