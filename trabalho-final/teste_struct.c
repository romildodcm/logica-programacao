#include <stdio.h>
#include <string.h>
#include <math.h>

// #define TAM 100

struct Funcionario
{
    char nome[255];
    int nivelCargo;
};
// int grauEstudo;
// int quantidadeLinguas;
// float indiceProdutividade;
// float salario;

int busca(struct Funcionario f[], int len, char nome[255])
{
    int i = 0;
    for (i = 0; i < len; i++)
    {
        printf("Comparando se %s = %s: ", nome, f[i].nome);
        if (strcmp(f[i].nome, nome) == 0)
        {
            printf("Sim.\n");
            return i;
        }
        else
        {
            printf("Não.\n");
        }
    }
    return -1;
}

int alterar(struct Funcionario f[], int len)
{
    char nome[255];
    int i = 0;
    // comparar valores
    printf("\n Digite um nome para buscar: ");
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);
    printf("Buscando por: %s\n", nome);
    i = busca(f, len, nome);

    // alterar
    printf("O index desse nome eh %d. Digite o nome atualizado:", i);
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);

    printf("Alterando de %s para %s", f[i].nome, nome);
    strcpy(f[i].nome, nome);

    return i;
}

int main()
{
    const int n = 3;
    int i = 0;
    struct Funcionario funcionarios[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite o nome: ");
        fflush(stdin);
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        printf("Digite o nivel: ");
        scanf(" %d", &funcionarios[i].nivelCargo);
    }

    // print
    for (i = 0; i < n; i++)
    {
        printf("Nome: %s", funcionarios[i].nome);
        printf("Nivel: %d\n", funcionarios[i].nivelCargo);
    }

    // alterando
    i = alterar(funcionarios, n);
    printf("Nome alterado para %s\n\n", funcionarios[i].nome);

    // print
    printf("Todos os dados: \n");
    for (i = 0; i < n; i++)
    {
        printf("Nome: %s", funcionarios[i].nome);
        printf("Nivel: %d\n", funcionarios[i].nivelCargo);
    }
    return 0;
}