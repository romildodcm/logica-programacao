#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char pega_resposta(char texto[20])
{
    char resposta;

    printf("É %s?\n", texto);
    scanf(" %c", &resposta);

    return resposta;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite \"s\" para SIM e \"n\" para NÃO.\n");

    if (pega_resposta("mamífero") == 's')
    {
        printf(" é mamífero");
    }
    else if (pega_resposta("ave") == 's')
    {
        printf("É ave");
    }
    else if (pega_resposta("réptil") == 's')
    {
        printf("é réptil");
    }
    else
    {
        printf("Animal não cadastrado.");
    }

    return 0;
}