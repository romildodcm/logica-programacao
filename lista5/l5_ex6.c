#include <stdio.h>

int main()
{
    int hora_inicial, minuto_inicial, hora_final, minuto_final, tempo_hora, tempo_minuto, tempo_inicial, tempo_final, intervalo_segundos;

    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    // joga tudo para segundos
    tempo_inicial = (hora_inicial * 3600) + (minuto_inicial * 60);
    tempo_final = (hora_final * 3600) + (minuto_final * 60);

    //caso igual
    if (tempo_inicial == tempo_final)
    {
        tempo_hora = 24;
        tempo_minuto = 0;
    }
    else
    {
        // caso tempo inicial maior que tempo final (virou o dia)
        if (tempo_final < tempo_inicial)
        {
            tempo_final = tempo_final + (24 * 3600);
        }

        // delta
        intervalo_segundos = tempo_final - tempo_inicial;

        // converte segundos para horas e minutos
        tempo_hora = intervalo_segundos / 3600;
        tempo_minuto = (intervalo_segundos - (tempo_hora * 3600)) / 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_hora, tempo_minuto);

    return 0;
}