#include <stdio.h>
#include <string.h>

int main()
{
    int i, len[3];
    char string1[100], string2[100], string3[200];

    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    len[0] = strlen(string1) - 1;
    len[1] = strlen(string2) - 1;

    string1[len[0]] = " ";
    string2[len[1]] = " ";

    strcpy(string3, string1);
    strcat(string3, " ");
    strcat(string3, string2);

    len[2] = strlen(string3);

    printf("String1: %s\t\tString2: %s\t\tString3: %s\n", string1, string2, string3);
    printf("Tamanhos: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", len[i]);
    }

    return 0;
}
