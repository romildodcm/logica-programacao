#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100];

    fgets(texto, sizeof(texto), stdin);

    printf("%s", strupr(texto));

    return 0;
}
