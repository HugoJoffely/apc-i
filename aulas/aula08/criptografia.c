#include <stdio.h>
int main()
{
    char frase[30] = {'E', 'u', ' ', 'p', 'r', 'a', 'o', 'g', 'r', 'a', 'm', 'o', ' ', 'e', 'm', ' ', 'C', '\0'}; // o '\0' serve para indicar o final da string. sem ele o 'programa' se perde

    // char frase [15] = "Eu programo em C";

    for (int i = 0; i < 30; i++)
    {
        printf("%c", frase[i]); // imprime caracter por caracter
    }

    printf("\n");
    printf("%s\n", frase); // imprime a frase inteira de uma vez

    printf("Entre com uma frase: ");
    scanf("%[^\n]", frase);
    while (getchar() != '\n')
        ;

    char cesar[6][5];
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cesar[i][j] = frase[k];
            k++;
        }
    }

    printf("Sua frase codificada: ");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("%c", cesar[i][j]);
        }
    }
    printf("\n");
    return 0;
}