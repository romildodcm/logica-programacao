#include <stdio.h>
#include <math.h>

int main()
{
    double valor = 0.0001;
    int notas100, notas50, notas20, notas10, notas5, notas2, moedas1real, moedas50, moedas25, moedas10, moedas5, moedas1, resto, valor_int;

    // printf("%lf eh valor lixo\n", valor);//debug
    scanf("%lf", &valor);
    // printf("%lf eh valor lido\n", valor);//debug

    // convert valor de ponto flutuante para inteiro
    // ignora decimais e não arredonda
    valor_int = (int)valor / 1;
    // Notas
    notas100 = valor_int / 100;
    resto = valor_int % 100;
    notas50 = resto / 50;
    resto = resto % 50;
    notas20 = resto / 20;
    resto = resto % 20;
    notas10 = resto / 10;
    resto = resto % 10;
    notas5 = resto / 5;
    resto = resto % 5;
    notas2 = resto / 2;
    resto = resto % 2;

    // Moedas
    moedas1real = resto / 1;

    // Obtendo como inteiro o valor decimal do double (75.50 -> 50)
    // printf("%d eh valor_int\n", valor_int); //debug
    // resto = valor_int * 1000;
    // printf("%d eh resto = valor_int * 1000\n", resto); //debug
    // printf("%lf eh o valor\n", valor); //debug

    // double valor1000 = valor * 1000;
    // printf("%lf eh o valor * 1000\n", valor1000); //debug

    // valor_int = (int)(valor * 1000);
    // printf("%d eh valor_int = (int)(valor * 1000)\n", valor_int); //debug
    // resto = (valor_int % resto)/10;


    resto = ((int)(valor * 1000) % (valor_int * 1000))/10;
    // printf("%d eh centavo\n", resto);//debug

    // Obtendo moedas < 1
    moedas50 = resto / 50;
    resto = resto % 50;
    moedas25 = resto / 25;
    resto = resto % 25;
    moedas10 = resto / 10;
    resto = resto % 10;
    moedas5 = resto / 5;
    resto = resto % 5;
    moedas1 = resto / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1real);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas1);

    return 0;
}
