#include<stdio.h>

int main()
{
    int funcionario_num, funcionario_horas;
    float valor_hora, salario;

    scanf("%d %d %f", &funcionario_num ,&funcionario_horas ,&valor_hora);
    salario = funcionario_horas * valor_hora;

    printf("NUMBER = %d", funcionario_num);
    printf("\nSALARY = U$ %.2f", salario);

    return 0;
}
