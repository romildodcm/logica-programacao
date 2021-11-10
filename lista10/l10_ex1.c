#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0, len;
    char texto[100];

    fgets(texto, sizeof(texto), stdin);

    // pega o tamanho da string e varre ela verificando, se for igual, incrementa um contador
    len = strlen(texto) - 1;
    for (i = 0; i < len; i++)
    {
        if (texto[i] == 'a')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
