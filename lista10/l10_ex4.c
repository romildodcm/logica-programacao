#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
    char texto[100];

    fgets(texto, sizeof(texto), stdin);

    len = strlen(texto) - 2;
    for (i = len; i >= 0; i--)
    {
        printf("%c", texto[i]);
    }

    return 0;
}
