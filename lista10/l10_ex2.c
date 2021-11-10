#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0, len;
    char texto[100], caractere[2];

    fgets(texto, sizeof(texto), stdin);
    fgets(caractere, sizeof(caractere), stdin);

    len = strlen(texto) - 1;
    // pega o tamanho da string e varre ela verificando, se for igual, incrementa um contador
    for (i = 0; i < len; i++)
    {
        if (texto[i] == caractere[0])
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
