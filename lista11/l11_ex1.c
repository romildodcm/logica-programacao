#include <stdio.h>
#include <string.h>

#define TAM 100

struct TPessoa
{
    int codigo;
    char nome[50];
    char sexo;
    int idade;
    float altura;
    float peso;
};

int main()
{
    // variáveis
    int n = 0, opcao = 7, opcaoAlterar = 7, i = 0, codigo, pessoasCadastradas = 0;
    struct TPessoa pessoas[TAM];

    // solicitar numero de pessoas
    printf("--------------------- MENU INICIAL ---------------------\n");
    // validar número maior que zero e menor que a constante TAM
    while (n <= 0 || n > TAM - 1)
    {
        printf("Quantas pessoas deseja cadastrar?\n");
        scanf(" %d", &n);

        if (n == 0 || n < 0 || n > TAM - 1)
        {
            printf("Valor invalido!\n");
            printf("Escolha um numero maior que 0 e menor que %d.\n\n", TAM);
        }
    }

    // menu while
    while (opcao != 0)
    {
        // menu
        printf("-------------------- MENU PRINCIPAL --------------------\n");
        printf("\t 1 - Cadastrar %d pessoas;\n", n);
        printf("\t 2 - Alterar os dados de uma pessoa;\n");
        printf("\t 3 - Excluir uma pessoa;\n");
        printf("\t 4 - Mostrar os dados de uma pessoa;\n");
        printf("\t 5 - Mostrar os dados de todos os cadastros;\n");
        printf("\t 0 - Sair;\n\n");
        printf("Digite o numero da opcao que deseja e tecle enter: ");
        fflush(stdin);
        scanf(" %d", &opcao);

        if (opcao != 1 && pessoasCadastradas != n)
        {
            printf("Opcao bloqueada, primeiro cadastre as pessoas.\n");
            opcao = 1;
        }

        switch (opcao)
        {
        case 1:
            printf("------------------ Cadastrar pessoas -------------------\n");
            if (pessoasCadastradas == n)
            {
                printf("Pessoas cadastradas!\n");
            }
            else
            {

                // loop para cadastrar as n pessoas
                for (i = 0; i < n; i++)
                {
                    printf("Pessoa %d.\n", i + 1);
                    printf("Codigo: ");
                    scanf(" %d", &pessoas[i].codigo);
                    printf("Nome: ");
                    fflush(stdin);
                    fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
                    printf("Sexo: ");
                    scanf(" %c", &pessoas[i].sexo);
                    printf("Idade: ");
                    scanf(" %d", &pessoas[i].idade);
                    printf("Altura: ");
                    scanf(" %f", &pessoas[i].altura);
                    printf("Peso: ");
                    scanf(" %f", &pessoas[i].peso);
                    printf("\n");
                }

                pessoasCadastradas = n;
                printf("%d pessoas cadastradas com sucesso!\n", n);
            }
            break;
        case 2:
            printf("------------ Alterar os dados de uma pessoa ------------\n");
            // ler um primeiro código da pessoa
            printf("Digite o codigo da pessoa: ");
            scanf(" %d", &codigo);

            // loop para achar o index correspondente ao codigo inserido
            // procura pelo código no vetor pessoas
            for (i = 0; i < n; i++)
            {
                if (pessoas[i].codigo == codigo)
                {
                    // se achar o codigo, encerra o for
                    break;
                }
                else if (i == n - 1)
                {
                    // se não achar e for o último i,
                    // diz que foi invalido antes de voltar ao menu
                    printf("Codigo invalido.\n");
                    opcaoAlterar = 0;
                }
            }

            // menu
            while (opcaoAlterar != 0)
            {
                printf("------------------------- MENU -------------------------\n");
                printf("\t 1 - Codigo;\n");
                printf("\t 2 - Nome;\n");
                printf("\t 3 - Sexo;\n");
                printf("\t 4 - Idade;\n");
                printf("\t 5 - Altura;\n");
                printf("\t 6 - Peso;\n");
                printf("\t 0 - Sair;\n\n");
                printf("Digite o numero da alteracao que deseja e tecle enter: ");
                scanf(" %d", &opcaoAlterar);
                // printf("\n");

                switch (opcaoAlterar)
                {
                case 1:
                    printf("-------------------- Alterar Codigo --------------------\n");
                    printf("Codigo atual: %d\n", pessoas[i].codigo);
                    printf("Digite o novo codigo: ");
                    scanf(" %d", &pessoas[i].codigo);
                    printf("Codigo alterado com sucesso para %d\n", pessoas[i].codigo);
                    break;
                case 2:
                    printf("--------------------- Alterar Nome ---------------------\n");
                    printf("Nome atual: %s", pessoas[i].nome);
                    printf("Digite o novo nome: ");
                    fflush(stdin);
                    fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
                    printf("Nome alterado com sucesso para %s", pessoas[i].nome);
                    break;
                case 3:
                    printf("--------------------- Alterar Sexo ---------------------\n");
                    printf("Sexo atual: %c\n", pessoas[i].sexo);
                    printf("Digite o novo sexo: ");
                    scanf(" %c", &pessoas[i].sexo);
                    printf("Sexo alterado com sucesso para %c\n", pessoas[i].sexo);
                    break;
                case 4:
                    printf("-------------------- Alterar Idade ---------------------\n");
                    printf("Idade atual: %d\n", pessoas[i].idade);
                    printf("Digite a nova idade: ");
                    scanf(" %d", &pessoas[i].idade);
                    printf("Idade alterada com sucesso para %d\n", pessoas[i].idade);
                    break;
                case 5:
                    printf("-------------------- Alterar Altura --------------------\n");
                    printf("Altura atual: %.2f\n", pessoas[i].altura);
                    printf("Digite a nova altura: ");
                    scanf(" %f", &pessoas[i].altura);
                    printf("Altura alterada com sucesso para %.2f\n", pessoas[i].altura);
                    break;
                case 6:
                    printf("-------------------- Alterar Peso --------------------\n");
                    printf("Peso atual: %.2f\n", pessoas[i].peso);
                    printf("Digite o novo peso: ");
                    scanf(" %f", &pessoas[i].peso);
                    printf("Peso alterado com sucesso para %.2f\n", pessoas[i].peso);
                    break;

                case 0:
                    break;

                default:
                    printf("******************** Opcao invalida ********************\n");
                    break;
                }
            }

            break;
        case 3:
            printf("------------------ Excluir uma pessoa ------------------\n");
            printf("Digite o codigo da pessoa: ");
            scanf(" %d", &codigo);

            // procura pelo código no vetor pessoas
            for (i = 0; i < n; i++)
            {
                if (pessoas[i].codigo == codigo)
                {
                    // se achar o codigo, zera as variáveis
                    pessoas[i].codigo = 0;
                    strcpy(pessoas[i].nome, " ");
                    pessoas[i].sexo = " ";
                    pessoas[i].idade = 0;
                    pessoas[i].altura = 0.0;
                    pessoas[i].peso = 0.0;
                    printf("Pessoa excluida com sucesso.\n");
                    break;
                }
                else if (i == n - 1)
                {
                    // se não achar e for o último i,
                    // diz que foi invalido antes de voltar ao menu
                    printf("Codigo invalido.\n");
                }
            }
            break;
        case 4:
            printf("------------ Mostrar os dados de uma pessoa ------------\n");
            printf("Digite o codigo da pessoa: ");
            scanf(" %d", &codigo);

            // procura pelo código no vetor pessoas
            for (i = 0; i < n; i++)
            {
                if (pessoas[i].codigo == codigo)
                {
                    // se achar o codigo, mostra e encerra o for
                    printf("Codigo: %d\n", pessoas[i].codigo);
                    printf("Nome: %s", pessoas[i].nome);
                    printf("Sexo: %c\n", pessoas[i].sexo);
                    printf("Idade: %d\n", pessoas[i].idade);
                    printf("Altura: %.2f\n", pessoas[i].altura);
                    printf("Peso: %.2f\n", pessoas[i].peso);

                    break;
                }
                else if (i == n - 1)
                {
                    // se não achar e for o último i,
                    // diz que foi invalido antes de voltar ao menu
                    printf("Codigo invalido.\n");
                }
            }

            break;
        case 5:
            printf("-------- Mostrar os dados de todos os cadastros --------\n");

            for (i = 0; i < n; i++)
            {
                if (pessoas[i].codigo != 0)
                {
                    printf("\nCodigo: %d\n", pessoas[i].codigo);
                    printf("Nome: %s", pessoas[i].nome);
                    printf("Sexo: %c\n", pessoas[i].sexo);
                    printf("Idade: %d\n", pessoas[i].idade);
                    printf("Altura: %.2f\n", pessoas[i].altura);
                    printf("Peso: %.2f\n", pessoas[i].peso);
                }
            }

            break;
        case 0:
            printf("---------------------- Saindo... -----------------------\n");
            break;

        default:
            printf("******************** Opcao invalida ********************\n");
            break;
        }
    }
}
