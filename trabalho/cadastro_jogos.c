#include <stdio.h>

#include <string.h>

#define MAX_JOGOS 100

struct Jogo

{

    char nome[50];

    char genero[30];

    char plataforma[30];

    float nota;
};

int main()

{

    struct Jogo jogos[MAX_JOGOS];

    int total = 0;

    int opcao;

    char entrada[50];

    do

    {

        // MENU com validacao

        int entrada_valida = 0;

        do

        {

            printf("\n==== MENU PRINCIPAL ====\n");

            printf("1. Cadastrar jogo\n");

            printf("2. Listar jogos\n");

            printf("3. Sair\n");

            printf("Escolha uma opcao: ");

            fgets(entrada, sizeof(entrada), stdin);

            if (sscanf(entrada, "%d", &opcao) == 1)

            {

                if (opcao >= 1 && opcao <= 3)

                {

                    entrada_valida = 1;
                }

                else

                {

                    printf("Escolha numeros de 1 a 3!\n");
                }
            }

            else

            {

                printf("Escolha uma opcao valida! Use apenas numeros.\n");
            }

        } while (!entrada_valida);

        if (opcao == 1)

        {

            if (total >= MAX_JOGOS)

            {

                printf("Limite de jogos atingido!\n");

                continue;
            }

            printf("\n== Cadastro do jogo %d ==\n", total + 1);

            printf("Nome do jogo: ");

            fgets(jogos[total].nome, sizeof(jogos[total].nome), stdin);

            strtok(jogos[total].nome, "\n");

            printf("Genero: ");

            fgets(jogos[total].genero, sizeof(jogos[total].genero), stdin);

            strtok(jogos[total].genero, "\n");

            printf("Plataforma: ");

            fgets(jogos[total].plataforma, sizeof(jogos[total].plataforma), stdin);

            strtok(jogos[total].plataforma, "\n");

            // Validacao da nota

            int conversao_valida = 0;

            do

            {

                printf("Nota (0 a 10): ");

                fgets(entrada, sizeof(entrada), stdin);

                if (sscanf(entrada, "%f", &jogos[total].nota) == 1)

                {

                    if (jogos[total].nota >= 0 && jogos[total].nota <= 10)

                    {

                        conversao_valida = 1;
                    }

                    else

                    {

                        printf("Digite uma nota de 0 a 10!\n");
                    }
                }

                else

                {

                    printf("Entrada invalida! Digite apenas numeros.\n");
                }

            } while (!conversao_valida);

            printf("Jogo cadastrado com sucesso!\n");

            total++;
        }

        else if (opcao == 2)

        {

            printf("\n== Lista de Jogos ==\n");

            if (total == 0)

            {

                printf("Nenhum jogo cadastrado.\n");
            }

            else

            {

                for (int i = 0; i < total; i++)

                {

                    printf("\nJogo %d:\n", i + 1);

                    printf("Nome: %s\n", jogos[i].nome);

                    printf("Genero: %s\n", jogos[i].genero);

                    printf("Plataforma: %s\n", jogos[i].plataforma);

                    printf("Nota: %.1f\n", jogos[i].nota);
                }
            }
        }

        else if (opcao == 3)

        {

            printf("Ate logo!\n");
        }

    } while (opcao != 3);

    return 0;
}
