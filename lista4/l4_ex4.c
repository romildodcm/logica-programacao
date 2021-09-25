#include <stdio.h>
#include <math.h>

int main()
{
    double n1, n2, n3, n4, ne, media;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;

    printf("Media: %.1lf\n", media);
    if (media >= 7.0)
        printf("Aluno aprovado.\n");
    else if (media >= 5.0 && media <= 6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &ne);
        printf("Nota do exame: %.1lf\n", ne);

        media = (media + ne) / 2;
        if (media >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.");

        printf("Media final: %.1lf\n", media);
    }
    else if (media < 5.0)
        printf("Aluno reprovado.\n");

    return 0;
}