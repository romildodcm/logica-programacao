#include <stdio.h>

int main()
{
    int n, horas, minutos, resto_segundos;

    scanf("%d", &n);

    horas = n / 3600;
    resto_segundos = n % 3600;
    minutos = resto_segundos / 60;
    resto_segundos = resto_segundos % 60;

    printf("%d:%d:%d\n", horas, minutos, resto_segundos);

    return 0;
}
