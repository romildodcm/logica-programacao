#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "lua", string2[] = "cheia";

    strcat(string1, string2);

    printf("string1: %s\tstring2: %s", string1, string2);

    return 0;
}
