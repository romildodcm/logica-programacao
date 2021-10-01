#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite \"s\" para SIM e \"n\" para NÃO.\n");

    char resposta;

    //1.0
    printf("É mamífero?\n");
    scanf(" %c", &resposta);
    if (resposta == 's')
    {
        //1.1
        printf("É quadrúpede?\n");
        scanf(" %c", &resposta);
        if (resposta == 's')
        {
            printf("É carnívoro?\n");
            scanf(" %c", &resposta);
            if (resposta == 's')
            {
                printf("O animal é: leão.");
            }
            else
            {
                printf("É herbívoro?\n");
                scanf(" %c", &resposta);
                if (resposta == 's')
                {
                    printf("O animal é: cavalo.");
                }
                else
                {
                    printf("Animal não cadastrado.");
                }
            }
        }
        else
        {
            //1.2
            printf("É bípede?\n");
            scanf(" %c", &resposta);
            if (resposta == 's')
            {
                // onivoro
                printf("É onívoro?\n");
                scanf(" %c", &resposta);
                if (resposta == 's')
                {
                    printf("O animal é: homem.");
                }
                else
                {
                    printf("É frutífero?\n");
                    scanf(" %c", &resposta);
                    if (resposta == 's')
                    {
                        printf("O animal é: macaco.");
                    }
                    else
                    {
                        printf("Animal não cadastrado.");
                    }
                }
            }
            else
            {
                //1.3
                printf("É voador?\n");
                scanf(" %c", &resposta);
                if (resposta == 's')
                {
                    printf("O animal é: morcego.");
                }
                else
                {
                    //1.4
                    printf("É aquático?\n");
                    scanf(" %c", &resposta);
                    if (resposta == 's')
                    {
                        printf("O animal é: baleia.");
                    }
                    else
                    {
                        printf("Animal não cadastrado.");
                    }
                }
            }
        }
    }
    else
    {
        //2.0
        printf("É ave?\n");
        scanf(" %c", &resposta);
        if (resposta == 's')
        {
            //2.1
            printf("É não-voadora?\n");
            scanf(" %c", &resposta);
            if (resposta == 's')
            {
                printf("É tropical?\n");
                scanf(" %c", &resposta);
                if (resposta == 's')
                {
                    printf("O animal é: avestruz.");
                }
                else
                {
                    printf("É polar?\n");
                    scanf(" %c", &resposta);
                    if (resposta == 's')
                    {
                        printf("O animal é: pinguim.");
                    }
                    else
                    {
                        printf("Animal não cadastrado.");
                    }
                }
            }
            else
            {
                //2.2
                printf("É nadadora?\n");
                scanf(" %c", &resposta);
                if (resposta == 's')
                {
                    printf("O animal é: pato.");
                }
                else
                {
                    //2.3
                    printf("É de rapina?\n");
                    scanf(" %c", &resposta);
                    if (resposta == 's')
                    {
                        printf("O animal é: águia.");
                    }
                    else
                    {
                        printf("Animal não cadastrado.");
                    }
                }
            }
        }
        else
        {
            //3.0
            printf("É réptil?\n");
            scanf(" %c", &resposta);
            if (resposta == 's')
            {
                //3.1
                printf("É com casco?\n");
                scanf(" %c", &resposta);
                if (resposta == 's')
                {
                    printf("O animal é: tartaruga.");
                }
                else
                {
                    //3.2
                    printf("É carnívoro?\n");
                    scanf(" %c", &resposta);
                    if (resposta == 's')
                    {
                        printf("O animal é: crocodilo.");
                    }
                    else
                    {
                        //3.3
                        printf("É sem patas?\n");
                        scanf(" %c", &resposta);
                        if (resposta == 's')
                        {
                            printf("O animal é: cobra.");
                        }
                        else
                        {
                            printf("Animal não cadastrado.");
                        }
                    }
                }
            }
            else
            {
                printf("Animal não cadastrado.");
            }
        }
    }

    return 0;
}